/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1009b2bd0; end: 1009b2bd7;  */

void FUN_1009b2bd0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101a80ae8);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009b2bd8; end: 1009b2c5b;  */

void FUN_1009b2bd8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101a80ae8,param_2,&UNK_101a80aec,param_2,&UNK_101a80b14,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009b2c5c; end: 1009b2c67;  */

undefined ** FUN_1009b2c5c(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009b2c68; end: 1009b2cf3;  */

void FUN_1009b2c68(undefined8 param_1)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1009b2cf4,param_1);
  return;
}



/* Entry: 1009b2cf4; end: 1009b2cfb;  */

void FUN_1009b2cf4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_101964e94);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009b2cfc; end: 1009b2d7f;  */

void FUN_1009b2cfc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_101964e94,param_2,FUN_1009b2d80,param_2,&UNK_101964e98,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009b2d80; end: 1009b2da7;  */

void FUN_1009b2d80(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1009b2da8; end: 1009b2dbb;  */

void FUN_1009b2da8(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                *(undefined8 *)(unaff_x20 + 0x48));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_100232a8c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x28) = uStack_70;
  *(undefined8 *)(lVar1 + 0x30) = uStack_78;
  *(undefined8 *)(lVar1 + 0x38) = uStack_80;
  *(undefined8 *)(lVar1 + 0x40) = uStack_88;
  *(undefined8 *)(lVar1 + 0x48) = uStack_90;
  FUN_1000285a8(0x112dd9bb8,&UNK_10d99da18);
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174();
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174();
  uVar6 = uStack_90;
  func_0x000107c61174();
  uVar11 = uStack_98;
  func_0x000107c6157c(uStack_98);
  FUN_10025a71c();
  puVar7 = PTR_PTR_1126a7288;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar11);
  *(undefined **)(lVar1 + 0x18) = puVar7;
  FUN_1000285a8(0x112dd9bc0,&UNK_10d99da20);
  func_0x000107c610f8();
  uVar11 = uStack_a0;
  func_0x000107c6157c(uStack_a0);
  FUN_10025a71c();
  puVar8 = PTR_PTR_1126a7288;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar11);
  *(undefined **)(lVar1 + 0x20) = puVar8;
  puVar9 = PTR_PTR_1126a7f58;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar9;
  func_0x000107c61174();
  uVar10 = uStack_68;
  func_0x000107c61174();
  uVar11 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174(puVar9);
  uVar11 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef307d0);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar9);
  uVar11 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar9);
  uVar11 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef85a90);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar9);
  uVar11 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(puVar9);
  uVar11 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010efc31e0);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010efc3200);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010efc3220);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar11);
  func_0x000107c3e740(puVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61574(uStack_98);
  func_0x000107c61574(uStack_a0);
  *param_1 = lVar1;
  return;
}



/* Entry: 1009b2dbc; end: 1009b331b;  */

void FUN_1009b2dbc(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_100232a8c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x28) = uStack_70;
  *(undefined8 *)(param_2 + 0x30) = uStack_78;
  *(undefined8 *)(param_2 + 0x38) = uStack_80;
  *(undefined8 *)(param_2 + 0x40) = uStack_88;
  *(undefined8 *)(param_2 + 0x48) = uStack_90;
  FUN_1000285a8(0x112dd9bb8,&UNK_10d99da18);
  func_0x000107c610f8();
  uVar1 = uStack_70;
  func_0x000107c61174();
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174();
  uVar5 = uStack_90;
  func_0x000107c61174();
  uVar10 = uStack_98;
  func_0x000107c6157c(uStack_98);
  FUN_10025a71c();
  puVar6 = PTR_PTR_1126a7288;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar10);
  *(undefined **)(param_2 + 0x18) = puVar6;
  FUN_1000285a8(0x112dd9bc0,&UNK_10d99da20);
  func_0x000107c610f8();
  uVar10 = uStack_a0;
  func_0x000107c6157c(uStack_a0);
  FUN_10025a71c();
  puVar7 = PTR_PTR_1126a7288;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar10);
  *(undefined **)(param_2 + 0x20) = puVar7;
  puVar8 = PTR_PTR_1126a7f58;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar8;
  func_0x000107c61174();
  uVar9 = uStack_68;
  func_0x000107c61174();
  uVar10 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61174();
  func_0x000107c61174(puVar8);
  uVar10 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef307d0);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(puVar8);
  uVar10 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar8);
  uVar10 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef85a90);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar8);
  uVar10 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar8);
  uVar10 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010efc31e0);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar10 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010efc3200);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar10 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010efc3220);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar10);
  func_0x000107c3e740(puVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61574(uStack_98);
  func_0x000107c61574(uStack_a0);
  *param_1 = param_2;
  return;
}



/* Entry: 1009b331c; end: 1009b3323;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009b331c(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100231658();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112df8fa8) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 1009b3324; end: 1009b338f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009b3324(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100231658();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112df8fa8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1009b3390; end: 1009b339b;  */

/* WARNING: Possible PIC construction at 0x0001009b3438: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001009b343c) */

void FUN_1009b3390(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar2 = &UNK_1103d80b8;
  func_0x000107c613fc(&UNK_1103d80b8,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  *(undefined8 *)(puVar2 + 0x20) = uVar5;
  uVar3 = 0x112db0608;
  FUN_1000285a8(0x112db0608,&UNK_10d959f40);
  func_0x000107c613fc();
  puVar4 = &UNK_100c010b0;
  FUN_1000841f8(&UNK_100c010b0,puVar2,uVar3);
  FUN_100084214("SCComposerUserSessionImageLoadersPluginRegistryServiceProvider",0x3e,2);
  *param_1 = puVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1009b339c; end: 1009b345b;  */

/* WARNING: Possible PIC construction at 0x0001009b3438: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001009b343c) */

void FUN_1009b339c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = &UNK_1103d80b8;
  func_0x000107c613fc(&UNK_1103d80b8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  uVar2 = 0x112db0608;
  FUN_1000285a8(0x112db0608,&UNK_10d959f40);
  func_0x000107c613fc();
  puVar3 = &UNK_100c010b0;
  FUN_1000841f8(&UNK_100c010b0,puVar1,uVar2);
  FUN_100084214("SCComposerUserSessionImageLoadersPluginRegistryServiceProvider",0x3e,2);
  *param_1 = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1009b345c; end: 1009b348f;  */

void FUN_1009b345c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009b3490; end: 1009b3497;  */

void FUN_1009b3490(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009b3498; end: 1009b34cb;  */

void FUN_1009b3498(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009b34cc; end: 1009b34d7;  */

void FUN_1009b34cc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1000285a8(0x112d9e968,&UNK_10d95d330);
  func_0x000107c613fc();
  uVar1 = 1;
  FUN_10008747c();
  *param_1 = uVar1;
  return;
}



/* Entry: 1009b34d8; end: 1009b353b;  */

void FUN_1009b34d8(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009b353c; end: 1009b35b3; -[_TtC23IncomingFriendsSyncImpl25IncomingFriendsSyncerImpl syncIncomingFriends:completionHandler:] */

/* WARNING: Possible PIC construction at 0x0001009b359c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001009b35a0) */

void FUN_1009b353c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x000107c60bc4();
  puVar1 = &UNK_1103f7a98;
  func_0x000107c613fc(&UNK_1103f7a98,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  func_0x000107c6157c(param_1);
  FUN_1009b3794(param_3,&UNK_100c230d8,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 1009b35b4; end: 1009b3793;  */

/* WARNING: Possible PIC construction at 0x0001009b36bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001009b36cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001009b3710: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001009b3720: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001009b374c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001009b3714) */
/* WARNING: Removing unreachable block (ram,0x0001009b36d0) */
/* WARNING: Removing unreachable block (ram,0x0001009b3748) */
/* WARNING: Removing unreachable block (ram,0x0001009b36d8) */
/* WARNING: Removing unreachable block (ram,0x0001009b376c) */
/* WARNING: Removing unreachable block (ram,0x0001009b3700) */
/* WARNING: Removing unreachable block (ram,0x0001009b36c0) */
/* WARNING: Removing unreachable block (ram,0x0001009b3724) */

void FUN_1009b35b4(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lStack_48;
  
  uVar3 = 0xea00000000007472;
  puVar2 = PTR_PTR_1126b84b0;
  func_0x000107c61168();
  func_0x000107c50434();
  func_0x000107c61180();
  if (param_1 < 2) {
    if (param_1 == 0) {
      uVar3 = 0xe500000000000000;
      uVar4 = 0x6e69676f6c;
      goto joined_r0x0001009b3610;
    }
    if (param_1 != 1) {
LAB_1009b3770:
      lStack_48 = param_1;
      func_0x000107c60614(&UNK_11071a2a8,&lStack_48,&UNK_11071a2a8,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1009b3794);
      (*pcVar1)();
    }
    uVar4 = 0x646c6f63;
  }
  else {
    if (param_1 != 2) {
      if (param_1 != 3) goto LAB_1009b3770;
      uVar3 = 0xec0000006e6f6974;
      uVar4 = 0x6163696669746f6e;
      goto joined_r0x0001009b3610;
    }
    uVar4 = 0x6d726177;
  }
  uVar4 = uVar4 | 0x6174735f00000000;
joined_r0x0001009b3610:
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c5fadc(0x656372756f73,0xe600000000000000);
    func_0x000107c5fadc(uVar4,uVar3);
    func_0x000107c5e508(puVar2);
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
  return;
}



/* Entry: 1009b3794; end: 1009b39ab;  */

void FUN_1009b3794(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  FUN_1009b35b4();
  puVar3 = &UNK_1103f7980;
  func_0x000107c613fc(&UNK_1103f7980,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  puVar4 = &UNK_1103f79a8;
  func_0x000107c613fc(&UNK_1103f79a8,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = 0;
  uVar2 = (undefined1)*(undefined8 *)(unaff_x20 + 0x40);
  func_0x0001009b40cc();
  uVar10 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar5 = &UNK_1103f79d0;
  func_0x000107c613fc(&UNK_1103f79d0,0x28,7);
  *(undefined **)(puVar5 + 0x10) = puVar3;
  puVar5[0x18] = uVar2;
  *(undefined **)(puVar5 + 0x20) = puVar4;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_100ab36a8;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_100ab3660;
  puStack_88 = &UNK_1103f79e8;
  ppuVar6 = &puStack_a0;
  puStack_78 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  puVar5 = puStack_78;
  func_0x000107c6157c(puVar3);
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar5);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c4f7c0(uVar7);
  func_0x000107c61180();
  puVar5 = &UNK_1103f7a20;
  func_0x000107c613fc(&UNK_1103f7a20,0x18,7);
  func_0x000107c61644(puVar5 + 0x10);
  puVar8 = &UNK_1103f7a48;
  func_0x000107c613fc(&UNK_1103f7a48,0x40,7);
  puVar8[0x10] = uVar2;
  *(undefined **)(puVar8 + 0x18) = puVar4;
  *(undefined **)(puVar8 + 0x20) = puVar5;
  *(undefined **)(puVar8 + 0x28) = puVar3;
  *(undefined8 *)(puVar8 + 0x30) = param_2;
  *(undefined8 *)(puVar8 + 0x38) = param_3;
  pcStack_80 = FUN_100ab4834;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_100ab47f8;
  puStack_88 = &UNK_1103f7a60;
  ppuVar9 = &puStack_a0;
  puStack_78 = puVar8;
  func_0x000107c60bc4(ppuVar9);
  puVar5 = puStack_78;
  func_0x000107c6157c(puVar3);
  func_0x000107c6157c(puVar4);
  func_0x000107c6157c(param_3);
  func_0x000107c61574(puVar5);
  func_0x000107c4e55c(uVar10);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c61170(uVar7);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(puVar4);
  return;
}



/* Entry: 1009b39ac; end: 1009b39d7; +[SCGrapheneIncomingFriendsSyncMetric requestTrigger] */

void FUN_1009b39ac(void)

{
  func_0x000107c610f4(PTR_PTR_1126b84b0);
  func_0x000107c46d68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1009b39d8; end: 1009b3db7; -[SCComposerUserSessionEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009b39d8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  lVar1 = param_1 + _DAT_112724af8;
  func_0x000107c61148(lVar1);
  lVar9 = lVar1;
  func_0x000107c3ffa4();
  func_0x000107c61180();
  lVar2 = lVar9;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c509b8();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar1);
  lVar9 = (long)_DAT_112724afc;
  lVar1 = param_1 + lVar9;
  func_0x000107c61148();
  lVar2 = lVar1;
  func_0x000107c408d0();
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    puVar4 = PTR_PTR_1126ba020;
    func_0x000107c610f4();
    lVar1 = param_1 + _DAT_112724b00;
    func_0x000107c61148(lVar1);
    lVar2 = lVar1;
    func_0x000107c3fa04();
    func_0x000107c61180();
    lVar9 = param_1 + lVar9;
    func_0x000107c61148(lVar9);
    lVar5 = lVar9;
    func_0x000107c408d0();
    func_0x000107c61180();
    func_0x000107c45dd8();
    uVar8 = *(undefined8 *)(param_1 + _DAT_112724b04);
    *(undefined **)(param_1 + _DAT_112724b04) = puVar4;
    func_0x000107c61170(uVar8);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar9);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar1);
  }
  func_0x000107c61144(auStack_80,param_1);
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1009b3ff0;
  puStack_90 = &UNK_110891d10;
  func_0x000107c6111c(auStack_88,auStack_80);
  func_0x000107c5d43c(lVar3);
  puStack_d0 = puVar4;
  uStack_c8 = 0xc2000000;
  puStack_c0 = &UNK_1054e3cd8;
  puStack_b8 = &UNK_110883650;
  func_0x000107c6111c(auStack_b0,auStack_80);
  func_0x000107c4fc48(lVar3);
  func_0x000107c4fc48(lVar3);
  func_0x000107c3b63c(param_1);
  func_0x000107c3b658(param_1);
  func_0x000107c61144(auStack_d8,lVar3);
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_112724b24;
    func_0x000107c61148(param_1);
  }
  lVar1 = param_1;
  func_0x000107c3de00(param_1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  lVar9 = lVar1;
  func_0x000107c5c734(lVar1);
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126ae960;
  puVar6 = PTR_PTR_1126ba030;
  func_0x000107c5e0d4(PTR_PTR_1126ba030);
  func_0x000107c61180();
  func_0x000107c3ff60(puVar4);
  func_0x000107c61180();
  puVar7 = PTR_PTR_1126ae970;
  func_0x000107c4c0f8(PTR_PTR_1126ae970);
  func_0x000107c61180();
  uVar8 = 0x11;
  FUN_1000819a8(0x11,0);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_e0,auStack_d8);
  func_0x000107c5e070(lVar9);
  func_0x000107c611b0();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(lVar9);
  func_0x000107c61120(auStack_e0);
  func_0x000107c61170(lVar1);
  func_0x000107c61120(auStack_d8);
  func_0x000107c61120(auStack_b0);
  func_0x000107c61120(auStack_88);
  func_0x000107c61120(auStack_80);
  func_0x000107c61170(lVar3);
  return;
}



/* Entry: 1009b3db8; end: 1009b3f53; -[SCGrapheneRegistry incomingFriendsSyncGraphene] */

void FUN_1009b3db8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x1009b3e40;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136bb8f0 != -1) {
    FUN_10002a2fc(0x1136bb8f0,&puStack_48);
  }
  uVar1 = uRam00000001136bb8e8;
  func_0x000107c61174(uRam00000001136bb8e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1009b3f54; end: 1009b3f5b; -[SCComposerFrameworkServices composerFrameworkProvider] */

undefined8 FUN_1009b3f54(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1009b3f5c; end: 1009b3fef; -[SCComposerUncaughtErrorReporter initWithCircumstanceEngine:crashLogger:] */

undefined1 *
FUN_1009b3f5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126e8b58;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 8),param_3);
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 0x10),param_4);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1009b3ff0; end: 1009b40bb;  */

/* WARNING: Possible PIC construction at 0x0001009b4078: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001009b4088: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001009b40a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001009b408c) */
/* WARNING: Removing unreachable block (ram,0x0001009b407c) */
/* WARNING: Removing unreachable block (ram,0x0001009b40a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009b3ff0(long param_1,undefined8 param_2)

{
  func_0x000107c61174(param_2);
  func_0x000107c52648(param_2);
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_112724b20;
    func_0x000107c61148(param_1);
    func_0x000107c5da60();
    func_0x000107c61180();
    func_0x000107c5d984();
    func_0x000107c61180();
    func_0x000107c5a344(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1009b40bc; end: 1009b40c3; -[SCValdiConfiguration setAllowDarkMode:] */

void FUN_1009b40bc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 1009b40c4; end: 1009b40df; -[SCValdiConfiguration setUserId:] */

void FUN_1009b40c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1009b40e0; end: 1009b40ff; -[SCValdiConfiguration setExceptionReporter:] */

void FUN_1009b40e0(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10090c6bc();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x20 + 0x38) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1009b4100; end: 1009b41b7; -[SCComposerUserSessionEntryPoint _exposeImageLoaderPluginScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009b4100(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x000107c61144(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112724b14);
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c42c14(uVar1);
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
  return;
}



/* Entry: 1009b41b8; end: 1009b426f; -[SCComposerUserSessionEntryPoint _exposeVideoLoaderPluginScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009b41b8(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x000107c61144(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112724b1c);
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c42c14(uVar1);
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
  return;
}



/* Entry: 1009b4270; end: 1009b4277; +[SCAttributedComposerTask warmup] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009b4270(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309b0c8) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1009b4278; end: 1009b42c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009b4278(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309b0c8) = param_3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1009b42c8; end: 1009b4563; +[SCAttributedTask composer:] */

void FUN_1009b42c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x0001009b4300();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1009b4564; end: 1009b4577;  */

void FUN_1009b4564(long param_1,long param_2)

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



/* Entry: 1009b4578; end: 1009b45d3;  */

void FUN_1009b4578(void)

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



/* Entry: 1009b45d4; end: 1009b45ff;  */

void FUN_1009b45d4(long param_1,long param_2)

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



/* Entry: 1009b4600; end: 1009b463f;  */

void FUN_1009b4600(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009b45e4();
  FUN_100082720("SCContactPhotosFeatureServiceProviderWrapperScopeInitializationPluginProvider",0x4d
                ,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009b4640; end: 1009b4647;  */

void FUN_1009b4640(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101a9a9f8);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009b4648; end: 1009b46cb;  */

void FUN_1009b4648(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101a9a9f8,param_2,&UNK_101a9a9fc,param_2,&UNK_101a9aa24,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009b46cc; end: 1009b46fb; -[SCSnapchattersLoggingData .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001009b46e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001009b46e8) */

void FUN_1009b46cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 1009b46fc; end: 1009b4723;  */

undefined ** FUN_1009b46fc(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009b4724; end: 1009b4763;  */

void FUN_1009b4724(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009b4708();
  FUN_100082720("SCContactSyncCTAQualificationServiceProviderWrapperScopeInitializationPluginProvider"
                ,0x54,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009b4764; end: 1009b47ab; -[SCSnapchattersDataRequest .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001009b477c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001009b4794: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001009b4780) */
/* WARNING: Removing unreachable block (ram,0x0001009b4798) */

void FUN_1009b4764(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,0);
  return;
}



/* Entry: 1009b47ac; end: 1009b47b3;  */

void FUN_1009b47ac(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101984920);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009b47b4; end: 1009b4837;  */

void FUN_1009b47b4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101984920,param_2,&UNK_101984924,param_2,&UNK_10198494c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009b4838; end: 1009b485f;  */

undefined ** FUN_1009b4838(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009b4860; end: 1009b489f;  */

void FUN_1009b4860(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009b4844();
  FUN_100082720("SCContentManagerServicesEntryPointWrapperScopeInitializationPluginProvider",0x4a,2)
  ;
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009b48a0; end: 1009b48a7;  */

void FUN_1009b48a0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101961908);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009b48a8; end: 1009b492b;  */

void FUN_1009b48a8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101961908,param_2,&UNK_10196190c,param_2,&UNK_101961934,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009b492c; end: 1009b4953;  */

undefined ** FUN_1009b492c(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009b4954; end: 1009b4993;  */

void FUN_1009b4954(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009b4938();
  FUN_100082720("SCContextExperimentServiceProviderWrapperScopeInitializationPluginProvider",0x4a,2)
  ;
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009b4994; end: 1009b499b;  */

void FUN_1009b4994(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101964fb0);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009b499c; end: 1009b4a1f;  */

void FUN_1009b499c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101964fb0,param_2,&UNK_101964fb4,param_2,&UNK_101964fdc,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009b4a20; end: 1009b4a47;  */

undefined ** FUN_1009b4a20(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009b4a48; end: 1009b4a87;  */

void FUN_1009b4a48(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009b4a2c();
  FUN_100082720("SCContextPostSnapDataServiceProviderWrapperScopeInitializationPluginProvider",0x4c,
                2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009b4a88; end: 1009b4a8f;  */

void FUN_1009b4a88(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1019653a0);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009b4a90; end: 1009b4b13;  */

void FUN_1009b4a90(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1019653a0,param_2,&UNK_1019653a4,param_2,&UNK_1019653cc,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009b4b14; end: 1009b4b3b;  */

undefined ** FUN_1009b4b14(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009b4b3c; end: 1009b4b7b;  */

void FUN_1009b4b3c(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009b4b20();
  FUN_100082720("SCConversationIdServicesEntryPointWrapperScopeInitializationPluginProvider",0x4a,2)
  ;
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009b4b7c; end: 1009b4b83;  */

void FUN_1009b4b7c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101966820);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009b4b84; end: 1009b4c07;  */

void FUN_1009b4b84(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101966820,param_2,&UNK_101966824,param_2,&UNK_10196684c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009b4c08; end: 1009b4c2f;  */

undefined ** FUN_1009b4c08(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009b4c30; end: 1009b4c6f;  */

void FUN_1009b4c30(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009b4c14();
  FUN_100082720("SCCreativeToolsMemoriesResourceServiceProviderWrapperScopeInitializationPluginProvider"
                ,0x56,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009b4c70; end: 1009b4c77;  */

void FUN_1009b4c70(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101978f4c);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009b4c78; end: 1009b4cfb;  */

void FUN_1009b4c78(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101978f4c,param_2,&UNK_101978f50,param_2,&UNK_101978f78,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009b4cfc; end: 1009b4d23;  */

undefined ** FUN_1009b4cfc(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009b4d24; end: 1009b4d63;  */

void FUN_1009b4d24(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009b4d08();
  FUN_100082720("SCCreativeToolsMetricsServiceProviderWrapperScopeInitializationPluginProvider",0x4d
                ,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009b4d64; end: 1009b4d6b;  */

void FUN_1009b4d64(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101979648);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009b4d6c; end: 1009b4def;  */

void FUN_1009b4d6c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101979648,param_2,&UNK_10197964c,param_2,&UNK_101979674,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009b4df0; end: 1009b4e17;  */

undefined ** FUN_1009b4df0(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009b4e18; end: 1009b4e57;  */

void FUN_1009b4e18(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009b4dfc();
  FUN_100082720("SCCreatorsSettingsRequestManagerServiceProviderWrapperScopeInitializationPluginProvider"
                ,0x57,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009b4e58; end: 1009b4e5f;  */

void FUN_1009b4e58(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101aaac04);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009b4e60; end: 1009b4ee3;  */

void FUN_1009b4e60(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101aaac04,param_2,&UNK_101aaac08,param_2,&UNK_101aaac30,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009b4ee4; end: 1009b4f0b;  */

undefined ** FUN_1009b4ee4(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009b4f0c; end: 1009b4f4b;  */

void FUN_1009b4f0c(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009b4ef0();
  FUN_100082720("SCCrossPostToStorySnapDocBuilderServiceProviderWrapperScopeInitializationPluginProvider"
                ,0x57,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009b4f4c; end: 1009b4f53;  */

void FUN_1009b4f4c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101aa8ea4);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009b4f54; end: 1009b4fd7;  */

void FUN_1009b4f54(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101aa8ea4,param_2,&UNK_101aa8ea8,param_2,&UNK_101aa8ed0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009b4fd8; end: 1009b4fff;  */

undefined ** FUN_1009b4fd8(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009b5000; end: 1009b503f;  */

void FUN_1009b5000(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009b4fe4();
  FUN_100082720("SCCustomStickerInjectorServiceProviderWrapperScopeInitializationPluginProvider",
                0x4e,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009b5040; end: 1009b5047;  */

void FUN_1009b5040(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101979774);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009b5048; end: 1009b50cb;  */

void FUN_1009b5048(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101979774,param_2,&UNK_101979778,param_2,&UNK_1019797a0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009b50cc; end: 1009b50f3;  */

undefined ** FUN_1009b50cc(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009b50f4; end: 1009b5133;  */

void FUN_1009b50f4(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009b50d8();
  FUN_100082720("SCDateTimeStickerInjectorServiceProviderWrapperScopeInitializationPluginProvider",
                0x50,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009b5134; end: 1009b513b;  */

void FUN_1009b5134(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1019798a0);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009b513c; end: 1009b51bf;  */

void FUN_1009b513c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1019798a0,param_2,&UNK_1019798a4,param_2,&UNK_1019798cc,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009b51c0; end: 1009b51e7;  */

undefined ** FUN_1009b51c0(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009b51e8; end: 1009b5227;  */

void FUN_1009b51e8(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009b51cc();
  FUN_100082720("SCDiscoverDeeplinkStickerInjectorServiceProviderWrapperScopeInitializationPluginProvider"
                ,0x58,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009b5228; end: 1009b522f;  */

void FUN_1009b5228(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1019799cc);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009b5230; end: 1009b52b3;  */

void FUN_1009b5230(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1019799cc,param_2,&UNK_1019799d0,param_2,&UNK_1019799f8,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009b52b4; end: 1009b52bf;  */

undefined ** FUN_1009b52b4(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009b52c0; end: 1009b534b;  */

void FUN_1009b52c0(undefined8 param_1)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1009b534c,param_1);
  return;
}



/* Entry: 1009b534c; end: 1009b5353;  */

void FUN_1009b534c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_101aaad44);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009b5354; end: 1009b53d7;  */

void FUN_1009b5354(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_101aaad44,param_2,FUN_1009b53d8,param_2,&UNK_101aaad48,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009b53d8; end: 1009b53ff;  */

void FUN_1009b53d8(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1009b5400; end: 1009b5407;  */

void FUN_1009b5400(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_40);
  FUN_1001ce9a4();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  FUN_1009b5490(uStack_38,uStack_40);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 1009b5408; end: 1009b548f;  */

void FUN_1009b5408(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100083b20(&uStack_40);
  FUN_1001ce9a4();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  FUN_1009b5490(uStack_38,uStack_40);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 1009b5490; end: 1009b55bb;  */

void FUN_1009b5490(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  puVar1 = PTR_PTR_1126a8818;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef854e0);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1009b55bc; end: 1009b565b; -[SCDiscoverFeedS2REntryPoint begin] */

/* WARNING: Possible PIC construction at 0x0001009b55f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001009b5638: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001009b55fc) */
/* WARNING: Removing unreachable block (ram,0x0001009b563c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009b55bc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d6810;
  func_0x000107c610fc();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276a6ec);
  *(undefined **)(param_1 + _DAT_11276a6ec) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}


