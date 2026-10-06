/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10345ae34; end: 10345ae6b;  */

void FUN_10345ae34(long param_1)

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



/* Entry: 10345ae6c; end: 10345ae8b;  */

void FUN_10345ae6c(long param_1,long param_2)

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



/* Entry: 10345ae8c; end: 10345afdf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10345ae8c(long *param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  func_0x0001000285a8(0x112d3b7c8,&UNK_10da59ea0);
  func_0x000107c4b1cc();
  func_0x000107c61180();
  uVar2 = param_2;
  func_0x0001000bda74();
  func_0x000107c61170(param_2);
  func_0x0001000285a8(0x112f6d3b8,&UNK_10dbcafe0);
  func_0x000107c613fc();
  pcVar3 = FUN_10345afec;
  func_0x0001000bdd8c(FUN_10345afec,0);
  lVar1 = _DAT_11307d3d8;
  func_0x0001000285a8(0x112f6d3c0,&UNK_10dbcafe8);
  uVar4 = *(undefined8 *)(param_5 + _DAT_113038f68);
  func_0x0001000bda74();
  lVar5 = 0;
  func_0x000103461258();
  lVar6 = lVar5;
  func_0x000107c613fc();
  *(undefined8 *)(lVar6 + 0x58) = 0;
  *(undefined8 *)(lVar6 + 0x60) = 0;
  *(undefined1 *)(lVar6 + 0x68) = 1;
  *(undefined8 *)(lVar6 + 0x10) = uVar2;
  *(undefined8 *)(lVar6 + 0x18) = param_3;
  *(code **)(lVar6 + 0x20) = pcVar3;
  func_0x000100420238(param_4 + lVar1,lVar6 + 0x28);
  *(undefined8 *)(lVar6 + 0x50) = uVar4;
  param_1[3] = lVar5;
  param_1[4] = (long)&PTR_DAT_110658a28;
  *param_1 = lVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_3);
  return;
}



/* Entry: 10345afe0; end: 10345afeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10345afe0(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar8 = *(long *)(unaff_x20 + 0x28);
  func_0x0001000285a8(0x112d3b7c8,&UNK_10da59ea0);
  func_0x000107c4b1cc();
  func_0x000107c61180();
  uVar4 = uVar6;
  func_0x0001000bda74();
  func_0x000107c61170(uVar6);
  func_0x0001000285a8(0x112f6d3b8,&UNK_10dbcafe0);
  func_0x000107c613fc();
  pcVar5 = FUN_10345afec;
  func_0x0001000bdd8c(FUN_10345afec,0);
  lVar3 = _DAT_11307d3d8;
  func_0x0001000285a8(0x112f6d3c0,&UNK_10dbcafe8);
  uVar6 = *(undefined8 *)(lVar8 + _DAT_113038f68);
  func_0x0001000bda74();
  lVar7 = 0;
  func_0x000103461258();
  lVar8 = lVar7;
  func_0x000107c613fc();
  *(undefined8 *)(lVar8 + 0x58) = 0;
  *(undefined8 *)(lVar8 + 0x60) = 0;
  *(undefined1 *)(lVar8 + 0x68) = 1;
  *(undefined8 *)(lVar8 + 0x10) = uVar4;
  *(undefined8 *)(lVar8 + 0x18) = uVar2;
  *(code **)(lVar8 + 0x20) = pcVar5;
  func_0x000100420238(lVar1 + lVar3,lVar8 + 0x28);
  *(undefined8 *)(lVar8 + 0x50) = uVar6;
  param_1[3] = lVar7;
  param_1[4] = (long)&PTR_DAT_110658a28;
  *param_1 = lVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar2);
  return;
}



/* Entry: 10345afec; end: 10345b01b;  */

void FUN_10345afec(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ad2c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = puVar1;
  return;
}



/* Entry: 10345b01c; end: 10345b02b;  */

void FUN_10345b01c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10345b02c; end: 10345b04f;  */

void FUN_10345b02c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10345b050; end: 10345b05b;  */

void FUN_10345b050(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10345b05c; end: 10345b093;  */

void FUN_10345b05c(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ad2c8;
  func_0x000107c610f8();
  func_0x000107c46d18();
  *param_1 = puVar1;
  return;
}



/* Entry: 10345b094; end: 10345b14b;  */

void FUN_10345b094(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10345b14c; end: 10345b15f;  */

void FUN_10345b14c(long param_1,long param_2)

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



/* Entry: 10345b160; end: 10345b203;  */

undefined8 FUN_10345b160(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_2;
  FUN_10345b244(param_2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  return uVar1;
}



/* Entry: 10345b204; end: 10345b213;  */

void FUN_10345b204(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10345b214; end: 10345b237;  */

void FUN_10345b214(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10345b238; end: 10345b243;  */

void FUN_10345b238(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10345b244; end: 10345b3cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10345b244(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  
  ppuVar4 = &puStack_70;
  func_0x0001000285a8(0x112ee5898,&UNK_10db10a50);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + _DAT_113081978) + _DAT_113081858);
  func_0x000107c61174();
  uVar2 = uVar1;
  func_0x0001000bda74();
  func_0x000107c61170(uVar1);
  uVar1 = 0;
  FUN_103461f04(0);
  func_0x000107c613fc();
  FUN_103461ce8(uVar2,uVar1);
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  pcStack_50 = FUN_10345b44c;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_10345fde4;
  puStack_58 = &UNK_110658410;
  uStack_48 = uVar2;
  func_0x000107c60bc4(&puStack_70);
  uVar1 = uStack_48;
  func_0x000107c6157c(uVar2);
  func_0x000107c61574(uVar1);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  uVar1 = 0;
  func_0x000100b5e6b0(0);
  func_0x000107c610f8();
  func_0x000103f95298(puVar3,uVar1);
  uVar1 = 0;
  func_0x000103f951cc(0);
  func_0x000107c610f8();
  func_0x000103f94f38(puVar3,uVar1);
  func_0x000107c61574(uVar2);
  *(undefined **)(unaff_x20 + 0x10) = puVar3;
  return;
}



/* Entry: 10345b3d0; end: 10345b44b;  */

void FUN_10345b3d0(undefined8 param_1)

{
  if (lRam0000000112f6d3f0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e767ba4);
  return;
}



/* Entry: 10345b44c; end: 10345b46f;  */

void FUN_10345b44c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)();
  return;
}



/* Entry: 10345b470; end: 10345b533;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10345b470(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_3;
  uVar1 = *(undefined8 *)(param_2 + _DAT_113082858);
  func_0x000107c61174();
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar1;
  return unaff_x20;
}



/* Entry: 10345b534; end: 10345b6e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10345b534(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_113081828);
  func_0x000107c6157c(uVar4);
  func_0x0001000d224c(&puStack_78);
  func_0x000107c61574(uVar4);
  func_0x0001000a8868(&puStack_78,puStack_60);
  uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_113082768);
  func_0x000107c6157c(uVar4);
  func_0x0001000d224c(&uStack_48);
  func_0x000107c61574(uVar4);
  uVar4 = uStack_48;
  func_0x000107c4aea4(uStack_48);
  func_0x000107c615e8(uStack_48);
  uVar1 = 0;
  (**(code **)((long)pcStack_58 + 8))(0,uVar4,puStack_60,pcStack_58);
  func_0x0001000834e4(&puStack_78);
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  pcStack_58 = FUN_10345b6e8;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x42000000;
  puStack_68 = &UNK_100c7ef5c;
  puStack_60 = &UNK_110658450;
  ppuVar3 = &puStack_78;
  uStack_50 = uVar1;
  func_0x000107c60bc4(ppuVar3);
  uVar4 = uStack_50;
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(uVar4);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  uVar4 = 0;
  func_0x0001005c56dc(0);
  func_0x000107c610f8();
  func_0x00010074cd20(puVar2,uVar4);
  uVar4 = 0;
  func_0x0001044f3490(0);
  func_0x000107c610f8();
  func_0x0001044f337c(puVar2,uVar4);
  func_0x000107c61574(uVar1);
  return puVar2;
}



/* Entry: 10345b6e8; end: 10345b70b;  */

undefined8 FUN_10345b6e8(void)

{
  undefined8 uStack_18;
  
  func_0x0001000d224c(&uStack_18);
  return uStack_18;
}



/* Entry: 10345b70c; end: 10345b727;  */

void FUN_10345b70c(long param_1,long param_2)

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



/* Entry: 10345b728; end: 10345b743;  */

/* WARNING: Possible PIC construction at 0x00010345b734: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010345b738) */

void FUN_10345b728(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10345b744; end: 10345b78f;  */

void FUN_10345b744(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10345b790; end: 10345b80b;  */

void FUN_10345b790(undefined8 param_1)

{
  if (lRam0000000112f6d4c0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e767c08);
  return;
}



/* Entry: 10345b80c; end: 10345b82f;  */

void FUN_10345b80c(undefined8 *param_1,undefined8 param_2)

{
  FUN_10345b534();
  *param_1 = param_2;
  return;
}



/* Entry: 10345b830; end: 10345ba27;  */

long FUN_10345b830(undefined8 param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined8 uStack_38;
  
  ppuVar2 = &puStack_60;
  func_0x000107c613fc();
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  pcStack_40 = FUN_10345ba28;
  uStack_38 = 0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_103118914;
  puStack_48 = &UNK_110658490;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  uVar3 = 0;
  func_0x000100b5e6d0(0);
  func_0x000107c610f8();
  func_0x000103f957fc(puVar1,uVar3);
  uVar3 = 0;
  func_0x000103f95750(0);
  func_0x000107c610f8();
  func_0x000103f95510(puVar1,uVar3);
  func_0x000107c61170(param_1);
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  return unaff_x20;
}



/* Entry: 10345ba28; end: 10345ba47;  */

void FUN_10345ba28(void)

{
  FUN_1034571dc(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbff8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocObject_11034f218)();
  return;
}



/* Entry: 10345ba48; end: 10345ba73;  */

void FUN_10345ba48(long param_1,long param_2)

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



/* Entry: 10345ba74; end: 10345bb13;  */

void FUN_10345ba74(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10345bb14; end: 10345bb27;  */

void FUN_10345bb14(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10345bb28; end: 10345bbd3;  */

long FUN_10345bb28(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  func_0x0001000285a8(0x112f41da8,&UNK_10db8ef70);
  func_0x000107c613fc();
  pcVar1 = FUN_10345bbd4;
  func_0x0001000bdd8c(FUN_10345bbd4,0);
  uVar2 = 0;
  func_0x000103f94e34(0);
  func_0x000107c610f8();
  func_0x000103f94d78(pcVar1,uVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(code **)(unaff_x20 + 0x10) = pcVar1;
  return unaff_x20;
}



/* Entry: 10345bbd4; end: 10345bc17;  */

void FUN_10345bbd4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  FUN_10345720c();
  uVar2 = uVar1;
  func_0x000107c613fc();
  param_1[3] = uVar1;
  param_1[4] = &PTR_DAT_110657f50;
  *param_1 = uVar2;
  return;
}



/* Entry: 10345bc18; end: 10345bc1f;  */

void FUN_10345bc18(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10345bc20; end: 10345bcbf;  */

void FUN_10345bc20(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10345bcc0; end: 10345bccb;  */

void FUN_10345bcc0(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10345bccc; end: 10345be27;  */

long FUN_10345bccc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar1 = &UNK_110658520;
  func_0x000107c613fc(&UNK_110658520,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  uVar2 = 0x112f6ce78;
  func_0x0001000285a8(0x112f6ce78,&UNK_10dbcad80);
  func_0x000107c613fc();
  pcVar3 = FUN_10345bfb0;
  func_0x0001000bdd8c(FUN_10345bfb0,puVar1,uVar2);
  func_0x000107c61170(param_1);
  *(code **)(unaff_x20 + 0x10) = pcVar3;
  return unaff_x20;
}



/* Entry: 10345be28; end: 10345bfaf;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10345be28(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x12;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long alStack_80 [4];
  long lStack_60;
  undefined **ppuStack_58;
  
  uVar1 = param_2;
  func_0x000107c5b118();
  func_0x000107c61180();
  func_0x000107c5b118();
  func_0x000107c61180();
  func_0x0001000285a8(0x112f6cf68,&UNK_10dbcadf0);
  func_0x000107c3ee24();
  func_0x000107c61180();
  uVar4 = param_3;
  func_0x0001000bda74();
  func_0x000107c61170(param_3);
  lVar2 = 0;
  func_0x000103467350();
  lVar3 = lVar2;
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x20) = 0;
  lVar5 = *(long *)(param_4 + _DAT_112f6df58);
  *(undefined8 *)(lVar3 + 0x10) = param_2;
  *(undefined8 *)(lVar3 + 0x18) = uVar4;
  uVar7 = *(undefined8 *)(lVar5 + _DAT_112f6dfb0);
  ppuStack_58 = &PTR_DAT_1106591a0;
  uVar4 = 0;
  alStack_80[1] = lVar3;
  lStack_60 = lVar2;
  FUN_103461ffc(0);
  func_0x000107c610f8();
  func_0x0001000c6518(alStack_80 + 1,lVar2);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar8 = (undefined8 *)((long)alStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar8);
  uVar6 = *puVar8;
  func_0x000107c6157c(uVar7);
  FUN_10345c328(uVar1,uVar6,uVar7,uVar4);
  func_0x0001000834e4(alStack_80 + 1);
  *param_1 = uVar1;
  return;
}



/* Entry: 10345bfb0; end: 10345bfbb;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10345bfb0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x12;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 *puVar8;
  long alStack_80 [4];
  long lStack_60;
  undefined **ppuStack_58;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  uVar1 = uVar4;
  func_0x000107c5b118();
  func_0x000107c61180();
  func_0x000107c5b118();
  func_0x000107c61180();
  func_0x0001000285a8(0x112f6cf68,&UNK_10dbcadf0);
  func_0x000107c3ee24();
  func_0x000107c61180();
  uVar7 = uVar6;
  func_0x0001000bda74();
  func_0x000107c61170(uVar6);
  lVar2 = 0;
  func_0x000103467350();
  lVar3 = lVar2;
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x20) = 0;
  lVar5 = *(long *)(lVar5 + _DAT_112f6df58);
  *(undefined8 *)(lVar3 + 0x10) = uVar4;
  *(undefined8 *)(lVar3 + 0x18) = uVar7;
  uVar7 = *(undefined8 *)(lVar5 + _DAT_112f6dfb0);
  ppuStack_58 = &PTR_DAT_1106591a0;
  uVar4 = 0;
  alStack_80[1] = lVar3;
  lStack_60 = lVar2;
  FUN_103461ffc(0);
  func_0x000107c610f8();
  func_0x0001000c6518(alStack_80 + 1,lVar2);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar8 = (undefined8 *)((long)alStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar8);
  uVar6 = *puVar8;
  func_0x000107c6157c(uVar7);
  FUN_10345c328(uVar1,uVar6,uVar7,uVar4);
  func_0x0001000834e4(alStack_80 + 1);
  *param_1 = uVar1;
  return;
}



/* Entry: 10345bfbc; end: 10345bfef;  */

void FUN_10345bfbc(void)

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



/* Entry: 10345bff0; end: 10345c0d7;  */

void FUN_10345bff0(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0x112f6ce80;
  func_0x0001000285a8(0x112f6ce80,&UNK_10dbcc520);
  pcVar1 = FUN_10345c0d8;
  func_0x0001000cb480(FUN_10345c0d8,0,uVar4);
  uVar4 = 0x112f6ce88;
  func_0x0001000285a8(0x112f6ce88,&UNK_10dbcad90);
  uVar2 = 0x10345c114;
  func_0x0001000cb480(0x10345c114,0,uVar4);
  uVar4 = 0x112f6ce90;
  func_0x0001000285a8(0x112f6ce90,&UNK_10dbcc530);
  uVar3 = 0x10345c150;
  func_0x0001000cb480(0x10345c150,0,uVar4);
  uVar4 = 0;
  func_0x000100b5e690(0);
  func_0x000107c610f8();
  func_0x000103f96380(pcVar1,uVar2,uVar3,uVar4);
  func_0x000103f962bc(0);
  func_0x000107c610f8();
  func_0x000103f9607c(pcVar1);
  return;
}



/* Entry: 10345c0d8; end: 10345c18b;  */

void FUN_10345c0d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  FUN_103461ffc();
  param_1[3] = uVar1;
  param_1[4] = &PTR_DAT_110658ab0;
  *param_1 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar2);
  return;
}



/* Entry: 10345c18c; end: 10345c193;  */

void FUN_10345c18c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10345c194; end: 10345c233;  */

void FUN_10345c194(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10345c234; end: 10345c327;  */

void FUN_10345c234(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0x112f6ce80;
  func_0x0001000285a8(0x112f6ce80,&UNK_10dbcc520);
  pcVar1 = FUN_10345c0d8;
  func_0x0001000cb480(FUN_10345c0d8,0,uVar4);
  uVar4 = 0x112f6ce88;
  func_0x0001000285a8(0x112f6ce88,&UNK_10dbcad90);
  uVar2 = 0x10345c114;
  func_0x0001000cb480(0x10345c114,0,uVar4);
  uVar4 = 0x112f6ce90;
  func_0x0001000285a8(0x112f6ce90,&UNK_10dbcc530);
  uVar3 = 0x10345c150;
  func_0x0001000cb480(0x10345c150,0,uVar4);
  uVar4 = 0;
  func_0x000100b5e690(0);
  func_0x000107c610f8();
  func_0x000103f96380(pcVar1,uVar2,uVar3,uVar4);
  uVar4 = 0;
  func_0x000103f962bc(0);
  func_0x000107c610f8();
  func_0x000103f9607c(pcVar1,uVar4);
  *param_1 = pcVar1;
  return;
}



/* Entry: 10345c328; end: 10345c42b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10345c328(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long *plVar6;
  long lStack_78;
  long lStack_70;
  undefined8 auStack_68 [3];
  undefined8 uStack_50;
  undefined **ppuStack_48;
  
  lVar2 = param_4;
  func_0x000107c614f0();
  uVar3 = 0;
  func_0x000103467350();
  lVar1 = _DAT_112f6e098;
  ppuStack_48 = &PTR_DAT_1106591a0;
  uVar4 = 0x112f6d7e0;
  auStack_68[0] = param_2;
  uStack_50 = uVar3;
  func_0x0001000285a8(0x112f6d7e0,&UNK_10dbcc580);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(param_4 + lVar1) = uVar4;
  lVar1 = _DAT_112f6e0a0;
  puVar5 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_4 + lVar1) = puVar5;
  *(undefined8 *)(param_4 + _DAT_112f6e080) = param_1;
  FUN_10345c42c(auStack_68,param_4 + _DAT_112f6e088);
  *(undefined8 *)(param_4 + _DAT_112f6e090) = param_3;
  plVar6 = &lStack_78;
  lStack_78 = param_4;
  lStack_70 = lVar2;
  func_0x000107c61154(plVar6,PTR_s_init_1125d9248);
  func_0x0001000834e4(auStack_68);
  return plVar6;
}



/* Entry: 10345c42c; end: 10345c46f;  */

long FUN_10345c42c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 10345c470; end: 10345c473;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10345c470(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x12;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 *puVar8;
  long alStack_80 [4];
  long lStack_60;
  undefined **ppuStack_58;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  uVar1 = uVar4;
  func_0x000107c5b118();
  func_0x000107c61180();
  func_0x000107c5b118();
  func_0x000107c61180();
  func_0x0001000285a8(0x112f6cf68,&UNK_10dbcadf0);
  func_0x000107c3ee24();
  func_0x000107c61180();
  uVar7 = uVar6;
  func_0x0001000bda74();
  func_0x000107c61170(uVar6);
  lVar2 = 0;
  func_0x000103467350();
  lVar3 = lVar2;
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x20) = 0;
  lVar5 = *(long *)(lVar5 + _DAT_112f6df58);
  *(undefined8 *)(lVar3 + 0x10) = uVar4;
  *(undefined8 *)(lVar3 + 0x18) = uVar7;
  uVar7 = *(undefined8 *)(lVar5 + _DAT_112f6dfb0);
  ppuStack_58 = &PTR_DAT_1106591a0;
  uVar4 = 0;
  alStack_80[1] = lVar3;
  lStack_60 = lVar2;
  FUN_103461ffc(0);
  func_0x000107c610f8();
  func_0x0001000c6518(alStack_80 + 1,lVar2);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar8 = (undefined8 *)((long)alStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar8);
  uVar6 = *puVar8;
  func_0x000107c6157c(uVar7);
  FUN_10345c328(uVar1,uVar6,uVar7,uVar4);
  func_0x0001000834e4(alStack_80 + 1);
  *param_1 = uVar1;
  return;
}



/* Entry: 10345c474; end: 10345c6e3;  */

long FUN_10345c474(undefined8 param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar2 = &puStack_60;
  func_0x000107c613fc();
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  uStack_40 = 0x10345c66c;
  uStack_38 = 0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_103119608;
  puStack_48 = &UNK_110658578;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  uVar3 = 0;
  func_0x00010073d1f4(0);
  func_0x000107c610f8();
  func_0x00010073d268(puVar1,uVar3);
  uVar3 = 0;
  func_0x00010450d64c(0);
  func_0x000107c610f8();
  func_0x00010450d538(puVar1,uVar3);
  func_0x000107c61170(param_1);
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  return unaff_x20;
}



/* Entry: 10345c6e4; end: 10345c70f;  */

void FUN_10345c6e4(long param_1,long param_2)

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



/* Entry: 10345c710; end: 10345c7af;  */

void FUN_10345c710(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10345c7b0; end: 10345c7c3;  */

void FUN_10345c7b0(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10345c7c4; end: 10345d70b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10345c7c4(long param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  long param_10,char *param_11,long param_12)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined **ppuVar16;
  long lVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  uint uVar21;
  long unaff_x20;
  undefined8 uVar22;
  code *pcVar23;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  long lVar10;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  lVar6 = *(long *)(param_3 + _DAT_1130819a8);
  func_0x000107c61174();
  lVar7 = param_2;
  func_0x000107c4aeb0();
  func_0x000107c61180();
  lVar8 = lVar7;
  func_0x000107c4aeb4();
  func_0x000107c61180();
  func_0x000107c61170(lVar7);
  lVar20 = *(long *)(param_1 + _DAT_11302baf0);
  uVar22 = *(undefined8 *)(param_1 + _DAT_11302bad8);
  lVar7 = lVar20;
  func_0x000107c61174();
  func_0x000107c5b198();
  func_0x000107c61180();
  uVar14 = uVar22;
  FUN_10345f3a0();
  func_0x000107c61170(uVar22);
  if (lVar20 == 0) {
    uVar5 = 2;
    uVar18 = 2;
  }
  else {
    lVar20 = lVar7;
    func_0x000107c4ca5c();
    iVar4 = (int)lVar20;
    func_0x000107c30858();
    if (iVar4 == 0) {
      lVar20 = lVar7;
      func_0x000107c4ca5c();
      iVar4 = (int)lVar20;
      func_0x000107c30854();
      puVar9 = &UNK_10dbcb1d8;
      func_0x000107c614e0(&UNK_10dbcb1d8);
      uVar18 = 1;
      if (iVar4 == 0) {
        uVar18 = 2;
      }
    }
    else {
      puVar9 = &UNK_10dbcb1d8;
      func_0x000107c614e0(&UNK_10dbcb1d8);
      uVar18 = 0;
    }
    lVar20 = lVar7;
    func_0x000107c61174(lVar7);
    func_0x000107c61174();
    lVar10 = lVar20;
    func_0x000107c43b3c();
    uVar5 = (uint)lVar10;
    func_0x000107c61170(lVar20);
    func_0x000107c61170(lVar20);
    func_0x000107c61574(puVar9);
  }
  uVar21 = (uint)uVar14;
  uVar3 = uVar21 >> 8 & 0xff;
  uVar1 = uVar5;
  if ((uVar21 & 0xff) != 2) {
    uVar1 = uVar21;
  }
  uVar2 = uVar18;
  if (uVar3 != 2) {
    uVar2 = uVar3;
  }
  if ((uVar21 & 0xff) != 3) {
    uVar5 = uVar1;
    uVar18 = uVar2;
  }
  uVar14 = *(undefined8 *)(param_12 + _DAT_113035ea8);
  lVar20 = ((undefined8 *)(param_12 + _DAT_113035ea8))[1];
  uVar22 = uVar14;
  func_0x000107c614f0(uVar14);
  pcVar23 = *(code **)(lVar20 + 8);
  func_0x000107c615f0(uVar14);
  lVar10 = lVar6;
  lVar17 = lVar8;
  (*pcVar23)(lVar6,lVar8,uVar5,uVar18,uVar22,lVar20);
  func_0x000107c615e8(uVar14);
  pcVar11 = 
  "init(beginIn:snapEditorScopedLensCarouselManagementServices:snapEditorScopedLensCarouselSessionServices:snapEditorScopedLensFeaturesVisibilityControllerServices:previewDependencyServices:swipeFiltersServices:lensContentServices:filterIconProviderService:bundledLensProviderServices:loggerServices:lensPerformerServices:previewLensIconImpressionLoggingServices:)"
  ;
  func_0x0001000c10c0();
  func_0x000107c61180();
  pcVar12 = param_11;
  func_0x000107c4b2ec();
  func_0x000107c61180();
  pcVar13 = pcVar12;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(pcVar12);
  if (pcVar13 == (char *)0x0) {
    func_0x000107c615f0(pcVar11);
    pcVar12 = pcVar11;
  }
  else {
    pcVar12 = pcVar13;
    func_0x000107c4c020();
    func_0x000107c61180();
    func_0x000107c615e8(pcVar13);
  }
  puVar9 = &UNK_1106585f0;
  func_0x000107c613fc(&UNK_1106585f0,0x18,7);
  *(long *)(puVar9 + 0x10) = lVar6;
  func_0x0001000285a8(0x112f6d040,&UNK_10dbcae60);
  func_0x000107c613fc();
  func_0x000107c61174();
  pcVar23 = FUN_10345d938;
  func_0x0001000bdd8c(FUN_10345d938,puVar9);
  uVar14 = *(undefined8 *)(param_10 + _DAT_113083868);
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar20 = 0;
  func_0x000103466a30();
  func_0x000107c613fc();
  puVar9 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c615f0(pcVar12);
  func_0x000107c453e4();
  *(undefined **)(lVar20 + 0x28) = puVar9;
  *(undefined8 *)(lVar20 + 0x30) = 0;
  *(code **)(lVar20 + 0x10) = pcVar23;
  *(undefined8 *)(lVar20 + 0x18) = uVar14;
  *(char **)(lVar20 + 0x20) = pcVar12;
  uVar22 = *(undefined8 *)(lVar6 + _DAT_113081858);
  lVar19 = *(long *)(param_4 + _DAT_1130829b0);
  *(long *)(unaff_x20 + 0x20) = lVar20;
  uVar14 = *(undefined8 *)(lVar19 + _DAT_1130828e8);
  func_0x000103457a50(0);
  func_0x000107c613fc();
  func_0x000107c6157c(lVar20);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(uVar14);
  FUN_1034572b4(uVar22,lVar8,uVar14);
  lVar19 = 0;
  func_0x000103457c4c();
  func_0x000107c613fc();
  func_0x000107c6157c(lVar20);
  func_0x000107c615f0(lVar10);
  func_0x000107c6157c(uVar22);
  pcVar13 = "LensCarouselSnapEditorLifecycleWorkflow";
  func_0x0001000c10c0();
  func_0x000107c61180();
  *(long *)(lVar19 + 0x28) = lVar20;
  *(char **)(lVar19 + 0x30) = pcVar13;
  *(long *)(lVar19 + 0x10) = lVar10;
  *(long *)(lVar19 + 0x18) = lVar17;
  *(undefined8 *)(lVar19 + 0x20) = uVar22;
  *(long *)(unaff_x20 + 0x18) = lVar19;
  puVar15 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar9 = &UNK_110658618;
  func_0x000107c613fc(&UNK_110658618,0x48,7);
  *(long *)(puVar9 + 0x10) = lVar8;
  *(long *)(puVar9 + 0x18) = param_4;
  *(undefined8 *)(puVar9 + 0x20) = param_5;
  *(undefined8 *)(puVar9 + 0x28) = param_6;
  *(undefined8 *)(puVar9 + 0x30) = param_9;
  *(undefined8 *)(puVar9 + 0x38) = param_7;
  *(undefined8 *)(puVar9 + 0x40) = param_8;
  uStack_78 = 0x10345d93c;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0x42000000;
  pcStack_88 = FUN_10345d70c;
  puStack_80 = &UNK_110658630;
  ppuVar16 = &puStack_98;
  puStack_70 = puVar9;
  func_0x000107c60bc4(ppuVar16);
  puVar9 = puStack_70;
  func_0x000107c61174();
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61574(puVar9);
  func_0x000107c3e4fc(puVar15);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar16);
  puVar9 = PTR_PTR_1126ad2d8;
  func_0x000107c610f8();
  func_0x000107c45d30();
  func_0x000107c61170(puVar15);
  *(undefined **)(unaff_x20 + 0x10) = puVar9;
  FUN_103466504();
  func_0x000107c614f0(lVar10);
  (**(code **)(lVar17 + 8))();
  FUN_103457334();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_10);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_11);
  func_0x000107c61574(uVar22);
  func_0x000107c615e8(lVar10);
  func_0x000107c61170(lVar8);
  func_0x000107c61574(lVar20);
  func_0x000107c615e8(pcVar12);
  func_0x000107c615e8(pcVar11);
  func_0x000107c61170(lVar7);
  return unaff_x20;
}



/* Entry: 10345d70c; end: 10345d743;  */

void FUN_10345d70c(long param_1)

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



/* Entry: 10345d744; end: 10345d8d7;  */

undefined * FUN_10345d744(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  code *pcVar6;
  long lVar7;
  long unaff_x20;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar7 = *(long *)(unaff_x20 + 0x18);
  if (lVar7 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126afc98;
    func_0x000107c61168();
    func_0x000107c6157c(lVar7);
    func_0x000107c3e26c();
    func_0x000107c61180();
    uVar9 = *(undefined8 *)(unaff_x20 + 0x28);
    *(undefined **)(unaff_x20 + 0x28) = puVar4;
    func_0x000107c61174();
    func_0x000107c61170(uVar9);
    puVar8 = &UNK_1106586e0;
    func_0x000107c613fc(&UNK_1106586e0,0x18,7);
    *(undefined **)(puVar8 + 0x10) = puVar4;
    uVar9 = *(undefined8 *)(lVar7 + 0x10);
    lVar2 = *(long *)(lVar7 + 0x18);
    func_0x000107c614f0();
    uVar1 = *(undefined8 *)(lVar7 + 0x20);
    uVar3 = *(undefined8 *)(lVar7 + 0x28);
    uVar10 = *(undefined8 *)(lVar7 + 0x30);
    puVar5 = &UNK_110658708;
    func_0x000107c613fc(&UNK_110658708,0x38,7);
    *(undefined8 *)(puVar5 + 0x10) = uVar10;
    *(undefined8 *)(puVar5 + 0x18) = uVar1;
    *(undefined8 *)(puVar5 + 0x20) = uVar3;
    *(undefined8 *)(puVar5 + 0x28) = 0x10345da10;
    *(undefined **)(puVar5 + 0x30) = puVar8;
    pcVar6 = *(code **)(lVar2 + 0x10);
    func_0x000107c61174(puVar4);
    func_0x000107c615f0(uVar10);
    func_0x000107c6157c(uVar1);
    func_0x000107c6157c(uVar3);
    func_0x000107c6157c(puVar8);
    (*pcVar6)(0x10345da18,puVar5,uVar9,lVar2);
    func_0x000107c61574(puVar8);
    func_0x000107c61574(puVar5);
    uVar9 = *(undefined8 *)(unaff_x20 + 0x18);
    *(undefined8 *)(unaff_x20 + 0x18) = 0;
    func_0x000107c61574(uVar9);
    uVar9 = *(undefined8 *)(unaff_x20 + 0x20);
    *(undefined8 *)(unaff_x20 + 0x20) = 0;
    func_0x000107c61574(uVar9);
    puVar8 = puVar4;
    func_0x000107c4f3ec(puVar4);
    func_0x000107c61180();
    func_0x000107c61574(lVar7);
    func_0x000107c61170(puVar4);
  }
  return puVar8;
}



/* Entry: 10345d8d8; end: 10345d913;  */

void FUN_10345d8d8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10345d914; end: 10345d917;  */

void FUN_10345d914(void)

{
  return;
}



/* Entry: 10345d918; end: 10345d937;  */

void FUN_10345d918(void)

{
  FUN_10345d744();
  return;
}



/* Entry: 10345d938; end: 10345d967;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10345d938(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_113081858);
  func_0x000107c5c734();
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 10345d968; end: 10345d9a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10345d968(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_113081858);
  func_0x000107c5c734();
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 10345d9a8; end: 10345d9fb;  */

void FUN_10345d9a8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10345d9fc; end: 10345da27;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10345d9fc(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long extraout_x8;
  undefined8 uVar8;
  long extraout_x12;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long alStack_90 [4];
  long lStack_70;
  undefined **ppuStack_68;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  lVar7 = *(long *)(unaff_x20 + 0x40);
  lVar2 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x18) + _DAT_1130829b0) + _DAT_1130828e8);
  uVar9 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + _DAT_113035ee0) + _DAT_113035e70);
  func_0x000107c61174();
  alStack_90[0] = lVar2;
  func_0x000107c61174();
  uVar3 = uVar10;
  func_0x000107c5b118();
  func_0x000107c61180();
  func_0x000107c5b118();
  func_0x000107c61180();
  func_0x0001000285a8(0x112f6cf68,&UNK_10dbcadf0);
  func_0x000107c3ee24();
  func_0x000107c61180();
  uVar4 = uVar8;
  func_0x0001000bda74();
  func_0x000107c61170(uVar8);
  lVar5 = 0;
  func_0x000103467350();
  lVar2 = lVar5;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = uVar4;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x10) = uVar10;
  func_0x000107c4b1cc();
  func_0x000107c61180();
  uVar10 = *(undefined8 *)(*(long *)(lVar7 + _DAT_112f6df58) + _DAT_112f6dfb0);
  ppuStack_68 = &PTR_DAT_1106591a0;
  lVar7 = 0;
  alStack_90[1] = lVar2;
  lStack_70 = lVar5;
  func_0x000103458558();
  func_0x000107c613fc();
  func_0x0001000c6518(alStack_90 + 1,lVar5);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  puVar11 = (undefined8 *)((long)alStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar11);
  uVar8 = *puVar11;
  *(long *)(lVar7 + 0x48) = lVar5;
  *(undefined ***)(lVar7 + 0x50) = &PTR_DAT_1106591a0;
  *(undefined8 *)(lVar7 + 0x28) = uVar3;
  *(undefined8 *)(lVar7 + 0x30) = uVar8;
  *(undefined1 *)(lVar7 + 0x68) = 0;
  *(undefined8 *)(lVar7 + 0x10) = uVar1;
  *(long *)(lVar7 + 0x18) = alStack_90[0];
  *(undefined8 *)(lVar7 + 0x20) = uVar9;
  *(undefined8 *)(lVar7 + 0x58) = uVar6;
  *(undefined8 *)(lVar7 + 0x60) = uVar10;
  func_0x000107c6157c(uVar10);
  func_0x000107c61174(uVar1);
  func_0x0001000834e4(alStack_90 + 1);
  return lVar7;
}



/* Entry: 10345da28; end: 10345da47;  */

void FUN_10345da28(void)

{
  func_0x000107c61168(&PTR_PTR_112f6d8f8);
  return;
}



/* Entry: 10345da48; end: 10345da57;  */

void FUN_10345da48(long param_1,long param_2)

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



/* Entry: 10345da58; end: 10345dbef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10345da58(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  func_0x000107c613fc();
  uVar4 = *(undefined8 *)(param_5 + _DAT_1130829b0);
  uVar5 = *(undefined8 *)(*(long *)(param_3 + _DAT_113038be8) + _DAT_113038cc0);
  uVar6 = *(undefined8 *)(param_4 + _DAT_113038858);
  puVar1 = &UNK_110658750;
  func_0x000107c613fc(&UNK_110658750,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar5;
  *(undefined8 *)(puVar1 + 0x18) = uVar4;
  *(undefined8 *)(puVar1 + 0x20) = uVar6;
  func_0x0001000285a8(0x112f420e8,&UNK_10db8f0b0);
  func_0x000107c613fc();
  func_0x000107c61174(uVar4);
  func_0x000107c61580(uVar5,2);
  func_0x000107c61580(uVar6,2);
  func_0x000107c61174(uVar4);
  pcVar2 = FUN_10345dd68;
  func_0x0001000bdd8c(FUN_10345dd68,puVar1);
  uVar3 = 0;
  FUN_103475eb8(0);
  func_0x000107c610f8();
  func_0x000103475dfc(pcVar2,uVar3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61574(uVar6);
  func_0x000107c61170(uVar4);
  func_0x000107c61574(uVar5);
  *(code **)(unaff_x20 + 0x10) = pcVar2;
  return unaff_x20;
}



/* Entry: 10345dbf0; end: 10345dd67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10345dbf0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  long lStack_58;
  
  func_0x0001000285a8(0x112f421c0,&UNK_10dbcc740);
  func_0x000107c613fc();
  func_0x000107c6157c(param_2);
  uVar1 = 0x10345ded8;
  func_0x0001000bdd8c(0x10345ded8,param_2);
  func_0x0001000285a8(0x112f55828,&UNK_10dbcae70);
  uVar2 = *(undefined8 *)(param_3 + _DAT_1130828e8);
  func_0x0001000bda74(uVar2);
  func_0x0001000d224c(auStack_78);
  func_0x0001000a8868(auStack_78,uStack_60);
  uVar3 = uStack_60;
  (**(code **)(lStack_58 + 8))(uStack_60,lStack_58);
  uVar4 = 0;
  func_0x000103464d44(0);
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar5 = 0x112d5ba30;
  func_0x0001000285a8(0x112d5ba30,&UNK_10d929a50);
  func_0x000104886440();
  uVar6 = 0;
  FUN_103476260();
  uVar7 = uVar6;
  func_0x000107c613fc();
  FUN_103475f30(uVar1,uVar2,uVar3,uVar4,uVar5,uVar7);
  func_0x0001000834e4(auStack_78);
  param_1[3] = uVar6;
  param_1[4] = &PTR_DAT_11065a420;
  *param_1 = uVar1;
  return;
}



/* Entry: 10345dd68; end: 10345dd73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10345dd68(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  long lStack_58;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112f421c0,&UNK_10dbcc740,*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c613fc();
  func_0x000107c6157c(uVar6);
  uVar2 = 0x10345ded8;
  func_0x0001000bdd8c(0x10345ded8,uVar6);
  func_0x0001000285a8(0x112f55828,&UNK_10dbcae70);
  uVar3 = *(undefined8 *)(lVar1 + _DAT_1130828e8);
  func_0x0001000bda74(uVar3);
  func_0x0001000d224c(auStack_78);
  func_0x0001000a8868(auStack_78,uStack_60);
  uVar4 = uStack_60;
  (**(code **)(lStack_58 + 8))(uStack_60,lStack_58);
  uVar5 = 0;
  func_0x000103464d44(0);
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar6 = 0x112d5ba30;
  func_0x0001000285a8(0x112d5ba30,&UNK_10d929a50);
  func_0x000104886440();
  uVar7 = 0;
  FUN_103476260();
  uVar8 = uVar7;
  func_0x000107c613fc();
  FUN_103475f30(uVar2,uVar3,uVar4,uVar5,uVar6,uVar8);
  func_0x0001000834e4(auStack_78);
  param_1[3] = uVar7;
  param_1[4] = &PTR_DAT_11065a420;
  *param_1 = uVar2;
  return;
}



/* Entry: 10345dd74; end: 10345dda7;  */

void FUN_10345dd74(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10345dda8; end: 10345de23;  */

void FUN_10345dda8(long param_1)

{
  undefined1 auStack_58 [24];
  long lStack_40;
  long lStack_38;
  
  func_0x0001000d224c(auStack_58);
  func_0x0001000a8868(auStack_58,lStack_40);
  *(long *)(param_1 + 0x18) = lStack_40;
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(lStack_38 + 8);
  func_0x0001000c5db4(param_1);
  (**(code **)(*(long *)(lStack_40 + -8) + 0x10))();
  func_0x0001000834e4(auStack_58);
  return;
}



/* Entry: 10345de24; end: 10345de2b;  */

void FUN_10345de24(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10345de2c; end: 10345decb;  */

void FUN_10345de2c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10345decc; end: 10345dedf;  */

void FUN_10345decc(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10345dee0; end: 10345e143;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10345dee0(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  func_0x000107c613fc();
  func_0x0001000285a8(0x112d5d810,&UNK_10d923f50);
  uVar3 = param_2;
  func_0x000107c4aeb0();
  func_0x000107c61180();
  uVar1 = uVar3;
  func_0x000107c4aeb4();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  uVar3 = uVar1;
  func_0x0001000bda74();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_2);
  uVar1 = *(undefined8 *)(param_3 + _DAT_113036458);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar1;
  uVar3 = *(undefined8 *)(param_3 + _DAT_113036498);
  func_0x000107c6157c();
  func_0x000107c6157c(uVar3);
  func_0x000107c61170(param_3);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar3;
  lVar2 = *(long *)(param_4 + _DAT_113070ff8);
  func_0x000107c61174();
  func_0x000107c61170(param_4);
  uVar3 = *(undefined8 *)(lVar2 + _DAT_113070f60);
  func_0x000107c6157c(uVar3);
  func_0x000107c61170(lVar2);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_1;
  return unaff_x20;
}



/* Entry: 10345e144; end: 10345e2c7;  */

code * FUN_10345e144(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  
  uVar7 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar3 = &UNK_110658790;
  func_0x000107c613fc(&UNK_110658790,0x18,7);
  func_0x000107c61614(puVar3 + 0x10,uVar1);
  puVar4 = &UNK_1106587b8;
  func_0x000107c613fc(&UNK_1106587b8,0x38,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar8;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  *(undefined8 *)(puVar4 + 0x20) = uVar9;
  *(undefined8 *)(puVar4 + 0x28) = uVar7;
  *(undefined **)(puVar4 + 0x30) = puVar3;
  func_0x0001000285a8(0x112f6d1d0,&UNK_10dbcaf18);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(uVar7);
  pcVar5 = FUN_10345e3f4;
  func_0x0001000bdd8c(FUN_10345e3f4,puVar4);
  func_0x0001000285a8(0x112f6d1d8,&UNK_10dbcaf20);
  func_0x000107c613fc();
  func_0x000107c6157c(pcVar5);
  pcVar6 = FUN_10345e404;
  func_0x0001000bdd8c(FUN_10345e404,pcVar5);
  func_0x0001000285a8(0x112f6d1e0,&UNK_10dbcaf28);
  func_0x000107c613fc();
  func_0x000107c6157c(pcVar5);
  uVar7 = 0x10345e438;
  func_0x0001000bdd8c(0x10345e438,pcVar5);
  uVar8 = 0;
  func_0x000103bcf71c(0);
  func_0x000107c610f8();
  func_0x000103bcf5d0(pcVar6,uVar7,uVar8);
  func_0x000107c61574(pcVar5);
  return pcVar6;
}



/* Entry: 10345e2c8; end: 10345e3f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10345e2c8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_6 + 0x10,auStack_68,0,0);
  param_6 = param_6 + 0x10;
  func_0x000107c61618();
  if (param_6 != 0) {
    func_0x000107c5b198(*(undefined8 *)(param_6 + _DAT_11302bad8));
    func_0x000107c61180();
    if (*(long *)(param_6 + _DAT_11302baa8) == 8) {
      func_0x00010345ec30();
    }
    func_0x000107c61170();
    func_0x000107c61170(param_6);
  }
  FUN_10346b1e0(0);
  func_0x000107c610f8();
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c();
  func_0x00010346aa70();
  *param_1 = param_2;
  return;
}



/* Entry: 10345e3f4; end: 10345e403;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10345e3f4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar5 = *(long *)(unaff_x20 + 0x30);
  func_0x000107c61428(lVar5 + 0x10,auStack_68,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61618();
  if (lVar5 != 0) {
    func_0x000107c5b198(*(undefined8 *)(lVar5 + _DAT_11302bad8));
    func_0x000107c61180();
    if (*(long *)(lVar5 + _DAT_11302baa8) == 8) {
      func_0x00010345ec30();
    }
    func_0x000107c61170();
    func_0x000107c61170(lVar5);
  }
  FUN_10346b1e0(0);
  func_0x000107c610f8();
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c();
  func_0x00010346aa70();
  *param_1 = uVar4;
  return;
}



/* Entry: 10345e404; end: 10345e473;  */

void FUN_10345e404(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x0001000d224c(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 10345e474; end: 10345e4a7;  */

void FUN_10345e474(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Entry: 10345e4a8; end: 10345e50b;  */

void FUN_10345e4a8(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10345e50c; end: 10345e59b;  */

void FUN_10345e50c(undefined8 param_1)

{
  if (lRam0000000112f6da68 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e767e9c);
  return;
}



/* Entry: 10345e59c; end: 10345e5bf;  */

void FUN_10345e59c(undefined8 *param_1,undefined8 param_2)

{
  FUN_10345e144();
  *param_1 = param_2;
  return;
}



/* Entry: 10345e5c0; end: 10345e6fb;  */

ulong FUN_10345e5c0(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   code *param_6)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10345e6fc);
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
  FUN_10345e6fc(uVar2,uVar4,param_5);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10345e6f8);
      (*pcVar1)();
    }
    (*param_6)(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 10345e6fc; end: 10345e77b;  */

undefined * FUN_10345e6fc(undefined *param_1,undefined *param_2,code *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    (*param_3)();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 10345e77c; end: 10345e9ab;  */

long FUN_10345e77c(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10345e890);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10345e894);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_10345f164(0,0x112e2f0c8,&PTR_PTR_1126b25c8);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_10345f164(0,0x112e2f0c8,&PTR_PTR_1126b25c8);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10345e88c);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 10345e9ac; end: 10345f163;  */

undefined * FUN_10345e9ac(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puStack_68;
  
  func_0x000107c4e8d8();
  func_0x000107c61180();
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10345ec30);
    (*pcVar3)();
  }
  lVar4 = param_1;
  func_0x000107c4e928();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar4 != 0) {
    puStack_68 = (undefined *)0x0;
    uVar5 = 0;
    FUN_10345f164(0,0x112d55598,&PTR_PTR_1126b25d0);
    func_0x000107c5fc50(lVar4,&puStack_68,uVar5);
    func_0x000107c61170(lVar4);
    if (puStack_68 != (undefined *)0x0) {
      puVar12 = puStack_68;
    }
  }
  puVar14 = (undefined *)((ulong)puVar12 & 0xffffffffffffff8);
  if ((ulong)puVar12 >> 0x3e == 0) {
    puVar13 = *(undefined **)(puVar14 + 0x10);
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar13 = puVar14;
    if ((undefined *)0x7fffffffffffffff < puVar12) {
      puVar13 = puVar12;
    }
    func_0x000107c60480();
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar10;
  if (puVar13 != (undefined *)0x0) {
    puVar9 = (undefined *)0x0;
    do {
      while( true ) {
        if (((ulong)puVar12 & 0xc000000000000001) == 0) {
          if (*(undefined **)(puVar14 + 0x10) <= puVar9) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10345ebe4);
            (*pcVar3)();
          }
          puVar6 = *(undefined **)(puVar12 + (long)puVar9 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          puVar6 = puVar9;
          func_0x00010121c1ac(puVar9,puVar12);
        }
        puVar1 = puVar9 + 1;
        if (SCARRY8((long)puVar9,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10345ebe0);
          (*pcVar3)();
        }
        puVar7 = puVar6;
        func_0x000107c4abb4();
        if ((int)puVar7 == 1) break;
LAB_10345ea78:
        func_0x000107c61170(puVar6);
        puVar9 = puVar9 + 1;
        if (puVar1 == puVar13) goto LAB_10345ec00;
      }
      puVar7 = puVar6;
      func_0x000107c4c930();
      func_0x000107c61180();
      if (puVar7 == (undefined *)0x0) goto LAB_10345ea78;
      puVar8 = puVar7;
      func_0x000107c3e240();
      if ((int)puVar8 != 5) {
        func_0x000107c61170(puVar7);
        goto LAB_10345ea78;
      }
      puVar8 = puVar7;
      func_0x000107c4e088();
      func_0x000107c61170(puVar6);
      puVar6 = puVar7;
      if ((int)puVar8 != 0x1a) goto LAB_10345ea78;
      puVar9 = puVar10;
      func_0x000107c61550();
      if ((((int)puVar9 == 0) || ((long)puVar10 < 0)) ||
         (puVar9 = puVar10, ((ulong)puVar10 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar10 >> 0x3e == 0) {
          puVar6 = *(undefined **)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar6 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar10) {
            puVar6 = puVar10;
          }
          func_0x000107c60480(puVar6);
        }
        puVar9 = (undefined *)0x0;
        FUN_10345e5c0(0,puVar6 + 1,1,puVar10,&SUB_101e055e0,FUN_10345e77c);
      }
      uVar11 = (ulong)puVar9 & 0xffffffffffffff8;
      uVar2 = *(ulong *)(uVar11 + 0x10);
      puVar10 = puVar9;
      if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar2) {
        puVar10 = (undefined *)(ulong)(1 < *(ulong *)(uVar11 + 0x18));
        FUN_10345e5c0(puVar10,uVar2 + 1,1,puVar9,&SUB_101e055e0,FUN_10345e77c);
        uVar11 = (ulong)puVar10 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar11 + 0x10) = uVar2 + 1;
      *(undefined **)(uVar11 + uVar2 * 8 + 0x20) = puVar7;
      puVar9 = puVar1;
    } while (puVar1 != puVar13);
  }
LAB_10345ec00:
  func_0x000107c6142c(puVar12);
  return puVar10;
}



/* Entry: 10345f164; end: 10345f1a3;  */

void FUN_10345f164(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10345f1a4; end: 10345f39f;  */

ulong FUN_10345f1a4(ulong param_1,ulong param_2,char param_3)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  FUN_10345e9ac();
  if ((param_3 != '\x01') && (param_2 != 0)) {
    if (param_1 >> 0x3e == 0) {
      uVar6 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar6 = param_1 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < param_1) {
        uVar6 = param_1;
      }
      func_0x000107c60480();
    }
    if (uVar6 != 0) {
      uVar7 = 0;
      do {
        if ((param_1 & 0xc000000000000001) == 0) {
          if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10345f2e0);
            (*pcVar2)();
          }
          uVar3 = *(ulong *)(param_1 + uVar7 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar3 = uVar7;
          func_0x000101e08a24(uVar7,param_1);
        }
        uVar1 = uVar7 + 1;
        if (SCARRY8(uVar7,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10345f2dc);
          (*pcVar2)();
        }
        uVar4 = uVar3;
        func_0x000107c4c9e8();
        func_0x000107c61180();
        if (uVar4 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10345f39c);
          (*pcVar2)();
        }
        uVar5 = uVar4;
        func_0x000107c4492c();
        func_0x000107c61170(uVar4);
        if ((int)uVar5 != 0) {
          uVar4 = uVar3;
          func_0x000107c4c9e8();
          func_0x000107c61180();
          if (uVar4 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10345f3a0);
            (*pcVar2)();
          }
          uVar5 = uVar4;
          func_0x000107c4b200();
          func_0x000107c61180();
          func_0x000107c61170(uVar4);
          if (uVar5 != 0) {
            uVar4 = uVar5;
            func_0x000107c4b1dc();
            func_0x000107c61170(uVar5);
            if (uVar4 == param_2) goto LAB_10345f330;
          }
        }
        func_0x000107c61170(uVar3);
        uVar7 = uVar7 + 1;
      } while (uVar1 != uVar6);
    }
  }
  if (param_1 >> 0x3e == 0) {
    uVar6 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar6 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar6 = param_1;
    }
    func_0x000107c60480();
  }
  if (uVar6 == 1) {
    if ((param_1 & 0xc000000000000001) == 0) {
      if (*(long *)((param_1 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10345f398);
        (*pcVar2)();
      }
      uVar3 = *(ulong *)(param_1 + 0x20);
      func_0x000107c61174(uVar3);
    }
    else {
      uVar3 = 0;
      func_0x000101e08a24(0,param_1);
    }
LAB_10345f330:
    func_0x000107c6142c(param_1);
  }
  else {
    func_0x000107c6142c(param_1);
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 10345f3a0; end: 10345f487;  */

uint FUN_10345f3a0(long param_1)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar6;
  long lVar7;
  long lVar5;
  
  lVar4 = param_1;
  func_0x000107c4adb4();
  func_0x000107c61180();
  if (lVar4 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = lVar4;
    func_0x000107c44fd8();
    func_0x000107c61170(lVar4);
  }
  FUN_10345f1a4(param_1,lVar7,lVar4 == 0);
  if (param_1 == 0) {
    uVar3 = 3;
  }
  else {
    lVar4 = param_1;
    func_0x000107c5d0f0();
    lVar7 = param_1;
    func_0x000107c44788();
    if ((int)lVar7 == 0) {
      lVar7 = param_1;
      func_0x000107c43b4c(param_1);
      uVar2 = (uint)lVar7;
    }
    else {
      lVar7 = param_1;
      func_0x000107c3f584();
      func_0x000107c61180();
      if (lVar7 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10345f488);
        (*pcVar1)();
      }
      lVar5 = lVar7;
      func_0x000107c43b4c();
      uVar2 = (uint)lVar5;
      func_0x000107c61170(lVar7);
    }
    func_0x000107c61170(param_1);
    uVar6 = 0x100;
    if ((int)lVar4 != 1) {
      uVar6 = 0x200;
    }
    uVar3 = 0;
    if ((int)lVar4 != 0) {
      uVar3 = uVar6;
    }
    uVar3 = uVar3 | uVar2;
  }
  return uVar3;
}



/* Entry: 10345f488; end: 10345fa47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10345f488(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long unaff_x20;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  func_0x000107c613fc();
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar2 = &UNK_1106587f8;
  func_0x000107c613fc(&UNK_1106587f8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_4;
  *(undefined8 *)(puVar2 + 0x18) = param_5;
  pcStack_70 = FUN_10345fac8;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_10345ae34;
  puStack_78 = &UNK_110658810;
  ppuVar3 = &puStack_90;
  puStack_68 = puVar2;
  func_0x000107c60bc4(ppuVar3);
  puVar2 = puStack_68;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61574(puVar2);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  puVar2 = &UNK_110658848;
  func_0x000107c613fc(&UNK_110658848,0x18,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  func_0x0001000285a8(0x112f6d2d8,&UNK_10dbcaf90);
  func_0x000107c613fc();
  func_0x000107c61174(puVar1);
  uVar4 = 0x10345faec;
  func_0x0001000bdd8c(0x10345faec,puVar2);
  puVar2 = &UNK_110658870;
  func_0x000107c613fc(&UNK_110658870,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = uVar4;
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  *(undefined8 *)(puVar2 + 0x28) = param_6;
  func_0x0001000285a8(0x112f6d2e0,&UNK_10dbcaf98);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c6157c(uVar4);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_6);
  pcVar5 = FUN_10345fc64;
  func_0x0001000bdd8c(FUN_10345fc64,puVar2);
  lVar6 = 0;
  FUN_103461a24();
  lVar7 = lVar6;
  func_0x000107c610f8();
  *(code **)(lVar7 + _DAT_112f6dfb0) = pcVar5;
  puVar2 = PTR_s_init_1125d9248;
  lStack_a0 = lVar7;
  lStack_98 = lVar6;
  func_0x000107c6157c(pcVar5);
  plVar8 = &lStack_a0;
  func_0x000107c61154(plVar8,puVar2);
  lVar6 = 0;
  func_0x000103461990();
  lVar7 = lVar6;
  func_0x000107c610f8();
  *(long **)(lVar7 + _DAT_112f6df58) = plVar8;
  puVar2 = PTR_s_init_1125d9248;
  lStack_b0 = lVar7;
  lStack_a8 = lVar6;
  func_0x000107c61174(plVar8);
  plVar9 = &lStack_b0;
  func_0x000107c61154(plVar9,puVar2);
  func_0x000107c61170(plVar8);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61574(uVar4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_6);
  func_0x000107c61574(pcVar5);
  func_0x000107c61170(param_1);
  *(long **)(unaff_x20 + 0x10) = plVar9;
  return unaff_x20;
}



/* Entry: 10345fa48; end: 10345fac7;  */

undefined * FUN_10345fa48(undefined8 param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  
  func_0x000107c421c8();
  func_0x000107c61180();
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (param_2 != 0) {
    puVar2 = PTR_PTR_1126ad2d0;
    func_0x000107c610f8(PTR_PTR_1126ad2d0);
    func_0x000107c46610();
    func_0x000107c61170(param_1);
    func_0x000107c615e8(param_2);
    return puVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10345fac8);
  (*pcVar1)();
}



/* Entry: 10345fac8; end: 10345faef;  */

undefined * FUN_10345fac8(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c421c8(uVar2);
  func_0x000107c61180();
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar3 != 0) {
    puVar4 = PTR_PTR_1126ad2d0;
    func_0x000107c610f8(PTR_PTR_1126ad2d0);
    func_0x000107c46610();
    func_0x000107c61170(uVar2);
    func_0x000107c615e8(lVar3);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10345fac8);
  (*pcVar1)();
}



/* Entry: 10345faf0; end: 10345fc63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10345faf0(long *param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  func_0x0001000285a8(0x112d3b7c8,&UNK_10da59ea0);
  func_0x000107c4b1cc();
  func_0x000107c61180();
  uVar2 = param_2;
  func_0x0001000bda74();
  func_0x000107c61170(param_2);
  func_0x0001000285a8(0x112f6d3b8,&UNK_10dbcafe0);
  func_0x000107c613fc();
  pcVar3 = FUN_10345fc70;
  func_0x0001000bdd8c(FUN_10345fc70,0);
  lVar1 = _DAT_11307d3d8;
  func_0x0001000285a8(0x112f6d3c0,&UNK_10dbcafe8);
  uVar4 = *(undefined8 *)(*(long *)(param_5 + _DAT_113039058) + _DAT_113038f68);
  func_0x000107c61174();
  uVar5 = uVar4;
  func_0x0001000bda74();
  func_0x000107c61170(uVar4);
  lVar6 = 0;
  func_0x000103461258();
  lVar7 = lVar6;
  func_0x000107c613fc();
  *(undefined8 *)(lVar7 + 0x58) = 0;
  *(undefined8 *)(lVar7 + 0x60) = 0;
  *(undefined1 *)(lVar7 + 0x68) = 1;
  *(undefined8 *)(lVar7 + 0x10) = uVar2;
  *(undefined8 *)(lVar7 + 0x18) = param_3;
  *(code **)(lVar7 + 0x20) = pcVar3;
  func_0x000100420238(param_4 + lVar1,lVar7 + 0x28);
  *(undefined8 *)(lVar7 + 0x50) = uVar5;
  param_1[3] = lVar6;
  param_1[4] = (long)&PTR_DAT_110658a28;
  *param_1 = lVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_3);
  return;
}



/* Entry: 10345fc64; end: 10345fc6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10345fc64(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long unaff_x20;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar9 = *(long *)(unaff_x20 + 0x28);
  func_0x0001000285a8(0x112d3b7c8,&UNK_10da59ea0);
  func_0x000107c4b1cc();
  func_0x000107c61180();
  uVar5 = uVar4;
  func_0x0001000bda74();
  func_0x000107c61170(uVar4);
  func_0x0001000285a8(0x112f6d3b8,&UNK_10dbcafe0);
  func_0x000107c613fc();
  pcVar6 = FUN_10345fc70;
  func_0x0001000bdd8c(FUN_10345fc70,0);
  lVar3 = _DAT_11307d3d8;
  func_0x0001000285a8(0x112f6d3c0,&UNK_10dbcafe8);
  uVar7 = *(undefined8 *)(*(long *)(lVar9 + _DAT_113039058) + _DAT_113038f68);
  func_0x000107c61174();
  uVar4 = uVar7;
  func_0x0001000bda74();
  func_0x000107c61170(uVar7);
  lVar8 = 0;
  func_0x000103461258();
  lVar9 = lVar8;
  func_0x000107c613fc();
  *(undefined8 *)(lVar9 + 0x58) = 0;
  *(undefined8 *)(lVar9 + 0x60) = 0;
  *(undefined1 *)(lVar9 + 0x68) = 1;
  *(undefined8 *)(lVar9 + 0x10) = uVar5;
  *(undefined8 *)(lVar9 + 0x18) = uVar2;
  *(code **)(lVar9 + 0x20) = pcVar6;
  func_0x000100420238(lVar1 + lVar3,lVar9 + 0x28);
  *(undefined8 *)(lVar9 + 0x50) = uVar4;
  param_1[3] = lVar8;
  param_1[4] = (long)&PTR_DAT_110658a28;
  *param_1 = lVar9;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar2);
  return;
}



/* Entry: 10345fc70; end: 10345fc9f;  */

void FUN_10345fc70(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ad2c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = puVar1;
  return;
}



/* Entry: 10345fca0; end: 10345fcaf;  */

void FUN_10345fca0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10345fcb0; end: 10345fcd3;  */

void FUN_10345fcb0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10345fcd4; end: 10345fcdf;  */

void FUN_10345fcd4(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10345fce0; end: 10345fd17;  */

void FUN_10345fce0(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ad2c8;
  func_0x000107c610f8();
  func_0x000107c46d18();
  *param_1 = puVar1;
  return;
}



/* Entry: 10345fd18; end: 10345fdcf;  */

void FUN_10345fd18(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10345fdd0; end: 10345fde3;  */

void FUN_10345fdd0(long param_1,long param_2)

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


