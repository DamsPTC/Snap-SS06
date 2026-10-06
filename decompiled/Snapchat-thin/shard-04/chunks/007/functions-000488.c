/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103826374; end: 103826397;  */

void FUN_103826374(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103826398; end: 1038263d7;  */

void FUN_103826398(void)

{
  long *unaff_x20;
  long lVar1;
  
  lVar1 = *(long *)(*unaff_x20 + 0x10);
  if (lVar1 != 0) {
    func_0x000107c6157c(lVar1);
    func_0x0001007dbc08();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1038263d8; end: 1038263e7;  */

undefined8 FUN_1038263d8(void)

{
  return 0;
}



/* Entry: 1038263e8; end: 103826433;  */

void FUN_1038263e8(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 103826434; end: 103826447;  */

void FUN_103826434(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 103826448; end: 10382654b;  */

void FUN_103826448(undefined8 *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  func_0x000107c4b2ec();
  func_0x000107c61180();
  pcVar1 = param_2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  if (pcVar1 == (char *)0x0) {
    pcVar2 = 
    "init(cameraUIServices:lensCarouselFeatureServices:miniCameraActivationStateServices:lensContentServices:lensPerformerServices:taskManagmentServices:)"
    ;
    func_0x0001000c10c0();
    func_0x000107c61180();
  }
  else {
    pcVar2 = pcVar1;
    func_0x000107c4c18c();
    func_0x000107c61180();
    func_0x000107c615e8(pcVar1);
  }
  *param_1 = pcVar2;
  return;
}



/* Entry: 10382654c; end: 103826587;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10382654c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_113035b60);
  func_0x000107c5c734();
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 103826588; end: 103826663;  */

void FUN_103826588(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c4b1cc();
  func_0x000107c61180();
  uVar1 = param_2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  *param_1 = uVar1;
  return;
}



/* Entry: 103826664; end: 1038266b7;  */

void FUN_103826664(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    FUN_10384dbfc();
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 1038266b8; end: 1038266db;  */

void FUN_1038266b8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1038266dc; end: 103826ce3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038266dc(undefined8 param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined **ppuVar15;
  long unaff_x20;
  undefined8 uVar16;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113038630);
  func_0x000107c61174();
  lVar2 = param_3;
  func_0x000107c4ae78();
  func_0x000107c61180();
  uVar16 = *(undefined8 *)(param_4 + _DAT_113035b28);
  lVar3 = lVar2;
  func_0x0001007dd35c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x10) = 0;
  func_0x0001000285a8(0x112ee3e90,&UNK_10db0ef60);
  func_0x000107c61174();
  lVar9 = lVar2;
  func_0x000107c4aeb4(lVar2);
  func_0x000107c61180();
  lVar11 = lVar9;
  func_0x000100759c94();
  func_0x000107c61170(lVar9);
  uVar4 = 0x112ee3e98;
  func_0x0001000285a8(0x112ee3e98,&UNK_10db20590);
  uVar5 = 0;
  func_0x000100759f5c(0,1,&UNK_100b61bd4,0,uVar4);
  func_0x000107c61574(lVar11);
  puVar6 = &UNK_11069b178;
  func_0x000107c613fc(&UNK_11069b178,0x18,7);
  *(undefined8 *)(puVar6 + 0x10) = param_6;
  func_0x0001000285a8(0x112d53a70,&UNK_10d91a680);
  func_0x000107c613fc();
  func_0x000107c61174();
  pcVar7 = FUN_103826ce4;
  func_0x0001000bdd8c(FUN_103826ce4,puVar6);
  puVar6 = &UNK_11069b1a0;
  func_0x000107c613fc(&UNK_11069b1a0,0x18,7);
  *(undefined8 *)(puVar6 + 0x10) = param_6;
  func_0x0001000285a8(0x112d54e08,&UNK_10d91bfb0);
  func_0x000107c613fc();
  func_0x000107c61174();
  uVar4 = 0x103826cec;
  func_0x0001000bdd8c(0x103826cec,puVar6);
  puVar6 = &UNK_11069b1c8;
  func_0x000107c613fc(&UNK_11069b1c8,0x18,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar16;
  func_0x0001000285a8(0x112fa0578,&UNK_10dc15410);
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c6157c(uVar5);
  uVar13 = 0x103826cf4;
  func_0x0001000bdd8c(0x103826cf4,puVar6);
  puVar6 = &UNK_11069b1f0;
  func_0x000107c613fc(&UNK_11069b1f0,0x18,7);
  *(undefined8 *)(puVar6 + 0x10) = param_5;
  func_0x0001000285a8(0x112d5c4b8,&UNK_10d923250);
  func_0x000107c613fc();
  func_0x000107c61174();
  uVar12 = 0x103826cf8;
  func_0x0001000bdd8c(0x103826cf8,puVar6);
  puVar6 = &UNK_11069b218;
  func_0x000107c613fc(&UNK_11069b218,0x18,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar1;
  func_0x0001000285a8(0x112fa0580,&UNK_10dc15420);
  func_0x000107c613fc();
  func_0x000107c61174();
  uVar8 = 0x103826d00;
  func_0x0001000bdd8c(0x103826d00,puVar6);
  lVar9 = 0;
  func_0x0001007dd37c();
  func_0x000107c613fc();
  func_0x0001000c6560(0);
  func_0x000107c613fc();
  func_0x000107c6157c(pcVar7);
  uVar10 = uVar4;
  func_0x000107c6157c();
  func_0x0001000c6580();
  *(undefined8 *)(lVar9 + 0x38) = uVar4;
  *(undefined8 *)(lVar9 + 0x40) = uVar10;
  *(undefined8 *)(lVar9 + 0x10) = uVar5;
  *(undefined8 *)(lVar9 + 0x18) = uVar13;
  *(undefined8 *)(lVar9 + 0x20) = uVar12;
  *(undefined8 *)(lVar9 + 0x28) = uVar8;
  *(code **)(lVar9 + 0x30) = pcVar7;
  *(long *)(lVar3 + 0x10) = lVar9;
  lVar11 = *(long *)(param_7 + _DAT_113093a90);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar11 == 0) {
    func_0x000107c61170(param_7);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(uVar16);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c61574(uVar4);
    func_0x000107c61574(pcVar7);
    func_0x000107c61574(uVar5);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_1);
  }
  else {
    func_0x000100079360(0);
    func_0x0001007dd39c(0);
    uVar12 = 0;
    func_0x0001007dd3bc(0);
    func_0x0001007dd3dc();
    uVar13 = uVar12;
    func_0x0001007dd440();
    func_0x000107c61170(uVar12);
    uVar12 = uVar13;
    func_0x0001007dd4e0(uVar13);
    func_0x000107c61170(uVar13);
    uVar13 = 0;
    func_0x0001000aad1c(0);
    func_0x0001007dd748();
    lVar14 = 0;
    func_0x0001000295c4(0);
    func_0x000107c5ffdc();
    puVar6 = &UNK_11069b240;
    func_0x000107c613fc(&UNK_11069b240,0x18,7);
    func_0x000107c61644(puVar6 + 0x10,lVar9);
    uStack_78 = 0x103826d08;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1000f6b44;
    puStack_80 = &UNK_11069b258;
    ppuVar15 = &puStack_98;
    puStack_70 = puVar6;
    func_0x000107c60bc4(ppuVar15);
    func_0x000107c61574(puStack_70);
    func_0x000107c5e08c(lVar11);
    func_0x000107c61180();
    func_0x000107c615e8();
    func_0x000107c61170(param_7);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(uVar16);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_3);
    func_0x000107c60bd0(ppuVar15);
    func_0x000107c61574(uVar5);
    func_0x000107c61574(pcVar7);
    func_0x000107c61574(uVar4);
    func_0x000107c615e8(lVar11);
    func_0x000107c61170(uVar12);
    func_0x000107c61170(uVar13);
    param_3 = lVar14;
  }
  func_0x000107c61170(param_3);
  *(long *)(unaff_x20 + 0x10) = lVar3;
  return;
}



/* Entry: 103826ce4; end: 103826d17;  */

void FUN_103826ce4(undefined8 *param_1)

{
  char *pcVar1;
  char *pcVar2;
  long unaff_x20;
  
  pcVar2 = *(char **)(unaff_x20 + 0x10);
  func_0x000107c4b2ec();
  func_0x000107c61180();
  pcVar1 = pcVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(pcVar2);
  if (pcVar1 == (char *)0x0) {
    pcVar2 = 
    "init(cameraUIServices:lensCarouselFeatureServices:miniCameraActivationStateServices:lensContentServices:lensPerformerServices:taskManagmentServices:)"
    ;
    func_0x0001000c10c0();
    func_0x000107c61180();
  }
  else {
    pcVar2 = pcVar1;
    func_0x000107c4c18c();
    func_0x000107c61180();
    func_0x000107c615e8(pcVar1);
  }
  *param_1 = pcVar2;
  return;
}



/* Entry: 103826d18; end: 103826d57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103826d18(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_113035b60);
  func_0x000107c5c734();
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 103826d58; end: 103826d7b;  */

void FUN_103826d58(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103826d7c; end: 103826da3;  */

void FUN_103826d7c(void)

{
  return;
}



/* Entry: 103826da4; end: 1038271ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103826da4(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  code *pcVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  code *pcVar5;
  ulong uVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined8 uVar12;
  ulong uVar13;
  long lStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  puVar1 = &UNK_11069b3a0;
  func_0x000107c613fc(&UNK_11069b3a0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_6;
  func_0x0001000285a8(0x112d53a70,&UNK_10d91a680);
  func_0x000107c613fc();
  func_0x000107c61174();
  pcVar2 = FUN_103827238;
  func_0x0001000bdd8c(FUN_103827238,puVar1);
  uVar12 = *(undefined8 *)(param_5 + _DAT_112f9f6d8);
  pcStack_70 = FUN_103827240;
  uStack_68 = 0;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  uStack_80 = 0x1038272c8;
  puStack_78 = &UNK_11069b3b8;
  ppuVar3 = &puStack_90;
  func_0x000107c60bc4(ppuVar3);
  func_0x000107c61174();
  uVar4 = uVar12;
  func_0x000107c4c280();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(uVar12);
  puVar1 = &UNK_11069b3f0;
  func_0x000107c613fc(&UNK_11069b3f0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  func_0x0001000285a8(0x112fa0578,&UNK_10dc15410);
  func_0x000107c613fc();
  func_0x000107c61174();
  pcVar5 = FUN_1038273a4;
  func_0x0001000bdd8c(FUN_1038273a4,puVar1);
  lVar7 = _DAT_1130766b8;
  func_0x000107c61428(param_2 + _DAT_1130766b8,&puStack_90,0,0);
  uVar6 = param_2 + lVar7;
  func_0x000107c61618();
  if (uVar6 != 0) {
    uVar13 = uVar6;
    func_0x000107c61150();
    if ((uVar13 & 1) != 0) {
      uVar13 = uVar6;
      func_0x000107c44ca0();
      func_0x000107c61180();
      func_0x000107c61170(uVar6);
      goto LAB_103826fb8;
    }
    func_0x000107c61170(uVar6);
  }
  uVar13 = 0;
LAB_103826fb8:
  lVar7 = 0;
  func_0x00010384e7a4();
  func_0x000107c613fc();
  func_0x0001000c6560(0);
  func_0x000107c613fc();
  func_0x000107c61174();
  pcVar8 = pcVar2;
  func_0x000107c6157c();
  func_0x0001000c6580();
  *(code **)(lVar7 + 0x28) = pcVar2;
  *(code **)(lVar7 + 0x30) = pcVar8;
  *(code **)(lVar7 + 0x10) = pcVar5;
  *(ulong *)(lVar7 + 0x18) = uVar13;
  *(undefined8 *)(lVar7 + 0x20) = uVar4;
  *(long *)(unaff_x20 + 0x10) = lVar7;
  func_0x000107c6157c(lVar7);
  FUN_10384e440();
  func_0x000107c61574(lVar7);
  puVar1 = &UNK_11069b418;
  func_0x000107c613fc(&UNK_11069b418,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_3);
  uVar12 = 0x112ef06f8;
  func_0x0001000285a8(0x112ef06f8,&UNK_10db8f890);
  func_0x000107c613fc();
  pcVar5 = FUN_103827448;
  func_0x0001000bdd8c(FUN_103827448,puVar1,uVar12);
  uVar12 = *(undefined8 *)(param_1 + _DAT_112fe9630);
  lVar9 = 0;
  FUN_10381e9ec();
  lVar7 = lVar9;
  func_0x000107c610f8();
  *(code **)(lVar7 + _DAT_112f9ff50) = pcVar5;
  *(undefined8 *)(lVar7 + _DAT_112f9ff58) = uVar4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_a0 = lVar7;
  lStack_98 = lVar9;
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar12);
  func_0x000107c6157c(pcVar5);
  plVar10 = &lStack_a0;
  func_0x000107c61154(plVar10,puVar1);
  uVar11 = 0;
  func_0x000103af2e4c(0);
  func_0x000107c610f8();
  func_0x000103af2d80(plVar10,&PTR_DAT_11069a798,uVar11);
  func_0x000107c4fba8(uVar12);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61574(pcVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(plVar10);
  return unaff_x20;
}



/* Entry: 1038271ac; end: 103827237;  */

void FUN_1038271ac(undefined8 *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  func_0x000107c4b2ec();
  func_0x000107c61180();
  pcVar1 = param_2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  if (pcVar1 == (char *)0x0) {
    pcVar2 = 
    "init(conditionalBeginIn:mainCameraScope:cameraUIServices:miniCameraActivationStateServices:arBarIntegrationServices:lensPerformerServices:)"
    ;
    func_0x0001000c10c0();
    func_0x000107c61180();
  }
  else {
    pcVar2 = pcVar1;
    func_0x000107c4c18c();
    func_0x000107c61180();
    func_0x000107c615e8(pcVar1);
  }
  *param_1 = pcVar2;
  return;
}



/* Entry: 103827238; end: 10382723f;  */

void FUN_103827238(undefined8 *param_1)

{
  char *pcVar1;
  char *pcVar2;
  long unaff_x20;
  
  pcVar2 = *(char **)(unaff_x20 + 0x10);
  func_0x000107c4b2ec();
  func_0x000107c61180();
  pcVar1 = pcVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(pcVar2);
  if (pcVar1 == (char *)0x0) {
    pcVar2 = 
    "init(conditionalBeginIn:mainCameraScope:cameraUIServices:miniCameraActivationStateServices:arBarIntegrationServices:lensPerformerServices:)"
    ;
    func_0x0001000c10c0();
    func_0x000107c61180();
  }
  else {
    pcVar2 = pcVar1;
    func_0x000107c4c18c();
    func_0x000107c61180();
    func_0x000107c615e8(pcVar1);
  }
  *param_1 = pcVar2;
  return;
}



/* Entry: 103827240; end: 10382734b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103827240(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0x112fa0768;
  func_0x0001000285a8(0x112fa0768,&UNK_10dc15ee0);
  param_1[3] = lVar1;
  lVar1 = *(long *)(param_2 + _DAT_113035438);
  func_0x000107c3f268();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c42e38();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 10382734c; end: 103827367;  */

void FUN_10382734c(long param_1,long param_2)

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



/* Entry: 103827368; end: 1038273a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103827368(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_113035b60);
  func_0x000107c5c734();
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 1038273a4; end: 1038273a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038273a4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_113035b60);
  func_0x000107c5c734();
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 1038273a8; end: 103827447;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038273a8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + _DAT_1130385c0);
    func_0x000107c61174();
    func_0x000107c61170(param_2);
    uVar2 = uVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(uVar1);
  }
  *param_1 = uVar2;
  return;
}



/* Entry: 103827448; end: 10382744f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103827448(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_1130385c0);
    func_0x000107c61174();
    func_0x000107c61170(lVar1);
    uVar3 = uVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
  }
  *param_1 = uVar3;
  return;
}



/* Entry: 103827450; end: 10382748f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103827450(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_113035b60);
  func_0x000107c5c734();
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 103827490; end: 1038274b3;  */

void FUN_103827490(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1038274b4; end: 1038274bf;  */

void FUN_1038274b4(void)

{
  return;
}



/* Entry: 1038274c0; end: 1038274df;  */

void FUN_1038274c0(void)

{
  func_0x000107c61168(&PTR_PTR_112fa0708);
  return;
}



/* Entry: 1038274e0; end: 10382751b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038274e0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_113071300);
  func_0x000107c5c734();
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 10382751c; end: 103827567;  */

void FUN_10382751c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103827568; end: 10382777b;  */

void FUN_103827568(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar5 = &puStack_90;
  ppuVar8 = &puStack_90;
  uVar9 = *param_2;
  *param_1 = 0;
  puVar3 = &UNK_11069b460;
  func_0x000107c613fc(&UNK_11069b460,0x18,7);
  *(undefined8 **)(puVar3 + 0x10) = param_1;
  puVar4 = &UNK_11069b488;
  func_0x000107c613fc(&UNK_11069b488,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_103827888;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_70 = FUN_1038278b4;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_10384cd1c;
  puStack_78 = &UNK_11069b4a0;
  puStack_68 = puVar4;
  func_0x000107c60bc4(&puStack_90);
  puVar6 = puStack_68;
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar6);
  puVar6 = &UNK_11069b4d8;
  func_0x000107c613fc(&UNK_11069b4d8,0x18,7);
  *(undefined8 **)(puVar6 + 0x10) = param_1;
  puVar7 = &UNK_11069b500;
  func_0x000107c613fc(&UNK_11069b500,0x20,7);
  *(code **)(puVar7 + 0x10) = FUN_1038278d8;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  pcStack_70 = FUN_103827904;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_10384cd9c;
  puStack_78 = &UNK_11069b518;
  puStack_68 = puVar7;
  func_0x000107c60bc4(&puStack_90);
  puVar1 = puStack_68;
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar1);
  func_0x000107c4c7c4(uVar9);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puVar3);
  puVar3 = puVar4;
  func_0x000107c61544(puVar4,"",0x5f,0x18,0x29,1);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103827778);
    (*pcVar2)();
  }
  puVar3 = puVar7;
  func_0x000107c61544(puVar7,"",0x5f,0x1c,0x28,1);
  func_0x000107c61574(puVar7);
  if (((ulong)puVar3 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10382777c);
  (*pcVar2)();
}



/* Entry: 10382777c; end: 10382782b;  */

undefined8 FUN_10382777c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *param_1;
  func_0x0001000285a8(0x112d53860,&UNK_10d92b600);
  func_0x000107c40fc0(uVar3);
  func_0x000107c61180();
  uVar1 = uVar3;
  func_0x0001000b637c();
  func_0x000107c61170(uVar3);
  uVar2 = 0;
  func_0x0001007b706c(0);
  uVar3 = 0x103827800;
  func_0x0001000d5158(0x103827800,0,uVar2);
  func_0x000107c61574(uVar1);
  return uVar3;
}



/* Entry: 10382782c; end: 103827887;  */

void FUN_10382782c(byte *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  
  lVar1 = *param_2;
  func_0x000107c4dfe8();
  func_0x000107c61180();
  if (lVar1 == 0) {
    bVar3 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c49a2c();
    func_0x000107c61170(lVar1);
    bVar3 = (byte)lVar2 ^ 1;
  }
  *param_1 = bVar3;
  return;
}



/* Entry: 103827888; end: 1038278b3;  */

void FUN_103827888(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = **(undefined8 **)(unaff_x20 + 0x10);
  **(undefined8 **)(unaff_x20 + 0x10) = param_1;
  func_0x000107c615f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 1038278b4; end: 1038278d7;  */

void FUN_1038278b4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1038278d8; end: 103827903;  */

void FUN_1038278d8(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = **(undefined8 **)(unaff_x20 + 0x10);
  **(undefined8 **)(unaff_x20 + 0x10) = param_1;
  func_0x000107c615f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 103827904; end: 103827913;  */

void FUN_103827904(undefined8 param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))
            (param_1,*(code **)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 103827914; end: 103827ac3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103827914(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(long *)(unaff_x20 + 0x18) = param_3;
  func_0x0001000285a8(0x112d5a5f8,&UNK_10d921380);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar6 = param_2;
  func_0x000107c4b2ec();
  func_0x000107c61180();
  uVar1 = uVar6;
  func_0x0001000bda74();
  func_0x000107c61170(uVar6);
  puVar2 = &UNK_11069b550;
  func_0x000107c613fc(&UNK_11069b550,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = param_4;
  *(long *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = uVar1;
  func_0x0001000285a8(0x112fa0828,&UNK_10dc15548);
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c61174(param_4);
  func_0x000107c6157c(uVar1);
  pcVar3 = FUN_103827b74;
  func_0x0001000bdd8c(FUN_103827b74,puVar2);
  *(code **)(unaff_x20 + 0x20) = pcVar3;
  uVar6 = *(undefined8 *)(param_3 + _DAT_112f9fae8);
  func_0x000107c61580();
  func_0x000107c6157c(uVar6);
  pcVar4 = FUN_103827bf4;
  pcVar5 = pcVar3;
  func_0x0001000b6504();
  func_0x000107c61574(uVar6);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_4);
  func_0x000107c61578(pcVar3,2);
  func_0x000107c61574(uVar1);
  *(code **)(unaff_x20 + 0x28) = pcVar4;
  *(code **)(unaff_x20 + 0x30) = pcVar5;
  return unaff_x20;
}



/* Entry: 103827ac4; end: 103827b73;  */

/* WARNING: Possible PIC construction at 0x000103827b34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103827b38) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103827ac4(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f9faf0);
  func_0x0001000285a8(0x112fa08e8,&UNK_10dc155a0);
  func_0x000107c613fc();
  func_0x0001000c6560(0);
  func_0x000107c613fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 103827b74; end: 103827b7f;  */

/* WARNING: Possible PIC construction at 0x000103827b34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103827b38) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103827b74(void)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_112f9faf0);
  func_0x0001000285a8(0x112fa08e8,&UNK_10dc155a0,*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c613fc();
  func_0x0001000c6560(0);
  func_0x000107c613fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 103827b80; end: 103827bf3;  */

void FUN_103827b80(undefined8 param_1)

{
  func_0x0001007de270(0);
  func_0x000107c610f8();
  func_0x000107c61174(param_1);
  func_0x00010388afac();
  return;
}



/* Entry: 103827bf4; end: 103827bfb;  */

void FUN_103827bf4(void)

{
  undefined8 uStack_28;
  
  func_0x0001000d224c(&uStack_28);
  FUN_1038449a0();
  func_0x000107c61574(uStack_28);
  return;
}



/* Entry: 103827bfc; end: 103827c6b;  */

void FUN_103827bfc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103827c6c; end: 103827c7f;  */

void FUN_103827c6c(void)

{
  return;
}



/* Entry: 103827c80; end: 103827dbf;  */

long FUN_103827c80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined **)(unaff_x20 + 0x50) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  uVar1 = param_8;
  func_0x000107c4ae78();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  *(undefined8 *)(unaff_x20 + 0x48) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x30) = param_9;
  return unaff_x20;
}



/* Entry: 103827dc0; end: 103827e9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103827dc0(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  uVar3 = *(undefined8 *)(*(long *)(unaff_x20 + 0x20) + _DAT_112f9f6d8);
  puVar1 = &UNK_11069b5c0;
  func_0x000107c613fc(&UNK_11069b5c0,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  pcStack_40 = FUN_103827f0c;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_100ba4fb0;
  puStack_48 = &UNK_11069b5d8;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  puVar1 = puStack_38;
  func_0x000107c61174(uVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c5dc64(uVar3);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 103827e9c; end: 103827f0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103827e9c(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  if ((param_2 == 0) && (param_1 != 0)) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_113035438);
    func_0x000107c61428(param_3 + 0x10,auStack_38,0,0);
    param_3 = param_3 + 0x10;
    func_0x000107c61648();
    if (param_3 != 0) {
      FUN_103827f14(uVar1);
      func_0x000107c61574(param_3);
    }
  }
  return;
}



/* Entry: 103827f0c; end: 103827f13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103827f0c(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  if ((param_2 == 0) && (param_1 != 0)) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113035438);
    func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
    lVar1 = unaff_x20 + 0x10;
    func_0x000107c61648();
    if (lVar1 != 0) {
      FUN_103827f14(uVar2);
      func_0x000107c61574(lVar1);
    }
  }
  return;
}



/* Entry: 103827f14; end: 10382847b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103827f14(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined **ppuVar9;
  code *pcVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  ulong uVar13;
  long unaff_x20;
  undefined8 uVar14;
  uint uVar15;
  ulong uVar16;
  undefined *apuStack_b8 [3];
  undefined8 uStack_a0;
  undefined **ppuStack_98;
  long alStack_70 [3];
  code *pcStack_58;
  
  lVar3 = 0;
  func_0x0001038841ac();
  func_0x000107c610f8();
  func_0x000107c453e4();
  alStack_70[0] = lVar3;
  func_0x000107c4af64();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_1;
    func_0x000107c42e38();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
  }
  uVar4 = 0;
  alStack_70[1] = lVar3;
  func_0x000103884510();
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar14 = *(undefined8 *)(unaff_x20 + 0x30);
  puVar7 = &UNK_11069b628;
  alStack_70[2] = uVar4;
  func_0x000107c613fc(&UNK_11069b628,0x18,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar14;
  func_0x0001000285a8(0x112fa09d0,&UNK_10dc15640);
  func_0x000107c613fc();
  func_0x000107c61174(uVar14);
  pcVar2 = FUN_10382855c;
  func_0x0001000bdd8c(FUN_10382855c,puVar7);
  uVar4 = 0;
  FUN_103884924(0);
  func_0x000107c610f8();
  func_0x0001038847f4(pcVar2,uVar4);
  uVar16 = 0;
  pcStack_58 = pcVar2;
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    uVar1 = uVar16;
    if (uVar16 < 5) {
      uVar1 = 4;
    }
    do {
      if (uVar16 == 4) {
        uVar4 = 0x112fa09d8;
        func_0x0001000285a8(0x112fa09d8,&UNK_10dc15648);
        func_0x000107c61408(alStack_70,4,uVar4);
        lVar8 = *(long *)(unaff_x20 + 0x48);
        func_0x000107c4ac68();
        func_0x000107c61180();
        lVar3 = lVar8;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(lVar8);
        if (lVar3 == 0) {
          func_0x0001000285a8(0x112d5ba30,&UNK_10d929a50);
          apuStack_b8[0] = (undefined *)((ulong)apuStack_b8[0] & 0xffffffffffffff00);
          ppuVar9 = apuStack_b8;
          func_0x000100854cb0(ppuVar9);
        }
        else {
          lVar8 = lVar3;
          func_0x000107c3d14c(lVar3);
          func_0x000107c61180();
          func_0x000107c615e8(lVar3);
          func_0x0001000285a8(0x112d3b7d0,&UNK_10d904cc0);
          func_0x000107c61174(lVar8);
          lVar3 = lVar8;
          func_0x0001000b637c();
          pcVar2 = FUN_10382782c;
          func_0x0001000bfde0(FUN_10382782c,0,PTR___sSbN_11034dd40);
          func_0x000107c61574(lVar3);
          ppuVar9 = (undefined **)PTR___sSbSQsWP_11034dd50;
          func_0x0001000c2068(PTR___sSbSQsWP_11034dd50);
          func_0x000107c61574(pcVar2);
          func_0x000107c61170(lVar8);
          func_0x000107c61170(lVar8);
        }
        func_0x0001000285a8(0x112fa04d0,&UNK_10dc16a90);
        uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
        func_0x000107c3e088(uVar4);
        func_0x000107c61180();
        uVar14 = uVar4;
        func_0x0001000b637c();
        func_0x000107c61170(uVar4);
        uVar4 = 0x112f9fad8;
        func_0x0001000285a8(0x112f9fad8,&UNK_10dc15650);
        pcVar2 = FUN_103827568;
        func_0x0001000d5158(FUN_103827568,0,uVar4);
        uVar4 = 0;
        func_0x0001007b706c(0);
        pcVar10 = FUN_10382777c;
        func_0x00010068b194(FUN_10382777c,0,uVar4);
        func_0x000107c61574(pcVar2);
        apuStack_b8[0] = (undefined *)0x0;
        ppuVar11 = apuStack_b8;
        func_0x0001006c71a4(ppuVar11);
        func_0x000107c61574(pcVar10);
        func_0x000107c61574(uVar14);
        lVar8 = *(long *)(*(long *)(unaff_x20 + 0x40) + _DAT_113081210);
        func_0x000107c3f238();
        func_0x000107c61180();
        lVar3 = lVar8;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(lVar8);
        if (lVar3 == 0) {
          uVar15 = 1;
        }
        else {
          lVar8 = lVar3;
          func_0x000107c49cd8(lVar3);
          func_0x000107c615e8(lVar3);
          uVar15 = (uint)lVar8 ^ 1;
        }
        uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + _DAT_1130813f0);
        func_0x000107c6157c(ppuVar9);
        func_0x000107c6157c(uVar4);
        func_0x0001000d224c(apuStack_b8);
        func_0x000107c61574(uVar4);
        func_0x0001000a8868(apuStack_b8,uStack_a0);
        uVar4 = uStack_a0;
        (**(code **)((long)ppuStack_98 + 0x120))(uStack_a0,ppuStack_98);
        uVar14 = 0;
        FUN_1038851c8();
        func_0x000107c610f8();
        func_0x000107c6157c(ppuVar11);
        func_0x0001038849e0(puVar7,ppuVar11,uVar15,ppuVar9,(uint)uVar4 & 1);
        func_0x0001000834e4(apuStack_b8);
        uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112fa56f8);
        ppuStack_98 = &PTR_DAT_1106a10b0;
        apuStack_b8[0] = puVar7;
        uStack_a0 = uVar14;
        FUN_10388af40(0);
        func_0x000107c610f8();
        func_0x000107c61174(uVar4);
        func_0x000107c61174(puVar7);
        ppuVar12 = apuStack_b8;
        func_0x00010388ae60(ppuVar12);
        func_0x000107c4fba8(uVar4);
        func_0x000107c61574(ppuVar9);
        func_0x000107c61574(ppuVar11);
        func_0x000107c61170(puVar7);
        func_0x000107c61170(uVar4);
        func_0x000107c61170(ppuVar12);
        return;
      }
      if (uVar1 == uVar16) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10382847c);
        (*pcVar2)();
      }
      lVar3 = alStack_70[uVar16];
      uVar16 = uVar16 + 1;
    } while (lVar3 == 0);
    func_0x000107c615f0(lVar3);
    puVar6 = puVar7;
    func_0x000107c61550();
    if ((((int)puVar6 == 0) || ((long)puVar7 < 0)) ||
       (puVar6 = puVar7, ((ulong)puVar7 >> 0x3e & 1) != 0)) {
      if ((ulong)puVar7 >> 0x3e == 0) {
        puVar5 = *(undefined **)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar5 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar7) {
          puVar5 = puVar7;
        }
        func_0x000107c60480(puVar5);
      }
      puVar6 = (undefined *)0x0;
      FUN_10383a990(0,puVar5 + 1,1,puVar7);
    }
    uVar13 = (ulong)puVar6 & 0xffffffffffffff8;
    uVar1 = *(ulong *)(uVar13 + 0x10);
    puVar7 = puVar6;
    if (*(ulong *)(uVar13 + 0x18) >> 1 <= uVar1) {
      puVar7 = (undefined *)(ulong)(1 < *(ulong *)(uVar13 + 0x18));
      FUN_10383a990(puVar7,uVar1 + 1,1,puVar6);
      uVar13 = (ulong)puVar7 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar13 + 0x10) = uVar1 + 1;
    *(long *)(uVar13 + uVar1 * 8 + 0x20) = lVar3;
  } while( true );
}



/* Entry: 10382847c; end: 103828497;  */

void FUN_10382847c(long param_1,long param_2)

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



/* Entry: 103828498; end: 103828513;  */

void FUN_103828498(void)

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
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 103828514; end: 103828533;  */

void FUN_103828514(void)

{
  FUN_103827dc0();
  return;
}



/* Entry: 103828534; end: 10382853b;  */

undefined8 FUN_103828534(void)

{
  return 0;
}



/* Entry: 10382853c; end: 10382855b;  */

void FUN_10382853c(void)

{
  func_0x000107c61168(&PTR_PTR_112fa0930);
  return;
}



/* Entry: 10382855c; end: 10382859b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10382855c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_113071300);
  func_0x000107c5c734();
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 10382859c; end: 103828ba7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10382859c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  undefined8 param_9,long param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  long unaff_x20;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  func_0x000107c613fc();
  uVar1 = param_5;
  func_0x000107c3e0a8();
  func_0x000107c61180();
  lVar16 = param_3;
  func_0x000107c4dff0();
  func_0x000107c61180();
  if (lVar16 != 0) {
    lVar9 = lVar16;
    func_0x000107c5ac28();
    func_0x000107c61170(lVar16);
    if ((int)lVar9 != 0) {
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
      func_0x000107c61170(uVar1);
      lVar16 = 0;
      goto LAB_103828b80;
    }
  }
  uVar2 = param_4;
  func_0x000107c4aeb0();
  func_0x000107c61180();
  lVar16 = 0;
  func_0x00010384e890();
  func_0x000107c613fc();
  uVar17 = *(undefined8 *)(param_10 + _DAT_1130813f0);
  uVar3 = 0;
  func_0x000100b72c48();
  func_0x000107c610f8();
  func_0x000107c6157c(uVar17);
  func_0x000107c453e4();
  func_0x0001000285a8(0x112d5d810,&UNK_10d923f50);
  uVar14 = uVar2;
  func_0x000107c4aeb4();
  func_0x000107c61180();
  uVar4 = uVar14;
  func_0x0001000bda74();
  func_0x000107c61170(uVar14);
  func_0x0001000285a8(0x112f421e0,&UNK_10db8f110);
  uVar14 = uVar1;
  func_0x000107c3e060();
  func_0x000107c61180();
  uVar5 = uVar14;
  func_0x0001000bda74();
  func_0x000107c61170(uVar14);
  func_0x0001000285a8(0x112ee9da8,&UNK_10dc15660);
  puVar6 = (undefined *)0x0;
  func_0x0001007d6060();
  func_0x00010450b850();
  ppuVar7 = &puStack_98;
  puStack_98 = puVar6;
  func_0x000100854cb0();
  func_0x000107c61170(puVar6);
  func_0x0001000285a8(0x112fa0028,&UNK_10dc150b0);
  uVar14 = param_9;
  func_0x000107c4af88(param_9);
  func_0x000107c61180();
  uVar8 = uVar14;
  func_0x0001000bda74();
  func_0x000107c61170(uVar14);
  uVar14 = 0x112fa0030;
  func_0x0001000285a8(0x112fa0030,&UNK_10dc15670);
  uVar15 = 0x10384e7f0;
  func_0x0001000cb480(0x10384e7f0,0,uVar14);
  func_0x000107c61574(uVar8);
  func_0x0001000285a8(0x112d382e8,&UNK_10d902020);
  func_0x000107c613fc();
  uVar14 = 0x10384e7fc;
  func_0x0001000bdd8c(0x10384e7fc,0);
  puVar6 = &UNK_11069b658;
  func_0x000107c613fc(&UNK_11069b658,0x18,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar3;
  func_0x0001000285a8(0x112fa0040,&UNK_10dc15680);
  func_0x000107c613fc();
  func_0x000107c61174();
  uVar8 = 0x103828bd8;
  func_0x0001000bdd8c(0x103828bd8,puVar6);
  lVar9 = 0;
  func_0x000100b72df0();
  func_0x000107c613fc();
  func_0x0001000c6560(0);
  func_0x000107c613fc();
  uVar10 = uVar17;
  func_0x000107c6157c();
  func_0x0001000c6580();
  *(undefined8 *)(lVar9 + 0x58) = uVar10;
  *(undefined8 *)(lVar9 + 0x10) = 1;
  *(undefined8 *)(lVar9 + 0x18) = uVar4;
  *(undefined8 *)(lVar9 + 0x20) = uVar14;
  *(undefined8 *)(lVar9 + 0x28) = uVar5;
  *(undefined8 *)(lVar9 + 0x30) = uVar15;
  *(undefined8 *)(lVar9 + 0x38) = uVar8;
  *(undefined8 *)(lVar9 + 0x40) = uVar17;
  *(undefined ***)(lVar9 + 0x48) = ppuVar7;
  *(undefined2 *)(lVar9 + 0x50) = 1;
  *(long *)(lVar16 + 0x10) = lVar9;
  lVar11 = *(long *)(param_8 + _DAT_113093a90);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar11 == 0) {
    func_0x000107c61170(param_10);
    func_0x000107c61170(param_8);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_9);
    func_0x000107c61574(uVar17);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
  }
  else {
    func_0x000100079360(0);
    func_0x0001007dd39c(0);
    lVar12 = 0;
    func_0x0001007dd3bc(0);
    func_0x0001048c6ecc();
    lVar13 = lVar12;
    func_0x0001007dd440();
    func_0x000107c61170(lVar12);
    lVar12 = lVar13;
    func_0x0001007dd4e0(lVar13);
    func_0x000107c61170(lVar13);
    uVar14 = 0;
    func_0x0001000aad1c(0);
    func_0x0001000aad3c();
    uVar15 = 0;
    func_0x0001000295c4(0);
    func_0x000107c5ffdc();
    puVar6 = &UNK_11069b680;
    func_0x000107c613fc(&UNK_11069b680,0x18,7);
    func_0x000107c61644(puVar6 + 0x10,lVar9);
    uStack_78 = 0x103828be0;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1000f6b44;
    puStack_80 = &UNK_11069b698;
    ppuVar7 = &puStack_98;
    puStack_70 = puVar6;
    func_0x000107c60bc4(ppuVar7);
    func_0x000107c61574(puStack_70);
    func_0x000107c5e08c(lVar11);
    func_0x000107c61180();
    func_0x000107c615e8();
    func_0x000107c61170(param_10);
    func_0x000107c61170(param_8);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_9);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c61574(uVar17);
    func_0x000107c61170(uVar3);
    func_0x000107c615e8(lVar11);
    param_3 = lVar12;
    param_5 = uVar15;
    param_4 = uVar14;
  }
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
LAB_103828b80:
  *(long *)(unaff_x20 + 0x10) = lVar16;
  return unaff_x20;
}



/* Entry: 103828ba8; end: 103828bcb;  */

void FUN_103828ba8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103828bcc; end: 103828c03;  */

void FUN_103828bcc(void)

{
  return;
}



/* Entry: 103828c04; end: 103828c23;  */

void FUN_103828c04(void)

{
  func_0x000107c61168(&PTR_PTR_112fa0a20);
  return;
}



/* Entry: 103828c24; end: 103829397;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103828c24(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  code *pcVar10;
  code *pcVar11;
  long unaff_x20;
  undefined8 uVar12;
  
  func_0x000107c613fc();
  uVar1 = param_2;
  func_0x000107c3e0a8();
  func_0x000107c61180();
  uVar12 = *(undefined8 *)(param_4 + _DAT_112f9fbc0);
  puVar2 = &UNK_11069b6f0;
  func_0x000107c613fc(&UNK_11069b6f0,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,uVar1);
  func_0x0001000285a8(0x112f0fc20,&UNK_10dc15150);
  func_0x000107c613fc();
  func_0x000107c61174(uVar12);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  uVar3 = 0x1038293c8;
  func_0x0001000bdd8c(0x1038293c8,puVar2);
  func_0x0001000285a8(0x112d53860,&UNK_10d92b600);
  uVar4 = uVar1;
  func_0x000107c3e0c0(uVar1);
  func_0x000107c61180();
  uVar5 = uVar4;
  func_0x0001000b637c();
  func_0x000107c61170(uVar4);
  pcVar6 = FUN_10383dd68;
  func_0x0001000bfde0(FUN_10383dd68,0,PTR___sSbN_11034dd40);
  func_0x000107c61574(uVar5);
  puVar2 = &UNK_11069b718;
  func_0x000107c613fc(&UNK_11069b718,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_3);
  func_0x0001000285a8(0x112d382e8,&UNK_10d902020);
  func_0x000107c613fc();
  uVar4 = 0x1038293d0;
  func_0x0001000bdd8c(0x1038293d0,puVar2);
  puVar2 = &UNK_11069b740;
  func_0x000107c613fc(&UNK_11069b740,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,uVar12);
  puVar7 = &UNK_11069b768;
  func_0x000107c613fc(&UNK_11069b768,0x18,7);
  func_0x000107c61614(puVar7 + 0x10,param_5);
  puVar8 = &UNK_11069b790;
  func_0x000107c613fc(&UNK_11069b790,0x40,7);
  *(undefined8 *)(puVar8 + 0x10) = uVar3;
  *(undefined **)(puVar8 + 0x18) = puVar2;
  *(code **)(puVar8 + 0x20) = pcVar6;
  *(undefined8 *)(puVar8 + 0x28) = uVar4;
  *(undefined **)(puVar8 + 0x30) = puVar7;
  *(undefined8 *)(puVar8 + 0x38) = uVar1;
  func_0x0001000285a8(0x112fa0a80,&UNK_10dc156c8);
  func_0x000107c613fc();
  func_0x000107c61174(uVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(pcVar6);
  func_0x000107c6157c(uVar4);
  uVar5 = 0x1038293d8;
  func_0x0001000bdd8c(0x1038293d8,puVar8);
  uVar9 = 0x112fa0190;
  func_0x0001000285a8(0x112fa0190,&UNK_10dc156d0);
  pcVar10 = FUN_10383e1a0;
  func_0x0001000cb480(FUN_10383e1a0,0,uVar9);
  pcVar11 = pcVar10;
  func_0x0001003a5b88();
  func_0x000107c61574(pcVar10);
  puVar2 = PTR_PTR_1126ad780;
  func_0x000107c610f8(PTR_PTR_1126ad780);
  func_0x000107c45768();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(param_5);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(uVar3);
  func_0x000107c61170(pcVar11);
  puVar7 = PTR_PTR_1126ad788;
  func_0x000107c610f8();
  func_0x000107c61174(puVar2);
  func_0x000107c4576c();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_4);
  *(undefined **)(unaff_x20 + 0x10) = puVar7;
  return;
}



/* Entry: 103829398; end: 1038293bb;  */

void FUN_103829398(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1038293bc; end: 1038293db;  */

void FUN_1038293bc(void)

{
  return;
}



/* Entry: 1038293dc; end: 103829427;  */

void FUN_1038293dc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103829428; end: 103829437;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103829428(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long *plVar11;
  long unaff_x20;
  long lStack_c0;
  long lStack_b8;
  undefined1 uStack_a9;
  undefined1 auStack_a8 [24];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar6 = *(long *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  plVar11 = &lStack_c0;
  func_0x000107c61428(lVar6 + 0x10,auStack_a8,0,0);
  lVar6 = lVar6 + 0x10;
  func_0x000107c61618();
  if (lVar6 == 0) {
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    func_0x0001007b7bf0(lVar6 + _DAT_112f9f6e8,&uStack_90);
    func_0x000107c61170(lVar6);
  }
  func_0x0001000d224c(&uStack_a9);
  puVar7 = &UNK_11069ce18;
  func_0x000107c613fc(&UNK_11069ce18,0x18,7);
  func_0x000107c61614(puVar7 + 0x10,uVar5);
  lVar8 = 0;
  FUN_10381a078();
  lVar9 = lVar8;
  func_0x000107c610f8();
  func_0x000107c61614(lVar9 + _DAT_112f9f290,0);
  puVar1 = (undefined8 *)(lVar9 + _DAT_112f9f298);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar6 = _DAT_112f9f2b0;
  func_0x0001000c6560(0);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar4);
  puVar10 = puVar7;
  func_0x000107c6157c();
  func_0x0001000c6580();
  *(undefined **)(lVar9 + lVar6) = puVar10;
  *(undefined8 *)(lVar9 + _DAT_112f9f2d8) = uVar2;
  func_0x0001007b7bf0(&uStack_90,lVar9 + _DAT_112f9f2b8);
  *(undefined8 *)(lVar9 + _DAT_112f9f2a8) = uVar3;
  *(undefined1 *)(lVar9 + _DAT_112f9f2a0) = uStack_a9;
  puVar1 = (undefined8 *)(lVar9 + _DAT_112f9f2c8);
  *puVar1 = FUN_10383ea00;
  puVar1[1] = uVar4;
  puVar1 = (undefined8 *)(lVar9 + _DAT_112f9f2d0);
  *puVar1 = 0x10383ea08;
  puVar1[1] = puVar7;
  puVar10 = PTR_s_init_1125d9248;
  lStack_c0 = lVar9;
  lStack_b8 = lVar8;
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(&lStack_c0,puVar10);
  func_0x0001007b7c40(&uStack_90);
  func_0x000107c61574(puVar7);
  *param_1 = plVar11;
  return;
}



/* Entry: 103829438; end: 103829457;  */

void FUN_103829438(void)

{
  func_0x000107c61168(&PTR_PTR_112fa0ac8);
  return;
}



/* Entry: 103829458; end: 103829463;  */

void FUN_103829458(long *param_1)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = lVar2;
    func_0x000107c3e060();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 103829464; end: 10382981b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103829464(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  long lStack_68;
  
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113034fe8);
  uVar5 = *(undefined8 *)(param_3 + _DAT_113038520);
  uVar6 = *(undefined8 *)(param_8 + _DAT_112fa41f0);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = param_9;
  func_0x000107c4ae78();
  func_0x000107c61180();
  func_0x0001000d224c(auStack_88);
  func_0x0001000a8868(auStack_88,uStack_70);
  uVar3 = uStack_70;
  (**(code **)(lStack_68 + 0x10))(uStack_70,lStack_68);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_9);
  lVar4 = 0x112fa0b28;
  func_0x0001000285a8(0x112fa0b28,&UNK_10dc15730);
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x90) = 0;
  *(undefined8 *)(lVar4 + 0x98) = 0;
  *(undefined8 *)(lVar4 + 0x10) = uVar1;
  *(undefined8 *)(lVar4 + 0x18) = uVar5;
  *(undefined8 *)(lVar4 + 0x20) = param_4;
  *(undefined8 *)(lVar4 + 0x28) = param_5;
  *(undefined8 *)(lVar4 + 0x30) = param_6;
  *(undefined8 *)(lVar4 + 0x38) = param_7;
  *(undefined8 *)(lVar4 + 0x40) = uVar6;
  *(undefined8 *)(lVar4 + 0x48) = uVar2;
  *(undefined8 *)(lVar4 + 0x50) = param_10;
  *(undefined8 *)(lVar4 + 0x58) = param_11;
  *(code **)(lVar4 + 0x60) = FUN_10382981c;
  *(undefined8 *)(lVar4 + 0x68) = 0;
  *(undefined8 *)(lVar4 + 0x70) = 0x103829848;
  *(undefined8 *)(lVar4 + 0x78) = 0;
  *(undefined8 *)(lVar4 + 0x80) = param_12;
  *(byte *)(lVar4 + 0x88) = (byte)uVar3 & 1;
  func_0x0001000834e4(auStack_88);
  *(long *)(unaff_x20 + 0x10) = lVar4;
  return unaff_x20;
}



/* Entry: 10382981c; end: 1038298cb;  */

void FUN_10382981c(void)

{
  func_0x000107c610f8(PTR_PTR_1126ad798);
                    /* WARNING: Could not recover jumptable at 0x00010bff3ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1038298cc; end: 10382b06b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038298cc(void)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  code *pcVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined8 uVar11;
  code *pcVar12;
  long **pplVar13;
  undefined8 uVar14;
  code *pcVar15;
  code *pcVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  long *plVar21;
  long lVar22;
  long *plVar23;
  long unaff_x20;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  long *aplStack_90 [3];
  long lStack_78;
  undefined **ppuStack_70;
  
  func_0x0001000285a8(0x112d5a5f8,&UNK_10d921380);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c4b2ec();
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x0001000bda74();
  func_0x000107c61170(uVar3);
  func_0x0001000285a8(0x112f9f198,&UNK_10dc14d10);
  func_0x000107c613fc();
  uVar5 = 1;
  func_0x00010008747c();
  func_0x0001000285a8(0x112d53b48,&UNK_10d925340);
  func_0x000107c613fc();
  uVar6 = 1;
  func_0x00010008747c();
  uVar3 = 0x112fa0248;
  func_0x0001000285a8(0x112fa0248,&UNK_10dc151e0);
  func_0x000107c613fc();
  func_0x0001000c2754();
  uVar27 = *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + _DAT_1130813f0);
  puVar7 = &UNK_11069b9d0;
  func_0x000107c613fc(&UNK_11069b9d0,0x18,7);
  func_0x000107c61644(puVar7 + 0x10);
  func_0x0001000285a8(0x112d53a70,&UNK_10d91a680);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar27);
  pcVar8 = FUN_10382b2f4;
  func_0x0001000bdd8c(FUN_10382b2f4,puVar7);
  puVar7 = &UNK_11069b9f8;
  func_0x000107c613fc(&UNK_11069b9f8,0x20,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar5;
  *(code **)(puVar7 + 0x18) = pcVar8;
  func_0x0001000285a8(0x112fa0250,&UNK_10dc151f0);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(pcVar8);
  uVar9 = 0x10382b460;
  func_0x0001000bdd8c(0x10382b460,puVar7);
  uVar11 = 0x112f9fad8;
  func_0x0001000285a8(0x112f9fad8,&UNK_10dc15650);
  pcVar10 = FUN_103827568;
  func_0x0001000d5158(FUN_103827568,0,uVar11);
  uVar11 = 0;
  func_0x0001007b706c(0);
  pcVar12 = FUN_10382777c;
  func_0x00010068b194(FUN_10382777c,0,uVar11);
  func_0x000107c61574(pcVar10);
  aplStack_90[0] = (long *)0x0;
  pplVar13 = aplStack_90;
  func_0x0001006c71a4();
  func_0x000107c61574(pcVar12);
  func_0x0001000285a8(0x112d382e8,&UNK_10d902020);
  func_0x000107c613fc();
  uVar11 = 0x10383130c;
  func_0x0001000bdd8c(0x10383130c,0);
  puVar7 = &UNK_11069ba20;
  func_0x000107c613fc(&UNK_11069ba20,0x40,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar9;
  *(undefined2 *)(puVar7 + 0x18) = 1;
  puVar7[0x1a] = 0;
  *(undefined8 *)(puVar7 + 0x20) = 1;
  puVar7[0x28] = 0;
  *(undefined8 *)(puVar7 + 0x30) = uVar11;
  *(long ***)(puVar7 + 0x38) = pplVar13;
  func_0x0001000285a8(0x112fa03b0,&UNK_10dc152f0);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(pplVar13);
  uVar11 = 0x10382b470;
  func_0x0001000bdd8c(0x10382b470,puVar7);
  uVar2 = *(undefined1 *)(unaff_x20 + 0x88);
  uVar24 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar7 = &UNK_11069ba48;
  func_0x000107c613fc(&UNK_11069ba48,0x30,7);
  puVar7[0x10] = uVar2;
  *(undefined8 *)(puVar7 + 0x18) = uVar24;
  *(undefined8 *)(puVar7 + 0x20) = uVar11;
  *(undefined8 *)(puVar7 + 0x28) = uVar6;
  func_0x0001000285a8(0x112fa03a0,&UNK_10dc152e0);
  func_0x000107c613fc();
  func_0x000107c61174(uVar24);
  func_0x000107c6157c(uVar11);
  func_0x000107c6157c(uVar6);
  uVar24 = 0x10382b458;
  func_0x0001000bdd8c(0x10382b458,puVar7);
  uVar26 = 0x112fa0260;
  func_0x0001000285a8(0x112fa0260,&UNK_10dc15208);
  uVar14 = 0x10383ea88;
  func_0x0001000cb480(0x10383ea88,0,uVar26);
  uVar25 = *(undefined8 *)(unaff_x20 + 0x80);
  lVar22 = 0x112fa08e8;
  func_0x0001000285a8(0x112fa08e8,&UNK_10dc155a0);
  func_0x000107c613fc();
  func_0x0001000c6560(0);
  func_0x000107c613fc();
  func_0x000107c61174();
  uVar26 = uVar25;
  func_0x0001000c6580();
  *(undefined8 *)(lVar22 + 0x10) = uVar25;
  *(undefined8 *)(lVar22 + 0x18) = uVar5;
  *(undefined8 *)(lVar22 + 0x20) = uVar4;
  *(undefined8 *)(lVar22 + 0x28) = 0x10383ec20;
  *(undefined8 *)(lVar22 + 0x30) = 0;
  *(undefined8 *)(lVar22 + 0x38) = uVar26;
  uVar26 = *(undefined8 *)(unaff_x20 + 0x90);
  *(long *)(unaff_x20 + 0x90) = lVar22;
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(lVar22);
  func_0x000107c61574(uVar26);
  puVar7 = &UNK_11069ba70;
  func_0x000107c613fc(&UNK_11069ba70,0x40,7);
  *(long *)(puVar7 + 0x10) = lVar22;
  *(undefined8 *)(puVar7 + 0x18) = uVar9;
  *(undefined8 *)(puVar7 + 0x20) = uVar14;
  *(undefined8 *)(puVar7 + 0x28) = uVar6;
  *(undefined8 *)(puVar7 + 0x30) = uVar3;
  *(undefined8 *)(puVar7 + 0x38) = uVar4;
  func_0x0001000285a8(0x112f421e0,&UNK_10db8f110);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar3);
  uVar26 = 0x10382b474;
  func_0x0001000bdd8c(0x10382b474,puVar7);
  func_0x0001000285a8(0x112fa0258,&UNK_10dc15200);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar11);
  uVar14 = 0x10382b478;
  func_0x0001000bdd8c(0x10382b478,uVar11);
  FUN_10382b1c4(uVar26);
  uVar25 = 0;
  func_0x0001002ed07c();
  pcVar10 = FUN_10383ed48;
  func_0x0001000bfde0(FUN_10383ed48,0,uVar25);
  pcVar15 = pcVar10;
  func_0x0001004575f0();
  func_0x000107c61574();
  func_0x0001004575f0();
  pcVar16 = pcVar10;
  func_0x0001003a5b88();
  pcVar12 = pcVar16;
  func_0x0001003a5b88();
  puVar17 = PTR_PTR_1126ad790;
  func_0x000107c610f8();
  func_0x000107c45778();
  func_0x000107c61170(pcVar15);
  func_0x000107c61170(pcVar10);
  func_0x000107c61170(pcVar16);
  func_0x000107c61170(pcVar12);
  uVar25 = *(undefined8 *)(unaff_x20 + 0x50);
  puVar7 = puVar17;
  (**(code **)(unaff_x20 + 0x60))();
  func_0x000107c42c20(uVar25);
  func_0x000107c61170(puVar7);
  uVar18 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_1130354a0);
  func_0x000107c61174();
  uVar25 = 0x112fa0268;
  func_0x0001000285a8(0x112fa0268,&UNK_10dc159f0);
  uVar19 = 0x10383eb70;
  func_0x0001000cb480(0x10383eb70,0,uVar25);
  puVar7 = &UNK_11069b8e0;
  func_0x000107c613fc(&UNK_11069b8e0,0x18,7);
  func_0x000107c61644(puVar7 + 0x10,uVar11);
  lVar20 = 0;
  FUN_10381b8b4();
  lVar22 = lVar20;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar22 + _DAT_112f9f6a8);
  *puVar1 = 0x10382b480;
  puVar1[1] = puVar7;
  plVar21 = &lStack_a0;
  lStack_a0 = lVar22;
  lStack_98 = lVar20;
  func_0x000107c61154(plVar21,PTR_s_init_1125d9248);
  ppuStack_70 = &PTR_DAT_11069a398;
  lVar22 = 0;
  aplStack_90[0] = plVar21;
  lStack_78 = lVar20;
  func_0x00010381b9b0();
  func_0x000107c610f8();
  *(undefined8 *)(lVar22 + _DAT_112f9f6d8) = uVar18;
  *(undefined8 *)(lVar22 + _DAT_112f9f6e0) = uVar19;
  func_0x0001007b7bf0(aplStack_90,lVar22 + _DAT_112f9f6e8);
  uVar25 = 0;
  func_0x0001005b7104();
  plVar21 = &lStack_b0;
  lStack_b0 = lVar22;
  uStack_a8 = uVar25;
  func_0x000107c61154(plVar21,PTR_s_init_1125d9248);
  func_0x0001007b7c40(aplStack_90);
  uVar25 = *(undefined8 *)(unaff_x20 + 0x58);
  plVar23 = plVar21;
  (**(code **)(unaff_x20 + 0x70))();
  func_0x000107c42c20(uVar25);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(uVar27);
  func_0x000107c61574(pcVar8);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(pplVar13);
  func_0x000107c61574(uVar11);
  func_0x000107c61574(uVar24);
  func_0x000107c61574(uVar26);
  func_0x000107c61574(uVar14);
  func_0x000107c61170(puVar17);
  func_0x000107c61170(plVar21);
  func_0x000107c61170(plVar23);
  return;
}



/* Entry: 10382b06c; end: 10382b08f;  */

void FUN_10382b06c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10382b090; end: 10382b0b3;  */

void FUN_10382b090(void)

{
  FUN_1038298cc();
  return;
}



/* Entry: 10382b0b4; end: 10382b0bb;  */

undefined8 FUN_10382b0b4(void)

{
  return 0;
}



/* Entry: 10382b0bc; end: 10382b0db;  */

void FUN_10382b0bc(void)

{
  func_0x000107c61168(&PTR_PTR_112fa0b70);
  return;
}



/* Entry: 10382b0dc; end: 10382b1c3;  */

/* WARNING: Possible PIC construction at 0x00010382b13c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010382b158: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010382b178: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010382b15c) */
/* WARNING: Removing unreachable block (ram,0x00010382b16c) */
/* WARNING: Removing unreachable block (ram,0x00010382b140) */
/* WARNING: Removing unreachable block (ram,0x00010382b17c) */

void FUN_10382b0dc(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 == 0) {
    func_0x0001000c10c0("begin()");
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c61174(uVar1);
    func_0x000107c61574(param_1);
    func_0x000107c4b2ec(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 10382b1c4; end: 10382b2c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10382b1c4(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  uVar3 = *(undefined8 *)(*(long *)(unaff_x20 + 0x40) + _DAT_112fa42a8);
  func_0x000107c6157c(uVar3);
  func_0x0001000d224c(auStack_68);
  func_0x000107c61574(uVar3);
  func_0x0001000a8868(auStack_68,uStack_50);
  uVar3 = uStack_50;
  (**(code **)(lStack_48 + 8))(uStack_50,lStack_48);
  lVar1 = 0;
  func_0x0001007b7870();
  func_0x000107c613fc();
  uVar2 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(lVar1 + 0x18) = uVar3;
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  *(undefined8 *)(lVar1 + 0x10) = param_1;
  func_0x000107c6157c(param_1);
  func_0x0001000834e4(auStack_68);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x98);
  *(long *)(unaff_x20 + 0x98) = lVar1;
  func_0x000107c6157c(lVar1);
  func_0x000107c61574(uVar3);
  func_0x0001007b7890();
  func_0x000107c61574(lVar1);
  return;
}



/* Entry: 10382b2c4; end: 10382b2f3;  */

void FUN_10382b2c4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001007b6e3c(0);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar1);
  func_0x00010388ced4(uVar2,uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 10382b2f4; end: 10382b31b;  */

void FUN_10382b2f4(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  FUN_10382b0dc();
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10382b31c; end: 10382b37b;  */

void FUN_10382b31c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10382b37c; end: 10382b3bb;  */

void FUN_10382b37c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  long unaff_x20;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  
  bVar3 = *(byte *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  bVar4 = *(byte *)(unaff_x20 + 0x28);
  uVar9 = (ulong)bVar4;
  uVar10 = 0x100;
  if (*(char *)(unaff_x20 + 0x19) == '\0') {
    uVar10 = 0;
  }
  uVar11 = 0x10000;
  if (*(char *)(unaff_x20 + 0x1a) == '\0') {
    uVar11 = 0;
  }
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar8 = uVar7;
  func_0x0001000d224c(&uStack_68,*(undefined8 *)(unaff_x20 + 0x10));
  uVar5 = 0x112f9fdd0;
  uStack_80 = 0xe0;
  func_0x0001000285a8();
  FUN_1038a5554();
  puVar6 = &uStack_88;
  uStack_88 = uVar5;
  uStack_78 = uVar8;
  uStack_70 = uVar9;
  func_0x000100854cb0(puVar6);
  func_0x000107c61170(uVar5);
  FUN_10381e510(uVar8,uVar9);
  FUN_1038a4550(0);
  func_0x000107c610f8();
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  func_0x0001038a159c(uStack_68,&PTR_DAT_1106a18f8,uVar10 | bVar3 & 0x10101 | uVar11,uVar7,bVar4,
                      uVar1,puVar6,0,uVar2);
  *param_1 = uStack_68;
  param_1[1] = &PTR_DAT_1106a2208;
  return;
}



/* Entry: 10382b3bc; end: 10382b43b;  */

void FUN_10382b3bc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10382b43c; end: 10382b483;  */

void FUN_10382b43c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long unaff_x20;
  undefined1 auStack_78 [40];
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
  FUN_1038449a0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  uVar4 = 0x112fa0390;
  func_0x0001000285a8(0x112fa0390,&UNK_10dc152d0);
  pcVar5 = FUN_10383ed34;
  func_0x0001000cb480(FUN_10383ed34,0,uVar4);
  func_0x0001000d224c(auStack_78);
  FUN_103893e40(0);
  func_0x000107c610f8();
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar3);
  func_0x000103890d38(pcVar5,auStack_78,uVar2,uVar1,uVar3,1);
  *param_1 = pcVar5;
  return;
}



/* Entry: 10382b484; end: 10382caa7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10382b484(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,long param_7,long param_8,long param_9)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  code *pcVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  long lVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  long lVar30;
  long lVar31;
  code *pcVar32;
  code *pcVar33;
  code *pcVar34;
  undefined *puVar35;
  code *pcVar36;
  undefined *puVar37;
  long lVar38;
  undefined *puVar39;
  undefined *puVar40;
  code *pcVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  long lVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined *puVar49;
  long lVar50;
  long lVar51;
  undefined8 *puVar52;
  long unaff_x20;
  undefined *puVar53;
  undefined8 uVar54;
  long lVar55;
  long lVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  undefined *puStack_530;
  undefined *puStack_3f8;
  undefined1 auStack_300 [40];
  undefined *apuStack_2d8 [3];
  undefined *puStack_2c0;
  undefined **ppuStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long *aplStack_2a0 [3];
  long lStack_288;
  undefined **ppuStack_280;
  long lStack_278;
  undefined1 uStack_270;
  long lStack_260;
  undefined **ppuStack_258;
  undefined8 uStack_250;
  char cStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  long lStack_220;
  undefined1 uStack_218;
  code *pcStack_210;
  code *pcStack_208;
  undefined1 uStack_200;
  undefined1 auStack_1f8 [88];
  undefined8 uStack_1a0;
  undefined1 uStack_198;
  undefined8 uStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined1 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  func_0x000107c613fc();
  uVar3 = param_6;
  func_0x000107c3e0a8();
  func_0x000107c61180();
  lVar4 = *(long *)(param_7 + _DAT_112f9fbc0);
  func_0x000107c61174();
  uVar5 = param_5;
  func_0x000107c4ae78();
  func_0x000107c61180();
  uVar6 = *(undefined8 *)(param_8 + _DAT_11307cf50);
  lVar51 = *(long *)(param_9 + _DAT_112fe94e0);
  func_0x000107c61174();
  func_0x000107c61174();
  lVar55 = param_2;
  func_0x000107c4dff0();
  func_0x000107c61180();
  if (lVar55 != 0) {
    lVar7 = lVar55;
    func_0x000107c5ac28();
    func_0x000107c61170(lVar55);
    if ((int)lVar7 != 0) {
      func_0x000107c61170(param_7);
      func_0x000107c61170(param_8);
      func_0x000107c61170(param_9);
      func_0x000107c61170(param_3);
      func_0x000107c61170(param_1);
      func_0x000107c61170(uVar3);
      func_0x000107c61170(lVar4);
      func_0x000107c61170(param_2);
      func_0x000107c61170(param_4);
      func_0x000107c61170(param_5);
      func_0x000107c61170(param_6);
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar6);
      func_0x000107c61170(lVar51);
      *(undefined8 *)(unaff_x20 + 0x30) = 0;
      *(undefined8 *)(unaff_x20 + 0x18) = 0;
      *(undefined8 *)(unaff_x20 + 0x10) = 0;
      *(undefined8 *)(unaff_x20 + 0x28) = 0;
      *(undefined8 *)(unaff_x20 + 0x20) = 0;
      return unaff_x20;
    }
  }
  plVar8 = (long *)(param_3 + _DAT_112fa2d40);
  func_0x0001000a8868(plVar8,plVar8[3]);
  uVar48 = *(undefined8 *)(param_1 + _DAT_112fa56f8);
  puVar53 = &UNK_10d923f50;
  func_0x0001000285a8(0x112d5d810);
  uVar9 = uVar5;
  func_0x000107c4ac68();
  func_0x000107c61180();
  uVar10 = uVar9;
  func_0x0001000bda74();
  func_0x000107c61170(uVar9);
  uVar11 = uVar5;
  func_0x000107c4aeb4();
  func_0x000107c61180();
  ppuVar12 = &PTR____CFConstantStringClassReference_110f30b98;
  func_0x000107c5faec();
  func_0x0001000285a8(0x112d382e8,&UNK_10d902020);
  func_0x000107c61534();
  pcVar13 = FUN_103840f7c;
  func_0x0001000bdd8c(FUN_103840f7c,0);
  puVar14 = &UNK_11069baa0;
  func_0x000107c613fc(&UNK_11069baa0,0x18,7);
  func_0x000107c61614(puVar14 + 0x10,uVar6);
  puVar15 = &UNK_11069bac8;
  func_0x000107c613fc(&UNK_11069bac8,0x18,7);
  *(undefined8 *)(puVar15 + 0x10) = param_4;
  func_0x0001000285a8(0x112fa03c8,&UNK_10dc15780);
  func_0x000107c61534();
  func_0x000107c61174();
  uVar9 = 0x10382cbf4;
  func_0x0001000bdd8c(0x10382cbf4,puVar15);
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_100 = 0;
  uStack_1a0 = 2;
  uStack_198 = 1;
  uStack_190 = 7;
  uStack_178 = 0;
  uStack_168 = 1;
  pcStack_160 = FUN_10382cbec;
  uStack_148 = 0;
  uStack_140 = 0;
  uStack_130 = 0;
  uStack_138 = 1;
  uStack_128 = 0;
  lVar56 = *plVar8;
  uVar17 = *(undefined8 *)(lVar56 + 0x10);
  lVar7 = *(long *)(lVar56 + 0x18);
  lVar55 = *(long *)(lVar56 + 0x20);
  puVar15 = *(undefined **)(lVar56 + 0x28);
  uVar18 = *(undefined8 *)(lVar56 + 0x30);
  uVar19 = *(undefined8 *)(lVar56 + 0x38);
  uVar20 = *(undefined8 *)(lVar56 + 0x40);
  uVar21 = *(undefined8 *)(lVar56 + 0x48);
  uVar22 = *(undefined8 *)(lVar56 + 0x50);
  uVar23 = *(undefined8 *)(lVar56 + 0x58);
  uVar24 = *(undefined8 *)(lVar56 + 0x60);
  lVar25 = *(long *)(lVar56 + 0x68);
  puVar49 = *(undefined **)(lVar56 + 0x70);
  ppuStack_188 = ppuVar12;
  ppuStack_180 = (undefined **)puVar53;
  pcStack_170 = pcVar13;
  puStack_158 = puVar14;
  uStack_150 = uVar9;
  FUN_103825850(&uStack_1a0,&lStack_278);
  lVar50 = *(long *)(lVar56 + 0x78);
  lVar16 = 0;
  func_0x00010384c030();
  lVar56 = lVar16;
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c6157c(uVar10);
  func_0x000107c61174();
  func_0x0001000d224c(&uStack_98);
  uVar9 = 0;
  uVar43 = 0;
  lVar46 = 0;
  uVar44 = 0;
  uVar45 = 0;
  uVar47 = 0;
  if ((char)uStack_98 == '\x01') {
    puVar53 = puVar15;
    func_0x000107c4b100(puVar15);
    func_0x000107c61180();
    FUN_1038233a8(&uStack_f8);
    func_0x000107c61170(puVar53);
    uVar9 = uStack_d0;
    uVar43 = uStack_f8;
    lVar46 = lStack_f0;
    uVar44 = uStack_e8;
    uVar45 = uStack_e0;
    uVar47 = uStack_d8;
  }
  uStack_c8 = uVar43;
  lStack_c0 = lVar46;
  uStack_b8 = uVar44;
  uStack_b0 = uVar45;
  uStack_a8 = uVar47;
  uStack_a0 = uVar9;
  if (cStack_240 == '\x01') {
    puVar53 = puVar15;
    func_0x000107c4b100();
    func_0x000107c61180();
    puVar14 = puVar53;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(puVar53);
    puStack_3f8 = puVar14;
    if (puVar14 != (undefined *)0x0) {
      puVar53 = puVar14;
      func_0x000107c4daf8();
      func_0x000107c615e8(puVar14);
      if ((int)puVar53 == 0) {
        puStack_3f8 = (undefined *)0x0;
        puVar53 = puVar14;
      }
      else {
        puStack_3f8 = puVar49;
        FUN_10384c71c();
        puVar53 = puStack_3f8;
        if (puStack_3f8 != (undefined *)0x0) {
          func_0x000107c615f0(puStack_3f8);
          func_0x000107c5bc1c();
        }
      }
    }
    *(undefined **)(lVar56 + 0x28) = puStack_3f8;
    if (puStack_3f8 == (undefined *)0x0) {
      FUN_103822e30();
      puStack_3f8 = (undefined *)0x0;
    }
    else {
      puVar53 = puStack_3f8;
      func_0x000107c615f0(puStack_3f8);
      FUN_103823038();
    }
    func_0x000107c6157c(puVar53);
    func_0x0001000285a8(0x112da9c48,&UNK_10dc15350);
    uVar26 = *(undefined8 *)(lVar55 + _DAT_113080ad0);
    func_0x0001000bda74(uVar26);
    func_0x000107c6157c();
    uVar1 = uStack_250;
    uVar28 = uStack_238;
    uVar54 = uStack_230;
    uVar2 = uStack_200;
  }
  else {
    puStack_3f8 = (undefined *)0x0;
    uVar26 = 0;
    puVar53 = (undefined *)0x0;
    *(undefined8 *)(lVar56 + 0x28) = 0;
    uVar1 = uStack_250;
    uVar28 = uStack_238;
    uVar54 = uStack_230;
    uVar2 = uStack_200;
  }
  if (lStack_228 == 0) {
    uVar29 = 0;
  }
  else {
    func_0x0001000d224c(&uStack_98);
    uVar29 = uStack_98;
  }
  FUN_1038796f4(0);
  func_0x000107c610f8();
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(uVar54);
  func_0x00010382597c(uVar43,lVar46,uVar44,uVar45,uVar47,uVar9);
  func_0x000107c6157c(uVar1);
  uVar27 = uVar10;
  func_0x000103878a74(uVar10,uVar28,uVar54,uVar1,puVar53,&uStack_c8,uVar26,uVar29,uVar2);
  func_0x000107c615e8(puStack_3f8);
  func_0x000107c61574(uVar26);
  func_0x000107c61574(puVar53);
  uVar26 = uVar17;
  func_0x000107c41284();
  func_0x000107c61180();
  uVar28 = uVar26;
  func_0x000107c4f750();
  func_0x000107c61180();
  func_0x000107c615e8(uVar26);
  uVar26 = uVar18;
  func_0x000107c4b2f8();
  func_0x000107c61180();
  if (lStack_220 == 0) {
    puVar53 = &UNK_11069baf0;
    func_0x000107c613fc(&UNK_11069baf0,0x18,7);
    *(undefined8 *)(puVar53 + 0x10) = uVar26;
    uVar26 = 0x112fa03d0;
    func_0x0001000285a8(0x112fa03d0,&UNK_10dc15ff0);
    func_0x000107c613fc();
    pcVar13 = (code *)0x10382cbfc;
    func_0x0001000bdd8c(0x10382cbfc,puVar53,uVar26);
  }
  else {
    func_0x000107c6157c(lStack_220);
    uVar54 = 0x112fa0410;
    func_0x0001000285a8(0x112fa0410,&UNK_10dc15370);
    pcVar13 = FUN_10384bf80;
    func_0x0001000cb480(FUN_10384bf80,0,uVar54);
    func_0x000107c61574(lStack_220);
    func_0x000107c61170(uVar26);
  }
  puVar53 = &UNK_11069bb18;
  func_0x000107c613fc(&UNK_11069bb18,0x18,7);
  func_0x000107c61614(puVar53 + 0x10,uVar3);
  puVar14 = &UNK_11069bb40;
  func_0x000107c613fc(&UNK_11069bb40,0x28,7);
  *(undefined **)(puVar14 + 0x10) = puVar53;
  *(code **)(puVar14 + 0x18) = pcVar13;
  *(undefined8 *)(puVar14 + 0x20) = uVar11;
  func_0x0001000285a8(0x112fa03d8,&UNK_10dc15310);
  func_0x000107c613fc();
  func_0x000107c61174();
  uVar26 = 0x10382cc04;
  func_0x0001000bdd8c(0x10382cc04,puVar14);
  if (lVar46 == 0) {
    puVar52 = (undefined8 *)0x0;
  }
  else {
    uStack_98 = uVar43;
    lStack_90 = lVar46;
    uStack_88 = uVar44;
    uStack_80 = uVar45;
    uStack_78 = uVar47;
    uStack_70 = uVar9;
    FUN_103883920(0);
    func_0x000107c610f8();
    uVar54 = uVar11;
    func_0x000107c61174(uVar11);
    func_0x000107c61434(lVar46);
    func_0x000107c61434(uVar45);
    func_0x000107c61434(uVar9);
    puVar52 = &uStack_98;
    FUN_1038831fc(puVar52,uVar54);
  }
  puVar53 = &UNK_11069bb18;
  func_0x000107c613fc(&UNK_11069bb18,0x18,7);
  func_0x000107c61614(puVar53 + 0x10,uVar3);
  uVar54 = 0x112fa03e0;
  func_0x0001000285a8(0x112fa03e0,&UNK_10dc15a80);
  func_0x000107c613fc();
  uVar29 = 0x10382cc10;
  func_0x0001000bdd8c(0x10382cc10,puVar53,uVar54);
  uVar54 = *(undefined8 *)(lVar51 + _DAT_112fe95f8);
  uVar57 = *(undefined8 *)(lVar4 + _DAT_112f9f6e0);
  lVar30 = 0;
  FUN_10381fe7c();
  lVar31 = lVar30;
  func_0x000107c610f8();
  *(undefined8 *)(lVar31 + _DAT_112f9ffa0) = 0;
  *(undefined8 *)(lVar31 + _DAT_112f9ffa8) = 1;
  *(undefined8 *)(lVar31 + _DAT_112f9ffb0) = 0;
  *(undefined8 *)(lVar31 + _DAT_112f9ff88) = uVar54;
  *(undefined8 *)(lVar31 + _DAT_112f9ff90) = uVar29;
  *(undefined8 *)(lVar31 + _DAT_112f9ff98) = uVar57;
  puVar53 = PTR_s_init_1125d9248;
  lStack_2b0 = lVar31;
  lStack_2a8 = lVar30;
  func_0x000107c6157c(uVar54);
  func_0x000107c6157c(uVar29);
  func_0x000107c6157c(uVar57);
  plVar8 = &lStack_2b0;
  func_0x000107c61154(plVar8,puVar53);
  ppuStack_280 = &PTR_DAT_11069a800;
  lStack_288 = lVar30;
  func_0x000107c61574(uVar29);
  uVar54 = *(undefined8 *)(lVar7 + _DAT_113071300);
  aplStack_2a0[0] = plVar8;
  FUN_10382cc2c(aplStack_2a0,apuStack_2d8);
  puVar53 = &UNK_11069bb68;
  func_0x000107c613fc(&UNK_11069bb68,0x62,7);
  *(undefined8 *)(puVar53 + 0x10) = uVar54;
  *(undefined8 *)(puVar53 + 0x18) = uVar26;
  func_0x000100d5f7e4(apuStack_2d8,puVar53 + 0x20);
  *(undefined8 *)(puVar53 + 0x48) = uVar28;
  *(undefined8 **)(puVar53 + 0x50) = puVar52;
  *(long *)(puVar53 + 0x58) = lStack_278;
  puVar53[0x60] = uStack_270;
  puVar53[0x61] = uStack_218;
  func_0x0001000285a8(0x112fa03e8,&UNK_10dc15320);
  func_0x000107c613fc();
  func_0x000107c61174(uVar54);
  func_0x000107c6157c(uVar26);
  func_0x000107c61174();
  func_0x000107c61174();
  puVar14 = (undefined *)0x10382cc18;
  func_0x0001000bdd8c(0x10382cc18,puVar53);
  pcVar32 = pcStack_208;
  pcVar13 = pcStack_210;
  if (pcStack_210 == (code *)0x1) {
    func_0x0001000285a8(0x112f6cf68,&UNK_10dbcadf0);
    uVar54 = uVar22;
    func_0x000107c3ee24(uVar22);
    func_0x000107c61180();
    uVar29 = uVar54;
    func_0x0001000bda74();
    func_0x000107c61170(uVar54);
    uVar54 = 0x112d3b7d8;
    func_0x0001000285a8(0x112d3b7d8,&UNK_10d920690);
    pcVar13 = FUN_10384c61c;
    func_0x0001000cb480(FUN_10384c61c,0,uVar54);
    pcVar32 = FUN_10384c65c;
    func_0x0001000cb480(FUN_10384c65c,0,uVar54);
    func_0x000107c61574(uVar29);
  }
  func_0x0001000285a8(0x112e5b730,&UNK_10dc15a90);
  FUN_1038259d8(pcStack_210,pcStack_208);
  uVar54 = uVar20;
  func_0x000107c4c974(uVar20);
  func_0x000107c61180();
  uVar29 = uVar54;
  func_0x0001000bda74();
  func_0x000107c61170(uVar54);
  uVar54 = 0x112e5b738;
  func_0x0001000285a8(0x112e5b738,&UNK_10da61720);
  pcVar33 = FUN_10384b8d8;
  func_0x0001000cb480(FUN_10384b8d8,0,uVar54);
  func_0x000107c61574(uVar29);
  pcVar34 = FUN_10384b914;
  func_0x0001000cb480(FUN_10384b914,0,&UNK_11077ec38);
  puVar53 = &UNK_11069bb90;
  func_0x000107c613fc(&UNK_11069bb90,0x18,7);
  func_0x000107c61614(puVar53 + 0x10,uVar19);
  func_0x0001000285a8(0x112d53a70,&UNK_10d91a680);
  func_0x000107c613fc();
  uVar54 = 0x10382cc1c;
  func_0x0001000bdd8c(0x10382cc1c,puVar53);
  puVar53 = puVar15;
  func_0x000107c4b100();
  func_0x000107c61180();
  puVar35 = puVar53;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(puVar53);
  if (puVar35 == (undefined *)0x0) {
    puStack_530 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar53 = puVar35;
    func_0x000107c5b458();
    func_0x000107c61180();
    puStack_530 = puVar53;
    func_0x000107c5fc54();
    func_0x000107c61170(puVar53);
  }
  func_0x0001000285a8(0x112d4f8d0,&UNK_10dc15330);
  uVar29 = uVar23;
  func_0x000107c5c360(uVar23);
  func_0x000107c61180();
  uVar57 = uVar29;
  func_0x0001000bda74();
  func_0x000107c61170(uVar29);
  uVar29 = 0x112d5ba30;
  func_0x0001000285a8(0x112d5ba30,&UNK_10d929a50);
  pcVar36 = FUN_10384ba24;
  func_0x0001000cb480(FUN_10384ba24,0,uVar29);
  func_0x000107c61574(uVar57);
  puVar53 = &UNK_11069bbb8;
  func_0x000107c613fc(&UNK_11069bbb8,0x20,7);
  *(undefined8 *)(puVar53 + 0x10) = uVar24;
  *(undefined8 *)(puVar53 + 0x18) = uVar21;
  func_0x0001000285a8(0x112fa03f0,&UNK_10dc15340);
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar29 = 0x10382cc24;
  func_0x0001000bdd8c(0x10382cc24,puVar53);
  puVar37 = (undefined *)0x0;
  FUN_1038806d8();
  puVar53 = puVar37;
  func_0x000107c613fc();
  FUN_10382cd04(auStack_1f8,apuStack_2d8,0x112fa03f8,&UNK_10dc15aa0);
  if (puStack_2c0 == (undefined *)0x0) {
    FUN_103819ed4();
  }
  else {
    func_0x000100d5f7e4(apuStack_2d8,auStack_300);
    lVar31 = 0x112fa0408;
    func_0x0001000285a8(0x112fa0408,&UNK_10dc15360);
    func_0x000107c61534();
    *(undefined8 *)(lVar31 + 0x18) = 2;
    *(undefined8 *)(lVar31 + 0x10) = 1;
    *(undefined8 *)(lVar31 + 0x20) = lStack_260;
    *(undefined ***)(lVar31 + 0x28) = ppuStack_258;
    FUN_10382cc2c(auStack_300,lVar31 + 0x30);
    func_0x000107c61434(ppuStack_258);
    FUN_103819ed4();
    func_0x000107c61588(lVar31);
    func_0x00010382cd4c((undefined8 *)(lVar31 + 0x20),0x112f9f310,&UNK_10dc15ac0);
    func_0x0001000834e4(auStack_300);
  }
  lVar31 = lVar25;
  func_0x000107c4b3b8();
  func_0x000107c61180();
  lVar30 = lVar31;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar31);
  func_0x0001000285a8(0x112eb17c0,&UNK_10dac6140);
  if (lVar30 == 0) {
    puVar40 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x000107c610f8();
    func_0x000107c453e4();
    ppuVar12 = apuStack_2d8;
    apuStack_2d8[0] = puVar40;
    func_0x000100854cb0();
    func_0x000107c61170(puVar40);
  }
  else {
    lVar31 = lVar30;
    func_0x000107c5006c(lVar30);
    func_0x000107c61180();
    lVar38 = lVar31;
    func_0x0001000b637c();
    func_0x000107c61170(lVar31);
    func_0x0001000d224c(apuStack_2d8);
    puVar40 = apuStack_2d8[0];
    func_0x000100471e0c(apuStack_2d8[0],1);
    func_0x000107c61574(lVar38);
    func_0x000107c615e8(apuStack_2d8[0]);
    puVar39 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x000107c610f8();
    func_0x000107c453e4();
    ppuVar12 = apuStack_2d8;
    apuStack_2d8[0] = puVar39;
    func_0x0001006c71a4();
    func_0x000107c61170(puVar39);
    func_0x000107c615e8(lVar30);
    func_0x000107c61574(puVar40);
  }
  func_0x000107c61434(ppuStack_258);
  func_0x000107c6157c(ppuVar12);
  func_0x000107c6157c(pcVar33);
  func_0x000107c6157c(pcVar36);
  func_0x000107c6157c(pcVar34);
  func_0x000107c6157c(uVar54);
  func_0x000107c6157c(uVar29);
  pcVar41 = FUN_10384bbe4;
  func_0x0001000cb480(FUN_10384bbe4,0,&UNK_11077ebd0);
  ppuStack_2b8 = &PTR_DAT_1106a0c40;
  apuStack_2d8[0] = puVar53;
  puStack_2c0 = puVar37;
  func_0x000107c6157c();
  uVar57 = 0x10384bc2c;
  func_0x0001000cb480(0x10384bc2c,0,PTR___sSbN_11034dd40);
  uVar58 = *(undefined8 *)(lVar50 + _DAT_112fa6450);
  uVar42 = 0;
  FUN_10388ac54();
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x00010382597c(uVar43,lVar46,uVar44,uVar45,uVar47,uVar9);
  func_0x000107c6157c(pcVar32);
  func_0x000107c6157c(uVar1);
  func_0x000107c61174();
  func_0x000107c6157c(uVar58);
  func_0x000107c6157c(puVar14);
  func_0x000107c6157c(pcVar13);
  puVar37 = puVar14;
  func_0x000103888844(puVar14,pcVar33,uVar28,puStack_530,uVar11,pcVar13,pcVar32,ppuVar12,pcVar36,
                      pcVar34,uVar54,uVar29,lStack_260,ppuStack_258,pcVar41,apuStack_2d8,uVar57,
                      uVar1,&uStack_c8,uVar58,uVar2);
  ppuStack_2b8 = &PTR_DAT_1106a1598;
  puStack_2c0 = (undefined *)uVar42;
  func_0x000107c61574(puVar53);
  func_0x000107c61574(uVar29);
  func_0x000107c61574(uVar54);
  func_0x000107c61574(pcVar34);
  func_0x000107c61574(pcVar36);
  func_0x000107c61574(pcVar33);
  func_0x000107c615e8(puVar35);
  func_0x000107c61574(ppuVar12);
  func_0x000103825a6c(uVar43,lVar46,uVar44,uVar45,uVar47,uVar9);
  apuStack_2d8[0] = puVar37;
  func_0x0001000285a8(0x112fa0400,&UNK_10dc15ab0);
  uVar9 = uVar28;
  func_0x000107c3f6e8();
  func_0x000107c61180();
  uVar43 = uVar9;
  func_0x0001000bda74();
  func_0x000107c61170(uVar9);
  func_0x0001000285a8(0x112da9c48,&UNK_10dc15350);
  uVar44 = *(undefined8 *)(lVar55 + _DAT_113080ad0);
  func_0x000107c61174(uVar44);
  uVar9 = uVar44;
  func_0x0001000bda74();
  func_0x000107c61170(uVar44);
  FUN_10382cc2c(apuStack_2d8,auStack_300);
  uVar45 = 0;
  FUN_103872568();
  uVar44 = uVar45;
  func_0x000107c610f8();
  FUN_1038714fc(uVar43,uVar9,auStack_300,uVar44);
  *(undefined8 *)(lVar56 + 0x10) = uVar48;
  *(undefined8 *)(lVar56 + 0x18) = uVar43;
  func_0x0001000285a8(0x112f421e0,&UNK_10db8f110);
  func_0x000107c61174(uVar48);
  func_0x000107c61174(uVar43);
  uVar9 = uVar3;
  func_0x000107c3e060();
  func_0x000107c61180();
  uVar44 = uVar9;
  func_0x0001000bda74();
  func_0x000107c61170();
  FUN_1038714a4();
  lVar46 = 0;
  func_0x00010384cca8();
  func_0x000107c613fc();
  uVar47 = 0;
  func_0x0001005f60b4();
  func_0x000107c613fc();
  func_0x0001005f60d4();
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(puVar52);
  func_0x000107c61574(uVar26);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar24);
  func_0x000107c61574(pcVar32);
  func_0x000107c61574(pcVar13);
  func_0x000107c61170(uVar48);
  func_0x000107c61170(uVar43);
  func_0x000107c61170(lVar55);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar51);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(lVar50);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(puVar15);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(lVar25);
  func_0x000107c61170(puVar49);
  func_0x000107c615e8(puStack_3f8);
  *(undefined8 *)(lVar46 + 0x10) = uVar44;
  *(undefined8 *)(lVar46 + 0x18) = uVar9;
  *(undefined **)(lVar46 + 0x20) = puVar14;
  *(undefined8 *)(lVar46 + 0x28) = uVar47;
  func_0x0001000834e4(apuStack_2d8);
  func_0x0001000834e4(aplStack_2a0);
  func_0x000103825aa8(&lStack_278);
  *(long *)(lVar56 + 0x20) = lVar46;
  func_0x000107c61574(uVar10);
  ppuStack_258 = &PTR_DAT_11069df40;
  lStack_260 = lVar16;
  func_0x000107c61574(uVar10);
  func_0x000107c61170(uVar11);
  lStack_278 = lVar56;
  func_0x000103825aa8(&uStack_1a0);
  FUN_10382cc2c(&lStack_278,unaff_x20 + 0x10);
  plVar8 = &lStack_278;
  func_0x0001000a8868(plVar8,lStack_260);
  lVar55 = *plVar8;
  FUN_103871654();
  uVar9 = *(undefined8 *)(lVar55 + 0x10);
  uVar17 = *(undefined8 *)(lVar55 + 0x18);
  ppuStack_180 = &PTR_DAT_11069f880;
  uStack_1a0 = uVar17;
  ppuStack_188 = (undefined **)uVar45;
  FUN_10388af40(0);
  func_0x000107c610f8();
  func_0x000107c61174(uVar17);
  puVar52 = &uStack_1a0;
  func_0x00010388ae60(puVar52);
  func_0x000107c4fba8(uVar9);
  func_0x000107c61170(puVar52);
  FUN_10384c9b0();
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(lVar51);
  func_0x0001000834e4(&lStack_278);
  return unaff_x20;
}



/* Entry: 10382caa8; end: 10382cb8f;  */

undefined8 FUN_10382caa8(void)

{
  long unaff_x20;
  undefined1 auStack_80 [24];
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  long lStack_40;
  
  FUN_10382cd04(unaff_x20 + 0x10,auStack_58,0x112fa0bd0,&UNK_10dc15d00);
  if (lStack_40 == 0) {
    func_0x00010382cd4c(auStack_58,0x112fa0bd0,&UNK_10dc15d00);
  }
  else {
    func_0x0001000a8868();
    func_0x000100c82230();
    func_0x000104875e28(auStack_80);
    if (lStack_68 == 0) {
      func_0x00010382cd4c(auStack_80,0x112fa0418,&UNK_10dc15790);
    }
    else {
      func_0x0001000a8868(auStack_80,lStack_68);
      (**(code **)(lStack_60 + 0x30))(lStack_68,lStack_60);
      func_0x0001000834e4(auStack_80);
    }
    func_0x0001000834e4(auStack_58);
  }
  return 0;
}



/* Entry: 10382cb90; end: 10382cbc3;  */

void FUN_10382cb90(void)

{
  long unaff_x20;
  
  func_0x00010382cd4c(unaff_x20 + 0x10,0x112fa0bd0,&UNK_10dc15d00);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10382cbc4; end: 10382cbc7;  */

void FUN_10382cbc4(void)

{
  return;
}



/* Entry: 10382cbc8; end: 10382cbeb;  */

undefined8 FUN_10382cbc8(void)

{
  FUN_10382caa8();
  return 0;
}



/* Entry: 10382cbec; end: 10382cc2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10382cbec(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + _DAT_11307d050);
    func_0x000107c61174();
    func_0x000107c61170(lVar1);
    lVar1 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x000107c40f70(lVar1);
      func_0x000107c61180();
      func_0x000107c615e8(lVar1);
      func_0x000107c431f4(lVar2);
      func_0x000107c615e8(lVar2);
    }
  }
  return;
}



/* Entry: 10382cc2c; end: 10382cc6f;  */

long FUN_10382cc2c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 10382cc70; end: 10382cce7;  */

void FUN_10382cc70(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10382cce8; end: 10382cd03;  */

void FUN_10382cce8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined1 auStack_88 [40];
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar3 = *(undefined1 *)(unaff_x20 + 0x60);
  uVar4 = *(undefined1 *)(unaff_x20 + 0x61);
  uVar6 = 0x112f9f1c8;
  func_0x0001000285a8(0x112f9f1c8,&UNK_10dc14750);
  func_0x0001000bda74(uVar5,uVar6);
  FUN_10384c884(unaff_x20 + 0x20,auStack_88);
  uVar6 = 0;
  FUN_1038746d0();
  func_0x000107c610f8();
  func_0x000107c615f0(uVar2);
  func_0x000107c6157c(uVar1);
  func_0x000107c61174(uVar7);
  func_0x000103872c28(uVar5,uVar1,auStack_88,uVar7,uVar2,uVar8,uVar3,uVar4);
  param_1[3] = uVar6;
  param_1[4] = &PTR_DAT_11069fa20;
  *param_1 = uVar5;
  return;
}



/* Entry: 10382cd04; end: 10382cd8b;  */

undefined8 FUN_10382cd04(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10382cd8c; end: 10382cdab;  */

void FUN_10382cd8c(void)

{
  func_0x000107c61168(&PTR_PTR_112fa0c18);
  return;
}



/* Entry: 10382cdac; end: 10382dc33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10382cdac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 param_7,undefined8 param_8,long param_9,
                  long param_10)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long extraout_x8;
  undefined8 uVar11;
  long extraout_x12;
  undefined8 uVar12;
  long unaff_x20;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 uVar16;
  undefined *apuStack_140 [4];
  long lStack_120;
  long lStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined **ppuStack_78;
  undefined *puStack_70;
  
  uStack_e0 = param_4;
  uStack_c8 = param_7;
  uStack_c0 = param_1;
  lStack_b0 = param_6;
  uStack_a8 = param_8;
  func_0x000107c613fc();
  uStack_b8 = param_2;
  func_0x000107c3e0a8();
  func_0x000107c61180();
  lVar13 = *(long *)(param_9 + _DAT_113081888);
  lVar15 = *(long *)(param_10 + _DAT_112fa40f8);
  lVar1 = 0;
  uStack_d0 = param_2;
  FUN_103842094();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  func_0x0001000285a8(0x112fa04c0,&UNK_10dc153d0);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar9 = param_3;
  lStack_d8 = lVar15;
  func_0x000107c4b4a8();
  func_0x000107c61180();
  uVar11 = uVar9;
  func_0x0001000bda74();
  uStack_a0 = uVar11;
  func_0x000107c61170(uVar9);
  lVar15 = param_5;
  func_0x000107c4b2ec();
  func_0x000107c61180();
  lVar2 = lVar15;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar15);
  lStack_e8 = unaff_x20;
  if (lVar2 == 0) {
    func_0x000107c61170(lStack_b0);
    func_0x000107c61170(lStack_d8);
    func_0x000107c61170(lVar13);
    func_0x000107c61170(uStack_d0);
    func_0x000107c61170(param_3);
    func_0x000107c61170(uStack_e0);
    func_0x000107c61170(param_5);
    func_0x000107c61170(uStack_c8);
    func_0x000107c61170(uStack_a8);
    func_0x000107c61574(uStack_a0);
    func_0x000107c61170(param_9);
    func_0x000107c61170(param_10);
    func_0x000107c61170(uStack_c0);
    func_0x000107c61170(uStack_b8);
  }
  else {
    lStack_f8 = param_9;
    lStack_f0 = param_10;
    lVar3 = lVar2;
    lStack_118 = lVar13;
    uStack_110 = param_3;
    lStack_108 = param_5;
    lStack_100 = lVar1;
    func_0x000107c4c020();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    puVar4 = &UNK_11069bc00;
    func_0x000107c613fc(&UNK_11069bc00,0x18,7);
    uVar11 = uStack_e0;
    *(undefined8 *)(puVar4 + 0x10) = uStack_e0;
    func_0x0001000285a8(0x112fa04c8,&UNK_10dc15b10);
    func_0x000107c613fc();
    func_0x000107c61174();
    uVar9 = 0x10382dce4;
    apuStack_140[3] = (undefined *)uVar11;
    func_0x0001000bdd8c(0x10382dce4,puVar4);
    puVar4 = PTR_PTR_1126aeea8;
    func_0x000107c610f8();
    func_0x000107c453e4();
    uVar12 = *(undefined8 *)(lStack_b0 + _DAT_113083868);
    func_0x0001000285a8(0x112d5a608,&UNK_10d921390);
    func_0x000107c61174();
    func_0x000107c615f0(lVar3);
    uVar11 = uStack_a8;
    func_0x000107c4af30();
    func_0x000107c61180();
    uVar10 = uVar11;
    func_0x0001000bda74();
    func_0x000107c61170(uVar11);
    lVar15 = lStack_d8;
    uVar16 = *(undefined8 *)(lStack_d8 + _DAT_112fa40c8);
    puVar5 = (undefined *)0x0;
    func_0x0001007dbb4c();
    apuStack_140[1] = puVar5;
    func_0x000107c613fc();
    *(undefined8 *)(puVar5 + 0x10) = 0;
    *(undefined8 *)(puVar5 + 0x18) = 0;
    puVar5[0x20] = 1;
    *(undefined8 *)(puVar5 + 0x28) = 0;
    puVar6 = PTR_PTR_1126ae810;
    func_0x000107c610f8();
    uVar11 = uStack_a0;
    func_0x000107c6157c(uStack_a0);
    func_0x000107c6157c(uVar9);
    func_0x000107c6157c(uVar16);
    func_0x000107c453e4();
    *(undefined8 *)(puVar5 + 0x40) = uVar12;
    *(undefined **)(puVar5 + 0x48) = puVar4;
    *(undefined **)(puVar5 + 0x30) = puVar6;
    *(long *)(puVar5 + 0x38) = lVar3;
    *(undefined8 *)(puVar5 + 0x50) = uVar10;
    *(undefined8 *)(puVar5 + 0x58) = uVar11;
    *(undefined8 *)(puVar5 + 0x60) = uVar9;
    *(undefined8 *)(puVar5 + 0x68) = uVar16;
    func_0x000107c61174(uVar12);
    func_0x000107c615f0(lVar3);
    func_0x000107c6157c(uVar11);
    uStack_e0 = uVar9;
    func_0x000107c6157c(uVar9);
    apuStack_140[2] = (undefined *)uVar16;
    func_0x000107c6157c(uVar16);
    func_0x000107c61174(puVar4);
    func_0x000107c6157c(uVar10);
    func_0x0001000d224c(&puStack_98);
    lStack_120 = lVar3;
    if (puStack_98 == (undefined *)0x0) {
      func_0x000107c61170(puVar4);
    }
    else {
      puVar6 = puStack_98;
      func_0x000107c4b3fc(puStack_98);
      func_0x000107c61180();
      func_0x000107c615e8(puStack_98);
      puVar7 = puVar6;
      func_0x000107c4da88(puVar6);
      func_0x000107c61180();
      func_0x000107c61170(puVar6);
      puVar6 = &UNK_11069bc28;
      func_0x000107c613fc(&UNK_11069bc28,0x18,7);
      func_0x000107c61644(puVar6 + 0x10,puVar5);
      ppuStack_78 = (undefined **)0x10382dcec;
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0x42000000;
      pcStack_88 = FUN_1038263e8;
      puStack_80 = &UNK_11069bc40;
      ppuVar8 = &puStack_98;
      puStack_70 = puVar6;
      func_0x000107c60bc4(ppuVar8);
      func_0x000107c61574(puStack_70);
      puVar6 = puVar7;
      func_0x000107c5c320(puVar7);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar8);
      func_0x000107c61170(puVar7);
      uVar9 = *(undefined8 *)(puVar5 + 0x30);
      func_0x000107c61174(uVar9);
      func_0x000107c3e924(puVar6);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(uVar9);
      func_0x000107c61170(puVar4);
    }
    func_0x000107c61170(uVar12);
    func_0x000107c615e8(lVar3);
    func_0x000107c61574(uVar10);
    func_0x000107c61574(uStack_a0);
    func_0x000107c61574(uStack_e0);
    func_0x000107c61574(apuStack_140[2]);
    func_0x0001000285a8(0x112fa04d0,&UNK_10dc16a90);
    uVar9 = uStack_d0;
    uVar11 = uStack_d0;
    func_0x000107c3e088();
    func_0x000107c61180();
    uVar10 = uVar11;
    func_0x0001000b637c();
    lStack_d8 = uVar10;
    func_0x000107c61170(uVar11);
    func_0x0001000285a8(0x112ee5898,&UNK_10db10a50);
    lVar2 = lStack_118;
    uVar10 = *(undefined8 *)(lStack_118 + _DAT_113081858);
    func_0x000107c61174();
    uVar11 = uVar10;
    func_0x0001000bda74();
    apuStack_140[2] = (undefined *)uVar11;
    func_0x000107c61170(uVar10);
    puVar4 = apuStack_140[1];
    uVar10 = *(undefined8 *)(lVar15 + _DAT_112fa40c0);
    puStack_80 = apuStack_140[1];
    ppuStack_78 = &PTR_DAT_11069db28;
    lVar1 = 0;
    puStack_98 = puVar5;
    func_0x0001007dbb94();
    func_0x000107c613fc();
    func_0x0001000c6518(&puStack_98,puVar4);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
    puVar14 = (undefined8 *)((long)apuStack_140 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
    (**(code **)(extraout_x12 + 0x10))(puVar14);
    uVar11 = *puVar14;
    *(undefined **)(lVar1 + 0x38) = puVar4;
    *(undefined ***)(lVar1 + 0x40) = &PTR_DAT_11069db28;
    *(undefined8 *)(lVar1 + 0x20) = uVar11;
    func_0x0001000c6560(0);
    func_0x000107c613fc();
    func_0x000107c6157c(uVar10);
    puVar4 = puVar5;
    func_0x000107c6157c();
    func_0x0001000c6580();
    func_0x000107c61574(puVar5);
    func_0x000107c61170(apuStack_140[3]);
    func_0x000107c615e8(lStack_120);
    func_0x000107c61574(uStack_e0);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(lStack_b0);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar15);
    func_0x000107c61170(uStack_110);
    func_0x000107c61170(lStack_108);
    func_0x000107c61170(uStack_c8);
    func_0x000107c61170(uStack_a8);
    func_0x000107c61170(lStack_f8);
    func_0x000107c61170(lStack_f0);
    func_0x000107c61170(uStack_c0);
    func_0x000107c61170(uStack_b8);
    *(long *)(lVar1 + 0x10) = lStack_d8;
    *(undefined8 *)(lVar1 + 0x18) = uStack_a0;
    *(undefined **)(lVar1 + 0x50) = apuStack_140[2];
    *(undefined **)(lVar1 + 0x58) = puVar4;
    *(undefined8 *)(lVar1 + 0x48) = uVar10;
    func_0x0001000834e4(&puStack_98);
    *(long *)(lStack_100 + 0x10) = lVar1;
    lVar1 = lStack_100;
  }
  *(long *)(lStack_e8 + 0x10) = lVar1;
  return lStack_e8;
}



/* Entry: 10382dc34; end: 10382dc73;  */

void FUN_10382dc34(void)

{
  long unaff_x20;
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x10);
  if (lVar1 != 0) {
    func_0x000107c6157c(lVar1);
    func_0x0001007dbc08();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(lVar1);
    return;
  }
  return;
}



/* Entry: 10382dc74; end: 10382dc97;  */

void FUN_10382dc74(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10382dc98; end: 10382dcdb;  */

void FUN_10382dc98(void)

{
  long *unaff_x20;
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(*unaff_x20 + 0x10) + 0x10);
  if (lVar1 != 0) {
    func_0x000107c6157c(lVar1);
    func_0x0001007dbc08();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(lVar1);
    return;
  }
  return;
}



/* Entry: 10382dcdc; end: 10382dd0f;  */

undefined8 FUN_10382dcdc(void)

{
  return 0;
}



/* Entry: 10382dd10; end: 10382dd2f;  */

void FUN_10382dd10(void)

{
  func_0x000107c61168(&PTR_PTR_112fa0cb8);
  return;
}



/* Entry: 10382dd30; end: 10382dd3f;  */

void FUN_10382dd30(long param_1,long param_2)

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



/* Entry: 10382dd40; end: 10382e00b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10382dd40(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lStack_70;
  long lStack_68;
  
  func_0x000107c613fc();
  lVar1 = param_2;
  func_0x000107c4dff0();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar9 = lVar1;
    func_0x000107c5ac28();
    func_0x000107c61170(lVar1);
    if ((int)lVar9 != 0) {
      func_0x000107c61170(param_1);
      func_0x000107c61170(param_2);
      func_0x000107c61170(param_3);
      func_0x000107c61170(param_4);
      func_0x000107c61170(param_5);
      func_0x000107c61170(param_6);
      lVar9 = 0;
      goto LAB_10382dfe4;
    }
  }
  lVar9 = 0;
  FUN_103842494();
  func_0x000107c613fc();
  func_0x0001000285a8(0x112ee3e90,&UNK_10db0ef60);
  uVar2 = param_3;
  func_0x000107c4aeb4(param_3);
  func_0x000107c61180();
  uVar7 = uVar2;
  func_0x000100759c94();
  func_0x000107c61170(uVar2);
  uVar2 = 0x112ee3e98;
  func_0x0001000285a8(0x112ee3e98,&UNK_10db20590);
  uVar3 = 0;
  func_0x000100759f5c(0,1,FUN_1038421c0,0,uVar2);
  func_0x000107c61574(uVar7);
  uVar8 = *(undefined8 *)(param_1 + _DAT_1130352b8);
  func_0x0001000285a8(0x112f9f1c8,&UNK_10dc14750);
  uVar7 = *(undefined8 *)(param_6 + _DAT_113071300);
  func_0x000107c615f0(uVar8);
  func_0x000107c6157c(uVar3);
  func_0x000107c61174();
  uVar2 = uVar7;
  func_0x0001000bda74();
  func_0x000107c61170(uVar7);
  func_0x0001000285a8(0x112f9f1d0,&UNK_10dc14758);
  uVar7 = param_4;
  func_0x000107c4b080();
  func_0x000107c61180();
  uVar4 = uVar7;
  func_0x0001000bda74();
  func_0x000107c61170(uVar7);
  lVar5 = 0;
  func_0x000100777f50();
  lVar1 = lVar5;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f9f948) = uVar8;
  *(undefined8 *)(lVar1 + _DAT_112f9f938) = uVar3;
  *(undefined8 *)(lVar1 + _DAT_112f9f930) = uVar2;
  *(undefined8 *)(lVar1 + _DAT_112f9f940) = uVar4;
  plVar6 = &lStack_70;
  lStack_70 = lVar1;
  lStack_68 = lVar5;
  func_0x000107c61154(plVar6,PTR_s_init_1125d9248);
  *(long **)(lVar9 + 0x10) = plVar6;
  func_0x000107c4fba8(*(undefined8 *)(param_1 + _DAT_1130352a8));
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61574(uVar3);
LAB_10382dfe4:
  *(long *)(unaff_x20 + 0x10) = lVar9;
  return unaff_x20;
}


