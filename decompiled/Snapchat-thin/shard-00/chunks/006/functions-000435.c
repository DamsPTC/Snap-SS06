/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1008f63e0; end: 1008f65e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008f63e0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112f0f4a0);
  func_0x000107c4b940(uVar10);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f0f4a8);
  uVar7 = *puVar1;
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c615e8(uVar7);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f0f4b0);
  uVar7 = *puVar1;
  uVar4 = puVar1[1];
  uVar2 = puVar1[2];
  uVar5 = puVar1[3];
  dVar13 = (double)puVar1[4];
  lVar3 = puVar1[5];
  uVar6 = puVar1[6];
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[4] = 0;
  dVar12 = 4.94065645841247e-324;
  puVar1[6] = 0;
  puVar1[5] = 1;
  if (lVar3 == 1) {
    func_0x000107c615f0(param_1);
  }
  else {
    uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112f0f4c8);
    func_0x000107c615f0(param_1);
    func_0x000107c40fd4(uVar11);
    if (dVar12 - dVar13 <= 15.0) {
      uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112f0f4c0);
      puVar8 = &UNK_1105c6508;
      func_0x000107c613fc(&UNK_1105c6508,0x50,7);
      *(undefined8 *)(puVar8 + 0x10) = uVar7;
      *(undefined8 *)(puVar8 + 0x18) = uVar4;
      *(undefined8 *)(puVar8 + 0x20) = uVar2;
      puVar8[0x28] = (char)uVar5;
      *(undefined8 *)(puVar8 + 0x30) = param_1;
      *(undefined8 *)(puVar8 + 0x38) = param_2;
      *(long *)(puVar8 + 0x40) = lVar3;
      *(undefined8 *)(puVar8 + 0x48) = uVar6;
      puStack_80 = &UNK_102d3ac34;
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0x42000000;
      pcStack_90 = FUN_1000f6b44;
      puStack_88 = &UNK_1105c6520;
      ppuVar9 = &puStack_a0;
      puStack_78 = puVar8;
      func_0x000107c60bc4(ppuVar9);
      puVar8 = puStack_78;
      func_0x000107c615f0(param_1);
      func_0x000102d3ab40(uVar7,uVar4,uVar2,uVar5);
      func_0x000100b64c10(lVar3,uVar6);
      func_0x000107c61574(puVar8);
      func_0x000107c4e524(uVar11);
      func_0x000107c60bd0(ppuVar9);
      func_0x000101c92590(uVar7,uVar4,uVar2,uVar5);
    }
    else {
      func_0x000101c92590(uVar7,uVar4,uVar2,uVar5);
    }
    FUN_1008f65e4(lVar3,uVar6);
  }
  func_0x000107c5d278(uVar10);
  return;
}



/* Entry: 1008f65e4; end: 1008f65fb;  */

void FUN_1008f65e4(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 1008f65fc; end: 1008f6627;  */

void FUN_1008f65fc(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    FUN_1008f63e0(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  }
  return;
}



/* Entry: 1008f6628; end: 1008f666b;  */

void FUN_1008f6628(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1008f666c; end: 1008f6693;  */

undefined ** FUN_1008f666c(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 1008f6694; end: 1008f66d3;  */

void FUN_1008f6694(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001008f6678();
  FUN_100082720("ContentClearCacheServiceProviderWrapperScopeInitializationPluginProvider",0x48,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1008f66d4; end: 1008f66db;  */

void FUN_1008f66d4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_10300b364);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1008f66dc; end: 1008f675f;  */

void FUN_1008f66dc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_10300b364,param_2,&UNK_10300b368,param_2,&UNK_10300b390,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1008f6760; end: 1008f6787;  */

undefined ** FUN_1008f6760(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 1008f6788; end: 1008f67c7;  */

void FUN_1008f6788(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001008f676c();
  FUN_100082720("ContentMixedStoriesDataServiceProviderWrapperScopeInitializationPluginProvider",
                0x4e,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1008f67c8; end: 1008f67cf;  */

void FUN_1008f67c8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_10300b664);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1008f67d0; end: 1008f6853;  */

void FUN_1008f67d0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_10300b664,param_2,&UNK_10300b668,param_2,&UNK_10300b690,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1008f6854; end: 1008f687b;  */

undefined ** FUN_1008f6854(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 1008f687c; end: 1008f68bb;  */

void FUN_1008f687c(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001008f6860();
  FUN_100082720("ContextURLInterceptorServicesProviderWrapperScopeInitializationPluginProvider",0x4d
                ,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1008f68bc; end: 1008f68c3;  */

void FUN_1008f68bc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102d62544);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1008f68c4; end: 1008f6947;  */

void FUN_1008f68c4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102d62544,param_2,&UNK_102d62548,param_2,&UNK_102d62570,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1008f6948; end: 1008f696b;  */

undefined ** FUN_1008f6948(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 1008f696c; end: 1008f69eb;  */

void FUN_1008f696c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1106977b0;
  func_0x000107c613fc(&UNK_1106977b0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1008f69ec,puVar1);
  return;
}



/* Entry: 1008f69ec; end: 1008f69f3;  */

void FUN_1008f69ec(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112f98ec8,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f98ec8,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110697848;
  func_0x000107c613fc(&UNK_110697848,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_1037e8afc;
  FUN_10058fa64(&UNK_1037e8afc,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1008f69f4; end: 1008f6aeb;  */

void FUN_1008f69f4(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112f98ec8,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f98ec8,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110697848;
  func_0x000107c613fc(&UNK_110697848,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_1037e8afc;
  FUN_10058fa64(&UNK_1037e8afc,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1008f6aec; end: 1008f6b0f;  */

void FUN_1008f6aec(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1008f6b10; end: 1008f6cc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008f6b10(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_70;
  long lStack_68;
  
  lVar2 = param_2;
  FUN_1003693e8();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112f98ed8) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112f98ee0) = param_3;
  *(undefined8 *)(lVar3 + _DAT_112f98ee8) = param_4;
  *(undefined8 *)(lVar3 + _DAT_112f98ef0) = param_5;
  *(undefined8 *)(lVar3 + _DAT_112f98ef8) = param_6;
  *(undefined8 *)(lVar3 + _DAT_112f98f00) = param_7;
  *(undefined8 *)(lVar3 + _DAT_112f98f08) = param_8;
  *(undefined8 *)(lVar3 + _DAT_112f98f10) = param_9;
  *(undefined8 *)(lVar3 + _DAT_112f98f18) = param_10;
  *(undefined8 *)(lVar3 + _DAT_112f98f20) = param_11;
  *(undefined8 *)(lVar3 + _DAT_112f98f28) = param_12;
  *(undefined8 *)(lVar3 + _DAT_112f98f30) = param_13;
  *(undefined8 *)(lVar3 + _DAT_112f98f38) = param_14;
  puVar1 = PTR_s_init_1125d9248;
  lStack_70 = lVar3;
  lStack_68 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  plVar4 = &lStack_70;
  func_0x000107c61154(plVar4,puVar1);
  *param_1 = (long)plVar4;
  return;
}



/* Entry: 1008f6cc8; end: 1008f6db3;  */

void FUN_1008f6cc8(void)

{
  long unaff_x20;
  
  FUN_1008f6b10(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70));
  return;
}



/* Entry: 1008f6db4; end: 1008f6dd7;  */

undefined ** FUN_1008f6db4(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 1008f6dd8; end: 1008f6e57;  */

void FUN_1008f6dd8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110697c08;
  func_0x000107c613fc(&UNK_110697c08,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1008f6e58,puVar1);
  return;
}



/* Entry: 1008f6e58; end: 1008f6e5f;  */

void FUN_1008f6e58(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112f9a4b8,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f9a4b8,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110697ca0;
  func_0x000107c613fc(&UNK_110697ca0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_1037efa84;
  FUN_10058fa64(&UNK_1037efa84,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1008f6e60; end: 1008f6f57;  */

void FUN_1008f6e60(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112f9a4b8,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f9a4b8,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110697ca0;
  func_0x000107c613fc(&UNK_110697ca0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_1037efa84;
  FUN_10058fa64(&UNK_1037efa84,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1008f6f58; end: 1008f6f7b;  */

void FUN_1008f6f58(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1008f6f7c; end: 1008f7133;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008f6f7c(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_70;
  long lStack_68;
  
  lVar2 = param_2;
  FUN_100386ec4();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112f9a4c8) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112f9a4d0) = param_3;
  *(undefined8 *)(lVar3 + _DAT_112f9a4d8) = param_4;
  *(undefined8 *)(lVar3 + _DAT_112f9a4e0) = param_5;
  *(undefined8 *)(lVar3 + _DAT_112f9a4e8) = param_6;
  *(undefined8 *)(lVar3 + _DAT_112f9a4f0) = param_7;
  *(undefined8 *)(lVar3 + _DAT_112f9a4f8) = param_8;
  *(undefined8 *)(lVar3 + _DAT_112f9a500) = param_9;
  *(undefined8 *)(lVar3 + _DAT_112f9a508) = param_10;
  *(undefined8 *)(lVar3 + _DAT_112f9a510) = param_11;
  *(undefined8 *)(lVar3 + _DAT_112f9a518) = param_12;
  *(undefined8 *)(lVar3 + _DAT_112f9a520) = param_13;
  *(undefined8 *)(lVar3 + _DAT_112f9a528) = param_14;
  puVar1 = PTR_s_init_1125d9248;
  lStack_70 = lVar3;
  lStack_68 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  plVar4 = &lStack_70;
  func_0x000107c61154(plVar4,puVar1);
  *param_1 = (long)plVar4;
  return;
}



/* Entry: 1008f7134; end: 1008f721f;  */

void FUN_1008f7134(void)

{
  long unaff_x20;
  
  FUN_1008f6f7c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70));
  return;
}



/* Entry: 1008f7220; end: 1008f7247;  */

undefined ** FUN_1008f7220(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 1008f7248; end: 1008f7287;  */

void FUN_1008f7248(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001008f722c();
  FUN_100082720("CreateStickerSpotlightOperaPluginEntryPointWrapperScopeInitializationPluginProvider"
                ,0x53,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1008f7288; end: 1008f728f;  */

void FUN_1008f7288(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_102d8b390);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1008f7290; end: 1008f7313;  */

void FUN_1008f7290(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_102d8b390,param_2,FUN_1008f7314,param_2,&UNK_102d8b394,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1008f7314; end: 1008f733b;  */

void FUN_1008f7314(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1008f733c; end: 1008f7347;  */

void FUN_1008f733c(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar2,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_10033d3c4();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x28) = uStack_70;
  *(undefined8 *)(lVar2 + 0x30) = uStack_78;
  FUN_1000285a8(0x112ec6160,&UNK_10dae75f0);
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c6157c(uStack_80);
  FUN_10017da58();
  puVar6 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(lVar2 + 0x18) = puVar6;
  puVar7 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x20) = puVar7;
  func_0x0001008f7560(0);
  func_0x000107c613fc();
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar5 = uStack_68;
  func_0x000107c61174();
  func_0x000107c61174(puVar6);
  uVar8 = uVar5;
  FUN_1008f7580(uVar5,uVar3,uVar4,puVar7,puVar6);
  *(undefined8 *)(lVar2 + 0x10) = uVar8;
  func_0x000107c6157c();
  FUN_1008f7604();
  func_0x000107c61574(uVar8);
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar7 != (undefined *)0x0) {
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61574(uStack_80);
    *(undefined **)(lVar2 + 0x38) = puVar7;
    *param_1 = lVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008f7538);
  (*pcVar1)();
}



/* Entry: 1008f7348; end: 1008f7537;  */

void FUN_1008f7348(long *param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_10033d3c4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x28) = uStack_70;
  *(undefined8 *)(param_2 + 0x30) = uStack_78;
  FUN_1000285a8(0x112ec6160,&UNK_10dae75f0);
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c6157c(uStack_80);
  FUN_10017da58();
  puVar5 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x18) = puVar5;
  puVar6 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x20) = puVar6;
  func_0x0001008f7560(0);
  func_0x000107c613fc();
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar4 = uStack_68;
  func_0x000107c61174();
  func_0x000107c61174(puVar5);
  uVar7 = uVar4;
  FUN_1008f7580(uVar4,uVar2,uVar3,puVar6,puVar5);
  *(undefined8 *)(param_2 + 0x10) = uVar7;
  func_0x000107c6157c();
  FUN_1008f7604();
  func_0x000107c61574(uVar7);
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar6 != (undefined *)0x0) {
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar3);
    func_0x000107c61574(uStack_80);
    *(undefined **)(param_2 + 0x38) = puVar6;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008f7538);
  (*pcVar1)();
}



/* Entry: 1008f7538; end: 1008f753f;  */

void FUN_1008f7538(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1008f7540; end: 1008f757f;  */

void FUN_1008f7540(void)

{
  func_0x000107c61168(&PTR_PTR_112939f80);
  return;
}



/* Entry: 1008f7580; end: 1008f7603;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008f7580(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_5;
  *(undefined8 *)(unaff_x20 + 0x18) = param_4;
  *(undefined8 *)(unaff_x20 + 0x20) = *(undefined8 *)(param_2 + _DAT_11302e640);
  func_0x000107c61174();
  uVar1 = param_3;
  func_0x000107c5bd94();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar1;
  return;
}



/* Entry: 1008f7604; end: 1008f773f;  */

void FUN_1008f7604(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  ppuVar5 = &puStack_80;
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar4 = &UNK_1105cf3f0;
  func_0x000107c613fc(&UNK_1105cf3f0,0x28,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar6;
  *(undefined8 *)(puVar4 + 0x18) = uVar1;
  *(undefined8 *)(puVar4 + 0x20) = uVar2;
  puStack_60 = &UNK_102d90810;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_102d9081c;
  puStack_68 = &UNK_1105cf408;
  puStack_58 = puVar4;
  func_0x000107c60bc4(&puStack_80);
  puVar4 = puStack_58;
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61574(puVar4);
  func_0x000107c3e4fc(puVar3);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  FUN_10033d450(0);
  func_0x000107c610f8();
  func_0x000107c61174(puVar3);
  puVar4 = puVar3;
  FUN_1008f7788();
  func_0x000107c42c20(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar4);
  return;
}



/* Entry: 1008f7740; end: 1008f7773;  */

void FUN_1008f7740(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1008f7774; end: 1008f7787;  */

void FUN_1008f7774(long param_1,long param_2)

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



/* Entry: 1008f7788; end: 1008f77d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008f7788(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112f9bd80) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1008f77d4; end: 1008f780f;  */

void FUN_1008f77d4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1008f7810; end: 1008f7833;  */

undefined ** FUN_1008f7810(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 1008f7834; end: 1008f78b3;  */

void FUN_1008f7834(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1106982c0;
  func_0x000107c613fc(&UNK_1106982c0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1008f78b4,puVar1);
  return;
}



/* Entry: 1008f78b4; end: 1008f78bb;  */

void FUN_1008f78b4(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112f9b790,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f9b790,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110698358;
  func_0x000107c613fc(&UNK_110698358,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_1037f7884;
  FUN_10058fa64(&UNK_1037f7884,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1008f78bc; end: 1008f79b3;  */

void FUN_1008f78bc(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112f9b790,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f9b790,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110698358;
  func_0x000107c613fc(&UNK_110698358,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_1037f7884;
  FUN_10058fa64(&UNK_1037f7884,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1008f79b4; end: 1008f79d7;  */

void FUN_1008f79b4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1008f79d8; end: 1008f79eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008f79d8(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long unaff_x20;
  long lStack_70;
  long lStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x48);
  plVar12 = &lStack_70;
  lVar10 = lVar1;
  FUN_100374ff8();
  lVar11 = lVar10;
  func_0x000107c610f8();
  *(long *)(lVar11 + _DAT_112f9b7a0) = lVar1;
  *(undefined8 *)(lVar11 + _DAT_112f9b7a8) = uVar5;
  *(undefined8 *)(lVar11 + _DAT_112f9b7b0) = uVar2;
  *(undefined8 *)(lVar11 + _DAT_112f9b7b8) = uVar6;
  *(undefined8 *)(lVar11 + _DAT_112f9b7c0) = uVar3;
  *(undefined8 *)(lVar11 + _DAT_112f9b7c8) = uVar7;
  *(undefined8 *)(lVar11 + _DAT_112f9b7d0) = uVar4;
  *(undefined8 *)(lVar11 + _DAT_112f9b7d8) = uVar8;
  puVar9 = PTR_s_init_1125d9248;
  lStack_70 = lVar11;
  lStack_68 = lVar10;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar8);
  func_0x000107c61154(&lStack_70,puVar9);
  *param_1 = plVar12;
  return;
}



/* Entry: 1008f79ec; end: 1008f7b17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008f79ec(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_70;
  long lStack_68;
  
  plVar4 = &lStack_70;
  lVar2 = param_2;
  FUN_100374ff8();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112f9b7a0) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112f9b7a8) = param_3;
  *(undefined8 *)(lVar3 + _DAT_112f9b7b0) = param_4;
  *(undefined8 *)(lVar3 + _DAT_112f9b7b8) = param_5;
  *(undefined8 *)(lVar3 + _DAT_112f9b7c0) = param_6;
  *(undefined8 *)(lVar3 + _DAT_112f9b7c8) = param_7;
  *(undefined8 *)(lVar3 + _DAT_112f9b7d0) = param_8;
  *(undefined8 *)(lVar3 + _DAT_112f9b7d8) = param_9;
  puVar1 = PTR_s_init_1125d9248;
  lStack_70 = lVar3;
  lStack_68 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c61154(&lStack_70,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1008f7b18; end: 1008f7b9f;  */

void FUN_1008f7b18(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1008f7ba0; end: 1008f7bab;  */

undefined ** FUN_1008f7ba0(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 1008f7bac; end: 1008f7bd7;  */

void FUN_1008f7bac(void)

{
  FUN_1008f5bec();
  return;
}



/* Entry: 1008f7bd8; end: 1008f7bdf;  */

void FUN_1008f7bd8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101f9a6c8);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1008f7be0; end: 1008f7c63;  */

void FUN_1008f7be0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101f9a6c8,param_2,&UNK_101f9a6cc,param_2,&UNK_101f9a6f4,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1008f7c64; end: 1008f7c87;  */

undefined ** FUN_1008f7c64(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 1008f7c88; end: 1008f7d07;  */

void FUN_1008f7c88(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1106985d8;
  func_0x000107c613fc(&UNK_1106985d8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1008f7d08,puVar1);
  return;
}



/* Entry: 1008f7d08; end: 1008f7d0f;  */

void FUN_1008f7d08(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112f9c300,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f9c300,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110698670;
  func_0x000107c613fc(&UNK_110698670,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_1037fb1b8;
  FUN_10058fa64(&UNK_1037fb1b8,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1008f7d10; end: 1008f7e07;  */

void FUN_1008f7d10(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112f9c300,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f9c300,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110698670;
  func_0x000107c613fc(&UNK_110698670,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_1037fb1b8;
  FUN_10058fa64(&UNK_1037fb1b8,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1008f7e08; end: 1008f7e2b;  */

void FUN_1008f7e08(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1008f7e2c; end: 1008f7e3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008f7e2c(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long unaff_x20;
  long lStack_70;
  long lStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x40);
  plVar10 = &lStack_70;
  lVar8 = lVar1;
  FUN_10037ca34();
  lVar9 = lVar8;
  func_0x000107c610f8();
  *(long *)(lVar9 + _DAT_112f9c310) = lVar1;
  *(undefined8 *)(lVar9 + _DAT_112f9c318) = uVar4;
  *(undefined8 *)(lVar9 + _DAT_112f9c320) = uVar2;
  *(undefined8 *)(lVar9 + _DAT_112f9c328) = uVar5;
  *(undefined8 *)(lVar9 + _DAT_112f9c330) = uVar3;
  *(undefined8 *)(lVar9 + _DAT_112f9c338) = uVar6;
  *(undefined8 *)(lVar9 + _DAT_112f9c340) = uVar11;
  puVar7 = PTR_s_init_1125d9248;
  lStack_70 = lVar9;
  lStack_68 = lVar8;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar11);
  func_0x000107c61154(&lStack_70,puVar7);
  *param_1 = plVar10;
  return;
}



/* Entry: 1008f7e40; end: 1008f7f53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008f7e40(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_70;
  long lStack_68;
  
  plVar4 = &lStack_70;
  lVar2 = param_2;
  FUN_10037ca34();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112f9c310) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112f9c318) = param_3;
  *(undefined8 *)(lVar3 + _DAT_112f9c320) = param_4;
  *(undefined8 *)(lVar3 + _DAT_112f9c328) = param_5;
  *(undefined8 *)(lVar3 + _DAT_112f9c330) = param_6;
  *(undefined8 *)(lVar3 + _DAT_112f9c338) = param_7;
  *(undefined8 *)(lVar3 + _DAT_112f9c340) = param_8;
  puVar1 = PTR_s_init_1125d9248;
  lStack_70 = lVar3;
  lStack_68 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c61154(&lStack_70,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1008f7f54; end: 1008f7fd3;  */

void FUN_1008f7f54(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1008f7fd4; end: 1008f7ffb;  */

undefined ** FUN_1008f7fd4(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 1008f7ffc; end: 1008f803b;  */

void FUN_1008f7ffc(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001008f7fe0();
  FUN_100082720("CustomReportServiceProviderWrapperScopeInitializationPluginProvider",0x43,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1008f803c; end: 1008f8043;  */

void FUN_1008f803c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102faa57c);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1008f8044; end: 1008f80c7;  */

void FUN_1008f8044(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102faa57c,param_2,&UNK_102faa580,param_2,&UNK_102faa5a8,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1008f80c8; end: 1008f80ef;  */

undefined ** FUN_1008f80c8(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 1008f80f0; end: 1008f812f;  */

void FUN_1008f80f0(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001008f80d4();
  FUN_100082720("DailyGameBadgingServiceProviderWrapperScopeInitializationPluginProvider",0x47,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1008f8130; end: 1008f8137;  */

void FUN_1008f8130(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102df0fe8);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1008f8138; end: 1008f81bb;  */

void FUN_1008f8138(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102df0fe8,param_2,&UNK_102df0fec,param_2,&UNK_102df1014,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1008f81bc; end: 1008f81c7;  */

undefined ** FUN_1008f81bc(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 1008f81c8; end: 1008f828f;  */

void FUN_1008f81c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11050bb78;
  func_0x000107c613fc(&UNK_11050bb78,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  FUN_1000823a8(FUN_1008f82d8,puVar1);
  return;
}



/* Entry: 1008f8290; end: 1008f82d7;  */

void FUN_1008f8290(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1008f81c8(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38));
  FUN_100082720("DeclaredAgeVerificationRemediationPluginPluginProvider",0x36,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1008f82d8; end: 1008f82e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008f82d8(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uVar11;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  lVar3 = lVar1;
  FUN_100083b20(&uStack_68);
  func_0x0001008f8630();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined8 *)(lVar4 + _DAT_112e9bc30) = 0;
  lVar6 = _DAT_112e9bc38;
  puVar5 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar4 + lVar6) = puVar5;
  *(undefined1 *)(lVar4 + _DAT_112e9bc40) = 0;
  *(undefined1 *)(lVar4 + _DAT_112e9bc48) = 0;
  *(undefined1 *)(lVar4 + _DAT_112e9bc50) = 0;
  *(long *)(lVar4 + _DAT_112e9bc58) = lVar1;
  *(undefined8 *)(lVar4 + _DAT_112e9bc60) = uVar8;
  *(undefined8 *)(lVar4 + _DAT_112e9bc68) = uStack_68;
  *(undefined8 *)(lVar4 + _DAT_112e9bc70) = uVar2;
  lVar6 = 0;
  func_0x0001008f8650();
  func_0x000107c613fc();
  *(undefined8 *)(lVar6 + 0x10) = uVar10;
  *(undefined8 *)(lVar6 + 0x18) = uVar11;
  *(long *)(lVar4 + _DAT_112e9bc78) = lVar6;
  lVar7 = 0;
  func_0x0001008f8670();
  lVar6 = lVar7;
  func_0x000107c613fc();
  puVar5 = PTR_PTR_1126aa868;
  func_0x000107c610f8();
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar8);
  uVar8 = uStack_68;
  func_0x000107c61174(uStack_68);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar11);
  func_0x000107c6157c(uVar10);
  func_0x000107c453e4();
  *(undefined **)(lVar6 + 0x10) = puVar5;
  plVar9 = (long *)(lVar4 + _DAT_112e9bc80);
  plVar9[3] = lVar7;
  plVar9[4] = (long)&PTR_DAT_11050ba78;
  *plVar9 = lVar6;
  plVar9 = &lStack_78;
  lStack_78 = lVar4;
  lStack_70 = lVar3;
  func_0x000107c61154(plVar9,PTR_s_init_1125d9248);
  puVar5 = &UNK_11050bba0;
  func_0x000107c613fc(&UNK_11050bba0,0x18,7);
  func_0x000107c61614(puVar5 + 0x10,plVar9);
  func_0x000107c61174();
  uVar10 = 6;
  func_0x0001001ca524(6,1,0,2,0,0,&UNK_10daa9a98,puVar5,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar5);
  func_0x000107c61170(uVar8);
  uVar11 = *(undefined8 *)((long)plVar9 + _DAT_112e9bc30);
  *(undefined8 *)((long)plVar9 + _DAT_112e9bc30) = uVar10;
  func_0x000107c61170(plVar9);
  func_0x000107c61574(uVar11);
  *param_1 = plVar9;
  param_1[1] = &PTR_DAT_11050bbc8;
  return;
}



/* Entry: 1008f82e8; end: 1008f854f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008f82e8(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  lVar1 = param_2;
  FUN_100083b20(&uStack_68);
  func_0x0001008f8630();
  lVar2 = lVar1;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112e9bc30) = 0;
  lVar4 = _DAT_112e9bc38;
  puVar3 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + lVar4) = puVar3;
  *(undefined1 *)(lVar2 + _DAT_112e9bc40) = 0;
  *(undefined1 *)(lVar2 + _DAT_112e9bc48) = 0;
  *(undefined1 *)(lVar2 + _DAT_112e9bc50) = 0;
  *(long *)(lVar2 + _DAT_112e9bc58) = param_2;
  *(undefined8 *)(lVar2 + _DAT_112e9bc60) = param_5;
  *(undefined8 *)(lVar2 + _DAT_112e9bc68) = uStack_68;
  *(undefined8 *)(lVar2 + _DAT_112e9bc70) = param_7;
  lVar4 = 0;
  func_0x0001008f8650();
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x10) = param_4;
  *(undefined8 *)(lVar4 + 0x18) = param_3;
  *(long *)(lVar2 + _DAT_112e9bc78) = lVar4;
  lVar5 = 0;
  func_0x0001008f8670();
  lVar4 = lVar5;
  func_0x000107c613fc();
  puVar3 = PTR_PTR_1126aa868;
  func_0x000107c610f8();
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_5);
  uVar8 = uStack_68;
  func_0x000107c61174(uStack_68);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c453e4();
  *(undefined **)(lVar4 + 0x10) = puVar3;
  plVar6 = (long *)(lVar2 + _DAT_112e9bc80);
  plVar6[3] = lVar5;
  plVar6[4] = (long)&PTR_DAT_11050ba78;
  *plVar6 = lVar4;
  plVar6 = &lStack_78;
  lStack_78 = lVar2;
  lStack_70 = lVar1;
  func_0x000107c61154(plVar6,PTR_s_init_1125d9248);
  puVar3 = &UNK_11050bba0;
  func_0x000107c613fc(&UNK_11050bba0,0x18,7);
  func_0x000107c61614(puVar3 + 0x10,plVar6);
  func_0x000107c61174();
  uVar7 = 6;
  func_0x0001001ca524(6,1,0,2,0,0,&UNK_10daa9a98,puVar3,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar3);
  func_0x000107c61170(uVar8);
  uVar8 = *(undefined8 *)((long)plVar6 + _DAT_112e9bc30);
  *(undefined8 *)((long)plVar6 + _DAT_112e9bc30) = uVar7;
  func_0x000107c61170(plVar6);
  func_0x000107c61574(uVar8);
  *param_1 = plVar6;
  param_1[1] = &PTR_DAT_11050bbc8;
  return;
}



/* Entry: 1008f8550; end: 1008f8573;  */

void FUN_1008f8550(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1008f8574; end: 1008f857b;  */

void FUN_1008f8574(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  uVar1 = 0x112e9bcf0;
  FUN_1000285a8(0x112e9bcf0,&UNK_10daa9ad8);
  func_0x000107c610f8();
  uVar2 = uStack_38;
  FUN_10017da58(uStack_38,uVar1);
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 1008f857c; end: 1008f8607;  */

void FUN_1008f857c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  uVar1 = 0x112e9bcf0;
  FUN_1000285a8(0x112e9bcf0,&UNK_10daa9ad8);
  func_0x000107c610f8();
  uVar2 = uStack_38;
  FUN_10017da58(uStack_38,uVar1);
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 1008f8608; end: 1008f860f;  */

void FUN_1008f8608(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1008f8610; end: 1008f868f;  */

void FUN_1008f8610(void)

{
  func_0x000107c61168(&PTR_PTR_1128e77d8);
  return;
}



/* Entry: 1008f8690; end: 1008f8703; -[SCGrapheneDeclaredAgeRemediationMetric2 init] */

undefined1 * FUN_1008f8690(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ed948;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1008f8704; end: 1008f874f;  */

void FUN_1008f8704(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1008f8750; end: 1008f8777;  */

undefined ** FUN_1008f8750(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 1008f8778; end: 1008f87b7;  */

void FUN_1008f8778(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001008f875c();
  FUN_100082720("FamilyCenterEligibilityServicesProviderWrapperScopeInitializationPluginProvider",
                0x4f,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1008f87b8; end: 1008f87bf;  */

void FUN_1008f87b8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102faa700);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1008f87c0; end: 1008f8843;  */

void FUN_1008f87c0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102faa700,param_2,&UNK_102faa704,param_2,&UNK_102faa72c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1008f8844; end: 1008f884f;  */

undefined ** FUN_1008f8844(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 1008f8850; end: 1008f88db;  */

void FUN_1008f8850(undefined8 param_1)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1008f88dc,param_1);
  return;
}



/* Entry: 1008f88dc; end: 1008f88e3;  */

void FUN_1008f88dc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_102dbde90);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1008f88e4; end: 1008f8967;  */

void FUN_1008f88e4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_102dbde90,param_2,FUN_1008f8968,param_2,&UNK_102dbde94,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1008f8968; end: 1008f898f;  */

void FUN_1008f8968(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1008f8990; end: 1008f8dab;  */

void FUN_1008f8990(long *param_1,long param_2)

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
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined *puVar20;
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
  undefined8 auStack_70 [2];
  
  FUN_100083b20(auStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_100083b20(&uStack_a8);
  FUN_100083b20(&uStack_b0);
  FUN_100083b20(&uStack_b8);
  FUN_100083b20(&uStack_c0);
  FUN_100083b20(&uStack_c8);
  FUN_100083b20(&uStack_d0);
  FUN_100083b20(&uStack_d8);
  FUN_100083b20(&uStack_e0);
  FUN_100083b20(&uStack_e8);
  FUN_100083b20(&uStack_f0);
  FUN_100083b20(&uStack_f8);
  FUN_1003870ec();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  *(undefined8 *)(param_2 + 0x40) = uStack_90;
  *(undefined8 *)(param_2 + 0x48) = uStack_98;
  *(undefined8 *)(param_2 + 0x50) = uStack_a0;
  *(undefined8 *)(param_2 + 0x58) = uStack_a8;
  *(undefined8 *)(param_2 + 0x60) = uStack_b0;
  *(undefined8 *)(param_2 + 0x68) = uStack_b8;
  *(undefined8 *)(param_2 + 0x70) = uStack_c0;
  *(undefined8 *)(param_2 + 0x78) = uStack_c8;
  *(undefined8 *)(param_2 + 0x80) = uStack_d0;
  *(undefined8 *)(param_2 + 0x88) = uStack_d8;
  *(undefined8 *)(param_2 + 0x90) = uStack_e0;
  *(undefined8 *)(param_2 + 0x98) = uStack_e8;
  FUN_1000285a8(0x112e4cce8,&UNK_10daf7050);
  func_0x000107c610f8();
  uVar1 = uStack_78;
  func_0x000107c61174();
  uVar2 = uStack_80;
  func_0x000107c61174();
  uVar3 = uStack_88;
  func_0x000107c61174();
  uVar4 = uStack_90;
  func_0x000107c61174();
  uVar5 = uStack_98;
  func_0x000107c61174();
  uVar6 = uStack_a0;
  func_0x000107c61174();
  uVar7 = uStack_a8;
  func_0x000107c61174();
  uVar8 = uStack_b0;
  func_0x000107c61174();
  uVar9 = uStack_b8;
  func_0x000107c61174();
  uVar10 = uStack_c0;
  func_0x000107c61174();
  uVar11 = uStack_c8;
  func_0x000107c61174();
  uVar12 = uStack_d0;
  func_0x000107c61174();
  uVar13 = uStack_d8;
  func_0x000107c61174();
  uVar14 = uStack_e0;
  func_0x000107c61174();
  uVar15 = uStack_e8;
  func_0x000107c61174();
  uVar16 = uStack_f0;
  func_0x000107c6157c(uStack_f0);
  uVar17 = uVar16;
  FUN_10017da58();
  puVar18 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar17);
  *(undefined **)(param_2 + 0x18) = puVar18;
  FUN_1000285a8(0x112e4d1b8,&UNK_10da477e0);
  func_0x000107c610f8();
  uVar17 = uStack_f8;
  func_0x000107c6157c(uStack_f8);
  uVar19 = uVar17;
  FUN_10017da58();
  puVar20 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar19);
  *(undefined **)(param_2 + 0x20) = puVar20;
  FUN_1008f8ec8(0);
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar19 = auStack_70[0];
  FUN_1008f8ee8(auStack_70[0],uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,
                uVar12,uVar13,uVar14,uVar15,puVar18,puVar20);
  func_0x000107c61574(uVar16);
  func_0x000107c61574(uVar17);
  *(undefined8 *)(param_2 + 0x10) = uVar19;
  *param_1 = param_2;
  return;
}



/* Entry: 1008f8dac; end: 1008f8def;  */

void FUN_1008f8dac(void)

{
  long unaff_x20;
  
  FUN_1008f8990(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98));
  return;
}



/* Entry: 1008f8df0; end: 1008f8df7;  */

void FUN_1008f8df0(undefined8 *param_1)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e04358,&UNK_10d9d7fc8);
  func_0x000107c613fc();
  func_0x000107c6157c();
  puVar1 = &UNK_101b5786c;
  FUN_1000bdd8c();
  FUN_1002ace0c(0);
  func_0x000107c610f8();
  FUN_1008f8e7c();
  *param_1 = puVar1;
  return;
}



/* Entry: 1008f8df8; end: 1008f8e7b;  */

void FUN_1008f8df8(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e04358,&UNK_10d9d7fc8);
  func_0x000107c613fc();
  func_0x000107c6157c(param_2);
  puVar1 = &UNK_101b5786c;
  FUN_1000bdd8c(&UNK_101b5786c,param_2);
  FUN_1002ace0c(0);
  func_0x000107c610f8();
  FUN_1008f8e7c();
  *param_1 = puVar1;
  return;
}



/* Entry: 1008f8e7c; end: 1008f8ec7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008f8e7c(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112f29250) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1008f8ec8; end: 1008f8ee7;  */

void FUN_1008f8ec8(void)

{
  func_0x000107c61168(&PTR_PTR_112f18420);
  return;
}


