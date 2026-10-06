/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100de60cc; end: 100de613b;  */

void FUN_100de60cc(long param_1,long param_2)

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



/* Entry: 100de613c; end: 100de627b;  */

void FUN_100de613c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  code *param_9,undefined8 param_10)

{
  undefined *puVar1;
  long unaff_x20;
  code *pcVar2;
  undefined8 uVar3;
  undefined1 auStack_108 [24];
  undefined8 uStack_f0;
  long lStack_e8;
  undefined1 auStack_e0 [128];
  
  if (param_2 == 0) {
    (*param_9)();
  }
  else {
    FUN_100de5f68(param_3,param_4,param_5,param_6);
    func_0x000103ff4498(auStack_e0,param_3,param_4,param_5,param_6);
    func_0x000100083b20(auStack_108);
    func_0x0001000a8868(auStack_108,uStack_f0);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
    puVar1 = &UNK_110353210;
    func_0x000107c613fc(&UNK_110353210,0x30,7);
    *(undefined8 *)(puVar1 + 0x10) = param_7;
    *(undefined8 *)(puVar1 + 0x18) = param_8;
    *(code **)(puVar1 + 0x20) = param_9;
    *(undefined8 *)(puVar1 + 0x28) = param_10;
    pcVar2 = *(code **)(lStack_e8 + 0x10);
    func_0x000107c6157c(param_8);
    func_0x000107c6157c(param_10);
    (*pcVar2)(param_1,param_2,uVar3,auStack_e0,FUN_100de66d0,puVar1,uStack_f0,lStack_e8);
    FUN_100de66dc(auStack_e0);
    func_0x000107c61574(puVar1);
    func_0x0001000834e4(auStack_108);
  }
  return;
}



/* Entry: 100de627c; end: 100de62eb;  */

void FUN_100de627c(undefined8 *param_1,code *param_2,undefined8 param_3,code *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = (uint)((ulong)param_1[6] >> 0x3c) & 3 | (*(byte *)(param_1 + 7) & 0x3f) << 2;
  if (uVar1 < 2) {
    if (uVar1 != 0) {
      (*param_2)();
      return;
    }
    uVar2 = 0;
    uVar3 = 0;
  }
  else {
    uVar2 = *param_1;
    uVar3 = param_1[1];
  }
  (*param_4)(uVar2,uVar3);
  return;
}



/* Entry: 100de62ec; end: 100de642b;  */

void FUN_100de62ec(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,code *param_7,undefined8 param_8)

{
  undefined *puVar1;
  long unaff_x20;
  code *pcVar2;
  undefined8 uVar3;
  undefined1 auStack_100 [24];
  undefined8 uStack_e8;
  long lStack_e0;
  undefined1 auStack_d8 [120];
  
  if (param_2 == 0) {
    (*param_7)(param_1,0,3);
  }
  else {
    FUN_100de5f68(param_3,param_4,param_5,param_6);
    func_0x000103ff4498(auStack_d8,param_3,param_4,param_5,param_6);
    func_0x000100083b20(auStack_100);
    func_0x0001000a8868(auStack_100,uStack_e8);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
    puVar1 = &UNK_110353260;
    func_0x000107c613fc(&UNK_110353260,0x30,7);
    *(code **)(puVar1 + 0x10) = param_7;
    *(undefined8 *)(puVar1 + 0x18) = param_8;
    *(undefined8 *)(puVar1 + 0x20) = param_1;
    *(long *)(puVar1 + 0x28) = param_2;
    pcVar2 = *(code **)(lStack_e0 + 0x10);
    func_0x000107c6157c(param_8);
    func_0x000107c61434(param_2);
    (*pcVar2)(param_1,param_2,uVar3,auStack_d8,FUN_100de678c,puVar1,uStack_e8,lStack_e0);
    FUN_100de66dc(auStack_d8);
    func_0x000107c61574(puVar1);
    func_0x0001000834e4(auStack_100);
  }
  return;
}



/* Entry: 100de642c; end: 100de651f;  */

void FUN_100de642c(undefined8 param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_80 [64];
  
  FUN_100de6798(param_1,auStack_80);
  func_0x000107c61434(param_5);
  func_0x000103ff4a78(param_1,param_4,param_5);
  (*param_2)();
  FUN_100de5fcc(param_1,param_4,param_5);
  return;
}



/* Entry: 100de6520; end: 100de6573;  */

void FUN_100de6520(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100de6574; end: 100de6613;  */

void FUN_100de6574(void)

{
  FUN_100de613c();
  return;
}



/* Entry: 100de6614; end: 100de66cf;  */

void FUN_100de6614(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long *unaff_x20;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  long lStack_58;
  
  lVar3 = *unaff_x20;
  func_0x000100083b20(auStack_78);
  func_0x0001000a8868(auStack_78,uStack_60);
  uVar4 = *(undefined8 *)(lVar3 + 0x18);
  puVar1 = &UNK_110353238;
  func_0x000107c613fc(&UNK_110353238,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  pcVar2 = *(code **)(lStack_58 + 8);
  func_0x000107c6157c(param_2);
  (*pcVar2)(uVar4,FUN_100de6710,puVar1,uStack_60,lStack_58);
  func_0x000107c61574(puVar1);
  func_0x0001000834e4(auStack_78);
  return;
}



/* Entry: 100de66d0; end: 100de66db;  */

void FUN_100de66d0(undefined8 *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar1 = (uint)((ulong)param_1[6] >> 0x3c) & 3 | (*(byte *)(param_1 + 7) & 0x3f) << 2;
  if (uVar1 < 2) {
    if (uVar1 != 0) {
      (**(code **)(unaff_x20 + 0x10))
                (param_1,*(code **)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                 *(code **)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
      return;
    }
    uVar2 = 0;
    uVar3 = 0;
  }
  else {
    uVar2 = *param_1;
    uVar3 = param_1[1];
  }
  (**(code **)(unaff_x20 + 0x20))(uVar2,uVar3);
  return;
}



/* Entry: 100de66dc; end: 100de670f;  */

undefined8 FUN_100de66dc(undefined8 param_1)

{
  (*(code *)&DAT_104002420)();
  return param_1;
}



/* Entry: 100de6710; end: 100de6717;  */

void FUN_100de6710(undefined8 param_1)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_78 [56];
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar2 = auStack_78;
  FUN_100de6718(param_1,puVar2,uVar3);
  func_0x000103ff50d0(param_1);
  (*pcVar1)();
  func_0x000100dd0920(param_1,puVar2,uVar3);
  return;
}



/* Entry: 100de6718; end: 100de678b;  */

undefined8 FUN_100de6718(undefined8 param_1,undefined8 param_2)

{
  (*(code *)&DAT_103ff5df8)(param_2,param_1);
  return param_2;
}



/* Entry: 100de678c; end: 100de6797;  */

void FUN_100de678c(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_80 [64];
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  FUN_100de6798(param_1,auStack_80,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61434(uVar3);
  func_0x000103ff4a78(param_1,uVar2,uVar3);
  (*pcVar1)();
  FUN_100de5fcc(param_1,uVar2,uVar3);
  return;
}



/* Entry: 100de6798; end: 100de67d3;  */

undefined8 FUN_100de6798(undefined8 param_1,undefined8 param_2)

{
  (*(code *)&DAT_103ff6138)(param_2,param_1);
  return param_2;
}



/* Entry: 100de67d4; end: 100de6817;  */

void FUN_100de67d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  return;
}



/* Entry: 100de6818; end: 100de6b2b;  */

void FUN_100de6818(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  func_0x000107c41870();
  func_0x000107c61180();
  puVar3 = &UNK_1103532f8;
  func_0x000107c613fc(&UNK_1103532f8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  puVar4 = &UNK_110353320;
  func_0x000107c613fc(&UNK_110353320,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_100de6eb0;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x100de6ed8;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_100de6b2c;
  puStack_88 = &UNK_110353338;
  ppuVar5 = &puStack_a0;
  puStack_78 = puVar4;
  func_0x000107c60bc4();
  puVar6 = puStack_78;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar6);
  puVar6 = &UNK_110353370;
  func_0x000107c613fc(&UNK_110353370,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = param_4;
  *(undefined8 *)(puVar6 + 0x18) = param_5;
  puVar7 = &UNK_110353398;
  func_0x000107c613fc(&UNK_110353398,0x20,7);
  *(undefined8 *)(puVar7 + 0x10) = 0x100de6ef8;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  uStack_80 = 0x100de6f18;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_100de6b64;
  puStack_88 = &UNK_1103533b0;
  ppuVar8 = &puStack_a0;
  puStack_78 = puVar7;
  func_0x000107c60bc4(ppuVar8);
  puVar9 = puStack_78;
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar9);
  puVar9 = &UNK_1103533e8;
  func_0x000107c613fc(&UNK_1103533e8,0x20,7);
  *(undefined8 *)(puVar9 + 0x10) = param_2;
  *(undefined8 *)(puVar9 + 0x18) = param_3;
  puVar10 = &UNK_110353410;
  func_0x000107c613fc(&UNK_110353410,0x20,7);
  *(undefined8 *)(puVar10 + 0x10) = 0x100de6f38;
  *(undefined **)(puVar10 + 0x18) = puVar9;
  uStack_80 = 0x100de6f58;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_100de6bdc;
  puStack_88 = &UNK_110353428;
  ppuVar11 = &puStack_a0;
  puStack_78 = puVar10;
  func_0x000107c60bc4(ppuVar11);
  puVar1 = puStack_78;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(puVar10);
  func_0x000107c61574(puVar1);
  func_0x000107c4c748(param_1);
  func_0x000107c60bd0(ppuVar11);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puVar3);
  func_0x000107c61170(param_1);
  puVar3 = puVar4;
  func_0x000107c61544(puVar4,"",0x6e,0x1b,0x2c,1);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100de6b24);
    (*pcVar2)();
  }
  puVar3 = puVar7;
  func_0x000107c61544(puVar7,"",0x6e,0x20,0x27,1);
  func_0x000107c61574(puVar9);
  func_0x000107c61574(puVar7);
  if (((ulong)puVar3 & 1) == 0) {
    puVar3 = puVar10;
    func_0x000107c61544(puVar10,"",0x6e,0x23,0x1a,1);
    func_0x000107c61574(puVar10);
    if (((ulong)puVar3 & 1) == 0) {
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100de6b2c);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100de6b28);
  (*pcVar2)();
}



/* Entry: 100de6b2c; end: 100de6b63;  */

void FUN_100de6b2c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  func_0x000107c61174(param_2);
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100de6b64; end: 100de6bdb;  */

void FUN_100de6b64(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar3 = param_2;
  func_0x000107c5faec(param_2);
  uVar2 = param_4;
  func_0x000107c61174(param_4);
  (*pcVar1)(param_2,uVar3,param_3,param_4);
  func_0x000107c6142c(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 100de6bdc; end: 100de6c5f;  */

void FUN_100de6bdc(long param_1,undefined8 param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  func_0x000107c5faec(param_2);
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 100de6c60; end: 100de6c8b;  */

void FUN_100de6c60(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100de6c8c; end: 100de6ccf;  */

void FUN_100de6c8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  FUN_100de6cd0(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  return;
}



/* Entry: 100de6cd0; end: 100de6e67;  */

/* WARNING: Possible PIC construction at 0x000100de6e08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100de6e20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100de6e0c) */
/* WARNING: Removing unreachable block (ram,0x000100de6e24) */

void FUN_100de6cd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  func_0x000100de5f24(0);
  FUN_100de5f68(param_1,param_2,param_3,param_4);
  func_0x000104060028(param_1,param_2,param_3,param_4);
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c5ee20(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
    puVar2 = &UNK_1103532a8;
    func_0x000107c613fc(&UNK_1103532a8,0x30,7);
    *(undefined8 *)(puVar2 + 0x10) = param_7;
    *(undefined8 *)(puVar2 + 0x18) = param_8;
    *(undefined8 *)(puVar2 + 0x20) = param_5;
    *(undefined8 *)(puVar2 + 0x28) = param_6;
    pcStack_70 = FUN_100de6e88;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    uStack_80 = 0x100de6c14;
    puStack_78 = &UNK_1103532c0;
    puStack_68 = puVar2;
    func_0x000107c60bc4(&puStack_90);
    puVar2 = puStack_68;
    func_0x000107c6157c(param_8);
    func_0x000107c6157c(param_6);
    func_0x000107c61574(puVar2);
    func_0x000107c3de08(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100de6e68; end: 100de6e87;  */

void FUN_100de6e68(void)

{
  func_0x000107c61168(&PTR_PTR_112d36c80);
  return;
}



/* Entry: 100de6e88; end: 100de6eaf;  */

void FUN_100de6e88(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  code *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c41870();
  func_0x000107c61180();
  puVar7 = &UNK_1103532f8;
  func_0x000107c613fc(&UNK_1103532f8,0x20,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar1;
  *(undefined8 *)(puVar7 + 0x18) = uVar3;
  puVar8 = &UNK_110353320;
  func_0x000107c613fc(&UNK_110353320,0x20,7);
  *(code **)(puVar8 + 0x10) = FUN_100de6eb0;
  *(undefined **)(puVar8 + 0x18) = puVar7;
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x100de6ed8;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_100de6b2c;
  puStack_88 = &UNK_110353338;
  ppuVar9 = &puStack_a0;
  puStack_78 = puVar8;
  func_0x000107c60bc4();
  puVar10 = puStack_78;
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(puVar8);
  func_0x000107c61574(puVar10);
  puVar10 = &UNK_110353370;
  func_0x000107c613fc(&UNK_110353370,0x20,7);
  *(undefined8 *)(puVar10 + 0x10) = uVar2;
  *(undefined8 *)(puVar10 + 0x18) = uVar4;
  puVar11 = &UNK_110353398;
  func_0x000107c613fc(&UNK_110353398,0x20,7);
  *(undefined8 *)(puVar11 + 0x10) = 0x100de6ef8;
  *(undefined **)(puVar11 + 0x18) = puVar10;
  uStack_80 = 0x100de6f18;
  puStack_a0 = puVar5;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_100de6b64;
  puStack_88 = &UNK_1103533b0;
  ppuVar12 = &puStack_a0;
  puStack_78 = puVar11;
  func_0x000107c60bc4(ppuVar12);
  puVar13 = puStack_78;
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(puVar11);
  func_0x000107c61574(puVar13);
  puVar13 = &UNK_1103533e8;
  func_0x000107c613fc(&UNK_1103533e8,0x20,7);
  *(undefined8 *)(puVar13 + 0x10) = uVar1;
  *(undefined8 *)(puVar13 + 0x18) = uVar3;
  puVar14 = &UNK_110353410;
  func_0x000107c613fc(&UNK_110353410,0x20,7);
  *(undefined8 *)(puVar14 + 0x10) = 0x100de6f38;
  *(undefined **)(puVar14 + 0x18) = puVar13;
  uStack_80 = 0x100de6f58;
  puStack_a0 = puVar5;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_100de6bdc;
  puStack_88 = &UNK_110353428;
  ppuVar15 = &puStack_a0;
  puStack_78 = puVar14;
  func_0x000107c60bc4(ppuVar15);
  puVar5 = puStack_78;
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(puVar14);
  func_0x000107c61574(puVar5);
  func_0x000107c4c748(param_1);
  func_0x000107c60bd0(ppuVar15);
  func_0x000107c60bd0(ppuVar12);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c61574(puVar7);
  func_0x000107c61170(param_1);
  puVar7 = puVar8;
  func_0x000107c61544(puVar8,"",0x6e,0x1b,0x2c,1);
  func_0x000107c61574(puVar10);
  func_0x000107c61574(puVar8);
  if (((ulong)puVar7 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x100de6b24);
    (*pcVar6)();
  }
  puVar7 = puVar11;
  func_0x000107c61544(puVar11,"",0x6e,0x20,0x27,1);
  func_0x000107c61574(puVar13);
  func_0x000107c61574(puVar11);
  if (((ulong)puVar7 & 1) == 0) {
    puVar7 = puVar14;
    func_0x000107c61544(puVar14,"",0x6e,0x23,0x1a,1);
    func_0x000107c61574(puVar14);
    if (((ulong)puVar7 & 1) == 0) {
      return;
    }
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x100de6b2c);
    (*pcVar6)();
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x100de6b28);
  (*pcVar6)();
}



/* Entry: 100de6eb0; end: 100de6f77;  */

void FUN_100de6eb0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(0,0);
  return;
}



/* Entry: 100de6f78; end: 100de6f8f;  */

void FUN_100de6f78(long param_1,long param_2)

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



/* Entry: 100de6f90; end: 100de6feb;  */

void FUN_100de6f90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  func_0x000107c61170(param_2);
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  return;
}



/* Entry: 100de6fec; end: 100de789f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100de6fec(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long extraout_x8;
  ulong uVar11;
  long extraout_x8_00;
  undefined8 uVar12;
  long unaff_x20;
  code *pcVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 uVar16;
  ulong *puVar17;
  undefined8 uVar18;
  long lVar19;
  long alStack_180 [2];
  code *pcStack_170;
  ulong uStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  ulong uStack_140;
  long lStack_128;
  long lStack_120;
  undefined8 auStack_118 [3];
  long lStack_100;
  undefined **ppuStack_f8;
  long alStack_f0 [3];
  long lStack_d8;
  undefined **ppuStack_d0;
  long alStack_c8 [3];
  long lStack_b0;
  undefined **ppuStack_a8;
  long alStack_a0 [4];
  undefined **ppuStack_80;
  
  lVar2 = 0;
  func_0x000100df03ac();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar9 = (long)alStack_180 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar12 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_113083800);
  lVar3 = 0;
  FUN_100de4510();
  lVar4 = lVar3;
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x10) = uVar12;
  puVar5 = PTR_PTR_1126a5d30;
  func_0x000107c610f8();
  func_0x000107c61174(uVar12);
  func_0x000107c453e4();
  lVar7 = _DAT_113052548;
  puVar17 = *(ulong **)(unaff_x20 + 0x10);
  uVar12 = *(undefined8 *)((long)puVar17 + _DAT_113052548);
  ppuStack_80 = &PTR_DAT_110352c58;
  lVar6 = 0;
  alStack_a0[0] = lVar4;
  alStack_a0[3] = lVar3;
  func_0x000100de4ff4();
  lVar4 = lVar6;
  func_0x000107c613fc();
  FUN_100dd2598(alStack_a0,lVar4 + 0x18);
  *(undefined **)(lVar4 + 0x10) = puVar5;
  *(undefined8 *)(lVar4 + 0x40) = uVar12;
  lVar3 = *(long *)((long)puVar17 + _DAT_113052538);
  if (lVar3 == 0) {
    func_0x000107c61174(uVar12);
    lVar7 = 2;
    FUN_100de4618();
    (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar17) + 0x78))();
    if (lVar7 != 0) {
      func_0x000107c3da34();
      func_0x000107c615e8(lVar7);
    }
    goto LAB_100de7878;
  }
  uVar11 = *(ulong *)(lVar3 + _DAT_1130524b8);
  if (uVar11 >> 0x3e == 0) {
    if (*(long *)((uVar11 & 0xffffffffffffff8) + 0x10) != 0) goto LAB_100de712c;
LAB_100de7818:
    func_0x000107c61174(uVar12);
    func_0x000107c61174(lVar3);
    lVar7 = 0;
  }
  else {
    uVar10 = uVar11 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar11) {
      uVar10 = uVar11;
    }
    func_0x000107c60480();
    if (uVar10 == 0) goto LAB_100de7818;
LAB_100de712c:
    uVar11 = ((long *)((long)puVar17 + _DAT_113052540))[1];
    if (uVar11 >> 0x3c < 0xf) {
      lStack_158 = lVar7;
      lVar19 = *(long *)((long)puVar17 + _DAT_113052540);
      uVar16 = *(undefined8 *)(unaff_x20 + 0x20);
      func_0x000107c61174(uVar12);
      func_0x000107c61174();
      lStack_150 = lVar3;
      FUN_100de78a0(lVar19,uVar11);
      func_0x000107c4ac74();
      func_0x000107c61180();
      lVar7 = 0;
      FUN_100de6e68();
      lVar3 = lVar7;
      lStack_160 = lVar7;
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x10) = uVar16;
      *(long *)(lVar3 + 0x18) = lVar19;
      *(ulong *)(lVar3 + 0x20) = uVar11;
      pcVar13 = *(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar17) + 0x78);
      lStack_148 = lVar19;
      uStack_140 = uVar11;
      func_0x00010006c00c(lVar19,uVar11);
      (*pcVar13)();
      ppuStack_80 = (undefined **)0x0;
      alStack_a0[1] = 0;
      alStack_a0[0] = 0;
      alStack_a0[3] = 0;
      alStack_a0[2] = 0;
      ppuStack_a8 = &PTR_DAT_110352d18;
      ppuStack_d0 = &PTR_DAT_110353288;
      lVar8 = 0;
      alStack_180[0] = lVar19;
      alStack_f0[0] = lVar3;
      lStack_d8 = lVar7;
      alStack_c8[0] = lVar4;
      lStack_b0 = lVar6;
      FUN_100dec988();
      func_0x000107c613fc();
      func_0x0001000c6518(alStack_c8,lVar6);
      lVar7 = *(long *)(*(long *)(lVar6 + -8) + 0x40);
      alStack_180[1] = lVar9;
      (*(code *)PTR____chkstk_darwin_11034bd40)();
      uStack_168 = lVar7 + 0xfU & 0xfffffffffffffff0;
      puVar14 = (undefined8 *)(lVar9 - uStack_168);
      pcStack_170 = *(code **)(extraout_x8_00 + 0x10);
      (*pcStack_170)(puVar14);
      lVar7 = _DAT_112d36e98;
      auStack_118[0] = *puVar14;
      ppuStack_f8 = &PTR_DAT_110352d18;
      lStack_100 = lVar6;
      func_0x000107c61614(lVar8 + _DAT_112d36e98,0);
      func_0x000107c61604(lVar8 + lVar7,lVar19);
      FUN_100de78b4(auStack_118,lVar8 + _DAT_112d36ea0);
      FUN_100de78b4(alStack_f0,lVar8 + _DAT_112d36ea8);
      func_0x000100de78f8(alStack_a0,lVar8 + _DAT_112d36eb0);
      uVar12 = 0;
      FUN_100dee474(0);
      func_0x000107c6159c(lVar9,uVar12,5);
      iVar1 = *(int *)(lVar2 + 0x14);
      lVar7 = 0;
      FUN_100dd8cfc();
      (**(code **)(*(long *)(lVar7 + -8) + 0x38))(lVar9 + iVar1,1,1,lVar7);
      *(undefined1 *)(lVar9 + *(int *)(lVar2 + 0x18)) = 5;
      puVar14 = (undefined8 *)(lVar9 + *(int *)(lVar2 + 0x1c));
      *puVar14 = 0;
      puVar14[1] = 0;
      func_0x000107c61580(lVar4,2);
      func_0x000107c61580(lVar3,2);
      func_0x000103dbf4dc();
      func_0x0001000a8868(auStack_118,lStack_100);
      FUN_100de4d74();
      func_0x000107c61574(lVar4);
      func_0x000107c61574(lVar3);
      func_0x000107c615e8(alStack_180[0]);
      func_0x000100de7948(alStack_a0);
      func_0x0001000834e4(alStack_f0);
      func_0x0001000834e4(auStack_118);
      func_0x0001000834e4(alStack_c8);
      lVar7 = alStack_180[1];
      uVar16 = *(undefined8 *)((long)puVar17 + lStack_158);
      uVar18 = *(undefined8 *)((long)puVar17 + _DAT_113052530);
      alStack_180[1] = *(undefined8 *)(unaff_x20 + 0x28);
      alStack_a0[3] = lStack_160;
      ppuStack_80 = &PTR_DAT_110353288;
      ppuStack_a8 = &PTR_DAT_110352d18;
      lVar19 = 0;
      alStack_c8[0] = lVar4;
      lStack_b0 = lVar6;
      alStack_a0[0] = lVar3;
      FUN_100de9a08();
      lStack_158 = lVar19;
      func_0x000107c610f8();
      func_0x0001000c6518(alStack_c8,lVar6);
      (*(code *)PTR____chkstk_darwin_11034bd40)();
      plVar15 = (long *)(lVar7 - uStack_168);
      (*pcStack_170)(plVar15);
      lVar7 = _DAT_112d36e00;
      alStack_f0[0] = *plVar15;
      ppuStack_d0 = &PTR_DAT_110352d18;
      lStack_d8 = lVar6;
      func_0x0001000c6560(0);
      func_0x000107c613fc();
      func_0x000107c61580(lVar4,2);
      func_0x000107c61580(lVar3,2);
      lVar6 = lStack_150;
      func_0x000107c61174();
      func_0x000107c6157c(lVar9);
      func_0x000107c61174();
      uVar12 = uVar18;
      func_0x000107c615f0();
      func_0x0001000c6580();
      *(undefined8 *)(lVar19 + lVar7) = uVar12;
      *(undefined8 *)(lVar19 + _DAT_112d36e08) = 0;
      *(undefined8 *)(lVar19 + _DAT_112d36e10) = 0;
      lVar7 = _DAT_112d36db0;
      *(undefined8 *)(lVar19 + _DAT_112d36db0) = uVar18;
      *(long *)(lVar19 + _DAT_112d36dd0) = lVar9;
      *(undefined8 *)(lVar19 + _DAT_112d36df0) = uVar16;
      FUN_100de78b4(alStack_a0,lVar19 + _DAT_112d36dd8);
      *(long *)(lVar19 + _DAT_112d36de0) = lVar6;
      FUN_100de78b4(alStack_f0,lVar19 + _DAT_112d36de8);
      lVar2 = alStack_180[1];
      *(long *)(lVar19 + _DAT_112d36df8) = alStack_180[1];
      uVar12 = 0;
      func_0x000100df1f6c();
      func_0x000107c614e8();
      func_0x000107c610f8();
      func_0x000107c61174();
      lStack_150 = lVar6;
      func_0x000107c6157c(lVar9);
      func_0x000107c61174();
      lStack_160 = uVar16;
      func_0x000107c615f0(uVar18);
      func_0x000107c61174(lVar2);
      func_0x000107c453e4();
      *(undefined8 *)(lVar19 + _DAT_112d36db8) = uVar12;
      func_0x000107c5677c();
      func_0x000107c3e2c0(*(undefined8 *)(lVar19 + lVar7));
      puVar5 = PTR_PTR_1126c3b20;
      func_0x000107c610f8();
      func_0x000107c48074();
      *(undefined **)(lVar19 + _DAT_112d36dc0) = puVar5;
      puVar5 = PTR_PTR_1126aead8;
      func_0x000107c610f8();
      func_0x000107c4807c();
      *(undefined **)(lVar19 + _DAT_112d36dc8) = puVar5;
      lStack_120 = lStack_158;
      plVar15 = &lStack_128;
      lStack_128 = lVar19;
      func_0x000107c61154(plVar15,PTR_s_init_1125d9248);
      lVar7 = lStack_150;
      func_0x000107c615e8(uVar18);
      func_0x000107c61574(lVar9);
      func_0x000107c61170(lStack_160);
      func_0x000107c61170(lVar7);
      func_0x000107c61574(lVar3);
      func_0x000107c61574(lVar4);
      func_0x0001000834e4(alStack_a0);
      func_0x0001000834e4(alStack_f0);
      func_0x0001000834e4(alStack_c8);
      uVar12 = *(undefined8 *)(unaff_x20 + 0x30);
      *(long **)(unaff_x20 + 0x30) = plVar15;
      func_0x000107c61170(uVar12);
      lVar2 = *(long *)(unaff_x20 + 0x30);
      if (lVar2 == 0) {
        func_0x0001000b44c0(lStack_148,uStack_140);
      }
      else {
        func_0x000107c61174();
        FUN_100de7e18();
        func_0x0001000b44c0(lStack_148,uStack_140);
        func_0x000107c61170(lVar2);
      }
      func_0x000107c61170(lVar7);
      func_0x000107c61574(lVar9);
      func_0x000107c61574(lVar3);
      goto LAB_100de7878;
    }
    func_0x000107c61174(uVar12);
    func_0x000107c61174(lVar3);
    lVar7 = 1;
  }
  FUN_100de4618();
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar17) + 0x78))();
  if (lVar7 != 0) {
    func_0x000107c3da34();
    func_0x000107c615e8(lVar7);
  }
  func_0x000107c61170(lVar3);
LAB_100de7878:
  func_0x000107c61574(lVar4);
  return;
}



/* Entry: 100de78a0; end: 100de78b3;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_100de78a0(ulong param_1,ulong param_2)

{
  uint uVar1;
  
  if (0xe < param_2 >> 0x3c) {
    return;
  }
  uVar1 = (uint)(param_2 >> 0x3e);
  if (uVar1 == 1) {
    param_1 = param_2 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_1);
  return;
}



/* Entry: 100de78b4; end: 100de798f;  */

long FUN_100de78b4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 100de7990; end: 100de79d3;  */

void FUN_100de7990(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100de79d4; end: 100de79f3;  */

void FUN_100de79d4(void)

{
  FUN_100de6fec();
  return;
}



/* Entry: 100de79f4; end: 100de79fb;  */

undefined8 FUN_100de79f4(void)

{
  return 0;
}



/* Entry: 100de79fc; end: 100de7a1b;  */

void FUN_100de79fc(void)

{
  func_0x000107c61168(&PTR_PTR_112d36d30);
  return;
}



/* Entry: 100de7a1c; end: 100de7e17;  */

undefined * FUN_100de7a1c(undefined *param_1)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong *puVar12;
  long lVar13;
  undefined *puVar14;
  ulong uVar15;
  long lVar16;
  undefined *puStack_b8;
  undefined *puStack_90;
  undefined *puStack_88;
  ulong *puStack_80;
  ulong uStack_78;
  long lStack_70;
  ulong uStack_68;
  undefined *puStack_58;
  
  if (((ulong)param_1 & 0xc000000000000001) == 0) {
    uVar15 = -1L << ((ulong)(byte)param_1[0x20] & 0x3f);
    puVar12 = (ulong *)(param_1 + 0x38);
    uVar11 = ~uVar15;
    uVar15 = -uVar15;
    uVar8 = 0xffffffffffffffff;
    if (uVar15 < 0x40) {
      uVar8 = ~(-1L << (uVar15 & 0x3f));
    }
    uVar8 = uVar8 & *puVar12;
    puVar7 = param_1;
    func_0x000107c61434();
    lVar13 = 0;
  }
  else {
    puVar7 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_1) {
      puVar7 = param_1;
    }
    func_0x000107c61434(param_1);
    func_0x000107c60288();
    uVar4 = 0;
    func_0x000100847944(0,0x112d36e40,&PTR__OBJC_CLASS___UIScene_1126a5d50);
    uVar5 = uVar4;
    FUN_100deaee4();
    func_0x000107c5fe30(&puStack_88,puVar7,uVar4,uVar5);
    uVar11 = uStack_78;
    param_1 = puStack_88;
    puVar12 = puStack_80;
    lVar13 = lStack_70;
    uVar8 = uStack_68;
  }
  puStack_b8 = PTR___swiftEmptyArrayStorage_11034f1c8;
LAB_100de7b04:
  lVar2 = lVar13;
  uVar15 = uVar8;
  if (-1 < (long)param_1) goto joined_r0x000100de7b40;
  while (func_0x000107c602ac(), puVar7 != (undefined *)0x0) {
    uVar5 = 0;
    puStack_90 = puVar7;
    func_0x000100847944(0,0x112d36e40,&PTR__OBJC_CLASS___UIScene_1126a5d50);
    func_0x000107c6147c(&puStack_58,&puStack_90,PTR___syXlN_11034f1a0 + 8,uVar5,7);
    uVar15 = uVar8;
    lVar2 = lVar13;
    lVar16 = lVar13;
    puVar7 = PTR__OBJC_CLASS___UIWindowScene_1126b6b80;
    puVar10 = puStack_58;
    while( true ) {
      lVar13 = lVar2;
      PTR__OBJC_CLASS___UIWindowScene_1126b6b80 = puVar7;
      if (puVar10 == (undefined *)0x0) goto LAB_100de7dd0;
      func_0x000107c61168(puVar7);
      puVar14 = puVar10;
      func_0x000107c6148c(puVar10,puVar7);
      if (puVar14 == (undefined *)0x0) {
        func_0x000107c61170();
        puVar7 = puVar10;
      }
      else {
        func_0x000107c5e408();
        func_0x000107c61180();
        uVar5 = 0;
        func_0x000100847944(0,0x112d36e50,&PTR__OBJC_CLASS___UIWindow_1126c3e70);
        puVar7 = puVar14;
        func_0x000107c5fc54(puVar14,uVar5);
        func_0x000107c61170(puVar14);
        if ((ulong)puVar7 >> 0x3e == 0) {
          puVar14 = *(undefined **)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar14 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar7) {
            puVar14 = puVar7;
          }
          func_0x000107c60480();
        }
        if (puVar14 != (undefined *)0x0) {
          uVar15 = 0;
          do {
            if (((ulong)puVar7 & 0xc000000000000001) == 0) {
              if (*(ulong *)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x100de7e14);
                (*pcVar3)();
              }
              uVar6 = *(ulong *)(puVar7 + uVar15 * 8 + 0x20);
              func_0x000107c61174();
            }
            else {
              uVar6 = uVar15;
              FUN_100de9de8(uVar15,puVar7);
            }
            puVar1 = (undefined *)(uVar15 + 1);
            if (SCARRY8(uVar15,1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x100de7e10);
              (*pcVar3)();
            }
            uVar9 = uVar6;
            func_0x000107c49f64();
            if ((int)uVar9 != 0) {
              func_0x000107c61170(puVar10);
              func_0x000107c6142c(puVar7);
              puVar7 = puStack_b8;
              func_0x000107c61550();
              if (((((ulong)puVar7 & 1) == 0) || ((long)puStack_b8 < 0)) ||
                 (((ulong)puStack_b8 >> 0x3e & 1) != 0)) {
                if ((ulong)puStack_b8 >> 0x3e == 0) {
                  puVar10 = *(undefined **)(((ulong)puStack_b8 & 0xffffffffffffff8) + 0x10);
                }
                else {
                  puVar10 = (undefined *)((ulong)puStack_b8 & 0xffffffffffffff8);
                  if ((undefined *)0x7fffffffffffffff < puStack_b8) {
                    puVar10 = puStack_b8;
                  }
                  func_0x000107c60480(puVar10);
                }
                puVar7 = (undefined *)0x0;
                FUN_100dea1c8(0,puVar10 + 1,1,puStack_b8);
                puStack_b8 = puVar7;
              }
              uVar9 = (ulong)puStack_b8 & 0xffffffffffffff8;
              uVar15 = *(ulong *)(uVar9 + 0x10);
              if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar15) {
                puVar7 = (undefined *)(ulong)(1 < *(ulong *)(uVar9 + 0x18));
                FUN_100dea1c8(puVar7,uVar15 + 1,1,puStack_b8);
                uVar9 = (ulong)puVar7 & 0xffffffffffffff8;
                puStack_b8 = puVar7;
              }
              *(ulong *)(uVar9 + 0x10) = uVar15 + 1;
              *(ulong *)(uVar9 + uVar15 * 8 + 0x20) = uVar6;
              goto LAB_100de7b04;
            }
            func_0x000107c61170(uVar6);
            uVar15 = uVar15 + 1;
          } while (puVar1 != puVar14);
        }
        func_0x000107c61170(puVar10);
        func_0x000107c6142c();
      }
      lVar2 = lVar13;
      uVar15 = uVar8;
      if ((long)param_1 < 0) break;
joined_r0x000100de7b40:
      while (uVar8 == 0) {
        lVar16 = lVar2 + 1;
        if (SCARRY8(lVar2,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100de7e18);
          (*pcVar3)();
        }
        if ((long)(uVar11 + 0x40 >> 6) <= lVar16) {
          uVar8 = 0;
          goto LAB_100de7dcc;
        }
        lVar2 = lVar16;
        uVar8 = puVar12[lVar16];
      }
      uVar6 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 - 1 & uVar8;
      puVar10 = *(undefined **)
                 (*(long *)(param_1 + 0x30) + LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) * 8 +
                 lVar2 * 0x200);
      puStack_58 = puVar10;
      func_0x000107c61174(puVar10);
      lVar16 = lVar13;
      puVar7 = PTR__OBJC_CLASS___UIWindowScene_1126b6b80;
    }
  }
LAB_100de7dcc:
  puStack_58 = (undefined *)0x0;
  uVar15 = uVar8;
  lVar16 = lVar13;
LAB_100de7dd0:
  FUN_100deaf38(param_1,puVar12,uVar11,lVar16,uVar15);
  return puStack_b8;
}



/* Entry: 100de7e18; end: 100de8417;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100de7e18(void)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  long *plVar4;
  undefined *puVar5;
  code *pcVar6;
  code *pcVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  long extraout_x8;
  long unaff_x20;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  
  lVar1 = 0;
  FUN_100ded4cc();
  lVar2 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar11 = (undefined8 *)(&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  plVar10 = *(long **)(unaff_x20 + _DAT_112d36dd0);
  (**(code **)(*plVar10 + 0x98))();
  pcVar3 = "begin()";
  func_0x0001000c10c0();
  func_0x000107c61180();
  plVar4 = (long *)pcVar3;
  func_0x000100471e0c();
  func_0x000107c61574(lVar2);
  func_0x000107c615e8(pcVar3);
  puVar5 = &UNK_110353510;
  func_0x000107c613fc(&UNK_110353510,0x18,7);
  func_0x000107c61614(puVar5 + 0x10);
  pcVar6 = FUN_100deb020;
  puVar9 = puVar5;
  (**(code **)(*plVar4 + 0x60))(FUN_100deb020);
  func_0x000107c61574(plVar4);
  func_0x000107c61574(puVar5);
  pcVar7 = pcVar6;
  func_0x000107c614f0(pcVar6);
  (**(code **)(puVar9 + 0x10))(*(undefined8 *)(unaff_x20 + _DAT_112d36e00),pcVar7,puVar9);
  func_0x000107c615e8(pcVar6);
  func_0x0001000285a8(0x112d36e90,&UNK_10d901350);
  uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112d36de0);
  *puVar11 = uVar12;
  func_0x000107c6159c(puVar11,lVar1,0);
  func_0x000107c61174(uVar12);
  puVar8 = puVar11;
  func_0x000100854cb0(puVar11);
  func_0x000100deb06c(puVar11,FUN_100ded4cc);
  (**(code **)(*plVar10 + 0xa8))(puVar8);
  func_0x000107c61574(puVar8);
  return;
}



/* Entry: 100de8418; end: 100de84bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100de8418(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar1 = 0;
    FUN_100dd6b1c();
    func_0x000107c614e8();
    func_0x000107c610f8();
    func_0x000107c453e4();
    uVar2 = *(undefined8 *)(param_1 + _DAT_112d36e10);
    *(undefined8 *)(param_1 + _DAT_112d36e10) = uVar1;
    func_0x000107c61174();
    func_0x000107c61170(uVar2);
    func_0x000107c3e2c0(*(undefined8 *)(param_1 + _DAT_112d36dc0));
    func_0x000107c61170(param_1);
    func_0x000107c61170(uVar1);
  }
  return;
}



/* Entry: 100de84c0; end: 100de8803;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100de84c0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  char param_5,undefined8 param_6)

{
  long lVar1;
  long ****pppplVar2;
  undefined *puVar3;
  code *pcVar4;
  code *pcVar5;
  long lVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  undefined8 uVar8;
  long *plVar9;
  long **pplVar10;
  double dVar11;
  long lStack_b0;
  long ***ppplStack_a8;
  char cStack_a0;
  long lStack_90;
  undefined **ppuStack_88;
  
  if (param_5 != '\x05') {
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112d36df8);
    lVar1 = 0;
    FUN_100de0fbc();
    lVar6 = lVar1;
    func_0x000107c613fc();
    FUN_100deafdc(param_6,lVar6 + 0x30);
    *(undefined8 *)(lVar6 + 0x58) = uVar8;
    ppplStack_a8 = (long ***)0x0;
    cStack_a0 = param_5;
    func_0x000107c61174(uVar8);
    pppplVar2 = &ppplStack_a8;
    func_0x000103dbf4dc();
    ppuStack_88 = &PTR_DAT_110352b40;
    uVar8 = 0;
    ppplStack_a8 = (long ***)pppplVar2;
    lStack_90 = lVar1;
    FUN_100de4180(0);
    func_0x000107c610f8();
    func_0x0001000c6518(&ppplStack_a8,lVar1);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
    plVar9 = (long *)((long)&lStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
    (**(code **)(extraout_x12 + 0x10))(plVar9);
    lVar1 = *plVar9;
    func_0x000107c6157c(pppplVar2);
    func_0x000100dea6fc(lVar1,uVar8);
    func_0x0001000834e4(&ppplStack_a8);
    plVar9 = *(long **)(lVar1 + _DAT_112d36868);
    pplVar10 = (*pppplVar2)[0x15];
    func_0x000107c6157c(pppplVar2);
    func_0x000107c6157c(plVar9);
    (*(code *)pplVar10)();
    func_0x000107c61574();
    (*(code *)(*pppplVar2)[0x13])();
    func_0x000107c61574(pppplVar2);
    puVar3 = &UNK_110353510;
    func_0x000107c613fc(&UNK_110353510,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    pcVar4 = FUN_100deafd4;
    puVar7 = puVar3;
    (**(code **)(*plVar9 + 0x60))(FUN_100deafd4);
    func_0x000107c61574(plVar9);
    func_0x000107c61574(puVar3);
    pcVar5 = pcVar4;
    func_0x000107c614f0(pcVar4);
    (**(code **)(puVar7 + 0x10))(*(undefined8 *)(unaff_x20 + _DAT_112d36e00),pcVar5,puVar7);
    func_0x000107c615e8(pcVar4);
    puVar3 = PTR_PTR_1126b0a08;
    func_0x000107c610f8();
    func_0x000107c48e84();
    lVar6 = _DAT_112d36e08;
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112d36e08);
    *(undefined **)(unaff_x20 + _DAT_112d36e08) = puVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar8);
    if (puVar3 != (undefined *)0x0) {
      func_0x000107c52aa4(puVar3);
      func_0x000107c61170(puVar3);
    }
    if (*(long *)(unaff_x20 + lVar6) != 0) {
      func_0x000107c52684();
      if (*(long *)(unaff_x20 + lVar6) != 0) {
        func_0x000107c5a074();
        if (*(long *)(unaff_x20 + lVar6) != 0) {
          func_0x000107c5a070();
          lVar6 = *(long *)(unaff_x20 + lVar6);
          if (lVar6 != 0) {
            func_0x000107c61174();
            FUN_100de3b9c();
            puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
            dVar11 = param_1;
            func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
            func_0x000107c4c194();
            func_0x000107c61180();
            func_0x000107c3ec60();
            func_0x000107c61170(puVar3);
            func_0x000107c609b0(dVar11,param_2,param_3,param_4);
            func_0x000107c4ef28(param_1 / dVar11,lVar6);
            func_0x000107c61170(lVar6);
          }
        }
      }
    }
    func_0x000107c61574(pppplVar2);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 100de8804; end: 100de8e5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100de8804(ulong *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong *puVar5;
  long *plVar6;
  undefined8 uVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uStack_80;
  undefined1 auStack_78 [24];
  
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)&uStack_80 - extraout_x8;
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar12 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar9 = lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  FUN_100ded4cc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar5 = (ulong *)(lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  uVar11 = *param_1;
  uVar1 = param_1[1];
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    return;
  }
  if ((long)uVar11 < 3) {
    if (uVar11 < 2) goto LAB_100de8ac4;
    if (uVar11 == 2) {
      func_0x000107c5edd0(lVar10,0xd000000000000031,0x800000010ef105e0);
      lVar4 = lVar10;
      (**(code **)(lVar12 + 0x30))(lVar10,1,lVar2);
      if ((int)lVar4 == 1) {
        func_0x000107c61170(param_2);
        FUN_100deb0e8(lVar10,0x112d36580,&UNK_10d9016d0);
        return;
      }
      (**(code **)(lVar12 + 0x20))(lVar9,lVar10,lVar2);
      plVar6 = *(long **)(param_2 + _DAT_112d36dd0);
      (**(code **)(lVar12 + 0x10))(puVar5,lVar9,lVar2);
      func_0x000107c6159c(puVar5,lVar3,3);
      (**(code **)(*plVar6 + 0xb0))(puVar5);
      func_0x000100deb06c(puVar5,FUN_100ded4cc);
      (**(code **)(lVar12 + 8))(lVar9,lVar2);
      goto LAB_100de8ac4;
    }
  }
  else {
    if (uVar11 == 3) goto LAB_100de8ac4;
    if (uVar11 == 4) {
      plVar6 = *(long **)(param_2 + _DAT_112d36dd0);
      *(char *)puVar5 = (char)uVar1;
      func_0x000107c6159c(puVar5,lVar3,5);
      (**(code **)(*plVar6 + 0xb0))(puVar5);
      func_0x000100deb06c(puVar5,FUN_100ded4cc);
      goto LAB_100de8ac4;
    }
  }
  uVar7 = *(undefined8 *)(param_2 + _DAT_112d36de0);
  *(ulong *)(param_2 + _DAT_112d36de0) = uVar11;
  func_0x000107c61174();
  func_0x000107c61170(uVar7);
  plVar6 = *(long **)(param_2 + _DAT_112d36dd0);
  *puVar5 = uVar11;
  func_0x000107c6159c(puVar5,lVar3,0);
  pcVar8 = *(code **)(*plVar6 + 0xb0);
  func_0x000107c61174(uVar11);
  (*pcVar8)(puVar5);
  func_0x000100deb06c(puVar5,FUN_100ded4cc);
LAB_100de8ac4:
  func_0x000107c61170();
  return;
}



/* Entry: 100de8e5c; end: 100de8f7b;  */

void FUN_100de8e5c(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0;
  FUN_100dd3544();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar4 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_100deb028(param_2,puVar4);
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,3,lVar1);
  if ((int)puVar2 == 2) {
    *param_1 = 3;
    uVar3 = 0;
    FUN_100ded4cc(0);
    func_0x000107c6159c(param_1,uVar3,7);
  }
  else if ((int)puVar2 == 0) {
    (**(code **)(lVar5 + 0x20))(param_1,puVar4,lVar1);
    uVar3 = 0;
    FUN_100ded4cc(0);
    func_0x000107c6159c(param_1,uVar3,1);
  }
  else {
    uVar3 = 0;
    FUN_100ded4cc(0);
    func_0x000107c6159c(param_1,uVar3,8);
    func_0x000100deb06c(puVar4,FUN_100dd3544);
  }
  return;
}



/* Entry: 100de8f7c; end: 100de923b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100de8f7c(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  code *pcVar9;
  long alStack_a0 [5];
  long *aplStack_78 [3];
  long lStack_60;
  undefined **ppuStack_58;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  plVar2 = (long *)((long)alStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(plVar2,param_1);
  FUN_100deafdc(unaff_x20 + _DAT_112d36dd8,aplStack_78);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d36de0);
  FUN_100deafdc(unaff_x20 + _DAT_112d36de8,alStack_a0);
  func_0x0001000c6518(alStack_a0,alStack_a0[3]);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(alStack_a0[3] + -8) + 0x40));
  puVar7 = (undefined8 *)((long)plVar2 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12_00 + 0x10))(puVar7);
  uVar6 = *puVar7;
  func_0x000107c61174(uVar5);
  FUN_100dea8c8(plVar2,aplStack_78,uVar5,uVar6);
  func_0x0001000834e4(alStack_a0);
  lVar1 = 0;
  FUN_100dd8be4();
  ppuStack_58 = &PTR_DAT_1103526d8;
  uVar5 = 0;
  aplStack_78[0] = plVar2;
  lStack_60 = lVar1;
  FUN_100de01bc(0);
  func_0x000107c610f8();
  func_0x0001000c6518(aplStack_78,lVar1);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  plVar8 = (long *)((long)puVar7 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12_01 + 0x10))(plVar8);
  lVar1 = *plVar8;
  func_0x000107c6157c(plVar2);
  func_0x000100dea548(lVar1,uVar5);
  func_0x0001000834e4(aplStack_78);
  uVar6 = *(undefined8 *)(lVar1 + _DAT_112d36658);
  pcVar9 = *(code **)(*plVar2 + 0xa8);
  func_0x000107c6157c(plVar2);
  func_0x000107c6157c(uVar6);
  (*pcVar9)();
  func_0x000107c61574(uVar6);
  plVar8 = *(long **)(unaff_x20 + _DAT_112d36dd0);
  (**(code **)(*plVar2 + 0x98))();
  func_0x000107c61574(plVar2);
  puVar3 = &UNK_110353510;
  func_0x000107c613fc(&UNK_110353510,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  uVar4 = 0;
  FUN_100ded4cc(0);
  uVar5 = 0x100deaf7c;
  func_0x0001000bfde0(0x100deaf7c,puVar3,uVar4);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(puVar3);
  (**(code **)(*plVar8 + 0xa8))(uVar5);
  func_0x000107c61574(uVar5);
  func_0x000107c3e2c0(*(undefined8 *)(unaff_x20 + _DAT_112d36db8));
  func_0x000107c61574(plVar2);
  func_0x000107c61170(lVar1);
  return;
}



/* Entry: 100de923c; end: 100de958b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100de923c(ulong *param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  byte *pbVar3;
  undefined8 uVar4;
  long extraout_x8;
  ulong uVar5;
  byte *pbVar6;
  byte abStack_60 [8];
  undefined1 auStack_58 [24];
  
  lVar2 = 0;
  FUN_100dd9bb4();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  pbVar6 = abStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 == 0) {
    FUN_100ded4cc();
    func_0x000107c6159c(param_1,param_3,8);
    return;
  }
  FUN_100deb028(param_2,pbVar6,FUN_100dd9bb4);
  pbVar3 = pbVar6;
  func_0x000107c614c4(pbVar6,lVar2);
  iVar1 = (int)pbVar3;
  if (iVar1 < 3) {
    if (iVar1 == 0) {
      func_0x000107c61170(param_3);
      lVar2 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar2 + -8) + 0x20))(param_1,pbVar6,lVar2);
      lVar2 = 0x112d36e68;
      func_0x0001000285a8(0x112d36e68,&UNK_10d901180);
      iVar1 = *(int *)(lVar2 + 0x30);
      lVar2 = 0;
      func_0x000100dda8ec();
      FUN_100deaf84(param_2 + *(int *)(lVar2 + 0x14),(long)param_1 + (long)iVar1);
      uVar4 = 0;
      FUN_100ded4cc(0);
      func_0x000107c6159c(param_1,uVar4,2);
      return;
    }
    if (iVar1 == 1) {
      func_0x000107c61170(param_3);
      lVar2 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar2 + -8) + 0x20))(param_1,pbVar6,lVar2);
      uVar4 = 0;
      FUN_100ded4cc(0);
      func_0x000107c6159c(param_1,uVar4,3);
      return;
    }
LAB_100de9458:
    func_0x000107c61170(param_3);
    uVar4 = 0;
    FUN_100ded4cc(0);
    func_0x000107c6159c(param_1,uVar4,8);
    func_0x000100deb06c(pbVar6,FUN_100dd9bb4);
  }
  else {
    if (iVar1 == 3) {
      func_0x000107c61170(param_3);
      uVar5 = (ulong)~(uint)*pbVar6 & 1;
    }
    else {
      if (iVar1 == 6) {
        uVar5 = *(ulong *)(param_3 + _DAT_112d36de0);
        func_0x000107c61174();
        func_0x000107c61170(param_3);
        *param_1 = uVar5;
        uVar4 = 0;
        FUN_100ded4cc(0);
        func_0x000107c6159c(param_1,uVar4,0);
        return;
      }
      if (iVar1 != 7) goto LAB_100de9458;
      func_0x000107c61170(param_3);
      uVar5 = 4;
    }
    *param_1 = uVar5;
    uVar4 = 0;
    FUN_100ded4cc(0);
    func_0x000107c6159c(param_1,uVar4,7);
  }
  return;
}



/* Entry: 100de958c; end: 100de98c3;  */

void FUN_100de958c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lVar8;
  long extraout_x8;
  long lVar9;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  puVar2 = &UNK_110353498;
  func_0x000107c613fc(&UNK_110353498,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = (undefined *)((long)&puStack_80 - extraout_x8);
  func_0x000107c6157c(param_3);
  func_0x000107c5edd0(puVar5,0x7461686370616e73,0xeb000000002f2f3a);
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar9 = *(long *)(lVar3 + -8);
  lVar8 = 1;
  puVar4 = puVar5;
  (**(code **)(lVar9 + 0x30))(puVar5,1,lVar3);
  if ((int)puVar4 == 1) {
    func_0x000107c61574(puVar2);
    FUN_100deb0e8(puVar5,0x112d36580,&UNK_10d9016d0);
  }
  else {
    func_0x000107c5edc8();
    (**(code **)(lVar9 + 8))(puVar5,lVar3);
    if (lVar8 == 0) {
      func_0x000107c61574(puVar2);
    }
    else {
      iVar1 = 2;
      func_0x000100029b9c(2,0x11,4,0);
      puStack_58 = puVar2;
      if (iVar1 == 0) {
        puVar5 = PTR__OBJC_CLASS___ASWebAuthenticationSession_1126b1c78;
        func_0x000107c610f8(PTR__OBJC_CLASS___ASWebAuthenticationSession_1126b1c78);
        puVar6 = puVar2;
        func_0x000107c6157c(puVar2);
        func_0x000107c5ed90();
        func_0x000107c5fadc(puVar4,lVar8);
        func_0x000107c6142c(lVar8);
        pcStack_60 = FUN_100deaf40;
        puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_78 = 0x42000000;
        uStack_70 = 0x100de9b20;
        puStack_68 = &UNK_1103534b0;
        ppuVar7 = &puStack_80;
        func_0x000107c60bc4(ppuVar7);
        func_0x000107c48fc8(puVar5);
        func_0x000107c60bd0(ppuVar7);
        func_0x000107c61170(puVar6);
      }
      else {
        puVar6 = PTR__OBJC_CLASS___ASWebAuthenticationSessionCallback_1126a5d58;
        func_0x000107c61168(PTR__OBJC_CLASS___ASWebAuthenticationSessionCallback_1126a5d58);
        func_0x000107c5fadc(puVar4,lVar8);
        func_0x000107c6142c(lVar8);
        func_0x000107c3f008(puVar6);
        func_0x000107c61180();
        func_0x000107c61170(puVar4);
        puVar5 = PTR__OBJC_CLASS___ASWebAuthenticationSession_1126b1c78;
        func_0x000107c610f8(PTR__OBJC_CLASS___ASWebAuthenticationSession_1126b1c78);
        puVar4 = puVar2;
        func_0x000107c6157c(puVar2);
        func_0x000107c5ed90();
        pcStack_60 = FUN_100deaf40;
        puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_78 = 0x42000000;
        uStack_70 = 0x100de9b20;
        puStack_68 = &UNK_1103534d8;
        ppuVar7 = &puStack_80;
        func_0x000107c60bc4(ppuVar7);
        func_0x000107c48fc4(puVar5);
        func_0x000107c60bd0(ppuVar7);
        func_0x000107c61170(puVar6);
      }
      func_0x000107c61170(puVar4);
      func_0x000107c61574(puStack_58);
      func_0x000107c61174(puVar5);
      func_0x000107c576bc();
      func_0x000107c5771c(puVar5);
      func_0x000107c5ba38(puVar5);
      func_0x000107c61574(puVar2);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar5);
    }
  }
  return;
}



/* Entry: 100de98c4; end: 100de991f; -[_TtC22AgeVerificationFeature21AgeVerificationRouter init] */

void FUN_100de98c4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AgeVerificationFeature.AgeVerificationRouter",0x2c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100de98f0);
  (*pcVar1)();
}



/* Entry: 100de9920; end: 100de9a07; -[_TtC22AgeVerificationFeature21AgeVerificationRouter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100de994c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100de996c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100de999c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100de99bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100de99ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100de99c0) */
/* WARNING: Removing unreachable block (ram,0x000100de99a0) */
/* WARNING: Removing unreachable block (ram,0x000100de9970) */
/* WARNING: Removing unreachable block (ram,0x000100de9950) */
/* WARNING: Removing unreachable block (ram,0x000100de99f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100de9920(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d36db0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d36db8));
  return;
}



/* Entry: 100de9a08; end: 100de9a27;  */

void FUN_100de9a08(void)

{
  func_0x000107c61168(&PTR_PTR_1127978b0);
  return;
}



/* Entry: 100de9a28; end: 100de9a47;  */

void FUN_100de9a28(void)

{
  FUN_100de7e18();
  return;
}



/* Entry: 100de9a48; end: 100de9a5b; -[_TtC22AgeVerificationFeature21AgeVerificationRouter presentationAnchorForWebAuthenticationSession:] */

void FUN_100de9a48(void)

{
  FUN_100deada4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100de9a5c; end: 100de9a5f; -[_TtC22AgeVerificationFeature21AgeVerificationRouter tray:positionDidChange:] */

void FUN_100de9a5c(void)

{
  return;
}



/* Entry: 100de9a60; end: 100de9c27; -[_TtC22AgeVerificationFeature21AgeVerificationRouter trayDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100de9a60(long param_1)

{
  long lVar1;
  long extraout_x8;
  long *plVar2;
  undefined1 *puVar3;
  code *pcVar4;
  
  lVar1 = 0;
  FUN_100ded4cc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  plVar2 = *(long **)(param_1 + _DAT_112d36dd0);
  *puVar3 = 5;
  func_0x000107c6159c(puVar3);
  pcVar4 = *(code **)(*plVar2 + 0xb0);
  func_0x000107c61174(param_1);
  (*pcVar4)(puVar3);
  func_0x000100deb06c(puVar3,FUN_100ded4cc);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100de9c28; end: 100de9c4b;  */

void FUN_100de9c28(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112d36e70;
  plVar5 = (long *)&UNK_10d901a80;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    func_0x000100847944(0,0x112d360a8,&PTR_PTR_1126aed70);
    if (lVar3 != 0) {
      puVar4 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
    }
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 100de9c4c; end: 100de9de7;  */

ulong FUN_100de9c4c(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100de9d1c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100de9d20);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000104063688(0);
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61480();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    func_0x000107c60488(param_1,uVar3);
    uVar4 = 0;
    func_0x000104063688(0);
    uVar3 = param_1;
    func_0x000107c61480(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd000000000000015,0x800000010ef10650);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100de9de8);
  (*pcVar2)();
}



/* Entry: 100de9de8; end: 100de9fab;  */

ulong FUN_100de9de8(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100de9ecc);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100de9ed0);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR__OBJC_CLASS___UIWindow_1126c3e70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIWindow_1126c3e70);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR__OBJC_CLASS___UIWindow_1126c3e70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIWindow_1126c3e70);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000100847944(0,0x112d36e50,&PTR__OBJC_CLASS___UIWindow_1126c3e70);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100de9fac);
  (*pcVar2)();
}



/* Entry: 100de9fac; end: 100dea04b;  */

undefined * FUN_100de9fac(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    puVar2 = (undefined *)0x112d36e50;
    func_0x0001008478cc(0x112d36e50,&PTR__OBJC_CLASS___UIWindow_1126c3e70,0x112d36e58,&UNK_10d90aa80
                       );
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(long *)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 100dea04c; end: 100dea1c7;  */

undefined * FUN_100dea04c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  uVar7 = param_2;
  if ((param_3 & 1) != 0) {
    uVar7 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar7 < (long)param_2) {
      if ((long)(uVar7 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100dea1c8);
        (*pcVar3)();
      }
      uVar7 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar7 <= (long)param_2) {
        uVar7 = param_2;
      }
    }
  }
  uVar9 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar7 <= (long)uVar9) {
    uVar7 = uVar9;
  }
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar7 != 0) {
    puVar4 = (undefined *)0x112d36e88;
    func_0x0001000285a8(0x112d36e88,&UNK_10d9011b0);
    lVar5 = 0;
    FUN_100ddcdc8();
    lVar10 = *(long *)(*(long *)(lVar5 + -8) + 0x48);
    uVar8 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
    uVar11 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
    func_0x000107c613fc(puVar4,uVar11 + lVar10 * uVar7,uVar8 | 7);
    puVar6 = puVar4;
    func_0x000107c610a4();
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100dea1c0);
      (*pcVar3)();
    }
    lVar5 = (long)puVar6 - uVar11;
    if (lVar5 == -0x8000000000000000 && lVar10 == -1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100dea1c4);
      (*pcVar3)();
    }
    lVar2 = 0;
    if (lVar10 != 0) {
      lVar2 = lVar5 / lVar10;
    }
    *(ulong *)(puVar4 + 0x10) = uVar9;
    *(long *)(puVar4 + 0x18) = lVar2 << 1;
  }
  lVar5 = 0;
  FUN_100ddcdc8();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar7 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
  puVar6 = puVar4 + uVar7;
  puVar1 = param_4 + uVar7;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar6,puVar1,uVar9,lVar5);
  }
  else {
    if ((puVar4 < param_4) || (puVar1 + *(long *)(*(long *)(lVar5 + -8) + 0x48) * uVar9 <= puVar6))
    {
      func_0x000107c61414(puVar6,puVar1,uVar9);
    }
    else if (puVar4 != param_4) {
      func_0x000107c61410(puVar6,puVar1,uVar9);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar4;
}



/* Entry: 100dea1c8; end: 100dea407;  */

ulong FUN_100dea1c8(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100dea2f0);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_100de9fac(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100dea2ec);
      (*pcVar1)();
    }
    func_0x000100dea2f0(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 100dea408; end: 100dea8c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_100dea408(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 auStack_58 [3];
  undefined8 uStack_40;
  undefined **ppuStack_38;
  
  uVar2 = 0;
  FUN_100dd2ebc();
  lVar1 = _DAT_112d36038;
  ppuStack_38 = &PTR_DAT_110352608;
  uVar3 = 0x112d360c0;
  auStack_58[0] = param_1;
  uStack_40 = uVar2;
  func_0x0001000285a8(0x112d360c0,&UNK_10d900798);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(param_2 + lVar1) = uVar3;
  lVar1 = _DAT_112d36040;
  uVar3 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(param_2 + lVar1) = uVar3;
  *(undefined8 *)(param_2 + _DAT_112d36048) = 0;
  *(undefined8 *)(param_2 + _DAT_112d36050) = 0;
  *(undefined8 *)(param_2 + _DAT_112d36058) = 0;
  *(undefined8 *)(param_2 + _DAT_112d36060) = 0;
  *(undefined8 *)(param_2 + _DAT_112d36068) = 0;
  *(undefined8 *)(param_2 + _DAT_112d36070) = 0;
  *(undefined8 *)(param_2 + _DAT_112d36078) = 0;
  FUN_100deafdc(auStack_58,param_2 + _DAT_112d36030);
  uVar3 = 0;
  FUN_100dd6410();
  plVar4 = &lStack_68;
  lStack_68 = param_2;
  uStack_60 = uVar3;
  func_0x000107c61154(plVar4,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  func_0x0001000834e4(auStack_58);
  return plVar4;
}



/* Entry: 100dea8c8; end: 100deada3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100dea8c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  code *pcVar10;
  undefined8 auStack_c0 [5];
  long lStack_98;
  undefined **ppuStack_90;
  long *aplStack_88 [3];
  long lStack_70;
  undefined **ppuStack_68;
  
  lVar7 = *param_4;
  lVar2 = 0;
  auStack_c0[1] = param_3;
  func_0x000100dda8ec();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar6 = (long)auStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  ppuStack_68 = &PTR_DAT_110352d18;
  lVar3 = 0;
  aplStack_88[0] = param_4;
  lStack_70 = lVar7;
  FUN_100dd8be4();
  func_0x000107c613fc();
  func_0x0001000c6518(aplStack_88,lVar7);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  puVar9 = (undefined8 *)(lVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar9);
  lVar1 = _DAT_112d36108;
  auStack_c0[2] = *puVar9;
  ppuStack_90 = &PTR_DAT_110352d18;
  uVar4 = 0;
  lStack_98 = lVar7;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(lVar3 + lVar1) = uVar4;
  lVar1 = _DAT_112d36120;
  lVar7 = 0;
  FUN_100dd8cfc();
  pcVar10 = *(code **)(*(long *)(lVar7 + -8) + 0x38);
  (*pcVar10)(lVar3 + lVar1,1,1,lVar7);
  lVar1 = _DAT_112d360f8;
  lVar5 = 0;
  func_0x000107c5eea4();
  lVar8 = *(long *)(lVar5 + -8);
  (**(code **)(lVar8 + 0x10))(lVar3 + lVar1,param_1,lVar5);
  FUN_100deafdc(param_2,lVar3 + _DAT_112d36100);
  *(undefined8 *)(lVar3 + _DAT_112d36110) = auStack_c0[1];
  FUN_100deafdc(auStack_c0 + 2,lVar3 + _DAT_112d36118);
  uVar4 = 0;
  FUN_100dd9bb4(0);
  func_0x000107c6159c(lVar6,uVar4,4);
  (*pcVar10)(lVar6 + *(int *)(lVar2 + 0x14),1,1,lVar7);
  func_0x000103dbf4dc(lVar6);
  func_0x0001000834e4(param_2);
  (**(code **)(lVar8 + 8))(param_1,lVar5);
  func_0x0001000834e4(auStack_c0 + 2);
  func_0x0001000834e4(aplStack_88);
  return lVar6;
}



/* Entry: 100deada4; end: 100deaee3;  */

undefined * FUN_100deada4(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar5 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61168();
  func_0x000107c5a9c4();
  func_0x000107c61180();
  puVar2 = puVar5;
  func_0x000107c40210();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  uVar3 = 0;
  func_0x000100847944(0,0x112d36e40,&PTR__OBJC_CLASS___UIScene_1126a5d50);
  uVar4 = uVar3;
  FUN_100deaee4();
  puVar5 = puVar2;
  func_0x000107c5fe10(puVar2,uVar3,uVar4);
  func_0x000107c61170(puVar2);
  puVar2 = puVar5;
  FUN_100de7a1c();
  func_0x000107c6142c(puVar5);
  if ((ulong)puVar2 >> 0x3e == 0) {
    puVar5 = *(undefined **)(((ulong)puVar2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar5 = (undefined *)((ulong)puVar2 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar2) {
      puVar5 = puVar2;
    }
    func_0x000107c60480();
  }
  if (puVar5 != (undefined *)0x0) {
    if (((ulong)puVar2 & 0xc000000000000001) == 0) {
      if (*(long *)(((ulong)puVar2 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100deaee4);
        (*pcVar1)();
      }
      puVar5 = *(undefined **)(puVar2 + 0x20);
      func_0x000107c61174(puVar5);
    }
    else {
      puVar5 = (undefined *)0x0;
      FUN_100de9de8(0,puVar2);
    }
    func_0x000107c6142c(puVar2);
    return puVar5;
  }
  func_0x000107c6142c(puVar2);
  puVar5 = PTR__OBJC_CLASS___UIWindow_1126c3e70;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIWindow_1126c3e70);
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return puVar5;
}



/* Entry: 100deaee4; end: 100deaf37;  */

void FUN_100deaee4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112d36e48 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x000100847944(0xff,0x112d36e40,&PTR__OBJC_CLASS___UIScene_1126a5d50);
  puVar2 = PTR___sSo8NSObjectCSH10ObjectiveCMc_11034fab8;
  func_0x000107c61520(PTR___sSo8NSObjectCSH10ObjectiveCMc_11034fab8,uVar1);
  puRam0000000112d36e48 = puVar2;
  return;
}



/* Entry: 100deaf38; end: 100deaf3f;  */

void FUN_100deaf38(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 100deaf40; end: 100deaf5f;  */

void FUN_100deaf40(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 100deaf60; end: 100deaf83;  */

void FUN_100deaf60(long param_1,long param_2)

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



/* Entry: 100deaf84; end: 100deafd3;  */

undefined8 FUN_100deaf84(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112d36368;
  func_0x0001000285a8(0x112d36368,&UNK_10d9008e0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 100deafd4; end: 100deafdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100deafd4(ulong *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong *puVar6;
  long *plVar7;
  long unaff_x20;
  undefined8 uVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uStack_80;
  undefined1 auStack_78 [24];
  
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = (long)&uStack_80 - extraout_x8;
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar13 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar10 = lVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  FUN_100ded4cc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar6 = (ulong *)(lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  uVar12 = *param_1;
  uVar1 = param_1[1];
  func_0x000107c61428(unaff_x20 + 0x10,auStack_78,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 == 0) {
    return;
  }
  if ((long)uVar12 < 3) {
    if (uVar12 < 2) goto LAB_100de8ac4;
    if (uVar12 == 2) {
      func_0x000107c5edd0(lVar11,0xd000000000000031,0x800000010ef105e0);
      lVar5 = lVar11;
      (**(code **)(lVar13 + 0x30))(lVar11,1,lVar3);
      if ((int)lVar5 == 1) {
        func_0x000107c61170(lVar2);
        FUN_100deb0e8(lVar11,0x112d36580,&UNK_10d9016d0);
        return;
      }
      (**(code **)(lVar13 + 0x20))(lVar10,lVar11,lVar3);
      plVar7 = *(long **)(lVar2 + _DAT_112d36dd0);
      (**(code **)(lVar13 + 0x10))(puVar6,lVar10,lVar3);
      func_0x000107c6159c(puVar6,lVar4,3);
      (**(code **)(*plVar7 + 0xb0))(puVar6);
      func_0x000100deb06c(puVar6,FUN_100ded4cc);
      (**(code **)(lVar13 + 8))(lVar10,lVar3);
      goto LAB_100de8ac4;
    }
  }
  else {
    if (uVar12 == 3) goto LAB_100de8ac4;
    if (uVar12 == 4) {
      plVar7 = *(long **)(lVar2 + _DAT_112d36dd0);
      *(char *)puVar6 = (char)uVar1;
      func_0x000107c6159c(puVar6,lVar4,5);
      (**(code **)(*plVar7 + 0xb0))(puVar6);
      func_0x000100deb06c(puVar6,FUN_100ded4cc);
      goto LAB_100de8ac4;
    }
  }
  uVar8 = *(undefined8 *)(lVar2 + _DAT_112d36de0);
  *(ulong *)(lVar2 + _DAT_112d36de0) = uVar12;
  func_0x000107c61174();
  func_0x000107c61170(uVar8);
  plVar7 = *(long **)(lVar2 + _DAT_112d36dd0);
  *puVar6 = uVar12;
  func_0x000107c6159c(puVar6,lVar4,0);
  pcVar9 = *(code **)(*plVar7 + 0xb0);
  func_0x000107c61174(uVar12);
  (*pcVar9)(puVar6);
  func_0x000100deb06c(puVar6,FUN_100ded4cc);
LAB_100de8ac4:
  func_0x000107c61170();
  return;
}



/* Entry: 100deafdc; end: 100deb01f;  */

long FUN_100deafdc(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 100deb020; end: 100deb027;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100deb020(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar13 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar10 = (long)&lStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5eea4();
  lVar14 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar12 = lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  FUN_100dee474();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar11 = lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(unaff_x20 + 0x10,auStack_78,0,0);
  lVar5 = unaff_x20 + 0x10;
  func_0x000107c61618();
  lVar7 = _DAT_112d36e10;
  if (lVar5 != 0) {
    lStack_b0 = lVar2;
    if (*(long *)(lVar5 + _DAT_112d36e10) != 0) {
      func_0x000107c41864(*(undefined8 *)(lVar5 + _DAT_112d36dc0));
      uVar6 = *(undefined8 *)(lVar5 + lVar7);
      *(undefined8 *)(lVar5 + lVar7) = 0;
      func_0x000107c61170(uVar6);
    }
    FUN_100deb028(param_1,lVar11,FUN_100dee474);
    lVar2 = lVar11;
    func_0x000107c614c4(lVar11,lVar4);
    lVar7 = lStack_b0;
    iVar1 = (int)lVar2;
    if (iVar1 < 4) {
      if (iVar1 < 2) {
        if (iVar1 == 0) {
          (**(code **)(lVar14 + 0x20))(lVar12,lVar11,lVar3);
          FUN_100de8f7c(lVar12);
          func_0x000107c61170(lVar5);
          (**(code **)(lVar14 + 8))(lVar12,lVar3);
        }
        else {
          lVar7 = 0x112d36e68;
          func_0x0001000285a8(0x112d36e68,&UNK_10d901180);
          lVar2 = lStack_b0;
          iVar1 = *(int *)(lVar7 + 0x30);
          (**(code **)(lVar13 + 0x20))(lVar10,lVar11,lStack_b0);
          puVar8 = &UNK_110353510;
          func_0x000107c613fc(&UNK_110353510,0x18,7);
          func_0x000107c61614(puVar8 + 0x10,lVar5);
          func_0x000107c6157c(puVar8);
          FUN_100de958c(lVar10,0x100deb0cc,puVar8);
          func_0x000107c61170(lVar5);
          func_0x000107c61574(puVar8);
          (**(code **)(lVar13 + 8))(lVar10,lVar2);
          func_0x000107c61574(puVar8);
          FUN_100deb0e8(lVar11 + iVar1,0x112d36368,&UNK_10d9008e0);
        }
      }
      else if (iVar1 == 2) {
        (**(code **)(lVar13 + 0x20))(lVar10,lVar11,lStack_b0);
        puVar8 = &UNK_110353510;
        func_0x000107c613fc(&UNK_110353510,0x18,7);
        func_0x000107c61614(puVar8 + 0x10,lVar5);
        func_0x000107c6157c(puVar8);
        FUN_100de958c(lVar10,FUN_100deb0b0,puVar8);
        func_0x000107c61170(lVar5);
        func_0x000107c61574(puVar8);
        (**(code **)(lVar13 + 8))(lVar10,lVar7);
        func_0x000107c61574(puVar8);
      }
      else {
        FUN_100de2038(lVar11,&puStack_a8);
        lVar7 = 0;
        func_0x000100df03ac();
        FUN_100de84c0(*(undefined1 *)(param_1 + *(int *)(lVar7 + 0x18)),&puStack_a8);
        func_0x000107c61170(lVar5);
        func_0x0001000834e4(&puStack_a8);
      }
    }
    else {
      if (iVar1 < 6) {
        if (iVar1 != 4) {
          func_0x000107c61170(lVar5);
          func_0x000100deb06c(lVar11,FUN_100dee474);
          return;
        }
        func_0x000107c41864(*(undefined8 *)(lVar5 + _DAT_112d36db0));
      }
      else if (iVar1 == 6) {
        func_0x000100de8ae8();
      }
      else {
        lVar7 = *(long *)(lVar5 + _DAT_112d36dc8);
        puVar8 = &UNK_110353510;
        func_0x000107c613fc(&UNK_110353510,0x18,7);
        func_0x000107c61614(puVar8 + 0x10,lVar5);
        pcStack_88 = FUN_100deb0a8;
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0x42000000;
        puStack_98 = &UNK_1000b0c7c;
        puStack_90 = &UNK_110353528;
        ppuVar9 = &puStack_a8;
        puStack_80 = puVar8;
        func_0x000107c60bc4(ppuVar9);
        puVar8 = puStack_80;
        func_0x000107c61174(lVar7);
        func_0x000107c61574(puVar8);
        func_0x000107c41864(lVar7);
        func_0x000107c60bd0(ppuVar9);
        func_0x000107c61170(lVar5);
        lVar5 = lVar7;
      }
      func_0x000107c61170(lVar5);
    }
  }
  return;
}



/* Entry: 100deb028; end: 100deb0a7;  */

undefined8 FUN_100deb028(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_3)();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 100deb0a8; end: 100deb0af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100deb0a8(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = 0;
    FUN_100dd6b1c();
    func_0x000107c614e8();
    func_0x000107c610f8();
    func_0x000107c453e4();
    uVar3 = *(undefined8 *)(lVar1 + _DAT_112d36e10);
    *(undefined8 *)(lVar1 + _DAT_112d36e10) = uVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar3);
    func_0x000107c3e2c0(*(undefined8 *)(lVar1 + _DAT_112d36dc0));
    func_0x000107c61170(lVar1);
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 100deb0b0; end: 100deb0e7;  */

void FUN_100deb0b0(void)

{
  func_0x000100de94a0();
  return;
}



/* Entry: 100deb0e8; end: 100deb127;  */

undefined8 FUN_100deb0e8(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 100deb128; end: 100deb193;  */

void FUN_100deb128(long param_1,long param_2)

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



/* Entry: 100deb194; end: 100dec1ef;  */

void FUN_100deb194(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  long extraout_x12_07;
  long extraout_x12_08;
  long extraout_x12_09;
  long extraout_x12_10;
  long extraout_x12_11;
  long extraout_x12_12;
  long extraout_x12_13;
  long extraout_x12_14;
  long extraout_x12_15;
  long extraout_x12_16;
  long extraout_x12_17;
  long extraout_x12_18;
  long extraout_x12_19;
  long extraout_x12_20;
  long extraout_x12_21;
  long extraout_x12_22;
  long extraout_x12_23;
  long extraout_x12_24;
  long extraout_x12_25;
  long extraout_x12_26;
  long extraout_x12_27;
  ulong uVar3;
  undefined1 auStack_1a0 [8];
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined1 *puStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  lVar1 = 0;
  uStack_b0 = param_2;
  uStack_a0 = param_1;
  uStack_98 = param_3;
  func_0x000107c5ede0();
  lStack_c0 = *(long *)(lVar1 + -8);
  lStack_b8 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_c0 + 0x40));
  puStack_e8 = auStack_1a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar2 = (long)(auStack_1a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  lVar1 = 0;
  lStack_e0 = lVar2;
  func_0x000107c5eea4();
  lStack_108 = *(long *)(lVar1 + -8);
  lStack_f0 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_108 + 0x40));
  lVar2 = lVar2 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0x112d36368;
  lStack_110 = lVar2;
  func_0x0001000285a8(0x112d36368,&UNK_10d9008e0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar2 = lVar2 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_c8 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar2 = lVar2 - extraout_x12_00;
  lStack_118 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar2 = lVar2 - extraout_x12_01;
  lStack_d0 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar2 = lVar2 - extraout_x12_02;
  lStack_128 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar2 = lVar2 - extraout_x12_03;
  lStack_d8 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar2 = lVar2 - extraout_x12_04;
  lStack_130 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar2 = lVar2 - extraout_x12_05;
  lStack_f8 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar2 = lVar2 - extraout_x12_06;
  lStack_148 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar2 = lVar2 - extraout_x12_07;
  lStack_100 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar2 = lVar2 - extraout_x12_08;
  lStack_150 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar2 = lVar2 - extraout_x12_09;
  lStack_138 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar2 = lVar2 - extraout_x12_10;
  lStack_168 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar2 = lVar2 - extraout_x12_11;
  lStack_120 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar2 = lVar2 - extraout_x12_12;
  lStack_160 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar2 = lVar2 - extraout_x12_13;
  lStack_140 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar2 = lVar2 - extraout_x12_14;
  lStack_178 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar2 = lVar2 - extraout_x12_15;
  lStack_158 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar2 = lVar2 - extraout_x12_16;
  lStack_180 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar2 = lVar2 - extraout_x12_17;
  lStack_170 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar2 = lVar2 - extraout_x12_18;
  lVar1 = 0;
  lStack_188 = lVar2;
  FUN_100dee474();
  lStack_a8 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar2 = lVar2 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lStack_190 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar2 = lVar2 - extraout_x12_19;
  lStack_198 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar1 = 0;
  FUN_100ded4cc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  uVar3 = ((((((((lVar2 - extraout_x12_20) - extraout_x12_21) - extraout_x12_22) - extraout_x12_23)
             - extraout_x12_24) - extraout_x12_25) - extraout_x12_26) - extraout_x12_27) -
          (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  FUN_100df1570(uStack_b0,uVar3);
  func_0x000107c614c4(uVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x000100deb6ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)*(ushort *)(&UNK_10d9011c0 + (uVar3 & 0xffffffff) * 2) * 4 + 0x100deb6f0))();
  return;
}



/* Entry: 100dec1f0; end: 100dec2ef;  */

void FUN_100dec1f0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  undefined1 *puVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [40];
  
  lVar2 = 0;
  FUN_100ded4cc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar4 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_100df1570(param_1,puVar4);
  puVar3 = puVar4;
  func_0x000107c614c4(puVar4,lVar2);
  iVar1 = (int)puVar3;
  if (iVar1 == 5) {
    func_0x000100df1a00(param_2,*puVar4);
  }
  else if (iVar1 == 6) {
    FUN_100de2038(puVar4,auStack_68);
    FUN_100df1864(auStack_68,param_2);
    func_0x0001000834e4(auStack_68);
  }
  else if (iVar1 == 9) {
    FUN_100dec2f0();
  }
  else {
    FUN_100dee438(puVar4,FUN_100ded4cc);
  }
  return;
}



/* Entry: 100dec2f0; end: 100dec447;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_100dec2f0(void)

{
  long lVar1;
  undefined8 *puVar2;
  long extraout_x8;
  undefined8 *puVar3;
  long unaff_x20;
  long alStack_80 [5];
  undefined1 auStack_58 [40];
  
  lVar1 = 0;
  FUN_100ded4cc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar3 = (undefined8 *)((long)alStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000100df1b88(unaff_x20 + _DAT_112d36eb0,alStack_80,0x112d36ce8,&UNK_10d9010d0);
  puVar2 = puVar3;
  if (alStack_80[3] == 0) {
    func_0x000100df15d8(alStack_80,0x112d36ce8,&UNK_10d9010d0);
    func_0x0001000285a8(0x112d36e90,&UNK_10d901350);
    *puVar3 = 0;
    func_0x000107c6159c(puVar3,lVar1,7);
    func_0x000100854cb0(puVar3);
    FUN_100dee438(puVar3,FUN_100ded4cc);
  }
  else {
    FUN_100de2038(alStack_80,auStack_58);
    func_0x0001000285a8(0x112d36e90,&UNK_10d901350);
    func_0x000100df1bd0(auStack_58,puVar3);
    func_0x000107c6159c(puVar3,lVar1,6);
    func_0x000100854cb0(puVar3);
    FUN_100dee438(puVar3,FUN_100ded4cc);
    func_0x0001000834e4(auStack_58);
  }
  return puVar2;
}



/* Entry: 100dec448; end: 100dec52f;  */

void FUN_100dec448(byte param_1,undefined8 param_2,byte param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  byte *pbVar3;
  
  lVar2 = 0;
  FUN_100ded4cc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  pbVar3 = &stack0xffffffffffffffc0 + lVar1;
  if (param_3 < 2) {
    if (param_3 == 0) {
      param_1 = param_1 & 1;
      goto LAB_100dec4e0;
    }
  }
  else {
    if (param_3 == 2) {
      param_1 = 3;
      goto LAB_100dec4e0;
    }
    if (param_3 != 3) {
      param_1 = 2;
      goto LAB_100dec4e0;
    }
  }
  param_1 = 4;
LAB_100dec4e0:
  *pbVar3 = param_1;
  func_0x000100df1bd0(param_5,&stack0xffffffffffffffc8 + lVar1);
  func_0x000107c6159c(pbVar3,lVar2,4);
  func_0x000100087c34(pbVar3);
  FUN_100dee438(pbVar3,FUN_100ded4cc);
  return;
}



/* Entry: 100dec530; end: 100dec89b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dec530(undefined8 param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  byte *pbVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  byte *pbVar8;
  undefined8 uVar9;
  long unaff_x20;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  
  lVar3 = 0x112d36368;
  func_0x0001000285a8(0x112d36368,&UNK_10d9008e0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = &stack0xffffffffffffffa0 + -extraout_x8;
  lVar3 = 0;
  FUN_100dd8cfc();
  lVar12 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar10 = (long)puVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  FUN_100ded4cc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  pbVar8 = (byte *)(lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  FUN_100df1570(param_1,pbVar8);
  pbVar5 = pbVar8;
  func_0x000107c614c4(pbVar8,lVar4);
  iVar2 = (int)pbVar5;
  if (iVar2 < 4) {
    if (iVar2 == 0) {
      FUN_100dee438(pbVar8,FUN_100ded4cc);
      func_0x0001000a8868(unaff_x20 + _DAT_112d36ea0,
                          *(undefined8 *)(unaff_x20 + _DAT_112d36ea0 + 0x18));
      FUN_100de4a2c(0xd2,0);
      return;
    }
    if (iVar2 == 1) {
      func_0x0001000a8868(unaff_x20 + _DAT_112d36ea0,
                          *(undefined8 *)(unaff_x20 + _DAT_112d36ea0 + 0x18));
      FUN_100de4a2c(0xd3,0);
    }
    else if (iVar2 == 2) {
      lVar3 = 0x112d36e68;
      func_0x0001000285a8(0x112d36e68,&UNK_10d901180);
      iVar2 = *(int *)(lVar3 + 0x30);
      func_0x0001000a8868(unaff_x20 + _DAT_112d36ea0,
                          *(undefined8 *)(unaff_x20 + _DAT_112d36ea0 + 0x18));
      FUN_100de4a2c(0xd4,0);
      func_0x000100df15d8(pbVar8 + iVar2,0x112d36368,&UNK_10d9008e0);
      lVar3 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar3 + -8) + 8))(pbVar8,lVar3);
      return;
    }
  }
  else {
    if (iVar2 == 4) {
      bVar1 = *pbVar8;
      lVar4 = 0;
      func_0x000100df03ac();
      func_0x000100df1b88(param_2 + *(int *)(lVar4 + 0x14),puVar11,0x112d36368,&UNK_10d9008e0);
      puVar6 = puVar11;
      (**(code **)(lVar12 + 0x30))(puVar11,1,lVar3);
      if ((int)puVar6 == 1) {
        func_0x000100df15d8(puVar11,0x112d36368,&UNK_10d9008e0);
      }
      else {
        func_0x000100df1b44(puVar11,lVar10,FUN_100dd8cfc);
        uVar9 = 2;
        if (2 < bVar1 - 2) {
          uVar9 = 3;
        }
        func_0x0001000a8868(unaff_x20 + _DAT_112d36ea0,
                            *(undefined8 *)(unaff_x20 + _DAT_112d36ea0 + 0x18));
        FUN_100de4a48(lVar10,uVar9);
        FUN_100dee438(lVar10,FUN_100dd8cfc);
      }
      func_0x0001000834e4(pbVar8 + 8);
      return;
    }
    if (iVar2 == 7) {
      uVar9 = *(undefined8 *)pbVar8;
      puVar7 = (undefined8 *)(unaff_x20 + _DAT_112d36ea0);
      func_0x0001000a8868(puVar7,puVar7[3]);
      FUN_100de4e4c(*puVar7,uVar9);
      lVar3 = unaff_x20 + _DAT_112d36e98;
      func_0x000107c61618();
      if (lVar3 == 0) {
        return;
      }
      func_0x000107c3da34();
      func_0x000107c615e8(lVar3);
      return;
    }
    if (iVar2 == 9) {
      func_0x0001000a8868(unaff_x20 + _DAT_112d36ea0,
                          *(undefined8 *)(unaff_x20 + _DAT_112d36ea0 + 0x18));
      FUN_100de4a2c(0xd4,1);
      return;
    }
  }
  FUN_100dee438(pbVar8,FUN_100ded4cc);
  return;
}



/* Entry: 100dec89c; end: 100dec8fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dec89c(void)

{
  long unaff_x20;
  
  func_0x000100df15b4(unaff_x20 + _DAT_112d36e98);
  func_0x0001000834e4(unaff_x20 + _DAT_112d36ea0);
  func_0x0001000834e4(unaff_x20 + _DAT_112d36ea8);
  func_0x000100df15d8(unaff_x20 + _DAT_112d36eb0,0x112d36ce8,&UNK_10d9010d0);
  return;
}



/* Entry: 100dec8fc; end: 100dec987;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dec8fc(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  func_0x000103dbf870();
  lVar1 = _DAT_112d36e98;
  plVar2 = param_1;
  func_0x000107c6157c();
  func_0x000100df15b4((long)plVar2 + lVar1);
  func_0x0001000834e4((long)param_1 + _DAT_112d36ea0);
  func_0x0001000834e4((long)param_1 + _DAT_112d36ea8);
  func_0x000100df15d8((long)param_1 + _DAT_112d36eb0,0x112d36ce8,&UNK_10d9010d0);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)
            (param_1,*(undefined4 *)(*param_1 + 0x30),*(undefined2 *)(*param_1 + 0x34));
  return;
}



/* Entry: 100dec988; end: 100dec99b;  */

void FUN_100dec988(undefined8 param_1)

{
  if (lRam0000000112d36ee0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e60ee18);
  return;
}



/* Entry: 100dec99c; end: 100dec9ef;  */

void FUN_100dec99c(long param_1)

{
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_30 = &UNK_10d9011f8;
  puStack_28 = &UNK_10d901210;
  puStack_20 = &UNK_10d901210;
  puStack_18 = &UNK_10d901228;
  func_0x000107c61524(param_1,0x100,4,&puStack_30,param_1 + 0xd8);
  return;
}



/* Entry: 100dec9f0; end: 100decd1f;  */

/* WARNING: Possible PIC construction at 0x000100decad0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100decc94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100decad4) */
/* WARNING: Removing unreachable block (ram,0x000100decc98) */

long * FUN_100dec9f0(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  
  lVar8 = *(long *)(param_3 + -8);
  uVar1 = *(uint *)(lVar8 + 0x50);
  if ((uVar1 >> 0x11 & 1) != 0) {
    lVar8 = *param_2;
    *param_1 = lVar8;
    uVar7 = (ulong)uVar1 & 0xff;
    func_0x000107c6157c();
    return (long *)(lVar8 + (uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff)));
  }
  plVar3 = param_2;
  func_0x000107c614c4(param_2,param_3);
  iVar2 = (int)plVar3;
  if (iVar2 < 3) {
    if (iVar2 == 0) {
      *param_1 = *param_2;
      func_0x000107c61174();
      uVar6 = 0;
      goto LAB_100decd00;
    }
    if (iVar2 == 1) {
      lVar8 = 0;
      func_0x000107c5eea4();
      (**(code **)(*(long *)(lVar8 + -8) + 0x10))(param_1,param_2,lVar8);
      uVar6 = 1;
      goto LAB_100decd00;
    }
    if (iVar2 == 2) {
      lVar4 = 0;
      func_0x000107c5ede0();
      pcVar11 = *(code **)(*(long *)(lVar4 + -8) + 0x10);
      (*pcVar11)(param_1,param_2,lVar4);
      lVar8 = 0x112d36e68;
      func_0x0001000285a8(0x112d36e68,&UNK_10d901180);
      lVar9 = (long)*(int *)(lVar8 + 0x30);
      lVar8 = 0;
      FUN_100dd8cfc();
      lVar10 = *(long *)(lVar8 + -8);
      puVar5 = (undefined1 *)((long)param_2 + lVar9);
      (**(code **)(lVar10 + 0x30))(puVar5,1,lVar8);
      if ((int)puVar5 != 0) {
        lVar8 = 0x112d36368;
        func_0x0001000285a8(0x112d36368,&UNK_10d9008e0);
        uVar6 = *(undefined8 *)(*(long *)(lVar8 + -8) + 0x40);
        param_1 = (long *)((long)param_1 + lVar9);
        param_2 = (long *)((long)param_2 + lVar9);
        goto code_r0x000107c610b4;
      }
      puVar5 = (undefined1 *)((long)param_2 + lVar9);
      func_0x000107c614c4(puVar5,lVar8);
      iVar2 = (int)puVar5;
      if (iVar2 < 2) {
        if (iVar2 == 0) {
          (*pcVar11)((undefined1 *)((long)param_1 + lVar9),(undefined1 *)((long)param_2 + lVar9),
                     lVar4);
          uVar6 = 0;
        }
        else {
          if (iVar2 != 1) {
LAB_100decc88:
            uVar6 = *(undefined8 *)(lVar10 + 0x40);
            param_1 = (long *)((long)param_1 + lVar9);
            param_2 = (long *)((long)param_2 + lVar9);
            goto code_r0x000107c610b4;
          }
          (*pcVar11)((undefined1 *)((long)param_1 + lVar9),(undefined1 *)((long)param_2 + lVar9),
                     lVar4);
          uVar6 = 1;
        }
      }
      else if (iVar2 == 2) {
        (*pcVar11)((undefined1 *)((long)param_1 + lVar9),(undefined1 *)((long)param_2 + lVar9),lVar4
                  );
        uVar6 = 2;
      }
      else {
        if (iVar2 != 3) goto LAB_100decc88;
        (*pcVar11)((undefined1 *)((long)param_1 + lVar9),(undefined1 *)((long)param_2 + lVar9),lVar4
                  );
        uVar6 = 3;
      }
      func_0x000107c6159c((undefined1 *)((long)param_1 + lVar9),lVar8,uVar6);
      (**(code **)(lVar10 + 0x38))((undefined1 *)((long)param_1 + lVar9),0,1,lVar8);
      uVar6 = 2;
LAB_100decd00:
      func_0x000107c6159c(param_1,param_3,uVar6);
      return param_1;
    }
  }
  else {
    if (iVar2 == 3) {
      lVar8 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar8 + -8) + 0x10))(param_1,param_2,lVar8);
      uVar6 = 3;
      goto LAB_100decd00;
    }
    if (iVar2 == 4) {
      *(char *)param_1 = (char)*param_2;
      lVar8 = param_2[4];
      param_1[5] = param_2[5];
      param_1[4] = lVar8;
      (*(code *)**(undefined8 **)(lVar8 + -8))(param_1 + 1,param_2 + 1);
      uVar6 = 4;
      goto LAB_100decd00;
    }
    if (iVar2 == 6) {
      lVar8 = param_2[3];
      param_1[4] = param_2[4];
      param_1[3] = lVar8;
      (*(code *)**(undefined8 **)(lVar8 + -8))(param_1,param_2);
      uVar6 = 6;
      goto LAB_100decd00;
    }
  }
  uVar6 = *(undefined8 *)(lVar8 + 0x40);
code_r0x000107c610b4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(param_1,param_2,uVar6);
  return param_1;
}



/* Entry: 100decd20; end: 100dece9b;  */

void FUN_100decd20(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  code *UNRECOVERED_JUMPTABLE;
  long lVar6;
  
  puVar2 = param_1;
  func_0x000107c614c4();
  iVar1 = (int)puVar2;
  if (iVar1 < 3) {
    if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(*param_1);
      return;
    }
    if (iVar1 != 1) {
      if (iVar1 != 2) {
        return;
      }
      lVar3 = 0;
      func_0x000107c5ede0();
      UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar3 + -8) + 8);
      (*UNRECOVERED_JUMPTABLE)(param_1,lVar3);
      lVar4 = 0x112d36e68;
      func_0x0001000285a8(0x112d36e68,&UNK_10d901180);
      lVar6 = (long)*(int *)(lVar4 + 0x30);
      lVar5 = 0;
      FUN_100dd8cfc();
      lVar4 = (long)param_1 + lVar6;
      (**(code **)(*(long *)(lVar5 + -8) + 0x30))(lVar4,1,lVar5);
      if ((int)lVar4 != 0) {
        return;
      }
      lVar4 = (long)param_1 + lVar6;
      func_0x000107c614c4(lVar4,lVar5);
      iVar1 = (int)lVar4;
      if (iVar1 < 2) {
        if ((iVar1 != 0) && (iVar1 != 1)) {
          return;
        }
      }
      else if ((iVar1 != 2) && (iVar1 != 3)) {
        return;
      }
      param_1 = (undefined8 *)((long)param_1 + lVar6);
      goto LAB_100dece3c;
    }
    lVar3 = 0;
    func_0x000107c5eea4();
  }
  else {
    if (iVar1 != 3) {
      if (iVar1 == 4) {
        param_1 = param_1 + 1;
      }
      else if (iVar1 != 6) {
        return;
      }
      if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001000834f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)(param_1[3] + -8) + 8))();
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_release_11034f4c0)(*param_1);
      return;
    }
    lVar3 = 0;
    func_0x000107c5ede0();
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar3 + -8) + 8);
LAB_100dece3c:
                    /* WARNING: Could not recover jumptable at 0x000100dece4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,lVar3);
  return;
}



/* Entry: 100dece9c; end: 100ded4cb;  */

/* WARNING: Possible PIC construction at 0x000100decf70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ded118: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100decf74) */
/* WARNING: Removing unreachable block (ram,0x000100ded11c) */

undefined8 * FUN_100dece9c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  
  puVar2 = param_2;
  func_0x000107c614c4(param_2,param_3);
  iVar1 = (int)puVar2;
  if (iVar1 < 3) {
    if (iVar1 == 0) {
      *param_1 = *param_2;
      func_0x000107c61174();
      uVar6 = 0;
      goto LAB_100ded184;
    }
    if (iVar1 == 1) {
      lVar4 = 0;
      func_0x000107c5eea4();
      (**(code **)(*(long *)(lVar4 + -8) + 0x10))(param_1,param_2,lVar4);
      uVar6 = 1;
      goto LAB_100ded184;
    }
    if (iVar1 == 2) {
      lVar3 = 0;
      func_0x000107c5ede0();
      pcVar9 = *(code **)(*(long *)(lVar3 + -8) + 0x10);
      (*pcVar9)(param_1,param_2,lVar3);
      lVar4 = 0x112d36e68;
      func_0x0001000285a8(0x112d36e68,&UNK_10d901180);
      lVar7 = (long)*(int *)(lVar4 + 0x30);
      lVar4 = 0;
      FUN_100dd8cfc();
      lVar8 = *(long *)(lVar4 + -8);
      puVar5 = (undefined1 *)((long)param_2 + lVar7);
      (**(code **)(lVar8 + 0x30))(puVar5,1,lVar4);
      if ((int)puVar5 != 0) {
        lVar4 = 0x112d36368;
        func_0x0001000285a8(0x112d36368,&UNK_10d9008e0);
        uVar6 = *(undefined8 *)(*(long *)(lVar4 + -8) + 0x40);
        param_1 = (undefined8 *)((long)param_1 + lVar7);
        param_2 = (undefined8 *)((long)param_2 + lVar7);
        goto code_r0x000107c610b4;
      }
      puVar5 = (undefined1 *)((long)param_2 + lVar7);
      func_0x000107c614c4(puVar5,lVar4);
      iVar1 = (int)puVar5;
      if (iVar1 < 2) {
        if (iVar1 == 0) {
          (*pcVar9)((undefined1 *)((long)param_1 + lVar7),(undefined1 *)((long)param_2 + lVar7),
                    lVar3);
          uVar6 = 0;
        }
        else {
          if (iVar1 != 1) {
LAB_100ded10c:
            uVar6 = *(undefined8 *)(lVar8 + 0x40);
            param_1 = (undefined8 *)((long)param_1 + lVar7);
            param_2 = (undefined8 *)((long)param_2 + lVar7);
            goto code_r0x000107c610b4;
          }
          (*pcVar9)((undefined1 *)((long)param_1 + lVar7),(undefined1 *)((long)param_2 + lVar7),
                    lVar3);
          uVar6 = 1;
        }
      }
      else if (iVar1 == 2) {
        (*pcVar9)((undefined1 *)((long)param_1 + lVar7),(undefined1 *)((long)param_2 + lVar7),lVar3)
        ;
        uVar6 = 2;
      }
      else {
        if (iVar1 != 3) goto LAB_100ded10c;
        (*pcVar9)((undefined1 *)((long)param_1 + lVar7),(undefined1 *)((long)param_2 + lVar7),lVar3)
        ;
        uVar6 = 3;
      }
      func_0x000107c6159c((undefined1 *)((long)param_1 + lVar7),lVar4,uVar6);
      (**(code **)(lVar8 + 0x38))((undefined1 *)((long)param_1 + lVar7),0,1,lVar4);
      uVar6 = 2;
LAB_100ded184:
      func_0x000107c6159c(param_1,param_3,uVar6);
      return param_1;
    }
  }
  else {
    if (iVar1 == 3) {
      lVar4 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar4 + -8) + 0x10))(param_1,param_2,lVar4);
      uVar6 = 3;
      goto LAB_100ded184;
    }
    if (iVar1 == 4) {
      *(undefined1 *)param_1 = *(undefined1 *)param_2;
      lVar4 = param_2[4];
      param_1[5] = param_2[5];
      param_1[4] = lVar4;
      (*(code *)**(undefined8 **)(lVar4 + -8))(param_1 + 1,param_2 + 1);
      uVar6 = 4;
      goto LAB_100ded184;
    }
    if (iVar1 == 6) {
      lVar4 = param_2[3];
      param_1[4] = param_2[4];
      param_1[3] = lVar4;
      (*(code *)**(undefined8 **)(lVar4 + -8))(param_1,param_2);
      uVar6 = 6;
      goto LAB_100ded184;
    }
  }
  uVar6 = *(undefined8 *)(*(long *)(param_3 + -8) + 0x40);
code_r0x000107c610b4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(param_1,param_2,uVar6);
  return param_1;
}



/* Entry: 100ded4cc; end: 100ded4df;  */

void FUN_100ded4cc(undefined8 param_1)

{
  if (lRam0000000112d370b0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e60eecc);
  return;
}



/* Entry: 100ded4e0; end: 100ded9c7;  */

/* WARNING: Possible PIC construction at 0x000100ded5e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ded6bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ded5e4) */
/* WARNING: Removing unreachable block (ram,0x000100ded6c0) */

long FUN_100ded4e0(long param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  
  lVar2 = param_2;
  func_0x000107c614c4(param_2,param_3);
  iVar1 = (int)lVar2;
  if (iVar1 == 3) {
    lVar2 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar2 + -8) + 0x20))(param_1,param_2,lVar2);
    uVar5 = 3;
    goto LAB_100ded728;
  }
  if (iVar1 != 2) {
    if (iVar1 == 1) {
      lVar2 = 0;
      func_0x000107c5eea4();
      (**(code **)(*(long *)(lVar2 + -8) + 0x20))(param_1,param_2,lVar2);
      uVar5 = 1;
      goto LAB_100ded728;
    }
    uVar5 = *(undefined8 *)(*(long *)(param_3 + -8) + 0x40);
    goto code_r0x000107c610b4;
  }
  lVar3 = 0;
  func_0x000107c5ede0();
  pcVar8 = *(code **)(*(long *)(lVar3 + -8) + 0x20);
  (*pcVar8)(param_1,param_2,lVar3);
  lVar2 = 0x112d36e68;
  func_0x0001000285a8(0x112d36e68,&UNK_10d901180);
  lVar6 = (long)*(int *)(lVar2 + 0x30);
  lVar4 = 0;
  FUN_100dd8cfc();
  lVar7 = *(long *)(lVar4 + -8);
  lVar2 = param_2 + lVar6;
  (**(code **)(lVar7 + 0x30))(lVar2,1,lVar4);
  if ((int)lVar2 != 0) {
    lVar2 = 0x112d36368;
    func_0x0001000285a8(0x112d36368,&UNK_10d9008e0);
    uVar5 = *(undefined8 *)(*(long *)(lVar2 + -8) + 0x40);
    param_1 = param_1 + lVar6;
    param_2 = param_2 + lVar6;
    goto code_r0x000107c610b4;
  }
  lVar2 = param_2 + lVar6;
  func_0x000107c614c4(lVar2,lVar4);
  iVar1 = (int)lVar2;
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      (*pcVar8)(param_1 + lVar6,param_2 + lVar6,lVar3);
      uVar5 = 0;
    }
    else {
      if (iVar1 != 1) {
LAB_100ded6b0:
        uVar5 = *(undefined8 *)(lVar7 + 0x40);
        param_1 = param_1 + lVar6;
        param_2 = param_2 + lVar6;
code_r0x000107c610b4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__memcpy_11034c658)(param_1,param_2,uVar5);
        return param_1;
      }
      (*pcVar8)(param_1 + lVar6,param_2 + lVar6,lVar3);
      uVar5 = 1;
    }
  }
  else if (iVar1 == 2) {
    (*pcVar8)(param_1 + lVar6,param_2 + lVar6,lVar3);
    uVar5 = 2;
  }
  else {
    if (iVar1 != 3) goto LAB_100ded6b0;
    (*pcVar8)(param_1 + lVar6,param_2 + lVar6,lVar3);
    uVar5 = 3;
  }
  func_0x000107c6159c(param_1 + lVar6,lVar4,uVar5);
  (**(code **)(lVar7 + 0x38))(param_1 + lVar6,0,1,lVar4);
  uVar5 = 2;
LAB_100ded728:
  func_0x000107c6159c(param_1,param_3,uVar5);
  return param_1;
}



/* Entry: 100ded9c8; end: 100ded9cb;  */

void FUN_100ded9c8(void)

{
  return;
}



/* Entry: 100ded9cc; end: 100dedabb;  */

void FUN_100ded9cc(undefined8 param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_90 [32];
  undefined *puStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  long lStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puStack_70 = PTR___sBOWV_11034d658 + 0x40;
  lVar1 = 0x13f;
  func_0x000107c5eea4();
  if (param_2 < 0x40) {
    lStack_68 = *(long *)(lVar1 + -8) + 0x40;
    lVar1 = 0x13f;
    func_0x000107c5ede0();
    if (param_2 < 0x40) {
      lVar2 = 0x13f;
      func_0x000100dd8ca8();
      if (param_2 < 0x40) {
        lVar1 = *(long *)(lVar1 + -8) + 0x40;
        func_0x000107c61504(auStack_90,lVar1,*(long *)(lVar2 + -8) + 0x40);
        puStack_50 = &UNK_10d901258;
        puStack_48 = &UNK_10d901270;
        puStack_38 = PTR___sBi64_WV_11034d670 + 0x40;
        puStack_40 = &UNK_10d901210;
        puStack_60 = auStack_90;
        lStack_58 = lVar1;
        func_0x000107c61528(param_1,0x100,8,&puStack_70);
      }
    }
  }
  return;
}



/* Entry: 100dedabc; end: 100dedd87;  */

/* WARNING: Possible PIC construction at 0x000100dedb94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100dedcfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100dedb98) */
/* WARNING: Removing unreachable block (ram,0x000100dedd00) */

long * FUN_100dedabc(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  
  lVar8 = *(long *)(param_3 + -8);
  uVar1 = *(uint *)(lVar8 + 0x50);
  if ((uVar1 >> 0x11 & 1) != 0) {
    lVar8 = *param_2;
    *param_1 = lVar8;
    uVar7 = (ulong)uVar1 & 0xff;
    func_0x000107c6157c();
    return (long *)(lVar8 + (uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff)));
  }
  plVar3 = param_2;
  func_0x000107c614c4(param_2,param_3);
  iVar2 = (int)plVar3;
  if (iVar2 < 2) {
    if (iVar2 == 0) {
      lVar8 = 0;
      func_0x000107c5eea4();
      (**(code **)(*(long *)(lVar8 + -8) + 0x10))(param_1,param_2,lVar8);
      uVar6 = 0;
      goto LAB_100dedd68;
    }
    if (iVar2 == 1) {
      lVar4 = 0;
      func_0x000107c5ede0();
      pcVar11 = *(code **)(*(long *)(lVar4 + -8) + 0x10);
      (*pcVar11)(param_1,param_2,lVar4);
      lVar8 = 0x112d36e68;
      func_0x0001000285a8(0x112d36e68,&UNK_10d901180);
      lVar9 = (long)*(int *)(lVar8 + 0x30);
      lVar5 = 0;
      FUN_100dd8cfc();
      lVar10 = *(long *)(lVar5 + -8);
      lVar8 = (long)param_2 + lVar9;
      (**(code **)(lVar10 + 0x30))(lVar8,1,lVar5);
      if ((int)lVar8 != 0) {
        lVar8 = 0x112d36368;
        func_0x0001000285a8(0x112d36368,&UNK_10d9008e0);
        uVar6 = *(undefined8 *)(*(long *)(lVar8 + -8) + 0x40);
        param_1 = (long *)((long)param_1 + lVar9);
        param_2 = (long *)((long)param_2 + lVar9);
        goto code_r0x000107c610b4;
      }
      lVar8 = (long)param_2 + lVar9;
      func_0x000107c614c4(lVar8,lVar5);
      iVar2 = (int)lVar8;
      if (iVar2 < 2) {
        if (iVar2 == 0) {
          (*pcVar11)((long)param_1 + lVar9,(long)param_2 + lVar9,lVar4);
          uVar6 = 0;
        }
        else {
          if (iVar2 != 1) {
LAB_100dedcf0:
            uVar6 = *(undefined8 *)(lVar10 + 0x40);
            param_1 = (long *)((long)param_1 + lVar9);
            param_2 = (long *)((long)param_2 + lVar9);
            goto code_r0x000107c610b4;
          }
          (*pcVar11)((long)param_1 + lVar9,(long)param_2 + lVar9,lVar4);
          uVar6 = 1;
        }
      }
      else if (iVar2 == 2) {
        (*pcVar11)((long)param_1 + lVar9,(long)param_2 + lVar9,lVar4);
        uVar6 = 2;
      }
      else {
        if (iVar2 != 3) goto LAB_100dedcf0;
        (*pcVar11)((long)param_1 + lVar9,(long)param_2 + lVar9,lVar4);
        uVar6 = 3;
      }
      func_0x000107c6159c((long)param_1 + lVar9,lVar5,uVar6);
      (**(code **)(lVar10 + 0x38))((long)param_1 + lVar9,0,1,lVar5);
      uVar6 = 1;
LAB_100dedd68:
      func_0x000107c6159c(param_1,param_3,uVar6);
      return param_1;
    }
  }
  else {
    if (iVar2 == 2) {
      lVar8 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar8 + -8) + 0x10))(param_1,param_2,lVar8);
      uVar6 = 2;
      goto LAB_100dedd68;
    }
    if (iVar2 == 3) {
      lVar8 = param_2[3];
      param_1[4] = param_2[4];
      param_1[3] = lVar8;
      (*(code *)**(undefined8 **)(lVar8 + -8))(param_1,param_2);
      uVar6 = 3;
      goto LAB_100dedd68;
    }
  }
  uVar6 = *(undefined8 *)(lVar8 + 0x40);
code_r0x000107c610b4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(param_1,param_2,uVar6);
  return param_1;
}



/* Entry: 100dedd88; end: 100deded3;  */

void FUN_100dedd88(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  code *UNRECOVERED_JUMPTABLE;
  long lVar6;
  
  puVar2 = param_1;
  func_0x000107c614c4();
  iVar1 = (int)puVar2;
  if (iVar1 < 2) {
    if (iVar1 != 0) {
      if (iVar1 != 1) {
        return;
      }
      lVar3 = 0;
      func_0x000107c5ede0();
      UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar3 + -8) + 8);
      (*UNRECOVERED_JUMPTABLE)(param_1,lVar3);
      lVar4 = 0x112d36e68;
      func_0x0001000285a8(0x112d36e68,&UNK_10d901180);
      lVar6 = (long)*(int *)(lVar4 + 0x30);
      lVar5 = 0;
      FUN_100dd8cfc();
      lVar4 = (long)param_1 + lVar6;
      (**(code **)(*(long *)(lVar5 + -8) + 0x30))(lVar4,1,lVar5);
      if ((int)lVar4 != 0) {
        return;
      }
      lVar4 = (long)param_1 + lVar6;
      func_0x000107c614c4(lVar4,lVar5);
      iVar1 = (int)lVar4;
      if (iVar1 < 2) {
        if ((iVar1 != 0) && (iVar1 != 1)) {
          return;
        }
      }
      else if ((iVar1 != 2) && (iVar1 != 3)) {
        return;
      }
      param_1 = (undefined8 *)((long)param_1 + lVar6);
      goto LAB_100dede8c;
    }
    lVar3 = 0;
    func_0x000107c5eea4();
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 != 3) {
        return;
      }
      if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001000834f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)(param_1[3] + -8) + 8))();
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_release_11034f4c0)(*param_1);
      return;
    }
    lVar3 = 0;
    func_0x000107c5ede0();
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar3 + -8) + 8);
LAB_100dede8c:
                    /* WARNING: Could not recover jumptable at 0x000100dede9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,lVar3);
  return;
}



/* Entry: 100deded4; end: 100dee437;  */

/* WARNING: Possible PIC construction at 0x000100dedfa0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100dee0ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100dedfa4) */
/* WARNING: Removing unreachable block (ram,0x000100dee0f0) */

long FUN_100deded4(long param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  
  lVar4 = param_2;
  func_0x000107c614c4(param_2,param_3);
  iVar1 = (int)lVar4;
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      lVar4 = 0;
      func_0x000107c5eea4();
      (**(code **)(*(long *)(lVar4 + -8) + 0x10))(param_1,param_2,lVar4);
      uVar5 = 0;
      goto LAB_100dee158;
    }
    if (iVar1 == 1) {
      lVar2 = 0;
      func_0x000107c5ede0();
      pcVar8 = *(code **)(*(long *)(lVar2 + -8) + 0x10);
      (*pcVar8)(param_1,param_2,lVar2);
      lVar4 = 0x112d36e68;
      func_0x0001000285a8(0x112d36e68,&UNK_10d901180);
      lVar6 = (long)*(int *)(lVar4 + 0x30);
      lVar3 = 0;
      FUN_100dd8cfc();
      lVar7 = *(long *)(lVar3 + -8);
      lVar4 = param_2 + lVar6;
      (**(code **)(lVar7 + 0x30))(lVar4,1,lVar3);
      if ((int)lVar4 != 0) {
        lVar4 = 0x112d36368;
        func_0x0001000285a8(0x112d36368,&UNK_10d9008e0);
        uVar5 = *(undefined8 *)(*(long *)(lVar4 + -8) + 0x40);
        param_1 = param_1 + lVar6;
        param_2 = param_2 + lVar6;
        goto code_r0x000107c610b4;
      }
      lVar4 = param_2 + lVar6;
      func_0x000107c614c4(lVar4,lVar3);
      iVar1 = (int)lVar4;
      if (iVar1 < 2) {
        if (iVar1 == 0) {
          (*pcVar8)(param_1 + lVar6,param_2 + lVar6,lVar2);
          uVar5 = 0;
        }
        else {
          if (iVar1 != 1) {
LAB_100dee0e0:
            uVar5 = *(undefined8 *)(lVar7 + 0x40);
            param_1 = param_1 + lVar6;
            param_2 = param_2 + lVar6;
            goto code_r0x000107c610b4;
          }
          (*pcVar8)(param_1 + lVar6,param_2 + lVar6,lVar2);
          uVar5 = 1;
        }
      }
      else if (iVar1 == 2) {
        (*pcVar8)(param_1 + lVar6,param_2 + lVar6,lVar2);
        uVar5 = 2;
      }
      else {
        if (iVar1 != 3) goto LAB_100dee0e0;
        (*pcVar8)(param_1 + lVar6,param_2 + lVar6,lVar2);
        uVar5 = 3;
      }
      func_0x000107c6159c(param_1 + lVar6,lVar3,uVar5);
      (**(code **)(lVar7 + 0x38))(param_1 + lVar6,0,1,lVar3);
      uVar5 = 1;
LAB_100dee158:
      func_0x000107c6159c(param_1,param_3,uVar5);
      return param_1;
    }
  }
  else {
    if (iVar1 == 2) {
      lVar4 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar4 + -8) + 0x10))(param_1,param_2,lVar4);
      uVar5 = 2;
      goto LAB_100dee158;
    }
    if (iVar1 == 3) {
      lVar4 = *(long *)(param_2 + 0x18);
      *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
      *(long *)(param_1 + 0x18) = lVar4;
      (*(code *)**(undefined8 **)(lVar4 + -8))(param_1,param_2);
      uVar5 = 3;
      goto LAB_100dee158;
    }
  }
  uVar5 = *(undefined8 *)(*(long *)(param_3 + -8) + 0x40);
code_r0x000107c610b4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(param_1,param_2,uVar5);
  return param_1;
}



/* Entry: 100dee438; end: 100dee473;  */

undefined8 FUN_100dee438(undefined8 param_1,code *param_2)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_2)();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 100dee474; end: 100dee487;  */

void FUN_100dee474(undefined8 param_1)

{
  if (lRam0000000112d37158 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e60eef4);
  return;
}



/* Entry: 100dee488; end: 100dee967;  */

/* WARNING: Possible PIC construction at 0x000100dee584: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100dee660: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100dee588) */
/* WARNING: Removing unreachable block (ram,0x000100dee664) */

long FUN_100dee488(long param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  
  lVar2 = param_2;
  func_0x000107c614c4(param_2,param_3);
  iVar1 = (int)lVar2;
  if (iVar1 == 2) {
    lVar2 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar2 + -8) + 0x20))(param_1,param_2,lVar2);
    uVar5 = 2;
    goto LAB_100dee6cc;
  }
  if (iVar1 != 1) {
    if (iVar1 == 0) {
      lVar2 = 0;
      func_0x000107c5eea4();
      (**(code **)(*(long *)(lVar2 + -8) + 0x20))(param_1,param_2,lVar2);
      uVar5 = 0;
      goto LAB_100dee6cc;
    }
    uVar5 = *(undefined8 *)(*(long *)(param_3 + -8) + 0x40);
    goto code_r0x000107c610b4;
  }
  lVar3 = 0;
  func_0x000107c5ede0();
  pcVar8 = *(code **)(*(long *)(lVar3 + -8) + 0x20);
  (*pcVar8)(param_1,param_2,lVar3);
  lVar2 = 0x112d36e68;
  func_0x0001000285a8(0x112d36e68,&UNK_10d901180);
  lVar6 = (long)*(int *)(lVar2 + 0x30);
  lVar4 = 0;
  FUN_100dd8cfc();
  lVar7 = *(long *)(lVar4 + -8);
  lVar2 = param_2 + lVar6;
  (**(code **)(lVar7 + 0x30))(lVar2,1,lVar4);
  if ((int)lVar2 != 0) {
    lVar2 = 0x112d36368;
    func_0x0001000285a8(0x112d36368,&UNK_10d9008e0);
    uVar5 = *(undefined8 *)(*(long *)(lVar2 + -8) + 0x40);
    param_1 = param_1 + lVar6;
    param_2 = param_2 + lVar6;
    goto code_r0x000107c610b4;
  }
  lVar2 = param_2 + lVar6;
  func_0x000107c614c4(lVar2,lVar4);
  iVar1 = (int)lVar2;
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      (*pcVar8)(param_1 + lVar6,param_2 + lVar6,lVar3);
      uVar5 = 0;
    }
    else {
      if (iVar1 != 1) {
LAB_100dee654:
        uVar5 = *(undefined8 *)(lVar7 + 0x40);
        param_1 = param_1 + lVar6;
        param_2 = param_2 + lVar6;
code_r0x000107c610b4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__memcpy_11034c658)(param_1,param_2,uVar5);
        return param_1;
      }
      (*pcVar8)(param_1 + lVar6,param_2 + lVar6,lVar3);
      uVar5 = 1;
    }
  }
  else if (iVar1 == 2) {
    (*pcVar8)(param_1 + lVar6,param_2 + lVar6,lVar3);
    uVar5 = 2;
  }
  else {
    if (iVar1 != 3) goto LAB_100dee654;
    (*pcVar8)(param_1 + lVar6,param_2 + lVar6,lVar3);
    uVar5 = 3;
  }
  func_0x000107c6159c(param_1 + lVar6,lVar4,uVar5);
  (**(code **)(lVar7 + 0x38))(param_1 + lVar6,0,1,lVar4);
  uVar5 = 1;
LAB_100dee6cc:
  func_0x000107c6159c(param_1,param_3,uVar5);
  return param_1;
}



/* Entry: 100dee968; end: 100dee96b;  */

void FUN_100dee968(void)

{
  return;
}



/* Entry: 100dee96c; end: 100deea37;  */

void FUN_100dee96c(undefined8 param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_78 [32];
  long lStack_58;
  undefined1 *puStack_50;
  long lStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  lVar1 = 0x13f;
  func_0x000107c5eea4();
  if (param_2 < 0x40) {
    lStack_58 = *(long *)(lVar1 + -8) + 0x40;
    lVar1 = 0x13f;
    func_0x000107c5ede0();
    if (param_2 < 0x40) {
      lVar2 = 0x13f;
      func_0x000100dd8ca8();
      if (param_2 < 0x40) {
        lVar1 = *(long *)(lVar1 + -8) + 0x40;
        func_0x000107c61504(auStack_78,lVar1,*(long *)(lVar2 + -8) + 0x40);
        puStack_38 = PTR___sBi64_WV_11034d670 + 0x40;
        puStack_40 = &UNK_10d901210;
        puStack_50 = auStack_78;
        lStack_48 = lVar1;
        func_0x000107c61528(param_1,0x100,5,&lStack_58);
      }
    }
  }
  return;
}



/* Entry: 100deea38; end: 100deee9f;  */

long * FUN_100deea38(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  
  uVar3 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar3 >> 0x11 & 1) != 0) {
    lVar5 = *param_2;
    *param_1 = lVar5;
    uVar11 = (ulong)uVar3 & 0xff;
    func_0x000107c6157c();
    return (long *)(lVar5 + (uVar11 + 0x10 & (uVar11 ^ 0xffffffffffffffff)));
  }
  lVar5 = 0;
  FUN_100dee474();
  plVar6 = param_2;
  func_0x000107c614c4(param_2,lVar5);
  iVar4 = (int)plVar6;
  if (iVar4 < 2) {
    if (iVar4 == 0) {
      lVar9 = 0;
      func_0x000107c5eea4();
      (**(code **)(*(long *)(lVar9 + -8) + 0x10))(param_1,param_2,lVar9);
      uVar10 = 0;
      goto LAB_100deece8;
    }
    if (iVar4 == 1) {
      lVar7 = 0;
      func_0x000107c5ede0();
      pcVar14 = *(code **)(*(long *)(lVar7 + -8) + 0x10);
      (*pcVar14)(param_1,param_2,lVar7);
      lVar9 = 0x112d36e68;
      func_0x0001000285a8(0x112d36e68,&UNK_10d901180);
      lVar12 = (long)*(int *)(lVar9 + 0x30);
      lVar8 = 0;
      FUN_100dd8cfc();
      lVar13 = *(long *)(lVar8 + -8);
      lVar9 = (long)param_2 + lVar12;
      (**(code **)(lVar13 + 0x30))(lVar9,1,lVar8);
      if ((int)lVar9 == 0) {
        lVar9 = (long)param_2 + lVar12;
        func_0x000107c614c4(lVar9,lVar8);
        iVar4 = (int)lVar9;
        if (iVar4 < 2) {
          if (iVar4 == 0) {
            (*pcVar14)((long)param_1 + lVar12,(long)param_2 + lVar12,lVar7);
            uVar10 = 0;
            goto LAB_100deecc0;
          }
          if (iVar4 == 1) {
            (*pcVar14)((long)param_1 + lVar12,(long)param_2 + lVar12,lVar7);
            uVar10 = 1;
            goto LAB_100deecc0;
          }
LAB_100deec70:
          func_0x000107c610b4((long)param_1 + lVar12,(long)param_2 + lVar12,
                              *(undefined8 *)(lVar13 + 0x40));
        }
        else {
          if (iVar4 == 2) {
            (*pcVar14)((long)param_1 + lVar12,(long)param_2 + lVar12,lVar7);
            uVar10 = 2;
          }
          else {
            if (iVar4 != 3) goto LAB_100deec70;
            (*pcVar14)((long)param_1 + lVar12,(long)param_2 + lVar12,lVar7);
            uVar10 = 3;
          }
LAB_100deecc0:
          func_0x000107c6159c((long)param_1 + lVar12,lVar8,uVar10);
        }
        (**(code **)(lVar13 + 0x38))((long)param_1 + lVar12,0,1,lVar8);
      }
      else {
        lVar9 = 0x112d36368;
        func_0x0001000285a8(0x112d36368,&UNK_10d9008e0);
        func_0x000107c610b4((long)param_1 + lVar12,(long)param_2 + lVar12,
                            *(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
      }
      uVar10 = 1;
      goto LAB_100deece8;
    }
LAB_100deeb88:
    func_0x000107c610b4(param_1,param_2,*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  }
  else {
    if (iVar4 == 2) {
      lVar9 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar9 + -8) + 0x10))(param_1,param_2,lVar9);
      uVar10 = 2;
    }
    else {
      if (iVar4 != 3) goto LAB_100deeb88;
      lVar9 = param_2[3];
      param_1[4] = param_2[4];
      param_1[3] = lVar9;
      (*(code *)**(undefined8 **)(lVar9 + -8))(param_1,param_2);
      uVar10 = 3;
    }
LAB_100deece8:
    func_0x000107c6159c(param_1,lVar5,uVar10);
  }
  lVar7 = (long)*(int *)(param_3 + 0x14);
  lVar9 = 0;
  FUN_100dd8cfc();
  lVar8 = *(long *)(lVar9 + -8);
  lVar5 = (long)param_2 + lVar7;
  (**(code **)(lVar8 + 0x30))(lVar5,1,lVar9);
  if ((int)lVar5 != 0) {
    lVar5 = 0x112d36368;
    func_0x0001000285a8(0x112d36368,&UNK_10d9008e0);
    func_0x000107c610b4((long)param_1 + lVar7,(long)param_2 + lVar7,
                        *(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
    goto LAB_100deee60;
  }
  lVar5 = (long)param_2 + lVar7;
  func_0x000107c614c4(lVar5,lVar9);
  iVar4 = (int)lVar5;
  if (iVar4 < 2) {
    if (iVar4 == 0) {
      lVar5 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar5 + -8) + 0x10))((long)param_1 + lVar7,(long)param_2 + lVar7,lVar5)
      ;
      uVar10 = 0;
      goto LAB_100deee44;
    }
    if (iVar4 == 1) {
      lVar5 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar5 + -8) + 0x10))((long)param_1 + lVar7,(long)param_2 + lVar7,lVar5)
      ;
      uVar10 = 1;
      goto LAB_100deee44;
    }
LAB_100deedd4:
    func_0x000107c610b4((long)param_1 + lVar7,(long)param_2 + lVar7,*(undefined8 *)(lVar8 + 0x40));
  }
  else {
    if (iVar4 == 2) {
      lVar5 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar5 + -8) + 0x10))((long)param_1 + lVar7,(long)param_2 + lVar7,lVar5)
      ;
      uVar10 = 2;
    }
    else {
      if (iVar4 != 3) goto LAB_100deedd4;
      lVar5 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar5 + -8) + 0x10))((long)param_1 + lVar7,(long)param_2 + lVar7,lVar5)
      ;
      uVar10 = 3;
    }
LAB_100deee44:
    func_0x000107c6159c((long)param_1 + lVar7,lVar9,uVar10);
  }
  (**(code **)(lVar8 + 0x38))((long)param_1 + lVar7,0,1,lVar9);
LAB_100deee60:
  iVar4 = *(int *)(param_3 + 0x1c);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x18)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar4);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar4);
  uVar10 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar10;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 100deeea0; end: 100def047;  */

void FUN_100deeea0(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  
  uVar2 = 0;
  FUN_100dee474(0);
  lVar5 = param_1;
  func_0x000107c614c4(param_1,uVar2);
  iVar1 = (int)lVar5;
  if (iVar1 < 2) {
    if (iVar1 != 0) {
      if (iVar1 == 1) {
        lVar3 = 0;
        func_0x000107c5ede0();
        pcVar6 = *(code **)(*(long *)(lVar3 + -8) + 8);
        (*pcVar6)(param_1,lVar3);
        lVar5 = 0x112d36e68;
        func_0x0001000285a8(0x112d36e68,&UNK_10d901180);
        lVar7 = (long)*(int *)(lVar5 + 0x30);
        lVar4 = 0;
        FUN_100dd8cfc();
        lVar5 = param_1 + lVar7;
        (**(code **)(*(long *)(lVar4 + -8) + 0x30))(lVar5,1,lVar4);
        if ((int)lVar5 == 0) {
          lVar5 = param_1 + lVar7;
          func_0x000107c614c4(lVar5,lVar4);
          iVar1 = (int)lVar5;
          if (iVar1 < 2) {
            if ((iVar1 != 0) && (iVar1 != 1)) goto LAB_100deefac;
          }
          else if ((iVar1 != 2) && (iVar1 != 3)) goto LAB_100deefac;
          (*pcVar6)(param_1 + lVar7,lVar3);
        }
      }
      goto LAB_100deefac;
    }
    lVar5 = 0;
    func_0x000107c5eea4();
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 == 3) {
        func_0x0001000834e4(param_1);
      }
      goto LAB_100deefac;
    }
    lVar5 = 0;
    func_0x000107c5ede0();
  }
  (**(code **)(*(long *)(lVar5 + -8) + 8))(param_1,lVar5);
LAB_100deefac:
  lVar4 = (long)*(int *)(param_2 + 0x14);
  lVar3 = 0;
  FUN_100dd8cfc();
  lVar5 = param_1 + lVar4;
  (**(code **)(*(long *)(lVar3 + -8) + 0x30))(lVar5,1,lVar3);
  if ((int)lVar5 == 0) {
    lVar5 = param_1 + lVar4;
    func_0x000107c614c4(lVar5,lVar3);
    if ((uint)lVar5 < 4) {
      lVar5 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar5 + -8) + 8))(param_1 + lVar4,lVar5);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
            (*(undefined8 *)(param_1 + *(int *)(param_2 + 0x1c) + 8));
  return;
}



/* Entry: 100def048; end: 100df0393;  */

long FUN_100def048(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  
  lVar4 = 0;
  FUN_100dee474();
  lVar7 = param_2;
  func_0x000107c614c4(param_2,lVar4);
  iVar3 = (int)lVar7;
  if (iVar3 < 2) {
    if (iVar3 == 0) {
      lVar7 = 0;
      func_0x000107c5eea4();
      (**(code **)(*(long *)(lVar7 + -8) + 0x10))(param_1,param_2,lVar7);
      uVar8 = 0;
      goto LAB_100def2cc;
    }
    if (iVar3 == 1) {
      lVar5 = 0;
      func_0x000107c5ede0();
      pcVar11 = *(code **)(*(long *)(lVar5 + -8) + 0x10);
      (*pcVar11)(param_1,param_2,lVar5);
      lVar7 = 0x112d36e68;
      func_0x0001000285a8(0x112d36e68,&UNK_10d901180);
      lVar9 = (long)*(int *)(lVar7 + 0x30);
      lVar6 = 0;
      FUN_100dd8cfc();
      lVar10 = *(long *)(lVar6 + -8);
      lVar7 = param_2 + lVar9;
      (**(code **)(lVar10 + 0x30))(lVar7,1,lVar6);
      if ((int)lVar7 == 0) {
        lVar7 = param_2 + lVar9;
        func_0x000107c614c4(lVar7,lVar6);
        iVar3 = (int)lVar7;
        if (iVar3 < 2) {
          if (iVar3 == 0) {
            (*pcVar11)(param_1 + lVar9,param_2 + lVar9,lVar5);
            uVar8 = 0;
            goto LAB_100def2a4;
          }
          if (iVar3 == 1) {
            (*pcVar11)(param_1 + lVar9,param_2 + lVar9,lVar5);
            uVar8 = 1;
            goto LAB_100def2a4;
          }
LAB_100def254:
          func_0x000107c610b4(param_1 + lVar9,param_2 + lVar9,*(undefined8 *)(lVar10 + 0x40));
        }
        else {
          if (iVar3 == 2) {
            (*pcVar11)(param_1 + lVar9,param_2 + lVar9,lVar5);
            uVar8 = 2;
          }
          else {
            if (iVar3 != 3) goto LAB_100def254;
            (*pcVar11)(param_1 + lVar9,param_2 + lVar9,lVar5);
            uVar8 = 3;
          }
LAB_100def2a4:
          func_0x000107c6159c(param_1 + lVar9,lVar6,uVar8);
        }
        (**(code **)(lVar10 + 0x38))(param_1 + lVar9,0,1,lVar6);
      }
      else {
        lVar7 = 0x112d36368;
        func_0x0001000285a8(0x112d36368,&UNK_10d9008e0);
        func_0x000107c610b4(param_1 + lVar9,param_2 + lVar9,
                            *(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
      }
      uVar8 = 1;
      goto LAB_100def2cc;
    }
LAB_100def16c:
    func_0x000107c610b4(param_1,param_2,*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  }
  else {
    if (iVar3 == 2) {
      lVar7 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar7 + -8) + 0x10))(param_1,param_2,lVar7);
      uVar8 = 2;
    }
    else {
      if (iVar3 != 3) goto LAB_100def16c;
      lVar7 = *(long *)(param_2 + 0x18);
      *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
      *(long *)(param_1 + 0x18) = lVar7;
      (*(code *)**(undefined8 **)(lVar7 + -8))(param_1,param_2);
      uVar8 = 3;
    }
LAB_100def2cc:
    func_0x000107c6159c(param_1,lVar4,uVar8);
  }
  lVar5 = (long)*(int *)(param_3 + 0x14);
  lVar4 = 0;
  FUN_100dd8cfc();
  lVar6 = *(long *)(lVar4 + -8);
  lVar7 = param_2 + lVar5;
  (**(code **)(lVar6 + 0x30))(lVar7,1,lVar4);
  if ((int)lVar7 != 0) {
    lVar7 = 0x112d36368;
    func_0x0001000285a8(0x112d36368,&UNK_10d9008e0);
    func_0x000107c610b4(param_1 + lVar5,param_2 + lVar5,
                        *(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
    goto LAB_100def444;
  }
  lVar7 = param_2 + lVar5;
  func_0x000107c614c4(lVar7,lVar4);
  iVar3 = (int)lVar7;
  if (iVar3 < 2) {
    if (iVar3 == 0) {
      lVar7 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar7 + -8) + 0x10))(param_1 + lVar5,param_2 + lVar5,lVar7);
      uVar8 = 0;
      goto LAB_100def428;
    }
    if (iVar3 == 1) {
      lVar7 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar7 + -8) + 0x10))(param_1 + lVar5,param_2 + lVar5,lVar7);
      uVar8 = 1;
      goto LAB_100def428;
    }
LAB_100def3b8:
    func_0x000107c610b4(param_1 + lVar5,param_2 + lVar5,*(undefined8 *)(lVar6 + 0x40));
  }
  else {
    if (iVar3 == 2) {
      lVar7 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar7 + -8) + 0x10))(param_1 + lVar5,param_2 + lVar5,lVar7);
      uVar8 = 2;
    }
    else {
      if (iVar3 != 3) goto LAB_100def3b8;
      lVar7 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar7 + -8) + 0x10))(param_1 + lVar5,param_2 + lVar5,lVar7);
      uVar8 = 3;
    }
LAB_100def428:
    func_0x000107c6159c(param_1 + lVar5,lVar4,uVar8);
  }
  (**(code **)(lVar6 + 0x38))(param_1 + lVar5,0,1,lVar4);
LAB_100def444:
  iVar3 = *(int *)(param_3 + 0x1c);
  *(undefined1 *)(param_1 + *(int *)(param_3 + 0x18)) =
       *(undefined1 *)(param_2 + *(int *)(param_3 + 0x18));
  puVar1 = (undefined8 *)(param_1 + iVar3);
  puVar2 = (undefined8 *)(param_2 + iVar3);
  uVar8 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar8;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 100df0394; end: 100df03bf;  */

void FUN_100df0394(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}


