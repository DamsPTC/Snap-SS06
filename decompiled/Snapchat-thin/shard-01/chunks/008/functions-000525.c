/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1014c46c8; end: 1014c46e3;  */

void FUN_1014c46c8(void)

{
  long unaff_x20;
  
  FUN_1014c4b60(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 1014c46e4; end: 1014c46ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014c46e4(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_70 [16];
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lStack_60 = lVar2;
    uStack_58 = uVar1;
    uStack_50 = uVar3;
    func_0x000100087bd4(FUN_1014c4f38,auStack_70,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 1014c46f0; end: 1014c4757;  */

void FUN_1014c46f0(void)

{
  long unaff_x20;
  
  FUN_1014c4a50(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 1014c4758; end: 1014c4817;  */

long FUN_1014c4758(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c5ee20();
  func_0x000107c4636c();
  func_0x000107c61170(param_1);
  lVar1 = 0;
  if (unaff_x20 == 0) {
    func_0x000107c61174();
    func_0x000107c5ed30(0);
    func_0x000107c61170(lVar1);
    func_0x000107c61654();
  }
  else {
    func_0x000107c61174();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
    return unaff_x20;
  }
  func_0x000107c60e78();
  FUN_1014c46c8();
  return lVar1;
}



/* Entry: 1014c4818; end: 1014c482b;  */

void FUN_1014c4818(void)

{
  FUN_1014c46c8();
  return;
}



/* Entry: 1014c482c; end: 1014c483f;  */

void FUN_1014c482c(long param_1,long param_2)

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



/* Entry: 1014c4840; end: 1014c4897;  */

undefined8 FUN_1014c4840(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c610f8();
  uVar1 = param_1;
  func_0x0001000d16a4(param_1,param_2);
  func_0x000107c615e8(param_1);
  func_0x000107c61574(param_2);
  return uVar1;
}



/* Entry: 1014c4898; end: 1014c49b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014c4898(ulong param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  uVar1 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112da95f8);
    puVar2 = &UNK_1103ce038;
    func_0x000107c613fc(&UNK_1103ce038,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    puVar3 = &UNK_1103ce060;
    func_0x000107c613fc(&UNK_1103ce060,0x38,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(ulong *)(puVar3 + 0x18) = param_1;
    *(ulong *)(puVar3 + 0x20) = param_2;
    *(undefined8 *)(puVar3 + 0x28) = param_3;
    *(undefined8 *)(puVar3 + 0x30) = param_4;
    pcStack_60 = FUN_1014c4f54;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1000f6b44;
    puStack_68 = &UNK_1103ce078;
    puStack_58 = puVar3;
    func_0x000107c60bc4(&puStack_80);
    puVar2 = puStack_58;
    func_0x000107c61434(param_2);
    func_0x000107c61434(param_4);
    func_0x000107c61574(puVar2);
    func_0x000107c4e524(uVar5);
    func_0x000107c60bd0(ppuVar4);
  }
  return;
}



/* Entry: 1014c49b8; end: 1014c4a4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014c49b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_70 [16];
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lStack_60 = param_1;
    uStack_58 = param_2;
    uStack_50 = param_3;
    func_0x000100087bd4(FUN_1014c4f38,auStack_70,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1014c4a50; end: 1014c4b5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014c4a50(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [32];
  
  lVar1 = _DAT_112da9610;
  func_0x000107c61428(param_1 + _DAT_112da9610,auStack_78,0x21,0);
  func_0x000100216878(auStack_60,param_2,param_3);
  func_0x000107c614a8(auStack_78);
  func_0x00010006e7f4(auStack_60);
  puVar3 = PTR_PTR_1126d05a8;
  func_0x000107c61168();
  func_0x000107c5a9f0();
  func_0x000107c61180();
  if (puVar3 != (undefined *)0x0) {
    uVar5 = *(undefined8 *)(param_1 + lVar1);
    uVar4 = uVar5;
    func_0x000107c61434(uVar5);
    func_0x00010018cc3c();
    func_0x000107c6142c(uVar5);
    uVar5 = uVar4;
    func_0x000107c5f9dc(uVar4,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
    func_0x000107c6142c(uVar4);
    func_0x000107c5a360(puVar3);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(uVar5);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1014c4b60);
  (*pcVar2)();
}



/* Entry: 1014c4b60; end: 1014c4d7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014c4b60(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_a0 [24];
  undefined8 auStack_88 [3];
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  lVar1 = _DAT_112da9620;
  func_0x000107c61428(param_1 + _DAT_112da9620,auStack_68,0,0);
  uVar6 = *(ulong *)(param_1 + lVar1);
  if (0xff < *(ulong *)(uVar6 + 0x10)) {
    func_0x000107c61428(param_1 + lVar1,auStack_88,0x21,0);
    uVar3 = uVar6;
    func_0x000107c61558();
    if ((uVar3 & 1) == 0) {
      FUN_1014c4f24();
      lVar5 = *(long *)(uVar6 + 0x10);
    }
    else {
      lVar5 = *(long *)(uVar6 + 0x10);
    }
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1014c4d78);
      (*pcVar2)();
    }
    uVar8 = *(undefined8 *)(uVar6 + (lVar5 + -1) * 0x10 + 0x28);
    *(long *)(uVar6 + 0x10) = lVar5 + -1;
    *(ulong *)(param_1 + lVar1) = uVar6;
    func_0x000107c614a8(auStack_88);
    func_0x000107c6142c(uVar8);
  }
  func_0x000107c61428(param_1 + lVar1,auStack_88,0x21,0);
  func_0x000107c61434(param_3);
  func_0x0001008d05cc(0,0,param_2,param_3);
  func_0x000107c614a8(auStack_88);
  func_0x000107c6142c(param_3);
  uVar7 = *(undefined8 *)(param_1 + lVar1);
  uVar8 = 0x112d38270;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  lVar1 = _DAT_112da9610;
  auStack_88[0] = uVar7;
  uStack_70 = uVar8;
  func_0x000107c61428(param_1 + _DAT_112da9610,auStack_a0,0x21,0);
  func_0x000107c61434(uVar7);
  func_0x000100102934(auStack_88,0xd00000000000001d,0x800000010ef86330);
  func_0x000107c614a8(auStack_a0);
  puVar4 = PTR_PTR_1126d05a8;
  func_0x000107c61168();
  func_0x000107c5a9f0();
  func_0x000107c61180();
  if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1014c4d7c);
    (*pcVar2)();
  }
  uVar7 = *(undefined8 *)(param_1 + lVar1);
  uVar8 = uVar7;
  func_0x000107c61434(uVar7);
  func_0x00010018cc3c();
  func_0x000107c6142c(uVar7);
  uVar7 = uVar8;
  func_0x000107c5f9dc(uVar8,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c6142c(uVar8);
  func_0x000107c5a360(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar7);
  return;
}



/* Entry: 1014c4d7c; end: 1014c4dd7; -[_TtC33SCAppInsightsMetadataServicesImpl25SCKsCrashMetadataInjector init] */

void FUN_1014c4d7c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAppInsightsMetadataServicesImpl.SCKsCrashMetadataInjector",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014c4da8);
  (*pcVar1)();
}



/* Entry: 1014c4dd8; end: 1014c4e4f; -[_TtC33SCAppInsightsMetadataServicesImpl25SCKsCrashMetadataInjector .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001014c4e24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014c4e28) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014c4dd8(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112da95f8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112da9600));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112da9608));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112da9610));
  return;
}



/* Entry: 1014c4e50; end: 1014c4f23;  */

undefined1  [16] FUN_1014c4e50(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long *unaff_x20;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  lVar3 = *unaff_x20;
  func_0x000107c61434(lVar3);
  func_0x000100029284();
  func_0x000107c6142c(lVar3);
  if ((param_2 & 1) == 0) {
    uVar4 = 0;
    uVar5 = 0;
  }
  else {
    iVar2 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar3 = *unaff_x20;
    if (iVar2 == 0) {
      func_0x000100184498();
    }
    func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar3 + 0x30) + param_1 * 0x10 + 8));
    puVar1 = (undefined8 *)(*(long *)(lVar3 + 0x38) + param_1 * 0x10);
    uVar4 = *puVar1;
    uVar5 = puVar1[1];
    FUN_10105bd08(param_1,lVar3);
    *unaff_x20 = lVar3;
  }
  auVar6._8_8_ = uVar5;
  auVar6._0_8_ = uVar4;
  return auVar6;
}



/* Entry: 1014c4f24; end: 1014c4f37;  */

/* WARNING: Removing unreachable block (ram,0x0001000d1848) */
/* WARNING: Removing unreachable block (ram,0x0001000d1858) */
/* WARNING: Removing unreachable block (ram,0x0001000d1930) */
/* WARNING: Removing unreachable block (ram,0x0001000d1864) */
/* WARNING: Removing unreachable block (ram,0x0001000d186c) */
/* WARNING: Removing unreachable block (ram,0x0001000d18e4) */
/* WARNING: Removing unreachable block (ram,0x0001000d18ec) */
/* WARNING: Removing unreachable block (ram,0x0001000d18f0) */
/* WARNING: Removing unreachable block (ram,0x0001000d18f4) */
/* WARNING: Removing unreachable block (ram,0x0001000d18fc) */

undefined * FUN_1014c4f24(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x10) <= lVar5) {
    lVar1 = lVar5;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar1 != 0) {
    puVar3 = (undefined *)0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar2 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar2 = puVar4 + -0x20;
    }
    *(long *)(puVar3 + 0x10) = lVar5;
    *(long *)(puVar3 + 0x18) = ((long)puVar2 >> 4) << 1;
  }
  func_0x000107c6140c(puVar3 + 0x20,param_1 + 0x20,lVar5,PTR___sSSN_11034da80);
  func_0x000107c6142c(param_1);
  return puVar3;
}



/* Entry: 1014c4f38; end: 1014c4f53;  */

void FUN_1014c4f38(void)

{
  long unaff_x20;
  
  FUN_1014c4a50(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 1014c4f54; end: 1014c4f63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014c4f54(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined1 auStack_90 [16];
  long lStack_80;
  ulong uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(ulong *)(unaff_x20 + 0x18);
  uVar2 = *(ulong *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c61428(lVar5 + 0x10,auStack_58,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61618();
  if (lVar5 != 0) {
    uVar1 = uVar3 & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      lStack_80 = lVar5;
      uStack_78 = uVar3;
      uStack_70 = uVar2;
      uStack_68 = uVar4;
      uStack_60 = uVar6;
      func_0x000100087bd4(&UNK_100102904,auStack_90,PTR___sytN_11034f1b0 + 8);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1014c4f64; end: 1014c5097;  */

void FUN_1014c4f64(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar3 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar1 = 0x65756c6176;
  if (cVar3 != '\x01') {
    uVar1 = 0x79656b;
  }
  uVar2 = 0xe500000000000000;
  if (cVar3 != '\x01') {
    uVar2 = 0xe300000000000000;
  }
  func_0x000107c5fb58(auStack_68,uVar1,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1014c5098; end: 1014c510f;  */

void FUN_1014c5098(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  lVar3 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(uVar2);
  uVar4 = 1;
  if (lVar3 != 1) {
    uVar4 = 2;
  }
  uVar1 = 0;
  if (lVar3 != 0) {
    uVar1 = uVar4;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 1014c5110; end: 1014c5143;  */

void FUN_1014c5110(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  
  uVar1 = 0x65756c6176;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x79656b;
  }
  uVar2 = 0xe500000000000000;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xe300000000000000;
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* Entry: 1014c5144; end: 1014c51bf;  */

void FUN_1014c5144(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  long lVar2;
  undefined1 uVar3;
  
  lVar2 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_3);
  uVar3 = 1;
  if (lVar2 != 1) {
    uVar3 = 2;
  }
  uVar1 = 0;
  if (lVar2 != 0) {
    uVar1 = uVar3;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 1014c51c0; end: 1014c51d7;  */

undefined1  [16] FUN_1014c51c0(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 1014c51d8; end: 1014c5227;  */

void FUN_1014c51d8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x0001002b2b28();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 1014c5228; end: 1014c522f;  */

undefined8 FUN_1014c5228(void)

{
  return 1;
}



/* Entry: 1014c5230; end: 1014c5283;  */

void FUN_1014c5230(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c5fb58(auStack_68,0xd000000000000015,0x800000010ef863c0);
  func_0x000107c606a8();
  return;
}



/* Entry: 1014c5284; end: 1014c529f;  */

void FUN_1014c5284(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)
            (param_1,0xd000000000000015,0x800000010ef863c0);
  return;
}



/* Entry: 1014c52a0; end: 1014c52ef;  */

void FUN_1014c52a0(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68);
  func_0x000107c5fb58(auStack_68,0xd000000000000015,0x800000010ef863c0);
  func_0x000107c606a8();
  return;
}



/* Entry: 1014c52f0; end: 1014c535b;  */

void FUN_1014c52f0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  lVar2 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(uVar1);
  *(bool *)param_1 = lVar2 != 0;
  return;
}



/* Entry: 1014c535c; end: 1014c537b;  */

void FUN_1014c535c(undefined8 *param_1)

{
  *param_1 = 0xd000000000000015;
  param_1[1] = 0x800000010ef863c0;
  return;
}



/* Entry: 1014c537c; end: 1014c53eb;  */

void FUN_1014c537c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_3);
  *(bool *)param_1 = lVar1 != 0;
  return;
}



/* Entry: 1014c53ec; end: 1014c5403;  */

undefined1  [16] FUN_1014c53ec(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 1014c5404; end: 1014c5667;  */

void FUN_1014c5404(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010029e96c();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 1014c5668; end: 1014c56d7;  */

void FUN_1014c5668(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *unaff_x20;
  
  uVar4 = 0xe900000000000065;
  uVar2 = 0x746174735f707061;
  if (*unaff_x20 != '\x01') {
    uVar4 = 0xe800000000000000;
    uVar2 = 0x617461646174656d;
  }
  uVar1 = 0xee006f666e695f64;
  uVar3 = 0x6c6975625f707061;
  if (*unaff_x20 != '\0') {
    uVar1 = uVar4;
    uVar3 = uVar2;
  }
  *param_1 = uVar3;
  param_1[1] = uVar1;
  return;
}



/* Entry: 1014c56d8; end: 1014c56fb;  */

void FUN_1014c56d8(undefined1 *param_1,undefined1 param_2)

{
  func_0x0001014c5764();
  *param_1 = param_2;
  return;
}



/* Entry: 1014c56fc; end: 1014c5713;  */

undefined1  [16] FUN_1014c56fc(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 1014c5714; end: 1014c57c7;  */

void FUN_1014c5714(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010029a428();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 1014c57c8; end: 1014c5833;  */

undefined8 * FUN_1014c57c8(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 1014c5834; end: 1014c5877;  */

undefined8 * FUN_1014c5834(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 1014c5878; end: 1014c58ff;  */

int FUN_1014c5878(int *param_1,int param_2)

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



/* Entry: 1014c5900; end: 1014c596b;  */

undefined1 * FUN_1014c5900(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1014c596c; end: 1014c59b7;  */

undefined1 * FUN_1014c596c(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x10));
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1014c59b8; end: 1014c5cfb;  */

int FUN_1014c59b8(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1014c5cfc; end: 1014c5d3b;  */

void FUN_1014c5cfc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112da9690 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d950d00;
  func_0x000107c61520(&UNK_10d950d00,&UNK_1103ce390);
  puRam0000000112da9690 = puVar1;
  return;
}



/* Entry: 1014c5d3c; end: 1014c5d3f;  */

void FUN_1014c5d3c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112da9698 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d950df0;
  func_0x000107c61520(&UNK_10d950df0,&UNK_1103ce300);
  puRam0000000112da9698 = puVar1;
  return;
}



/* Entry: 1014c5d40; end: 1014c5d7f;  */

void FUN_1014c5d40(void)

{
  undefined *puVar1;
  
  if (puRam0000000112da9698 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d950df0;
  func_0x000107c61520(&UNK_10d950df0,&UNK_1103ce300);
  puRam0000000112da9698 = puVar1;
  return;
}



/* Entry: 1014c5d80; end: 1014c5e5f;  */

uint FUN_1014c5d80(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 1014c5e60; end: 1014c5e9f;  */

void FUN_1014c5e60(void)

{
  undefined *puVar1;
  
  if (puRam0000000112da9798 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d950fb8;
  func_0x000107c61520(&UNK_10d950fb8,&UNK_1103ce4a0);
  puRam0000000112da9798 = puVar1;
  return;
}



/* Entry: 1014c5ea0; end: 1014c5ebf;  */

undefined1 FUN_1014c5ea0(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 1014c5ec0; end: 1014c5f13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1014c5ec0(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + _DAT_112da9830);
  func_0x000107c61428(pauVar1,auStack_38,0,0);
  auVar2 = *pauVar1;
  func_0x000107c61434(*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 1014c5f14; end: 1014c5f8b; -[_TtC24SCCrashServicesImplSwift15SCKsCrashLogger setLastCrashReportId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014c5f14(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_1 + _DAT_112da9830);
  func_0x000107c61428(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  func_0x000107c6142c(lVar2);
  return;
}



/* Entry: 1014c5f8c; end: 1014c600f; -[_TtC24SCCrashServicesImplSwift15SCKsCrashLogger hasReportedCrashInCurrentSession] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1014c5f8c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112da9838;
  func_0x000107c61428(param_1 + _DAT_112da9838,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 1014c6010; end: 1014c605f; -[_TtC24SCCrashServicesImplSwift15SCKsCrashLogger setHasReportedCrashInCurrentSession:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014c6010(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112da9838;
  func_0x000107c61428(param_1 + _DAT_112da9838,auStack_48,1,0);
  *(undefined1 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 1014c6060; end: 1014c6427;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1014c6060(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    undefined8 param_9,undefined8 param_10,undefined8 param_11,long param_12,
                    undefined8 param_13)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 unaff_x20;
  long lStack_78;
  long lStack_70;
  
  puVar2 = &UNK_1103ce5a8;
  func_0x000107c613fc(&UNK_1103ce5a8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  func_0x0001000285a8(0x112da9840,&UNK_10d951030);
  func_0x000107c613fc();
  func_0x000107c615f0(param_2);
  uVar3 = 0x1014c8008;
  func_0x0001000bdd8c(0x1014c8008,puVar2);
  func_0x0001000285a8(0x112da9848,&UNK_10d991ca0);
  uVar4 = param_5;
  func_0x0001000bda74();
  func_0x0001000285a8(0x112da9850,&UNK_10d951040);
  uVar5 = param_10;
  func_0x0001000bda74();
  func_0x0001000285a8(0x112da9858,&UNK_10d951048);
  uVar6 = param_11;
  func_0x0001000bda74();
  func_0x0001000285a8(0x112da9860,&UNK_10d951050);
  lVar7 = param_12;
  func_0x0001000bda74();
  lVar8 = lVar7;
  func_0x00010009fb80();
  lVar9 = lVar8;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar9 + _DAT_112da9868);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar9 + _DAT_112da9830);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(lVar9 + _DAT_112da9838) = 0;
  *(undefined8 *)(lVar9 + _DAT_112da9870) = 0;
  *(undefined8 *)(lVar9 + _DAT_112da9878) = param_1;
  *(undefined8 *)(lVar9 + _DAT_112da9880) = param_3;
  *(undefined8 *)(lVar9 + _DAT_112da9888) = param_4;
  *(undefined8 *)(lVar9 + _DAT_112da9890) = uVar4;
  *(undefined8 *)(lVar9 + _DAT_112da9898) = param_6;
  *(undefined8 *)(lVar9 + _DAT_112da98a0) = param_7;
  puVar1 = (undefined8 *)(lVar9 + _DAT_112da98a8);
  *puVar1 = param_8;
  puVar1[1] = param_9;
  *(undefined8 *)(lVar9 + _DAT_112da98b0) = uVar5;
  *(undefined8 *)(lVar9 + _DAT_112da98b8) = uVar3;
  *(undefined8 *)(lVar9 + _DAT_112da98c0) = uVar6;
  *(long *)(lVar9 + _DAT_112da98c8) = lVar7;
  puVar2 = PTR_PTR_1126a7460;
  func_0x000107c610f8();
  func_0x000107c615f0(param_1);
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c6157c(uVar4);
  func_0x000107c615f0(param_6);
  func_0x000107c615f0(param_7);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(lVar7);
  func_0x000107c453e4();
  *(undefined **)(lVar9 + _DAT_112da98d0) = puVar2;
  *(undefined8 *)(lVar9 + _DAT_112da98d8) = param_13;
  plVar10 = &lStack_78;
  lStack_78 = lVar9;
  lStack_70 = lVar8;
  func_0x000107c61154(plVar10,PTR_s_init_1125d9248);
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c61574(uVar4);
  func_0x000107c615e8(param_6);
  func_0x000107c615e8(param_7);
  func_0x000107c61574(param_9);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(lVar7);
  func_0x000107c615e8(param_2);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_12);
  uVar3 = unaff_x20;
  func_0x000107c614f0(unaff_x20);
  func_0x000107c61464(unaff_x20,uVar3,0xa8,7);
  return plVar10;
}



/* Entry: 1014c6428; end: 1014c653b;  */

void FUN_1014c6428(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_1103ce8a0;
  func_0x000107c613fc(&UNK_1103ce8a0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  func_0x0001000285a8(0x112da99a8,&UNK_10d951070);
  func_0x000107c613fc();
  func_0x000107c615f0(param_2);
  uVar2 = 0x1014c7f0c;
  func_0x0001000bdd8c(0x1014c7f0c,puVar1);
  func_0x0001000285a8(0x112da99b0,&UNK_10d951078);
  func_0x000107c613fc();
  pcVar3 = FUN_1014c6544;
  func_0x0001000bdd8c(FUN_1014c6544,0);
  uVar4 = 0;
  func_0x0001014dd7b8();
  uVar5 = uVar4;
  func_0x000107c613fc();
  func_0x0001014db4c8(uVar2,pcVar3,FUN_1014c6588,0,0x1014c6594,0,uVar5);
  param_1[3] = uVar4;
  param_1[4] = &PTR_DAT_1103cf720;
  *param_1 = uVar2;
  return;
}



/* Entry: 1014c653c; end: 1014c6543;  */

void FUN_1014c653c(undefined8 *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar1 = &UNK_1103ce8a0;
  func_0x000107c613fc(&UNK_1103ce8a0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar5;
  func_0x0001000285a8(0x112da99a8,&UNK_10d951070);
  func_0x000107c613fc();
  func_0x000107c615f0(uVar5);
  uVar5 = 0x1014c7f0c;
  func_0x0001000bdd8c(0x1014c7f0c,puVar1);
  func_0x0001000285a8(0x112da99b0,&UNK_10d951078);
  func_0x000107c613fc();
  pcVar2 = FUN_1014c6544;
  func_0x0001000bdd8c(FUN_1014c6544,0);
  uVar3 = 0;
  func_0x0001014dd7b8();
  uVar4 = uVar3;
  func_0x000107c613fc();
  func_0x0001014db4c8(uVar5,pcVar2,FUN_1014c6588,0,0x1014c6594,0,uVar4);
  param_1[3] = uVar3;
  param_1[4] = &PTR_DAT_1103cf720;
  *param_1 = uVar5;
  return;
}



/* Entry: 1014c6544; end: 1014c6587;  */

void FUN_1014c6544(undefined8 *param_1,undefined8 *param_2)

{
  func_0x0001000298f0();
  func_0x000107c61428();
  *param_1 = *param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1014c6588; end: 1014c6597;  */

/* WARNING: Removing unreachable block (ram,0x0001014c7fb4) */
/* WARNING: Removing unreachable block (ram,0x0001014c7fb0) */

void FUN_1014c6588(undefined8 param_1)

{
  ulong uStack_48;
  
  uStack_48 = 0;
  func_0x000107c61598(&uStack_48,8);
  if (((float)(uStack_48 & 0xffffff) / 16777216.0) * 1.0 + 0.0 == 1.0) {
    FUN_1014c7f18(0,0x3f800000,param_1);
  }
  return;
}



/* Entry: 1014c6598; end: 1014c695b; -[_TtC24SCCrashServicesImplSwift15SCKsCrashLogger initWithCrashManager:circumstanceEngine:appStartExperimentReader:timeProvider:metadataStorage:performer:backgroundPerformer:uuidProvider:blizzardSessionIDProvider:metricLogger:ksCrashMetricTracker:mainThread:] */

void FUN_1014c6598(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined *puVar1;
  
  func_0x000107c60bc4();
  puVar1 = &UNK_1103ce828;
  func_0x000107c613fc(&UNK_1103ce828,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_10;
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c615f0(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c615f0(param_8);
  func_0x000107c615f0(param_9);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  FUN_1014c6060(param_3,param_4,param_5,param_6,param_7,param_8,param_9,FUN_1014c7ee4,puVar1,
                param_11,param_12,param_13,param_14);
  return;
}



/* Entry: 1014c695c; end: 1014c6983; -[_TtC24SCCrashServicesImplSwift15SCKsCrashLogger startServices] */

void FUN_1014c695c(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x000100111e14();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1014c6984; end: 1014c69df; -[_TtC24SCCrashServicesImplSwift15SCKsCrashLogger init] */

void FUN_1014c6984(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCrashServicesImplSwift.SCKsCrashLogger",0x28,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014c69b0);
  (*pcVar1)();
}



/* Entry: 1014c69e0; end: 1014c6af3; -[_TtC24SCCrashServicesImplSwift15SCKsCrashLogger .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001014c6a50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014c6a70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014c6a90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014c6ab0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014c6a94) */
/* WARNING: Removing unreachable block (ram,0x0001014c6a74) */
/* WARNING: Removing unreachable block (ram,0x0001014c6a54) */
/* WARNING: Removing unreachable block (ram,0x0001014c6ab4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014c69e0(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112da9878));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112da9888));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112da9898));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112da98a0));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112da9880));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112da98a8 + 8));
  return;
}



/* Entry: 1014c6af4; end: 1014c6b97; -[_TtC24SCCrashServicesImplSwift15SCKsCrashLogger reportNonFatalWithErrorCode:metadata:] */

/* WARNING: Possible PIC construction at 0x0001014c6b6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014c6b7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014c6b70) */
/* WARNING: Removing unreachable block (ram,0x0001014c6b80) */

void FUN_1014c6af4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x0001044db3fc(0);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_1;
  func_0x0001044dac34();
  func_0x000107c5027c(param_1,param_2,param_3,param_4,0,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1014c6b98; end: 1014c6d5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014c6b98(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  long alStack_88 [3];
  undefined8 uStack_70;
  long lStack_68;
  
  iVar5 = (int)*(undefined8 *)(unaff_x20 + _DAT_112da9880);
  uVar1 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef86410);
  uVar4 = 0;
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar1);
  if (iVar5 != 0) {
    func_0x0001000d224c(alStack_88);
    if (alStack_88[0] != 0) {
      func_0x000107c5ce00(alStack_88[0]);
      func_0x000107c615e8(alStack_88[0]);
    }
    func_0x0001000d224c(alStack_88);
    func_0x0001000a8868(alStack_88,uStack_70);
    (**(code **)(lStack_68 + 8))(param_1,uStack_70,lStack_68);
    func_0x0001014c7eec(alStack_88);
    if ((param_1 & 1) != 0) {
      func_0x000107c61174(param_5);
      uVar1 = uStack_70;
      lVar3 = lStack_68;
      func_0x0001044da714();
      uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112da9878);
      uVar7 = 0;
      if (param_4 != 0) {
        func_0x000107c5fadc(param_3,param_4);
        uVar7 = param_3;
      }
      uVar2 = param_5;
      FUN_1014c6d5c(param_5,uVar1,lVar3,uVar4);
      FUN_1014c6e28(param_5,uVar1,lVar3,uVar4);
      func_0x000107c50280(uVar6);
      func_0x000107c61170(uVar7);
      func_0x000107c61170(uVar2);
    }
  }
  return;
}



/* Entry: 1014c6d5c; end: 1014c6e27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1014c6d5c(long param_1,long param_2,long param_3,byte param_4,long param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (0xbf < param_4) {
    puVar1 = (undefined8 *)0x0;
    if (((param_4 == 0xc0) && (param_1 == 1)) && (param_3 == 0 && param_2 == 0)) {
      func_0x0001000298f0();
      func_0x000107c61428();
      uVar2 = *puVar1;
      func_0x000107c61174(uVar2);
      func_0x0001048d85b4(0xd000000000000029,0x800000010ef86430);
      func_0x000107c61170(uVar2);
      puVar1 = *(undefined8 **)(param_5 + _DAT_112da98d0);
      func_0x000107c4235c(puVar1);
      func_0x000107c61180();
    }
    return puVar1;
  }
  return (undefined8 *)0x0;
}



/* Entry: 1014c6e28; end: 1014c6e6f;  */

/* WARNING: Possible PIC construction at 0x0001014c6e50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014c6e54) */

void FUN_1014c6e28(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  
  uVar1 = param_4 >> 6 & 3;
  if ((uVar1 != 2) && (uVar1 != 1)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1014c6e70; end: 1014c6f3f; -[_TtC24SCCrashServicesImplSwift15SCKsCrashLogger reportNonFatalWithErrorCode:metadata:message:threadCaptureOption:] */

void FUN_1014c6e70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  if (param_5 == 0) {
    param_5 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_5);
  }
  func_0x000107c61174(param_3);
  uVar1 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_1);
  FUN_1014c6b98(param_3,param_4,param_5,param_2,param_6);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1014c6f40; end: 1014c712b;  */

/* WARNING: Possible PIC construction at 0x0001014c70cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014c70d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014c6f40(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 *param_5)

{
  ulong *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  ulong uVar7;
  ulong unaff_x20;
  ulong uVar8;
  undefined8 uVar9;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar4 = &puStack_90;
  ppuVar6 = &puStack_90;
  uVar7 = param_2;
  func_0x000107c60bc4();
  uVar3 = unaff_x20;
  func_0x000107c447f4();
  if ((uVar3 & 1) != 0) {
    (**(code **)(unaff_x20 + _DAT_112da98a8))();
    puVar1 = (ulong *)(unaff_x20 + _DAT_112da9868);
    uVar8 = puVar1[1];
    *puVar1 = uVar3;
    puVar1[1] = uVar7;
    func_0x000107c61434(uVar7);
    func_0x000107c6142c(uVar8);
    uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112da9878);
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c5fadc(param_3,param_4);
    func_0x000107c5fadc(uVar3,uVar7);
    func_0x000107c6142c(uVar7);
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    if (param_5 == (undefined1 *)0x0) {
      pcStack_70 = FUN_1014c712c;
      puStack_68 = (undefined *)0x0;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      pcStack_80 = FUN_1012d20f0;
      puStack_78 = &UNK_1103ce638;
      func_0x000107c60bc4();
      param_5 = (undefined1 *)ppuVar4;
    }
    puVar5 = &UNK_1103ce670;
    func_0x000107c613fc(&UNK_1103ce670,0x18,7);
    *(undefined1 **)(puVar5 + 0x10) = param_5;
    pcStack_70 = FUN_1014c7188;
    puStack_90 = puVar2;
    uStack_88 = 0x42000000;
    pcStack_80 = (code *)0x1014c8004;
    puStack_78 = &UNK_1103ce688;
    puStack_68 = puVar5;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c61574(puStack_68);
    func_0x000107c50268(uVar9);
    param_5 = (undefined1 *)ppuVar6;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_release_11034bcf0)(param_5);
  return;
}



/* Entry: 1014c712c; end: 1014c712f;  */

void FUN_1014c712c(void)

{
  return;
}



/* Entry: 1014c7130; end: 1014c7187;  */

void FUN_1014c7130(uint param_1,long param_2,long param_3)

{
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5ed2c(param_2);
  }
  (**(code **)(param_3 + 0x10))(param_3,param_1 & 1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1014c7188; end: 1014c718f;  */

void FUN_1014c7188(uint param_1,long param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5ed2c(param_2);
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1 & 1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1014c7190; end: 1014c71f3;  */

void FUN_1014c7190(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_3;
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1014c71f4; end: 1014c7297; -[_TtC24SCCrashServicesImplSwift15SCKsCrashLogger reportLowMemoryWithTitle:description:completion:] */

void FUN_1014c71f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c60bc4(param_5);
  func_0x000107c5faec(param_3);
  uVar1 = param_2;
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_1);
  FUN_1014c6f40(param_3,param_2,param_4,uVar1,param_5);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_release_11034bcf0)(param_5);
  return;
}



/* Entry: 1014c7298; end: 1014c7463;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014c7298(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10,undefined4 param_11,undefined4 param_12,
                  undefined **param_13)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  func_0x000107c60bc4();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112da9878);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c5fadc(param_3,param_4);
  func_0x000107c5fadc(param_5,param_6);
  func_0x000107c5fadc(param_7,param_8);
  uVar5 = 0;
  if (param_10 != 0) {
    func_0x000107c5fadc(param_9,param_10);
    uVar5 = param_9;
  }
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (param_13 == (undefined **)0x0) {
    pcStack_70 = FUN_1014c7464;
    puStack_68 = (undefined *)0x0;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_1012d20f0;
    puStack_78 = &UNK_1103ce6b0;
    param_13 = &puStack_90;
    func_0x000107c60bc4();
  }
  puVar2 = &UNK_1103ce6e8;
  func_0x000107c613fc(&UNK_1103ce6e8,0x18,7);
  *(undefined ***)(puVar2 + 0x10) = param_13;
  pcStack_70 = (code *)0x1014c7fd8;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  pcStack_80 = (code *)0x1014c8004;
  puStack_78 = &UNK_1103ce700;
  ppuVar3 = &puStack_90;
  puStack_68 = puVar2;
  func_0x000107c60bc4();
  func_0x000107c61574(puStack_68);
  func_0x000107c5026c(uVar4);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar5);
  return;
}



/* Entry: 1014c7464; end: 1014c7467;  */

void FUN_1014c7464(void)

{
  return;
}



/* Entry: 1014c7468; end: 1014c7767; -[_TtC24SCCrashServicesImplSwift15SCKsCrashLogger reportMemoryHeapDumpWithReportId:title:description:heapSnapshotFilePath:priorSessionId:fromPreviousLaunch:onComplete:] */

void FUN_1014c7468(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined1 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000107c60bc4();
  func_0x000107c5faec();
  uVar1 = param_2;
  func_0x000107c5faec();
  uVar2 = uVar1;
  func_0x000107c5faec(param_5);
  uVar3 = uVar2;
  func_0x000107c5faec(param_6);
  if (param_7 == 0) {
    param_7 = 0;
    uVar4 = 0;
  }
  else {
    uVar4 = uVar3;
    func_0x000107c5faec();
  }
  func_0x000107c61174(param_1);
  FUN_1014c7298(param_3,param_2,param_4,uVar1,param_5,uVar2,param_6,uVar3,param_7,uVar4,param_8);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar1);
  func_0x000107c6142c(uVar2);
  func_0x000107c6142c(uVar3);
  func_0x000107c6142c(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_release_11034bcf0)(param_9);
  return;
}



/* Entry: 1014c7768; end: 1014c776b;  */

void FUN_1014c7768(void)

{
  return;
}



/* Entry: 1014c776c; end: 1014c784f; -[_TtC24SCCrashServicesImplSwift15SCKsCrashLogger reportMetricKitDiagnostics:appVersion:lastKSCrashReportId:completion:] */

void FUN_1014c776c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c60bc4(param_6);
  func_0x000107c5faec(param_3);
  uVar2 = param_2;
  if (param_4 == 0) {
    param_4 = 0;
    uVar1 = 0;
  }
  else {
    func_0x000107c5faec(param_4);
    uVar1 = uVar2;
  }
  if (param_5 == 0) {
    param_5 = 0;
    uVar2 = 0;
  }
  else {
    func_0x000107c5faec(param_5);
  }
  func_0x000107c61174(param_1);
  func_0x0001014c75a0(param_3,param_2,param_4,uVar1,param_5,uVar2,param_6);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_release_11034bcf0)(param_6);
  return;
}



/* Entry: 1014c7850; end: 1014c7a2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014c7850(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined **param_13)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  func_0x000107c60bc4();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112da9878);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c5fadc(param_3,param_4);
  func_0x000107c5fadc(param_5,param_6);
  func_0x000107c5fadc(param_7,param_8);
  func_0x000107c5fadc(param_9,param_10);
  func_0x000107c5fadc(param_11,param_12);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (param_13 == (undefined **)0x0) {
    pcStack_70 = FUN_1014c7a30;
    puStack_68 = (undefined *)0x0;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_1012d20f0;
    puStack_78 = &UNK_1103ce7a0;
    param_13 = &puStack_90;
    func_0x000107c60bc4();
  }
  puVar2 = &UNK_1103ce7d8;
  func_0x000107c613fc(&UNK_1103ce7d8,0x18,7);
  *(undefined ***)(puVar2 + 0x10) = param_13;
  pcStack_70 = (code *)0x1014c7fe0;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  pcStack_80 = (code *)0x1014c8004;
  puStack_78 = &UNK_1103ce7f0;
  ppuVar3 = &puStack_90;
  puStack_68 = puVar2;
  func_0x000107c60bc4();
  func_0x000107c61574(puStack_68);
  func_0x000107c502ac(uVar4);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_11);
  return;
}



/* Entry: 1014c7a30; end: 1014c7a33;  */

void FUN_1014c7a30(void)

{
  return;
}



/* Entry: 1014c7a34; end: 1014c7b6f; -[_TtC24SCCrashServicesImplSwift15SCKsCrashLogger reportSpectaclesFirmwareCrashWithReportId:userId:title:description:otherInfoInJson:firmwareLogPath:onComplete:] */

void FUN_1014c7a34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x000107c60bc4();
  func_0x000107c5faec();
  uVar1 = param_2;
  func_0x000107c5faec();
  uVar2 = uVar1;
  func_0x000107c5faec();
  uVar3 = uVar2;
  func_0x000107c5faec();
  uVar4 = uVar3;
  func_0x000107c5faec();
  uVar5 = uVar4;
  func_0x000107c5faec();
  func_0x000107c61174(param_1);
  FUN_1014c7850(param_3,param_2,param_4,uVar1,param_5,uVar2,param_6,uVar3,param_7,uVar4,param_8,
                uVar5,param_9);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar1);
  func_0x000107c6142c(uVar2);
  func_0x000107c6142c(uVar3);
  func_0x000107c6142c(uVar4);
  func_0x000107c6142c(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_release_11034bcf0)(param_9);
  return;
}



/* Entry: 1014c7b70; end: 1014c7c53; -[_TtC24SCCrashServicesImplSwift15SCKsCrashLogger reportFailedExpectationWithMessage:threadCaptureOption:] */

/* WARNING: Possible PIC construction at 0x0001014c7c20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014c7c38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014c7c24) */
/* WARNING: Removing unreachable block (ram,0x0001014c7c3c) */

void FUN_1014c7b70(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  puVar1 = PTR_PTR_1126b3e90;
  func_0x000107c610f8(PTR_PTR_1126b3e90);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c453e4(puVar1);
  func_0x000107c56ac4();
  if (param_2 != 0) {
    func_0x000107c5fadc(param_3,param_2);
  }
  func_0x000107c5027c(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1014c7c54; end: 1014c7cd7; -[_TtC24SCCrashServicesImplSwift15SCKsCrashLogger leaveBreadcrumb:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014c7c54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_38;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 != 0) {
    func_0x000107c4acc4(lStack_38,param_2,param_3);
    func_0x000107c615e8(lStack_38);
  }
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1014c7cd8; end: 1014c7cdb; -[_TtC24SCCrashServicesImplSwift15SCKsCrashLogger reportMemoryLeakWithTitle:description:] */

void FUN_1014c7cd8(void)

{
  return;
}



/* Entry: 1014c7cdc; end: 1014c7da3; -[_TtC24SCCrashServicesImplSwift15SCKsCrashLogger dumpStackTraceOfThread:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014c7cdc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + _DAT_112da98d0);
  func_0x000107c61174();
  func_0x000107c4235c();
  func_0x000107c61180();
  lVar1 = lVar2;
  func_0x000107c5ba10();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x000107c61170(param_1);
    func_0x000107c61170(lVar2);
    lVar3 = 0;
    param_2 = 0xe000000000000000;
  }
  else {
    lVar3 = lVar1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar1);
  }
  func_0x000107c5fadc(lVar3,param_2);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1014c7da4; end: 1014c7e37; -[_TtC24SCCrashServicesImplSwift15SCKsCrashLogger reportAssertNonFatalWithMessage:includeAllThreads:] */

/* WARNING: Possible PIC construction at 0x0001014c7e14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014c7e18) */

void FUN_1014c7da4(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  
  func_0x0001044db3fc(0);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  if (param_4 == 0) {
    uVar1 = param_1;
    func_0x0001044dac34();
  }
  else {
    uVar1 = 0;
    func_0x0001044dac64(0);
  }
  func_0x000107c5024c(param_1,param_2,param_3,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1014c7e38; end: 1014c7ee3; -[_TtC24SCCrashServicesImplSwift15SCKsCrashLogger reportStrictModeViolationWithMessage:] */

/* WARNING: Possible PIC construction at 0x0001014c7ebc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014c7ecc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014c7ec0) */
/* WARNING: Removing unreachable block (ram,0x0001014c7ed0) */

void FUN_1014c7e38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b3e90;
  func_0x000107c610f8(PTR_PTR_1126b3e90);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c453e4(puVar1);
  func_0x000107c599f8();
  uVar2 = 0;
  func_0x0001044db3fc(0);
  func_0x0001044dac34();
  func_0x000107c5027c(param_1,param_2,puVar1,0,param_3,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1014c7ee4; end: 1014c7f17;  */

undefined1  [16] FUN_1014c7ee4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  (**(code **)(lVar1 + 0x10))();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5faec();
  func_0x000107c61170(lVar1);
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = lVar2;
  return auVar3;
}



/* Entry: 1014c7f18; end: 1014c7fb7;  */

void FUN_1014c7f18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  ulong uStack_48;
  
  fVar2 = (float)param_1;
  fVar3 = (float)param_2;
  if (fVar2 == fVar3) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1014c7fb4);
    (*pcVar1)();
  }
  if ((uint)ABS(fVar3 - fVar2) < 0x7f800000) {
    uStack_48 = 0;
    func_0x000107c61598(&uStack_48,8);
    if (fVar2 + (fVar3 - fVar2) * ((float)(uStack_48 & 0xffffff) / 16777216.0) == fVar3) {
      FUN_1014c7f18(param_1,param_2,param_3);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014c7fb8);
  (*pcVar1)();
}



/* Entry: 1014c7fb8; end: 1014c800b;  */

void FUN_1014c7fb8(long param_1,long param_2)

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



/* Entry: 1014c800c; end: 1014c8033; +[_TtC24SCCrashServicesImplSwift17MetadataConstants lensIdKey] */

void FUN_1014c800c(void)

{
  func_0x000107c5fadc(0x44495f45534e454c,0xe800000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1014c8034; end: 1014c805f; +[_TtC24SCCrashServicesImplSwift17MetadataConstants lensRenderingContextKey] */

void FUN_1014c8034(void)

{
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef86560);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1014c8060; end: 1014c808b; +[_TtC24SCCrashServicesImplSwift17MetadataConstants lensProductTypeKey] */

void FUN_1014c8060(void)

{
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef86580);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1014c808c; end: 1014c8097;  */

undefined * FUN_1014c808c(void)

{
  return &UNK_1103ce8c8;
}



/* Entry: 1014c8098; end: 1014c80c3; +[_TtC24SCCrashServicesImplSwift17MetadataConstants safeModeKey] */

void FUN_1014c8098(void)

{
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef865a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1014c80c4; end: 1014c80ef; +[_TtC24SCCrashServicesImplSwift17MetadataConstants lastBlockOperationKey] */

void FUN_1014c80c4(void)

{
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef865c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1014c80f0; end: 1014c811b; +[_TtC24SCCrashServicesImplSwift17MetadataConstants memoryPressureStateKey] */

void FUN_1014c80f0(void)

{
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef86660);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1014c811c; end: 1014c8167; +[_TtC24SCCrashServicesImplSwift17MetadataConstants priorSessionIdKey] */

void FUN_1014c811c(void)

{
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef86680);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1014c8168; end: 1014c81a3; -[_TtC24SCCrashServicesImplSwift17MetadataConstants init] */

void FUN_1014c8168(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x0001014c8148();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1014c81a4; end: 1014c81d3;  */

void FUN_1014c81a4(void)

{
  func_0x0001014c8148();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1014c81d4; end: 1014c81d7; -[_TtC24SCCrashServicesImplSwift17MetadataConstants .cxx_destruct] */

void FUN_1014c81d4(void)

{
  return;
}


