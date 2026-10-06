/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1016dfee8; end: 1016dfef7;  */

undefined8 FUN_1016dfee8(void)

{
  return 0;
}



/* Entry: 1016dfef8; end: 1016dff83;  */

void FUN_1016dfef8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  code *pcVar5;
  
  FUN_1016dff84();
  uVar1 = param_1;
  func_0x0001016dffc4();
  puVar2 = (undefined8 *)&UNK_1103fabc0;
  func_0x000103c30d9c(&UNK_1103fabc0,&UNK_1103fabc0,param_1,uVar1);
  puVar3 = puVar2;
  func_0x000103c31f74();
  plVar4 = (long *)*puVar3;
  pcVar5 = *(code **)(*plVar4 + 0xb8);
  func_0x000107c6157c(plVar4);
  (*pcVar5)(0xd000000000000010,0x800000010d97f050,puVar2);
  func_0x000107c6142c(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(plVar4);
  return;
}



/* Entry: 1016dff84; end: 1016e0003;  */

void FUN_1016dff84(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc25e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d97f188;
  func_0x000107c61520(&UNK_10d97f188,&UNK_1103fabc0);
  puRam0000000112dc25e0 = puVar1;
  return;
}



/* Entry: 1016e0004; end: 1016e0067;  */

undefined1 FUN_1016e0004(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 uStack_21;
  
  uVar1 = param_1;
  FUN_1016e0068();
  func_0x000103c38cc0(&uStack_21,param_1,param_2,&UNK_1103fabc0,uVar1);
  func_0x000107c61574(param_1);
  return uStack_21;
}



/* Entry: 1016e0068; end: 1016e00a7;  */

void FUN_1016e0068(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc25f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d97f138;
  func_0x000107c61520(&DAT_10d97f138,&UNK_1103fabc0);
  puRam0000000112dc25f0 = puVar1;
  return;
}



/* Entry: 1016e00a8; end: 1016e010b;  */

ulong FUN_1016e00a8(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (2 < uVar1) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Entry: 1016e010c; end: 1016e0137;  */

void FUN_1016e010c(void)

{
  func_0x0001000285a8(0x112dc2698,&UNK_10d97f090);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_initStaticObject_11034f440)();
  return;
}



/* Entry: 1016e0138; end: 1016e01ab;  */

undefined1  [16] FUN_1016e0138(char param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_1 != '\0') {
    uVar1 = 0x64657070696b73;
    if (param_1 != '\x01') {
      uVar1 = 0x64656c696166;
    }
    uVar2 = 0xe700000000000000;
    if (param_1 != '\x01') {
      uVar2 = 0xe600000000000000;
    }
    auVar3._8_8_ = uVar2;
    auVar3._0_8_ = uVar1;
    return auVar3;
  }
  auVar4._8_8_ = 0xeb0000000064657a;
  auVar4._0_8_ = 0x696c616974696e69;
  return auVar4;
}



/* Entry: 1016e01ac; end: 1016e01eb;  */

void FUN_1016e01ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc26a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d97f098;
  func_0x000107c61520(&UNK_10d97f098,&UNK_1103fabc0);
  puRam0000000112dc26a0 = puVar1;
  return;
}



/* Entry: 1016e01ec; end: 1016e0207;  */

void FUN_1016e01ec(void)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  if (cVar1 == '\0') {
    uVar3 = 0xeb0000000064657a;
    uVar2 = 0x696c616974696e69;
  }
  else {
    uVar2 = 0x64657070696b73;
    if (cVar1 != '\x01') {
      uVar2 = 0x64656c696166;
    }
    uVar3 = 0xe700000000000000;
    if (cVar1 != '\x01') {
      uVar3 = 0xe600000000000000;
    }
  }
  func_0x000107c5fb58(auStack_68,uVar2,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c606a8();
  return;
}



/* Entry: 1016e0208; end: 1016e0283;  */

void FUN_1016e0208(undefined8 param_1,char param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_2 == '\0') {
    uVar2 = 0xeb0000000064657a;
    uVar1 = 0x696c616974696e69;
  }
  else {
    uVar1 = 0x64657070696b73;
    if (param_2 != '\x01') {
      uVar1 = 0x64656c696166;
    }
    uVar2 = 0xe700000000000000;
    if (param_2 != '\x01') {
      uVar2 = 0xe600000000000000;
    }
  }
  func_0x000107c5fb58(param_1,uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 1016e0284; end: 1016e028b;  */

void FUN_1016e0284(void)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68);
  if (cVar1 == '\0') {
    uVar3 = 0xeb0000000064657a;
    uVar2 = 0x696c616974696e69;
  }
  else {
    uVar2 = 0x64657070696b73;
    if (cVar1 != '\x01') {
      uVar2 = 0x64656c696166;
    }
    uVar3 = 0xe700000000000000;
    if (cVar1 != '\x01') {
      uVar3 = 0xe600000000000000;
    }
  }
  func_0x000107c5fb58(auStack_68,uVar2,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c606a8();
  return;
}



/* Entry: 1016e028c; end: 1016e03af;  */

void FUN_1016e028c(undefined8 param_1,char param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68);
  if (param_2 == '\0') {
    uVar2 = 0xeb0000000064657a;
    uVar1 = 0x696c616974696e69;
  }
  else {
    uVar1 = 0x64657070696b73;
    if (param_2 != '\x01') {
      uVar1 = 0x64656c696166;
    }
    uVar2 = 0xe700000000000000;
    if (param_2 != '\x01') {
      uVar2 = 0xe600000000000000;
    }
  }
  func_0x000107c5fb58(auStack_68,uVar1,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1016e03b0; end: 1016e03ef;  */

void FUN_1016e03b0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc26a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d97f154;
  func_0x000107c61520(&DAT_10d97f154,&UNK_1103fabc0);
  puRam0000000112dc26a8 = puVar1;
  return;
}



/* Entry: 1016e03f0; end: 1016e0413;  */

void FUN_1016e03f0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1016dff84();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1016e0414; end: 1016e043b;  */

void FUN_1016e0414(undefined1 *param_1,undefined1 param_2)

{
  long unaff_x21;
  
  FUN_1016e0004();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Entry: 1016e043c; end: 1016e043f;  */

void FUN_1016e043c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112dc26b0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112dc26b8;
  func_0x00010002969c(0x112dc26b8,&UNK_10d97f180);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112dc26b0 = puVar2;
  return;
}



/* Entry: 1016e0440; end: 1016e048f;  */

void FUN_1016e0440(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112dc26b0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112dc26b8;
  func_0x00010002969c(0x112dc26b8,&UNK_10d97f180);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112dc26b0 = puVar2;
  return;
}



/* Entry: 1016e0490; end: 1016e04b3;  */

void FUN_1016e0490(undefined8 *param_1,undefined8 param_2)

{
  FUN_1016e010c();
  *param_1 = param_2;
  return;
}



/* Entry: 1016e04b4; end: 1016e061b;  */

int FUN_1016e04b4(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar2 = -1;
    goto LAB_1016e0534;
  }
  if (param_2 < 0xfe) {
LAB_1016e0528:
    iVar2 = *param_1 - 3;
    if (*param_1 < 3) {
      iVar2 = -1;
    }
  }
  else {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
joined_r0x0001016e050c:
      if (uVar1 == 0) goto LAB_1016e0528;
    }
    else {
      if (iVar2 != 2) {
        uVar1 = (uint)param_1[1];
        goto joined_r0x0001016e050c;
      }
      uVar1 = (uint)*(ushort *)(param_1 + 1);
      if (*(ushort *)(param_1 + 1) == 0) goto LAB_1016e0528;
    }
    iVar2 = ((uint)*param_1 | uVar1 << 8) - 3;
  }
LAB_1016e0534:
  return iVar2 + 1;
}



/* Entry: 1016e061c; end: 1016e0667;  */

void FUN_1016e061c(undefined8 param_1)

{
  func_0x0001000285a8(0x112db0c30,&UNK_10d95acb0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1016e06d4,param_1);
  return;
}



/* Entry: 1016e0668; end: 1016e06d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016e0668(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_1016e0818();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112dc26c0) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1016e06d4; end: 1016e06db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016e06d4(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_1016e0818();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112dc26c0) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 1016e06dc; end: 1016e0727;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016e06dc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112dc26c0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1016e0728; end: 1016e0797; -[_TtC34DuplexRegistryConfigPluginProvider26DuplexRegistryConfigPlugin pushToValdiMarshaller:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1016e0728(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_38;
  
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x000107c30e18(param_3,uStack_38);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uStack_38);
  return param_3;
}



/* Entry: 1016e0798; end: 1016e07f7; -[_TtC34DuplexRegistryConfigPluginProvider26DuplexRegistryConfigPlugin init] */

void FUN_1016e0798(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("DuplexRegistryConfigPluginProvider.DuplexRegistryConfigPlugin",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1016e07c4);
  (*pcVar1)();
}



/* Entry: 1016e07f8; end: 1016e0807;  */

undefined1  [16] FUN_1016e07f8(void)

{
  return ZEXT816(0x1103facf0);
}



/* Entry: 1016e0808; end: 1016e0817; -[_TtC34DuplexRegistryConfigPluginProvider26DuplexRegistryConfigPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016e0808(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112dc26c0));
  return;
}



/* Entry: 1016e0818; end: 1016e0887;  */

void FUN_1016e0818(void)

{
  func_0x000107c61168(&PTR_PTR_1127e7da8);
  return;
}



/* Entry: 1016e0888; end: 1016e088f;  */

void FUN_1016e0888(void)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*unaff_x20);
  return;
}



/* Entry: 1016e0890; end: 1016e0a03;  */

void FUN_1016e0890(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000107c61170(*param_2);
  uStack_40 = 0;
  lStack_38 = 0;
  func_0x000107c5fae4(param_1,&uStack_40);
  lVar1 = lStack_38;
  if (lStack_38 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = uStack_40;
    func_0x000107c5fadc(uStack_40,lStack_38);
    func_0x000107c6142c(lVar1);
  }
  *param_2 = uVar2;
  return;
}



/* Entry: 1016e0a04; end: 1016e0a2b;  */

void FUN_1016e0a04(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  func_0x000107c5faec();
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}



/* Entry: 1016e0a2c; end: 1016e0a97;  */

void FUN_1016e0a2c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x112dc2710;
  FUN_1016e0c70(0x112dc2710,&UNK_10d97f314);
  uVar2 = 0x112dc2718;
  FUN_1016e0c70(0x112dc2718,&UNK_10d97f2bc);
                    /* WARNING: Could not recover jumptable at 0x00010bdb96bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss20_SwiftNewtypeWrapperPsSHRzSH8RawValueSYRpzrlE20_toCustomAnyHashables0hI0VSgyF_11034e980
  )(param_1,param_2,uVar1,uVar2,PTR___sSSSHsWP_11034da90);
  return;
}



/* Entry: 1016e0a98; end: 1016e0adf;  */

void FUN_1016e0a98(void)

{
  FUN_1016e0c70(0x112dc26f8,&UNK_10d97f284);
  return;
}



/* Entry: 1016e0ae0; end: 1016e0b57;  */

undefined8 FUN_1016e0ae0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  func_0x000107c5faec(uVar1);
  func_0x000107c5fbbc();
  func_0x000107c6142c(param_2);
  return uVar1;
}



/* Entry: 1016e0b58; end: 1016e0c4b;  */

undefined1 * FUN_1016e0b58(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c5faec(uVar1);
  func_0x000107c6068c(auStack_78,param_1);
  puVar2 = auStack_78;
  func_0x000107c5fb58(puVar2,uVar1,param_2);
  func_0x000107c606a8();
  func_0x000107c6142c(param_2);
  return puVar2;
}



/* Entry: 1016e0c4c; end: 1016e0c6f;  */

void FUN_1016e0c4c(void)

{
  FUN_1016e0c70(0x112dc2708,&UNK_10d97f2ec);
  return;
}



/* Entry: 1016e0c70; end: 1016e0caf;  */

void FUN_1016e0c70(long *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    func_0x0001016e0838(0xff);
    func_0x000107c61520(param_2,uVar1);
    *param_1 = param_2;
  }
  return;
}



/* Entry: 1016e0cb0; end: 1016e0d97;  */

void FUN_1016e0cb0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  func_0x000100083b20(&puStack_60);
  puVar1 = puStack_60;
  func_0x0001016e0de8();
  func_0x000107c61180();
  func_0x000107c61170(puStack_60);
  puVar2 = &UNK_1103fae08;
  func_0x000107c613fc(&UNK_1103fae08,0x18,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  puVar1 = PTR_PTR_1126a7998;
  func_0x000107c610f8();
  pcStack_40 = FUN_1016e0e78;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  uStack_50 = 0x1016e0db0;
  puStack_48 = &UNK_1103fae20;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c46b48();
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61574(puStack_38);
  *param_1 = puVar1;
  return;
}



/* Entry: 1016e0d98; end: 1016e0daf;  */

void FUN_1016e0d98(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  func_0x000100083b20(&puStack_60);
  puVar1 = puStack_60;
  func_0x0001016e0de8();
  func_0x000107c61180();
  func_0x000107c61170(puStack_60);
  puVar2 = &UNK_1103fae08;
  func_0x000107c613fc(&UNK_1103fae08,0x18,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  puVar1 = PTR_PTR_1126a7998;
  func_0x000107c610f8();
  pcStack_40 = FUN_1016e0e78;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  uStack_50 = 0x1016e0db0;
  puStack_48 = &UNK_1103fae20;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c46b48();
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61574(puStack_38);
  *param_1 = puVar1;
  return;
}



/* Entry: 1016e0db0; end: 1016e0e77;  */

void FUN_1016e0db0(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1016e0e78; end: 1016e0e9b;  */

void FUN_1016e0e78(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1016e0e9c; end: 1016e0ec7; -[_TtC35MessagingModelServiceImplementation23MessagingMessageWrapper contents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016e0e9c(long param_1)

{
  func_0x000107c4051c(*(undefined8 *)(param_1 + _DAT_112dc2728));
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1016e0ec8; end: 1016e0ef3; -[_TtC35MessagingModelServiceImplementation23MessagingMessageWrapper quotedContents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016e0ec8(long param_1)

{
  func_0x000107c4f858(*(undefined8 *)(param_1 + _DAT_112dc2728));
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1016e0ef4; end: 1016e0f9f; -[_TtC35MessagingModelServiceImplementation23MessagingMessageWrapper consistentId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016e0ef4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_112dc2728);
  func_0x000107c61174();
  func_0x000107c41800();
  func_0x000107c61180();
  func_0x000107c4cdc4();
  func_0x000107c61170(uVar3);
  puVar1 = PTR___ss5Int64VN_11034ee50;
  puVar2 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68;
  func_0x000107c6057c(PTR___ss5Int64VN_11034ee50,
                      PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68);
  func_0x000107c61170(param_1);
  func_0x000107c5fadc(puVar1,puVar2);
  func_0x000107c6142c(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1016e0fa0; end: 1016e111f; -[_TtC35MessagingModelServiceImplementation23MessagingMessageWrapper analyticsMessageId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016e0fa0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + _DAT_112dc2728);
  func_0x000107c61174();
  func_0x000107c4cd9c();
  func_0x000107c61180();
  lVar1 = lVar2;
  func_0x000107c3dc7c();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar1 == 0) {
    func_0x000107c61170(param_1);
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c5faec(lVar1);
    func_0x000107c61170(param_1);
    func_0x000107c61170(lVar1);
    func_0x000107c5fadc(lVar2,param_2);
    func_0x000107c6142c(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1016e1120; end: 1016e1187; -[_TtC35MessagingModelServiceImplementation23MessagingMessageWrapper quotedAnalyticsMessageId] */

void FUN_1016e1120(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001016e1054();
  func_0x000107c61170(param_1);
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c5fadc(uVar1,param_2);
    func_0x000107c6142c(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1016e1188; end: 1016e11f7; -[_TtC35MessagingModelServiceImplementation23MessagingMessageWrapper messageSender] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016e1188(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112dc2728);
  func_0x000107c61174();
  func_0x000107c51f08(uVar2);
  func_0x000107c61180();
  uVar1 = uVar2;
  func_0x000107c5cb4c();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1016e11f8; end: 1016e128f; -[_TtC35MessagingModelServiceImplementation23MessagingMessageWrapper chatReplyId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016e11f8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + _DAT_112dc2728);
  func_0x000107c61174();
  func_0x000107c3f918();
  func_0x000107c61180();
  if (lVar2 == 0) {
    func_0x000107c61170(param_1);
    lVar1 = 0;
  }
  else {
    lVar1 = lVar2;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
    func_0x000107c61170(lVar2);
    func_0x000107c5fadc(lVar1,param_2);
    func_0x000107c6142c(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1016e1290; end: 1016e1327; -[_TtC35MessagingModelServiceImplementation23MessagingMessageWrapper chatReplySenderId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016e1290(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + _DAT_112dc2728);
  func_0x000107c61174();
  func_0x000107c3f91c();
  func_0x000107c61180();
  if (lVar2 == 0) {
    func_0x000107c61170(param_1);
    lVar1 = 0;
  }
  else {
    lVar1 = lVar2;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
    func_0x000107c61170(lVar2);
    func_0x000107c5fadc(lVar1,param_2);
    func_0x000107c6142c(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1016e1328; end: 1016e13b3; -[_TtC35MessagingModelServiceImplementation23MessagingMessageWrapper conversationId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016e1328(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112dc2728);
  func_0x000107c61174();
  func_0x000107c41800(uVar2);
  func_0x000107c61180();
  uVar1 = uVar2;
  func_0x000107c40674();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  uVar2 = uVar1;
  func_0x000107c5cb4c(uVar1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1016e13b4; end: 1016e1427; -[_TtC35MessagingModelServiceImplementation23MessagingMessageWrapper type] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1016e13b4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_112dc2728);
  func_0x000107c61174();
  func_0x000107c4051c();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000100be58bc();
    func_0x000107c61170(lVar1);
  }
  func_0x000107c61170(param_1);
  return lVar2;
}



/* Entry: 1016e1428; end: 1016e1513; -[_TtC35MessagingModelServiceImplementation23MessagingMessageWrapper messageTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016e1428(long param_1)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  lVar3 = *(long *)(param_1 + _DAT_112dc2728);
  func_0x000107c61174(param_1);
  func_0x000107c4ce20(lVar3);
  func_0x000107c61180();
  lVar2 = lVar3;
  func_0x000107c40c30();
  func_0x000107c61170(lVar3);
  func_0x000107c5ee88(&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                      (double)lVar2 / 1000.0);
  func_0x000107c61170(param_1);
  func_0x000107c5ee70();
  (**(code **)(lVar4 + 8))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1016e1514; end: 1016e1527; -[_TtC35MessagingModelServiceImplementation23MessagingMessageWrapper mediaType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016e1514(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c6c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112dc2728),PTR_s_mediaType_11260f520);
  return;
}



/* Entry: 1016e1528; end: 1016e1553; -[_TtC35MessagingModelServiceImplementation23MessagingMessageWrapper mediaOrigin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016e1528(long param_1)

{
  func_0x000107c4c9e4(*(undefined8 *)(param_1 + _DAT_112dc2728));
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1016e1554; end: 1016e157f; -[_TtC35MessagingModelServiceImplementation23MessagingMessageWrapper media] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016e1554(long param_1)

{
  func_0x000107c4c930(*(undefined8 *)(param_1 + _DAT_112dc2728));
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1016e1580; end: 1016e15ab; -[_TtC35MessagingModelServiceImplementation23MessagingMessageWrapper mediaForId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016e1580(long param_1)

{
  func_0x000107c4c98c(*(undefined8 *)(param_1 + _DAT_112dc2728));
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1016e15ac; end: 1016e1653; -[_TtC35MessagingModelServiceImplementation23MessagingMessageWrapper medias] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016e15ac(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + _DAT_112dc2728);
  func_0x000107c61174();
  func_0x000107c4ca8c();
  func_0x000107c61180();
  if (lVar3 == 0) {
    func_0x000107c61170(param_1);
    lVar3 = 0;
  }
  else {
    uVar1 = 0;
    FUN_1016e1824(0);
    lVar2 = lVar3;
    func_0x000107c5fc54(lVar3,uVar1);
    func_0x000107c61170(param_1);
    func_0x000107c61170(lVar3);
    lVar3 = lVar2;
    func_0x000107c5fc48(lVar2,uVar1);
    func_0x000107c6142c(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1016e1654; end: 1016e167f; -[_TtC35MessagingModelServiceImplementation23MessagingMessageWrapper replyMedia] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016e1654(long param_1)

{
  func_0x000107c501ec(*(undefined8 *)(param_1 + _DAT_112dc2728));
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1016e1680; end: 1016e170b; -[_TtC35MessagingModelServiceImplementation23MessagingMessageWrapper quotedMedia] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016e1680(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112dc2728);
  func_0x000107c61174();
  func_0x000107c4cda8(uVar2);
  func_0x000107c61180();
  uVar1 = uVar2;
  func_0x000107c4f864();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  uVar2 = uVar1;
  func_0x000107c4c930(uVar1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1016e170c; end: 1016e17af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016e170c(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112dc2728);
  func_0x000107c4cda8();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c4f864();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      lVar1 = lVar2;
      func_0x000107c4ca8c();
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      uVar3 = 0;
      if (lVar1 != 0) {
        FUN_1016e1824(0);
        func_0x000107c5fc54(lVar1,uVar3);
        func_0x000107c61170(lVar1);
      }
    }
  }
  return;
}



/* Entry: 1016e17b0; end: 1016e180f; -[_TtC35MessagingModelServiceImplementation23MessagingMessageWrapper quotedMedias] */

void FUN_1016e17b0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x000107c61174();
  lVar1 = param_1;
  FUN_1016e170c();
  func_0x000107c61170(param_1);
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    uVar2 = 0;
    FUN_1016e1824(0);
    lVar3 = lVar1;
    func_0x000107c5fc48(lVar1,uVar2);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1016e1810; end: 1016e1823; -[_TtC35MessagingModelServiceImplementation23MessagingMessageWrapper hasSpectaclesMedia] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016e1810(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfdc830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112dc2728),PTR_s_hasSpectaclesMedia_1125d4bc8);
  return;
}



/* Entry: 1016e1824; end: 1016e1867;  */

void FUN_1016e1824(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d64e68 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126b4628;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d64e68 = puVar1;
  return;
}



/* Entry: 1016e1868; end: 1016e187b; -[_TtC35MessagingModelServiceImplementation23MessagingMessageWrapper isSnapMessage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016e1868(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07ea90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112dc2728),PTR_s_isSnapMessage_1125fd4b0);
  return;
}



/* Entry: 1016e187c; end: 1016e188f; -[_TtC35MessagingModelServiceImplementation23MessagingMessageWrapper isOpenedAndViewableSnapForUser:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016e187c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0791d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112dc2728),
             PTR_s_isOpenedAndViewableSnapForUser__1125fbe80);
  return;
}



/* Entry: 1016e1890; end: 1016e18a3; -[_TtC35MessagingModelServiceImplementation23MessagingMessageWrapper isSavedImageSnapViewedByUser:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016e1890(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07d130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112dc2728),PTR_s_isSavedImageSnapViewedByUser__1125fce58
            );
  return;
}



/* Entry: 1016e18a4; end: 1016e18b7; -[_TtC35MessagingModelServiceImplementation23MessagingMessageWrapper sending] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016e18a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c15dfd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112dc2728),PTR_s_sending_112635210);
  return;
}



/* Entry: 1016e18b8; end: 1016e18cb; -[_TtC35MessagingModelServiceImplementation23MessagingMessageWrapper isOpenedByParticipant:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016e18b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0791f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112dc2728),PTR_s_isOpenedBy__1125fbe88);
  return;
}



/* Entry: 1016e18cc; end: 1016e18df; -[_TtC35MessagingModelServiceImplementation23MessagingMessageWrapper isSaved] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016e18cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07d090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112dc2728),PTR_s_isSaved_1125fce30);
  return;
}



/* Entry: 1016e18e0; end: 1016e18f3; -[_TtC35MessagingModelServiceImplementation23MessagingMessageWrapper isSentByParticipant:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016e18e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07d950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112dc2728),PTR_s_isSentBy__1125fd060);
  return;
}



/* Entry: 1016e18f4; end: 1016e1907; -[_TtC35MessagingModelServiceImplementation23MessagingMessageWrapper isOpenedByParticipantOtherThan:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016e18f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c079230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112dc2728),PTR_s_isOpenedByOtherThan__1125fbe98);
  return;
}



/* Entry: 1016e1908; end: 1016e191b; -[_TtC35MessagingModelServiceImplementation23MessagingMessageWrapper isViewableAfterOpening] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016e1908(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c083530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112dc2728),PTR_s_isViewableAfterOpening_1125fe758);
  return;
}



/* Entry: 1016e191c; end: 1016e192f; -[_TtC35MessagingModelServiceImplementation23MessagingMessageWrapper hasSelfDestructed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016e191c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfdbd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112dc2728),PTR_s_hasSelfDestructed_1125d4918);
  return;
}



/* Entry: 1016e1930; end: 1016e1943; -[_TtC35MessagingModelServiceImplementation23MessagingMessageWrapper chatReplyIsSaved] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016e1930(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf37450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112dc2728),PTR_s_chatReplyIsSaved_1125ab6b8);
  return;
}



/* Entry: 1016e1944; end: 1016e1a33; -[_TtC35MessagingModelServiceImplementation23MessagingMessageWrapper isQuotedSnapSentOrReceivedOpenedForUser:isSelfConversation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1016e1944(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c5faec(param_3);
  lVar2 = *(long *)(param_1 + _DAT_112dc2728);
  func_0x000107c61174(param_1);
  func_0x000107c4cda8();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x000107c4f864();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar1 != 0) {
      func_0x000107c5fadc(param_3,param_2);
      lVar2 = lVar1;
      func_0x000107c4a3d4(lVar1);
      func_0x000107c61170(param_1);
      func_0x000107c6142c(param_2);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(param_3);
      return lVar2;
    }
  }
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  return 0;
}



/* Entry: 1016e1a34; end: 1016e1a47; -[_TtC35MessagingModelServiceImplementation23MessagingMessageWrapper isStickerMessage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016e1a34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07fa10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112dc2728),PTR_s_isStickerMessage_1125fd890);
  return;
}



/* Entry: 1016e1a48; end: 1016e1a73; -[_TtC35MessagingModelServiceImplementation23MessagingMessageWrapper ctpItemInstance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016e1a48(long param_1)

{
  func_0x000107c40e28(*(undefined8 *)(param_1 + _DAT_112dc2728));
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1016e1a74; end: 1016e1a9f; -[_TtC35MessagingModelServiceImplementation23MessagingMessageWrapper quotedCtpItemInstance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016e1a74(long param_1)

{
  func_0x000107c4f85c(*(undefined8 *)(param_1 + _DAT_112dc2728));
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1016e1aa0; end: 1016e1acb; -[_TtC35MessagingModelServiceImplementation23MessagingMessageWrapper messagingSticker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016e1aa0(long param_1)

{
  func_0x000107c4ce14(*(undefined8 *)(param_1 + _DAT_112dc2728));
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1016e1acc; end: 1016e1adf; -[_TtC35MessagingModelServiceImplementation23MessagingMessageWrapper isStickerReaction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016e1acc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07fa50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112dc2728),PTR_s_isStickerReaction_1125fd8a0);
  return;
}



/* Entry: 1016e1ae0; end: 1016e1af3; -[_TtC35MessagingModelServiceImplementation23MessagingMessageWrapper isStoryReplyMessage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016e1ae0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07fd90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112dc2728),PTR_s_isStoryReplyMessage_1125fd970);
  return;
}



/* Entry: 1016e1af4; end: 1016e1b07; -[_TtC35MessagingModelServiceImplementation23MessagingMessageWrapper hasCancelledStream] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016e1af4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd5130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112dc2728),PTR_s_hasCancelledStream_1125d2df0);
  return;
}



/* Entry: 1016e1b08; end: 1016e1b1b; -[_TtC35MessagingModelServiceImplementation23MessagingMessageWrapper isSpotlightStoryShareMessage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016e1b08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07f630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112dc2728),PTR_s_isSpotlightStoryShareMessage_1125fd798)
  ;
  return;
}



/* Entry: 1016e1b1c; end: 1016e1b2f; -[_TtC35MessagingModelServiceImplementation23MessagingMessageWrapper isLensSpotlightStoryShareMessage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016e1b1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c076870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112dc2728),
             PTR_s_isLensSpotlightStoryShareMessage_1125fb428);
  return;
}



/* Entry: 1016e1b30; end: 1016e1b43; -[_TtC35MessagingModelServiceImplementation23MessagingMessageWrapper isSpotlightCommentShareMessage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016e1b30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07f390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112dc2728),
             PTR_s_isSpotlightCommentShareMessage_1125fd6f0);
  return;
}



/* Entry: 1016e1b44; end: 1016e1ba3; -[_TtC35MessagingModelServiceImplementation23MessagingMessageWrapper init] */

void FUN_1016e1b44(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MessagingModelServiceImplementation.MessagingMessageWrapper",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1016e1b70);
  (*pcVar1)();
}



/* Entry: 1016e1ba4; end: 1016e1bb3; -[_TtC35MessagingModelServiceImplementation23MessagingMessageWrapper .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016e1ba4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112dc2728));
  return;
}



/* Entry: 1016e1bb4; end: 1016e1bd3;  */

void FUN_1016e1bb4(void)

{
  func_0x000107c61168(&PTR_PTR_1127e7e68);
  return;
}



/* Entry: 1016e1bd4; end: 1016e1bff;  */

void FUN_1016e1bd4(undefined8 *param_1,undefined8 param_2)

{
  FUN_1016e1ce4();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = param_2;
  return;
}



/* Entry: 1016e1c00; end: 1016e1c63; -[_TtC35MessagingModelServiceImplementation24MessagingMessageProvider messagingMessageFrom:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016e1c00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_30;
  long lStack_28;
  
  lVar2 = 0;
  FUN_1016e1bb4();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112dc2728) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar3;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1016e1c64; end: 1016e1c9f; -[_TtC35MessagingModelServiceImplementation24MessagingMessageProvider init] */

void FUN_1016e1c64(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1016e1ca0; end: 1016e1cd3;  */

void FUN_1016e1ca0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1016e1cd4; end: 1016e1ce3;  */

undefined1  [16] FUN_1016e1cd4(void)

{
  return ZEXT816(0x1103faef0);
}



/* Entry: 1016e1ce4; end: 1016e1d03;  */

void FUN_1016e1ce4(void)

{
  func_0x000107c61168(&PTR_PTR_1127e7f28);
  return;
}



/* Entry: 1016e1d04; end: 1016e1d2f;  */

void FUN_1016e1d04(undefined8 *param_1,undefined8 param_2)

{
  FUN_1016e1fac();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = param_2;
  return;
}



/* Entry: 1016e1d30; end: 1016e1d3b; -[_TtC35MusicGrapheneServicesImplementation28MusicTrackLoadGrapheneLogger logInitialLoadFailWithFailureReason:source:] */

void FUN_1016e1d30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_1);
  FUN_1016e1d54(param_3,param_4,param_2,&UNK_1053d5e88);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1016e1d3c; end: 1016e1d53; -[_TtC35MusicGrapheneServicesImplementation28MusicTrackLoadGrapheneLogger logRehydrationAttemptWithSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_1016e1d3c(long param_1,undefined8 param_2,char *param_3,undefined8 param_4)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  long *plVar5;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + _DAT_112dc2790);
  pcVar4 = (char *)0x1;
  pcVar3 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = param_3;
  _objc_retain(param_3);
  if (lVar1 != 0) {
    plVar5 = *(long **)(lVar1 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar2);
    acStack_80[0] = '\0';
    acStack_80[1] = '\0';
    acStack_80[2] = '\0';
    acStack_80[3] = '\0';
    acStack_80[4] = '\0';
    acStack_80[5] = '\0';
    acStack_80[6] = '\0';
    acStack_80[7] = '\0';
    acStack_80[8] = '\0';
    acStack_80[9] = '\0';
    acStack_80[10] = '\0';
    acStack_80[0xb] = '\0';
    acStack_80[0xc] = '\0';
    acStack_80[0xd] = '\0';
    acStack_80[0xe] = '\0';
    acStack_80[0xf] = '\0';
    acStack_80[0x10] = '\0';
    acStack_80[0x11] = '\0';
    acStack_80[0x12] = '\0';
    acStack_80[0x13] = '\0';
    acStack_80[0x14] = '\0';
    acStack_80[0x15] = '\0';
    acStack_80[0x16] = '\0';
    acStack_80[0x17] = '\0';
    func_0x00010007e1e8(acStack_80,auStack_60,&lStack_48,1);
    pcVar2 = "";
    param_4 = 1;
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_110883968,acStack_80,1);
    puStack_68 = acStack_80;
    func_0x00010007e5dc(&puStack_68);
    pcVar4 = pcVar3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pcVar4 = pcVar3;
    }
  }
  pcVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar3;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(pcVar2);
  _objc_retain(pcVar4);
  if (pcVar3 != (char *)0x0) {
    plVar5 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = pcVar2;
      _objc_retainAutorelease(pcVar2);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar2);
    func_0x00010002b838(auStack_f8,pcVar3);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(pcVar4);
      pcVar3 = pcVar4;
      func_0x00010bdc3520(pcVar4);
    }
    _objc_release(pcVar4);
    func_0x00010002b838(auStack_e0,pcVar3);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x00010007e1e8(&uStack_118,auStack_f8,&lStack_c8,2);
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_1108839b8,&uStack_118,param_4);
    puStack_100 = &uStack_118;
    func_0x00010007e5dc(&puStack_100);
    lVar1 = 0;
    do {
      if ((&cStack_c9)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(pcVar4);
  pcVar3 = pcVar2;
  _objc_release(pcVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return pcVar3;
  }
  ___stack_chk_fail();
  _objc_release(pcVar4);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(pcVar4);
  _objc_release(pcVar2);
  __Unwind_Resume(pcVar3);
  if (pcRam00000001136bb910 == (char *)0x0) {
    pcVar2 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0();
    func_0x00010c2289e0();
    pcRam00000001136bb910 = pcVar2;
  }
  return pcRam00000001136bb910;
}



/* Entry: 1016e1d54; end: 1016e1e73;  */

/* WARNING: Possible PIC construction at 0x0001016e1e30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016e1e34) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016e1d54(long param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_48;
  
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112dc2790);
  if (param_1 == 0) {
    uVar4 = 0xef64656c6961665f;
    uVar2 = 0x64616f6c6e776f64;
  }
  else if (param_1 == 2) {
    uVar4 = 0x800000010efb7f10;
    uVar2 = 0xd000000000000018;
  }
  else {
    if (param_1 != 1) {
      lStack_48 = param_1;
      func_0x000107c60614(&UNK_11048bca8,&lStack_48,&UNK_11048bca8,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1016e1e74);
      (*pcVar1)();
    }
    uVar2 = 0xd000000000000011;
    uVar4 = 0x800000010efb7f30;
  }
  func_0x000107c5fadc(uVar2,uVar4);
  func_0x000107c6142c(uVar4);
  func_0x000107c5fadc(param_2,param_3);
  (*param_4)(uVar3,uVar2,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1016e1e74; end: 1016e1e7f; -[_TtC35MusicGrapheneServicesImplementation28MusicTrackLoadGrapheneLogger logRehydrationFailWithFailureReason:source:] */

void FUN_1016e1e74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_1);
  FUN_1016e1d54(param_3,param_4,param_2,&UNK_1053d622c);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}


