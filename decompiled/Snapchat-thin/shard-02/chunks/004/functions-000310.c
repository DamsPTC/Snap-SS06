/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101d511d4; end: 101d51213;  */

void FUN_101d511d4(undefined8 *param_1)

{
  long unaff_x20;
  long lVar1;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  **(undefined8 **)(*(long *)(lVar1 + 0x40) + 0x28) = *param_1;
  func_0x000107c61434();
  func_0x000107c61450(lVar1);
  return;
}



/* Entry: 101d51214; end: 101d5122b;  */

void FUN_101d51214(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101d4fe20(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 101d5122c; end: 101d5126b;  */

void FUN_101d5122c(undefined8 *param_1)

{
  undefined1 uVar1;
  long unaff_x20;
  long lVar2;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = (undefined1)*param_1;
  func_0x000107c3ebcc();
  **(undefined1 **)(*(long *)(lVar2 + 0x40) + 0x28) = uVar1;
  func_0x000107c61450(lVar2);
  return;
}



/* Entry: 101d5126c; end: 101d5129b;  */

void FUN_101d5126c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101d50580(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101d5129c; end: 101d512bb;  */

long FUN_101d5129c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x38);
  *(long *)(param_1 + 0x38) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 0x20,param_2 + 0x20);
  return param_1 + 0x20;
}



/* Entry: 101d512bc; end: 101d512e3;  */

void FUN_101d512bc(void)

{
  FUN_101d4ec20();
  return;
}



/* Entry: 101d512e4; end: 101d5133b;  */

void FUN_101d512e4(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  if (*(long *)(*unaff_x22 + 0x30) != 0) {
    func_0x000107c61654();
  }
                    /* WARNING: Could not recover jumptable at 0x000101d4eaac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101d5133c; end: 101d5139f;  */

void FUN_101d5133c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f00eb00);
  uVar2 = uVar1;
  func_0x000107b50e0c();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 101d513a0; end: 101d513d3;  */

void FUN_101d513a0(void)

{
  undefined8 uStack_28;
  
  func_0x0001000d224c(&uStack_28);
  func_0x000107c61574(uStack_28);
  return;
}



/* Entry: 101d513d4; end: 101d5144f; -[_TtC27SCMemPlatBackupServicesImpl20MemPlatBackupManager init] */

void FUN_101d513d4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMemPlatBackupServicesImpl.MemPlatBackupManager",0x30,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101d51400);
  (*pcVar1)();
}



/* Entry: 101d51450; end: 101d514b7; -[_TtC27SCMemPlatBackupServicesImpl20MemPlatBackupManager .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101d5146c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d5148c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d51470) */
/* WARNING: Removing unreachable block (ram,0x000101d51490) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d51450(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e28780));
  return;
}



/* Entry: 101d514b8; end: 101d5163f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101d514b8(undefined8 param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  func_0x000107c613fc();
  uVar5 = *(undefined8 *)(param_3 + _DAT_1130806b8);
  uVar4 = *(undefined8 *)(param_2 + _DAT_11303e6c0);
  uVar6 = *(undefined8 *)(param_4 + _DAT_112ff4aa8);
  puVar1 = &UNK_11047bd70;
  func_0x000107c613fc(&UNK_11047bd70,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  *(undefined8 *)(puVar1 + 0x18) = uVar4;
  *(undefined8 *)(puVar1 + 0x20) = uVar6;
  *(undefined8 *)(puVar1 + 0x28) = uVar5;
  func_0x0001000285a8(0x112e287d0,&UNK_10da10c10);
  func_0x000107c613fc();
  func_0x000107c61580(uVar5,2);
  func_0x000107c61580(uVar4,2);
  func_0x000107c61580(uVar6,2);
  func_0x000107c61174(param_5);
  pcVar2 = FUN_101d517c0;
  func_0x0001000bdd8c(FUN_101d517c0,puVar1);
  uVar3 = 0;
  func_0x0001002c8b54(0);
  func_0x000107c610f8();
  func_0x00010078e7a8(pcVar2,uVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_5);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(uVar4);
  *(code **)(unaff_x20 + 0x10) = pcVar2;
  return unaff_x20;
}



/* Entry: 101d51640; end: 101d517bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d51640(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  
  uVar6 = *(undefined8 *)(param_2 + _DAT_112fd9138);
  lVar1 = 0;
  func_0x000101d51430();
  lVar2 = lVar1;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112e28780) = param_5;
  *(undefined8 *)(lVar2 + _DAT_112e28788) = param_3;
  *(undefined8 *)(lVar2 + _DAT_112e287a0) = uVar6;
  func_0x0001000285a8(0x112e04c88,&UNK_10d9d8600);
  func_0x000107c613fc();
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(uVar6);
  pcVar3 = FUN_101d5133c;
  func_0x0001000bdd8c(FUN_101d5133c,0);
  *(code **)(lVar2 + _DAT_112e28790) = pcVar3;
  func_0x000107c60f34();
  *(code **)(lVar2 + _DAT_112e28798) = pcVar3;
  plVar4 = &lStack_60;
  lStack_60 = lVar2;
  lStack_58 = lVar1;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c61174();
  func_0x0001000d224c(&uStack_68);
  uVar5 = uStack_68;
  func_0x000107c614f0(uStack_68);
  func_0x000107c6157c(uVar6);
  func_0x00010090569c(0x101d518b8,uVar6,uVar5);
  func_0x000107c615e8(uStack_68);
  func_0x000107c61574(uVar6);
  func_0x000107c61170(plVar4);
  *param_1 = (long)plVar4;
  return;
}



/* Entry: 101d517c0; end: 101d517cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d517c0(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long *plVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar7 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112fd9138);
  lVar2 = 0;
  func_0x000101d51430(0,uVar6,*(undefined8 *)(unaff_x20 + 0x20));
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112e28780) = uVar1;
  *(undefined8 *)(lVar3 + _DAT_112e28788) = uVar6;
  *(undefined8 *)(lVar3 + _DAT_112e287a0) = uVar7;
  func_0x0001000285a8(0x112e04c88,&UNK_10d9d8600);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar7);
  pcVar4 = FUN_101d5133c;
  func_0x0001000bdd8c(FUN_101d5133c,0);
  *(code **)(lVar3 + _DAT_112e28790) = pcVar4;
  func_0x000107c60f34();
  *(code **)(lVar3 + _DAT_112e28798) = pcVar4;
  plVar5 = &lStack_60;
  lStack_60 = lVar3;
  lStack_58 = lVar2;
  func_0x000107c61154(plVar5,PTR_s_init_1125d9248);
  func_0x000107c61174();
  func_0x0001000d224c(&uStack_68);
  uVar6 = uStack_68;
  func_0x000107c614f0(uStack_68);
  func_0x000107c6157c(uVar7);
  func_0x00010090569c(0x101d518b8,uVar7,uVar6);
  func_0x000107c615e8(uStack_68);
  func_0x000107c61574(uVar7);
  func_0x000107c61170(plVar5);
  *param_1 = (long)plVar5;
  return;
}



/* Entry: 101d517cc; end: 101d51807;  */

void FUN_101d517cc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101d51808; end: 101d5187f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101d51808(void)

{
  long unaff_x20;
  undefined8 uVar1;
  long lStack_28;
  
  uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112ff4d20);
  func_0x000107c6157c(uVar1);
  func_0x000104875e28(&lStack_28);
  if (lStack_28 != 0) {
    func_0x000107c615e8();
    func_0x0001000d224c(&lStack_28);
    func_0x000107c42870(lStack_28);
    func_0x000107c615e8(lStack_28);
  }
  func_0x000107c61574(uVar1);
  return 0;
}



/* Entry: 101d51880; end: 101d51887;  */

void FUN_101d51880(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101d51888; end: 101d518ab;  */

void FUN_101d51888(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101d518ac; end: 101d518c3;  */

void FUN_101d518ac(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 101d518c4; end: 101d518e3;  */

void FUN_101d518c4(void)

{
  func_0x000107c61170();
                    /* WARNING: Could not recover jumptable at 0x00010bdbff8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocObject_11034f218)();
  return;
}



/* Entry: 101d518e4; end: 101d518f7;  */

void FUN_101d518e4(void)

{
  return;
}



/* Entry: 101d518f8; end: 101d51997;  */

void FUN_101d518f8(undefined8 *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  
  uVar3 = *unaff_x20;
  puVar1 = &UNK_11047be88;
  func_0x000107c613fc(&UNK_11047be88,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar3;
  uVar3 = 0x112d62380;
  func_0x0001000285a8(0x112d62380,&UNK_10d990b80);
  func_0x000107c613fc();
  pcVar2 = FUN_101d51998;
  func_0x0001000bdd8c(FUN_101d51998,puVar1,uVar3);
  uVar3 = 0;
  func_0x000100289b98(0);
  func_0x000107c610f8();
  func_0x000100780f90(pcVar2,uVar3);
  *param_1 = pcVar2;
  return;
}



/* Entry: 101d51998; end: 101d5199b;  */

void FUN_101d51998(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5f804();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  (**(code **)(lVar4 + 0x68))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO11unspecifiedyA2EmFWC_11034f7d8,lVar1);
  puVar2 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  uVar3 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f00ebb0);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar3);
  (**(code **)(lVar4 + 8))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  *param_1 = puVar2;
  return;
}



/* Entry: 101d5199c; end: 101d51ceb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101d5199c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  code *pcVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000107c613fc();
  uVar6 = *(undefined8 *)(param_2 + _DAT_112fd9c78);
  func_0x0001000285a8(0x112e28960,&UNK_10da10ca0);
  func_0x000107c6157c(uVar6);
  uVar3 = param_3;
  func_0x000107c41258();
  func_0x000107c61180();
  uVar1 = uVar3;
  func_0x0001000bda74();
  func_0x000107c61170(uVar3);
  func_0x0001000d224c(auStack_88);
  puVar2 = auStack_88;
  func_0x0001000a8868(puVar2,uStack_70);
  uVar3 = 3;
  func_0x00010043c5c0(3,0xd,0,uStack_70,uStack_68,puVar2);
  func_0x0001000834e4(auStack_88);
  uVar7 = *(undefined8 *)(param_5 + _DAT_11303e6c0);
  puVar4 = &UNK_11047bf48;
  func_0x000107c613fc(&UNK_11047bf48,0x30,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar6;
  *(undefined8 *)(puVar4 + 0x18) = uVar1;
  *(undefined8 *)(puVar4 + 0x20) = uVar7;
  *(undefined8 *)(puVar4 + 0x28) = uVar3;
  func_0x0001000285a8(0x112e28968,&UNK_10da10ca8);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar7);
  pcVar5 = FUN_101d51d74;
  func_0x0001000bdd8c(FUN_101d51d74,puVar4);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  *(code **)(unaff_x20 + 0x10) = pcVar5;
  return unaff_x20;
}



/* Entry: 101d51cec; end: 101d51d73;  */

/* WARNING: Possible PIC construction at 0x000101d51d48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d51d58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d51d4c) */
/* WARNING: Removing unreachable block (ram,0x000101d51d5c) */

void FUN_101d51cec(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  func_0x000101d51f28();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = param_2;
  *(undefined8 *)(lVar2 + 0x18) = param_3;
  *(undefined8 *)(lVar2 + 0x20) = param_4;
  *(undefined8 *)(lVar2 + 0x28) = param_5;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_11047bfa0;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 101d51d74; end: 101d51d7f;  */

/* WARNING: Possible PIC construction at 0x000101d51d48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d51d58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d51d4c) */
/* WARNING: Removing unreachable block (ram,0x000101d51d5c) */

void FUN_101d51d74(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar5 = 0;
  func_0x000101d51f28();
  lVar6 = lVar5;
  func_0x000107c613fc();
  *(undefined8 *)(lVar6 + 0x10) = uVar1;
  *(undefined8 *)(lVar6 + 0x18) = uVar3;
  *(undefined8 *)(lVar6 + 0x20) = uVar2;
  *(undefined8 *)(lVar6 + 0x28) = uVar4;
  param_1[3] = lVar5;
  param_1[4] = (long)&PTR_DAT_11047bfa0;
  *param_1 = lVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101d51d80; end: 101d51dbb;  */

void FUN_101d51d80(void)

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



/* Entry: 101d51dbc; end: 101d51df3;  */

void FUN_101d51dbc(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x0001002c57bc(0);
  func_0x000107c610f8();
  func_0x000107c6157c(uVar1);
  func_0x000103a6acdc();
  return;
}



/* Entry: 101d51df4; end: 101d51dfb;  */

void FUN_101d51df4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101d51dfc; end: 101d51e9b;  */

void FUN_101d51dfc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101d51e9c; end: 101d51ee7;  */

void FUN_101d51e9c(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x0001002c57bc(0);
  func_0x000107c610f8();
  func_0x000107c6157c();
  func_0x000103a6acdc();
  *param_1 = uVar1;
  return;
}



/* Entry: 101d51ee8; end: 101d51eeb;  */

/* WARNING: Possible PIC construction at 0x000101d51d48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d51d58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d51d4c) */
/* WARNING: Removing unreachable block (ram,0x000101d51d5c) */

void FUN_101d51ee8(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar5 = 0;
  func_0x000101d51f28();
  lVar6 = lVar5;
  func_0x000107c613fc();
  *(undefined8 *)(lVar6 + 0x10) = uVar1;
  *(undefined8 *)(lVar6 + 0x18) = uVar3;
  *(undefined8 *)(lVar6 + 0x20) = uVar2;
  *(undefined8 *)(lVar6 + 0x28) = uVar4;
  param_1[3] = lVar5;
  param_1[4] = (long)&PTR_DAT_11047bfa0;
  *param_1 = lVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101d51eec; end: 101d51f47;  */

void FUN_101d51eec(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101d51f48; end: 101d52193;  */

undefined8 FUN_101d51f48(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uStack_70;
  long lStack_68;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x0001000d224c(&uStack_70);
  uVar4 = uStack_70;
  uVar3 = uStack_70;
  func_0x000107c614f0(uStack_70);
  (**(code **)(lStack_68 + 0x20))(0,uVar3,lStack_68);
  func_0x000107c615e8(uVar4);
  func_0x0001000285a8(0x112e28af8,&UNK_10da13490);
  func_0x000107c613fc();
  lVar1 = 0;
  func_0x00010095c380();
  func_0x0001000d224c(&uStack_70);
  uVar4 = uStack_70;
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar2 = &UNK_11047bfc0;
  func_0x000107c613fc(&UNK_11047bfc0,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar6;
  *(long *)(puVar2 + 0x18) = lVar1;
  *(undefined8 *)(puVar2 + 0x20) = param_1;
  uVar3 = 0;
  FUN_101d53e90(0,0x112d69830,&PTR_PTR_1126a6700);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(lVar1);
  func_0x000107c61434(param_1);
  func_0x00010488b6b4(FUN_101d52a00,puVar2,uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61574(puVar2);
  uVar6 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c6157c(uVar6);
  func_0x000107c61574(lVar1);
  func_0x0001000d224c(&uStack_70);
  puVar2 = &UNK_11047bfe8;
  func_0x000107c613fc(&UNK_11047bfe8,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  uVar4 = 0x112d550a0;
  func_0x0001000285a8(0x112d550a0,&UNK_10d91c290);
  uVar3 = uStack_70;
  func_0x0001048898b8(uStack_70,1,FUN_101d52a0c,puVar2,uVar4);
  func_0x000107c61574(uVar6);
  func_0x000107c61170(uStack_70);
  func_0x000107c61574(puVar2);
  func_0x000107c61580(uVar5,2);
  uVar6 = 0;
  func_0x000100775264(0,1,0x101d52a24,uVar5,uVar4);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(uVar5);
  uVar4 = 0;
  func_0x000104889f74(0,1,0x101d52a3c,uVar5);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(uVar5);
  return uVar4;
}



/* Entry: 101d52194; end: 101d52213;  */

undefined8 FUN_101d52194(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    FUN_101d52214(uVar1);
    func_0x000107c61574(param_2);
  }
  return uVar1;
}



/* Entry: 101d52214; end: 101d524a7;  */

undefined8 **** FUN_101d52214(ulong param_1)

{
  undefined8 ***pppuVar1;
  code *pcVar2;
  undefined8 ****ppppuVar3;
  undefined8 ****ppppuVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 ***pppuStack_68;
  
  func_0x0001000285a8(0x112e28b00,&UNK_10da10d68);
  ppppuVar3 = (undefined8 ****)PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001830b8();
  ppppuVar4 = &pppuStack_68;
  pppuStack_68 = ppppuVar3;
  func_0x000104888f7c(ppppuVar4);
  func_0x000107c6142c(ppppuVar3);
  if (param_1 >> 0x3e == 0) {
    uVar10 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar10 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar10 = param_1;
    }
    func_0x000107c60480();
  }
  if (uVar10 != 0) {
    if ((long)uVar10 < 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101d524a8);
      (*pcVar2)();
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      ppppuVar3 = ppppuVar4;
      puVar12 = (undefined8 *)(param_1 + 0x20);
      do {
        uVar6 = *puVar12;
        func_0x000107c61174();
        func_0x0001000d224c(&pppuStack_68);
        pppuVar1 = pppuStack_68;
        puVar7 = &UNK_11047bfe8;
        func_0x000107c613fc(&UNK_11047bfe8,0x18,7);
        func_0x000107c61644(puVar7 + 0x10);
        puVar8 = &UNK_11047c038;
        func_0x000107c613fc(&UNK_11047c038,0x20,7);
        *(undefined **)(puVar8 + 0x10) = puVar7;
        *(undefined8 *)(puVar8 + 0x18) = uVar6;
        func_0x000107c61174(uVar6);
        uVar9 = 0x112d550a0;
        func_0x0001000285a8(0x112d550a0,&UNK_10d91c290);
        ppppuVar4 = (undefined8 ****)pppuVar1;
        func_0x0001048898b8(pppuVar1,1,FUN_101d53f00,puVar8,uVar9);
        func_0x000107c61574(ppppuVar3);
        func_0x000107c61170(pppuVar1);
        func_0x000107c61574(puVar8);
        func_0x000107c61170(uVar6);
        uVar10 = uVar10 - 1;
        ppppuVar3 = ppppuVar4;
        puVar12 = puVar12 + 1;
      } while (uVar10 != 0);
    }
    else {
      uVar11 = 0;
      ppppuVar3 = ppppuVar4;
      do {
        uVar5 = uVar11;
        FUN_101d530d8(uVar11,param_1,&PTR_PTR_1126bc7d8,0x112e28b08);
        uVar11 = uVar11 + 1;
        func_0x0001000d224c(&pppuStack_68);
        pppuVar1 = pppuStack_68;
        puVar7 = &UNK_11047bfe8;
        func_0x000107c613fc(&UNK_11047bfe8,0x18,7);
        func_0x000107c61644(puVar7 + 0x10);
        puVar8 = &UNK_11047c010;
        func_0x000107c613fc(&UNK_11047c010,0x20,7);
        *(undefined **)(puVar8 + 0x10) = puVar7;
        *(ulong *)(puVar8 + 0x18) = uVar5;
        func_0x000107c615f0(uVar5);
        uVar9 = 0x112d550a0;
        func_0x0001000285a8(0x112d550a0,&UNK_10d91c290);
        ppppuVar4 = (undefined8 ****)pppuVar1;
        func_0x0001048898b8(pppuVar1,1,FUN_101d533e4,puVar8,uVar9);
        func_0x000107c61574(ppppuVar3);
        func_0x000107c61170(pppuVar1);
        func_0x000107c61574(puVar8);
        func_0x000107c615e8(uVar5);
        ppppuVar3 = ppppuVar4;
      } while (uVar10 != uVar11);
    }
  }
  return ppppuVar4;
}



/* Entry: 101d524a8; end: 101d52527;  */

void FUN_101d524a8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  long lStack_48;
  
  uVar2 = *param_2;
  func_0x0001000d224c(&uStack_50);
  uVar1 = uStack_50;
  func_0x000107c614f0(uStack_50);
  (**(code **)(lStack_48 + 0x20))(1,uVar1,lStack_48);
  func_0x000107c615e8(uStack_50);
  *param_1 = uVar2;
  func_0x000107c61434(uVar2);
  return;
}



/* Entry: 101d52528; end: 101d525af;  */

void FUN_101d52528(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x0001000d224c(&uStack_40);
  uVar1 = uStack_40;
  func_0x000107c614f0(uStack_40);
  (**(code **)(lStack_38 + 0x20))(2,uVar1,lStack_38);
  func_0x000107c615e8(uStack_40);
  func_0x0001000285a8(0x112e28b00,&UNK_10da10d68);
  func_0x00010488904c(param_1);
  return;
}



/* Entry: 101d525b0; end: 101d525cf;  */

void FUN_101d525b0(void)

{
  FUN_101d51f48();
  return;
}



/* Entry: 101d525d0; end: 101d52657;  */

undefined8 FUN_101d525d0(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    param_3 = 0;
  }
  else {
    FUN_101d52658(param_3,uVar1);
    func_0x000107c61574(param_2);
  }
  return param_3;
}



/* Entry: 101d52658; end: 101d5277f;  */

undefined8 FUN_101d52658(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uStack_48;
  
  uVar1 = param_1;
  FUN_101d52a54();
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar2 = &UNK_11047c060;
  func_0x000107c613fc(&UNK_11047c060,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = uVar4;
  func_0x000107c6157c(uVar4);
  func_0x000107c61174(param_1);
  uVar3 = 0;
  func_0x000104889f74(0,1,0x101d53428,puVar2);
  func_0x000107c61574(uVar1);
  func_0x000107c61574(puVar2);
  func_0x0001000d224c(&uStack_48);
  puVar2 = &UNK_11047c088;
  func_0x000107c613fc(&UNK_11047c088,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  func_0x000107c61434(param_2);
  uVar1 = 0x112d550a0;
  func_0x0001000285a8(0x112d550a0,&UNK_10d91c290);
  uVar4 = uStack_48;
  func_0x000100775264(uStack_48,1,0x101d53440,puVar2,uVar1);
  func_0x000107c61574(uVar3);
  func_0x000107c61170(uStack_48);
  func_0x000107c61574(puVar2);
  return uVar4;
}



/* Entry: 101d52780; end: 101d529ff;  */

void FUN_101d52780(undefined1 *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puStack_68;
  
  func_0x0001000d224c(&puStack_68);
  puVar9 = puStack_68;
  if (puStack_68 == (undefined *)0x0) {
    FUN_101d53a7c();
    puVar9 = &UNK_11072c108;
    func_0x000107c613f8(&UNK_11072c108,param_1,0,0);
    *param_1 = 1;
    func_0x00010488ade0();
    func_0x000107c614ac(puVar9);
  }
  else {
    if (*(long *)(param_3 + 0x10) == 0) {
      puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000100b60084(&puStack_68);
    }
    else {
      func_0x000107c5fc48(param_3,PTR___sSSN_11034da80);
      puVar12 = puVar9;
      func_0x000107c431d0();
      func_0x000107c61180();
      func_0x000107c61170(param_3);
      uVar4 = 0;
      FUN_101d53e90(0,0x112e28b08,&PTR_PTR_1126bc7d8);
      puVar5 = puVar12;
      func_0x000107c5fc54(puVar12,uVar4);
      func_0x000107c61170(puVar12);
      puVar12 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
      if ((ulong)puVar5 >> 0x3e == 0) {
        puVar10 = *(undefined **)(puVar12 + 0x10);
      }
      else {
        puVar10 = puVar12;
        if ((undefined *)0x7fffffffffffffff < puVar5) {
          puVar10 = puVar5;
        }
        func_0x000107c60480();
      }
      puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (puVar10 != (undefined *)0x0) {
        puVar8 = (undefined *)0x0;
        do {
          while( true ) {
            if (((ulong)puVar5 & 0xc000000000000001) == 0) {
              if (*(undefined **)(puVar12 + 0x10) <= puVar8) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x101d5299c);
                (*pcVar3)();
              }
              puVar6 = *(undefined **)(puVar5 + (long)puVar8 * 8 + 0x20);
              func_0x000107c61174();
            }
            else {
              puVar6 = puVar8;
              FUN_101d530d8(puVar8,puVar5,&PTR_PTR_1126bc7d8,0x112e28b08);
            }
            puVar1 = puVar8 + 1;
            if (SCARRY8((long)puVar8,1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101d52998);
              (*pcVar3)();
            }
            puVar7 = puVar6;
            func_0x000107c44b8c();
            if (((ulong)puVar7 & 1) != 0) break;
            func_0x000107c61170(puVar6);
            puVar8 = puVar8 + 1;
            if (puVar1 == puVar10) goto LAB_101d529b8;
          }
          puVar8 = puVar11;
          func_0x000107c61558();
          puStack_68 = puVar11;
          if (((ulong)puVar8 & 1) == 0) {
            FUN_101d53294(0,*(long *)(puVar11 + 0x10) + 1,1);
          }
          uVar2 = *(ulong *)(puStack_68 + 0x10);
          if (*(ulong *)(puStack_68 + 0x18) >> 1 <= uVar2) {
            FUN_101d53294(1 < *(ulong *)(puStack_68 + 0x18),uVar2 + 1,1);
          }
          *(ulong *)(puStack_68 + 0x10) = uVar2 + 1;
          *(undefined **)(puStack_68 + uVar2 * 8 + 0x20) = puVar6;
          puVar8 = puVar1;
          puVar11 = puStack_68;
        } while (puVar1 != puVar10);
      }
LAB_101d529b8:
      func_0x000107c6142c(puVar5);
      puStack_68 = puVar11;
      func_0x000100b60084(&puStack_68);
      func_0x000107c61574(puVar11);
    }
    func_0x000107c615e8(puVar9);
  }
  return;
}



/* Entry: 101d52a00; end: 101d52a0b;  */

void FUN_101d52a00(void)

{
  undefined *puVar1;
  ulong uVar2;
  code *pcVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long unaff_x20;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puStack_68;
  
  puVar4 = *(undefined1 **)(unaff_x20 + 0x10);
  lVar11 = *(long *)(unaff_x20 + 0x20);
  func_0x0001000d224c(&puStack_68);
  puVar10 = puStack_68;
  if (puStack_68 == (undefined *)0x0) {
    FUN_101d53a7c();
    puVar10 = &UNK_11072c108;
    func_0x000107c613f8(&UNK_11072c108,puVar4,0,0);
    *puVar4 = 1;
    func_0x00010488ade0();
    func_0x000107c614ac(puVar10);
  }
  else {
    if (*(long *)(lVar11 + 0x10) == 0) {
      puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000100b60084(&puStack_68);
    }
    else {
      func_0x000107c5fc48(lVar11,PTR___sSSN_11034da80);
      puVar14 = puVar10;
      func_0x000107c431d0();
      func_0x000107c61180();
      func_0x000107c61170(lVar11);
      uVar5 = 0;
      FUN_101d53e90(0,0x112e28b08,&PTR_PTR_1126bc7d8);
      puVar6 = puVar14;
      func_0x000107c5fc54(puVar14,uVar5);
      func_0x000107c61170(puVar14);
      puVar14 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
      if ((ulong)puVar6 >> 0x3e == 0) {
        puVar12 = *(undefined **)(puVar14 + 0x10);
      }
      else {
        puVar12 = puVar14;
        if ((undefined *)0x7fffffffffffffff < puVar6) {
          puVar12 = puVar6;
        }
        func_0x000107c60480();
      }
      puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (puVar12 != (undefined *)0x0) {
        puVar9 = (undefined *)0x0;
        do {
          while( true ) {
            if (((ulong)puVar6 & 0xc000000000000001) == 0) {
              if (*(undefined **)(puVar14 + 0x10) <= puVar9) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x101d5299c);
                (*pcVar3)();
              }
              puVar7 = *(undefined **)(puVar6 + (long)puVar9 * 8 + 0x20);
              func_0x000107c61174();
            }
            else {
              puVar7 = puVar9;
              FUN_101d530d8(puVar9,puVar6,&PTR_PTR_1126bc7d8,0x112e28b08);
            }
            puVar1 = puVar9 + 1;
            if (SCARRY8((long)puVar9,1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101d52998);
              (*pcVar3)();
            }
            puVar8 = puVar7;
            func_0x000107c44b8c();
            if (((ulong)puVar8 & 1) != 0) break;
            func_0x000107c61170(puVar7);
            puVar9 = puVar9 + 1;
            if (puVar1 == puVar12) goto LAB_101d529b8;
          }
          puVar9 = puVar13;
          func_0x000107c61558();
          puStack_68 = puVar13;
          if (((ulong)puVar9 & 1) == 0) {
            FUN_101d53294(0,*(long *)(puVar13 + 0x10) + 1,1);
          }
          uVar2 = *(ulong *)(puStack_68 + 0x10);
          if (*(ulong *)(puStack_68 + 0x18) >> 1 <= uVar2) {
            FUN_101d53294(1 < *(ulong *)(puStack_68 + 0x18),uVar2 + 1,1);
          }
          *(ulong *)(puStack_68 + 0x10) = uVar2 + 1;
          *(undefined **)(puStack_68 + uVar2 * 8 + 0x20) = puVar7;
          puVar9 = puVar1;
          puVar13 = puStack_68;
        } while (puVar1 != puVar12);
      }
LAB_101d529b8:
      func_0x000107c6142c(puVar6);
      puStack_68 = puVar13;
      func_0x000100b60084(&puStack_68);
      func_0x000107c61574(puVar13);
    }
    func_0x000107c615e8(puVar10);
  }
  return;
}



/* Entry: 101d52a0c; end: 101d52a53;  */

void FUN_101d52a0c(void)

{
  FUN_101d52194();
  return;
}



/* Entry: 101d52a54; end: 101d52c33;  */

undefined * FUN_101d52a54(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined *puStack_68;
  
  uVar2 = param_1;
  func_0x000107c44b8c();
  if ((int)uVar2 == 0) {
    puVar4 = (undefined1 *)0x112e28b00;
    func_0x0001000285a8(0x112e28b00,&UNK_10da10d68);
    FUN_101d53a7c();
    puVar5 = &UNK_11072c108;
    func_0x000107c613f8(&UNK_11072c108,puVar4,0,0);
    *puVar4 = 3;
    puVar6 = puVar5;
    func_0x00010488904c();
    func_0x000107c614ac(puVar5);
  }
  else {
    uVar2 = param_1;
    FUN_101d5353c(param_1);
    func_0x0001000d224c(&puStack_68);
    puVar1 = puStack_68;
    puVar5 = &UNK_11047bfe8;
    puVar3 = puVar5;
    func_0x000107c613fc(&UNK_11047bfe8,0x18,7);
    func_0x000107c61644(puVar3 + 0x10);
    uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
    puVar6 = &UNK_11047c0b0;
    func_0x000107c613fc(&UNK_11047c0b0,0x28,7);
    *(undefined8 *)(puVar6 + 0x10) = uVar7;
    *(undefined **)(puVar6 + 0x18) = puVar3;
    *(undefined8 *)(puVar6 + 0x20) = param_1;
    func_0x000107c6157c(uVar7);
    func_0x000107c61174(param_1);
    puVar3 = puVar1;
    func_0x000104889f74(puVar1,1,0x101d53abc,puVar6);
    func_0x000107c61574(uVar2);
    func_0x000107c61170(puVar1);
    func_0x000107c61574(puVar6);
    func_0x0001000d224c(&puStack_68);
    func_0x000107c613fc(&UNK_11047bfe8,0x18,7);
    func_0x000107c61644(puVar5 + 0x10);
    uVar2 = 0x112d550a0;
    func_0x0001000285a8(0x112d550a0,&UNK_10d91c290);
    puVar6 = puStack_68;
    func_0x000100775264(puStack_68,1,0x101d53ad8,puVar5,uVar2);
    func_0x000107c61574(puVar3);
    func_0x000107c61170(puStack_68);
    func_0x000107c61574(puVar5);
  }
  return puVar6;
}



/* Entry: 101d52c34; end: 101d52d1b;  */

undefined ** FUN_101d52c34(undefined *param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puStack_48;
  long lStack_40;
  undefined1 uStack_31;
  
  puStack_48 = param_1;
  func_0x000107c614b0();
  uVar1 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  puVar2 = &uStack_31;
  func_0x000107c6147c(puVar2,&puStack_48,uVar1,&UNK_11072c108,6);
  if (((ulong)puVar2 & 1) != 0) {
    func_0x0001000d224c(&puStack_48);
    puVar4 = puStack_48;
    puVar3 = puStack_48;
    func_0x000107c614f0(puStack_48);
    (**(code **)(lStack_40 + 0x18))(uStack_31,puVar3,lStack_40);
    func_0x000107c615e8(puVar4);
  }
  func_0x0001000285a8(0x112e28b00,&UNK_10da10d68);
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001830b8();
  ppuVar5 = &puStack_48;
  puStack_48 = puVar4;
  func_0x000104888f7c(ppuVar5);
  func_0x000107c6142c(puVar4);
  return ppuVar5;
}



/* Entry: 101d52d1c; end: 101d52dbf;  */

void FUN_101d52d1c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x21;
  undefined8 uStack_38;
  
  uVar3 = *param_2;
  func_0x000107c61434(param_3);
  func_0x000107c61434(uVar3);
  uVar2 = param_3;
  func_0x000107c61558(param_3);
  uStack_38 = param_3;
  FUN_101d53808(uVar3,&UNK_101391c9c,0,uVar2,&uStack_38);
  if (unaff_x21 == 0) {
    func_0x000107c6142c(uVar3);
    *param_1 = uStack_38;
    return;
  }
  func_0x000107c6142c(uVar3);
  func_0x000107c61574(uStack_38);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101d52dc0);
  (*pcVar1)();
}



/* Entry: 101d52dc0; end: 101d52ebb;  */

undefined8 FUN_101d52dc0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  long lStack_58;
  undefined1 uStack_41;
  
  uStack_60 = param_1;
  func_0x000107c614b0();
  uVar1 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  puVar2 = &uStack_41;
  func_0x000107c6147c(puVar2,&uStack_60,uVar1,&UNK_11072c108,6);
  if (((ulong)puVar2 & 1) != 0) {
    func_0x0001000d224c(&uStack_60);
    uVar1 = uStack_60;
    uVar3 = uStack_60;
    func_0x000107c614f0(uStack_60);
    (**(code **)(lStack_58 + 0x18))(uStack_41,uVar3,lStack_58);
    func_0x000107c615e8(uVar1);
  }
  func_0x000107c61428(param_3 + 0x10,&uStack_60,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 == 0) {
    param_4 = 0;
  }
  else {
    FUN_101d52ebc(param_4);
    func_0x000107c61574(param_3);
  }
  return param_4;
}



/* Entry: 101d52ebc; end: 101d52fdf;  */

undefined * FUN_101d52ebc(undefined *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x000107c5b2d0();
  func_0x000107c61180();
  if (param_1 == (undefined *)0x0) {
    puVar1 = (undefined1 *)0x112e28b20;
    func_0x0001000285a8(0x112e28b20,&UNK_10da10d70);
    FUN_101d53a7c();
    puVar2 = &UNK_11072c108;
    func_0x000107c613f8(&UNK_11072c108,puVar1,0,0);
    *puVar1 = 2;
    puVar3 = puVar2;
    func_0x00010488904c();
    func_0x000107c614ac(puVar2);
  }
  else {
    puVar3 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
    puVar2 = PTR_PTR_1126bf788;
    func_0x000107c610f8(PTR_PTR_1126bf788);
    func_0x000107c46b50();
    func_0x0001000d224c(auStack_68);
    func_0x0001000a8868(auStack_68,uStack_50);
    (**(code **)(lStack_48 + 8))(puVar3,param_2,puVar2,uStack_50,lStack_48);
    func_0x000107c6142c(param_2);
    func_0x000107c61170(puVar2);
    func_0x0001000834e4(auStack_68);
  }
  return puVar3;
}



/* Entry: 101d52fe0; end: 101d5306b;  */

void FUN_101d52fe0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined *puVar1;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined *)*param_2;
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 == 0) {
    puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001001830b8();
  }
  else {
    FUN_101d53af0();
    func_0x000107c61574(param_3);
  }
  *param_1 = puVar1;
  return;
}



/* Entry: 101d5306c; end: 101d530d7;  */

void FUN_101d5306c(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    FUN_101d53e90(0,0x112e28b08,&PTR_PTR_1126bc7d8);
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112e28b28;
  plVar5 = (long *)&UNK_10da11c10;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 101d530d8; end: 101d53293;  */

ulong FUN_101d530d8(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101d531bc);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101d531c0);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_101d53e90(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101d53294);
  (*pcVar2)();
}



/* Entry: 101d53294; end: 101d532af;  */

void FUN_101d53294(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_101d532b0();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 101d532b0; end: 101d533e3;  */

undefined * FUN_101d532b0(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101d533e4);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_1;
    FUN_101d5306c();
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_101d53e90(0,0x112e28b08,&PTR_PTR_1126bc7d8);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 101d533e4; end: 101d53457;  */

void FUN_101d533e4(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101d525d0(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 101d53458; end: 101d5353b;  */

void FUN_101d53458(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = param_1;
  func_0x000107c4c99c();
  func_0x000107c61180();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    func_0x000107c5faec();
    uVar3 = param_2;
    func_0x000107c61170(uVar1);
    uVar1 = uVar2 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar1 = param_2 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      func_0x000107c4c970();
      func_0x000107c61180();
      if (param_1 != 0) {
        uVar1 = param_1;
        func_0x000107c5faec();
        func_0x000107c61170(param_1);
        uVar1 = uVar1 & 0xffffffffffff;
        if ((uVar3 & 0x2000000000000000) != 0) {
          uVar1 = uVar3 >> 0x38 & 0xf;
        }
        if (uVar1 != 0) {
          return;
        }
        func_0x000107c6142c(param_2);
        param_2 = uVar3;
      }
    }
    func_0x000107c6142c(param_2);
  }
  return;
}



/* Entry: 101d5353c; end: 101d53807;  */

void FUN_101d5353c(ulong param_1,long param_2)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uStack_68;
  
  FUN_101d53458();
  if (param_2 == 0) {
    puVar8 = (undefined1 *)0x112e28b20;
    func_0x0001000285a8(0x112e28b20,&UNK_10da10d70);
    FUN_101d53a7c();
    puVar9 = &UNK_11072c108;
    func_0x000107c613f8(&UNK_11072c108,puVar8,0,0);
    *puVar8 = 4;
    func_0x00010488904c();
LAB_101d537b8:
    func_0x000107c614ac(puVar9);
  }
  else {
    func_0x000101d53ed0();
    uVar12 = param_1;
    func_0x000107c43e48();
    func_0x000107c61180();
    uVar3 = 0;
    func_0x000101d53e90(0,0x112e28b18,&PTR_PTR_1126dea20);
    uVar4 = uVar12;
    func_0x000107c5fc54();
    func_0x000107c61170(uVar12);
    if (uVar4 >> 0x3e == 0) {
      uVar12 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar12 = uVar4 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar4) {
        uVar12 = uVar4;
      }
      func_0x000107c60480();
    }
    if (uVar12 != 0) {
      uVar13 = 0;
      do {
        if ((uVar4 & 0xc000000000000001) == 0) {
          if (*(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101d537ec);
            (*pcVar2)();
          }
          uVar5 = *(ulong *)(uVar4 + uVar13 * 8 + 0x20);
          func_0x000107c61174();
          uVar10 = uVar3;
        }
        else {
          uVar5 = uVar13;
          uVar10 = uVar4;
          FUN_101d530d8(uVar13,uVar4,&PTR_PTR_1126dea20,0x112e28b18);
        }
        uVar1 = uVar13 + 1;
        if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101d537e8);
          (*pcVar2)();
        }
        uVar3 = uVar5;
        func_0x000107c3e234();
        func_0x000107c61180();
        if (uVar3 == 0) {
LAB_101d53760:
          puVar8 = (undefined1 *)0x112e28b20;
          func_0x0001000285a8(0x112e28b20,&UNK_10da10d70);
          FUN_101d53a7c();
          puVar9 = &UNK_11072c108;
          func_0x000107c613f8(&UNK_11072c108,puVar8,0,0);
          *puVar8 = 5;
          func_0x00010488904c();
          func_0x000107c6142c(uVar4);
          func_0x000107c61170(uVar5);
          goto LAB_101d537b8;
        }
        uVar6 = uVar3;
        func_0x000107c5faec();
        uVar11 = uVar10;
        func_0x000107c61170(uVar3);
        uVar3 = uVar6 & 0xffffffffffff;
        if ((uVar10 & 0x2000000000000000) != 0) {
          uVar3 = uVar10 >> 0x38 & 0xf;
        }
        if (uVar3 == 0) {
LAB_101d53758:
          func_0x000107c6142c(uVar10);
          goto LAB_101d53760;
        }
        uVar6 = uVar5;
        func_0x000107c42284();
        func_0x000107c61180();
        if (uVar6 == 0) goto LAB_101d53758;
        uVar7 = uVar6;
        func_0x000107c5faec();
        uVar3 = uVar11;
        func_0x000107c61170(uVar6);
        uVar6 = uVar7 & 0xffffffffffff;
        if ((uVar11 & 0x2000000000000000) != 0) {
          uVar6 = uVar11 >> 0x38 & 0xf;
        }
        if (uVar6 == 0) {
          func_0x000107c6142c(uVar10);
          uVar10 = uVar11;
          goto LAB_101d53758;
        }
        func_0x000107c61170(uVar5);
        func_0x000107c6142c(uVar11);
        func_0x000107c6142c(uVar10);
        uVar13 = uVar13 + 1;
      } while (uVar1 != uVar12);
    }
    func_0x000107c6142c(uVar4);
    func_0x0001000285a8(0x112e28b20,&UNK_10da10d70);
    uStack_68 = param_1;
    func_0x000104888f7c(&uStack_68);
  }
  return;
}



/* Entry: 101d53808; end: 101d53a7b;  */

void FUN_101d53808(long param_1,code *param_2,undefined8 param_3,uint param_4,long *param_5)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  code *pcVar6;
  bool bVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar13 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar18 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar18 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar18 = uVar18 & *(ulong *)(param_1 + 0x40);
  func_0x000107c61434();
  func_0x000107c6157c(param_3);
  lVar17 = 0;
  while( true ) {
    while (uVar18 != 0) {
      uVar11 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = lVar17 << 10 | LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) << 4;
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar11);
      uStack_80 = *puVar1;
      uVar3 = puVar1[1];
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x38) + uVar11);
      uStack_70 = *puVar1;
      uVar4 = puVar1[1];
      uStack_78 = uVar3;
      uStack_68 = uVar4;
      func_0x000107c61434(uVar3);
      func_0x000107c61434(uVar4);
      (*param_2)(&uStack_a0,&uStack_80);
      func_0x000107c6142c(uVar4);
      func_0x000107c6142c(uVar3);
      uVar4 = uStack_88;
      uVar3 = uStack_90;
      uVar5 = uStack_98;
      uVar11 = uStack_a0;
      lVar15 = *param_5;
      uVar9 = uStack_a0;
      uVar10 = uStack_98;
      func_0x000100029284();
      lVar12 = *(long *)(lVar15 + 0x10);
      uVar14 = (ulong)~(uint)uVar10 & 1;
      lVar16 = lVar12 + uVar14;
      if (SCARRY8(lVar12,uVar14)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101d53a68);
        (*pcVar6)();
      }
      if (*(long *)(lVar15 + 0x18) < lVar16) {
        func_0x0001001833c8(lVar16,param_4 & 1);
        uVar9 = uVar11;
        uVar14 = uVar5;
        func_0x000100029284();
        if (((uint)uVar10 & 1) != ((uint)uVar14 & 1)) {
          func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101d53a7c);
          (*pcVar6)();
        }
      }
      else if ((param_4 & 1) == 0) {
        func_0x000100184498();
      }
      uVar18 = uVar18 - 1 & uVar18;
      lVar16 = *param_5;
      if ((uVar10 & 1) == 0) {
        lVar12 = lVar16 + (uVar9 >> 6) * 8;
        *(ulong *)(lVar12 + 0x40) = *(ulong *)(lVar12 + 0x40) | 1L << (uVar9 & 0x3f);
        puVar2 = (ulong *)(*(long *)(lVar16 + 0x30) + uVar9 * 0x10);
        *puVar2 = uVar11;
        puVar2[1] = uVar5;
        puVar1 = (undefined8 *)(*(long *)(lVar16 + 0x38) + uVar9 * 0x10);
        *puVar1 = uVar3;
        puVar1[1] = uVar4;
        if (SCARRY8(*(long *)(lVar16 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101d53a6c);
          (*pcVar6)();
        }
        *(long *)(lVar16 + 0x10) = *(long *)(lVar16 + 0x10) + 1;
      }
      else {
        func_0x000107c6142c(uVar5);
        puVar1 = (undefined8 *)(*(long *)(lVar16 + 0x38) + uVar9 * 0x10);
        uVar8 = puVar1[1];
        *puVar1 = uVar3;
        puVar1[1] = uVar4;
        func_0x000107c6142c(uVar8);
      }
      param_4 = 1;
    }
    bVar7 = SCARRY8(lVar17,1);
    lVar17 = lVar17 + 1;
    if (bVar7) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x101d53a64);
      (*pcVar6)();
    }
    if ((long)(uVar13 + 0x3f >> 6) <= lVar17) break;
    uVar18 = ((ulong *)(param_1 + 0x40))[lVar17];
  }
  func_0x000107c61574(param_3);
  func_0x000107c61574(param_1);
  return;
}



/* Entry: 101d53a7c; end: 101d53aef;  */

void FUN_101d53a7c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e28b10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcb7508;
  func_0x000107c61520(&UNK_10dcb7508,&UNK_11072c108);
  puRam0000000112e28b10 = puVar1;
  return;
}



/* Entry: 101d53af0; end: 101d53e8f;  */

undefined * FUN_101d53af0(ulong param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  ulong *puVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001830b8();
  uVar7 = param_1;
  FUN_101d53458(param_1);
  if (param_2 != 0) {
    puVar6 = puVar5;
    func_0x000107c61558(puVar5);
    func_0x00010018433c(param_3,param_4,uVar7,param_2,puVar6);
    func_0x000107c6142c(param_2);
  }
  func_0x000107c43e48();
  func_0x000107c61180();
  uVar7 = 0;
  FUN_101d53e90(0,0x112e28b18,&PTR_PTR_1126dea20);
  uVar8 = param_1;
  func_0x000107c5fc54();
  func_0x000107c61170(param_1);
  if (uVar8 >> 0x3e == 0) {
    uVar17 = *(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar17 = uVar8 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar8) {
      uVar17 = uVar8;
    }
    func_0x000107c60480();
  }
  if (uVar17 != 0) {
    uVar16 = 0;
    do {
      if ((uVar8 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101d53e34);
          (*pcVar4)();
        }
        uVar9 = *(ulong *)(uVar8 + uVar16 * 8 + 0x20);
        func_0x000107c61174();
        uVar12 = uVar7;
      }
      else {
        uVar9 = uVar16;
        uVar12 = uVar8;
        FUN_101d530d8(uVar16,uVar8,&PTR_PTR_1126dea20,0x112e28b18);
      }
      uVar1 = uVar16 + 1;
      if (SCARRY8(uVar16,1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101d53e30);
        (*pcVar4)();
      }
      uVar15 = uVar9;
      func_0x000107c3e234();
      func_0x000107c61180();
      uVar7 = uVar12;
      if (uVar15 == 0) {
LAB_101d53bf0:
        func_0x000107c61170(uVar9);
      }
      else {
        uVar10 = uVar15;
        func_0x000107c5faec();
        uVar13 = uVar12;
        func_0x000107c61170(uVar15);
        uVar15 = uVar10 & 0xffffffffffff;
        if ((uVar12 & 0x2000000000000000) != 0) {
          uVar15 = uVar12 >> 0x38 & 0xf;
        }
        uVar7 = uVar13;
        if (uVar15 == 0) {
LAB_101d53be8:
          func_0x000107c6142c(uVar12);
          goto LAB_101d53bf0;
        }
        uVar15 = uVar9;
        func_0x000107c42284();
        func_0x000107c61180();
        uVar7 = uVar13;
        if (uVar15 == 0) goto LAB_101d53be8;
        uVar11 = uVar15;
        func_0x000107c5faec();
        uVar7 = uVar13;
        func_0x000107c61170(uVar15);
        uVar15 = uVar11 & 0xffffffffffff;
        if ((uVar13 & 0x2000000000000000) != 0) {
          uVar15 = uVar13 >> 0x38 & 0xf;
        }
        if (uVar15 == 0) {
          func_0x000107c6142c(uVar12);
          func_0x000107c6142c(uVar13);
          func_0x000107c61170(uVar9);
        }
        else {
          puVar6 = puVar5;
          func_0x000107c61558();
          uVar15 = uVar10;
          uVar14 = uVar12;
          func_0x000100029284();
          uVar7 = (ulong)~(uint)uVar14 & 1;
          lVar2 = *(long *)(puVar5 + 0x10) + uVar7;
          if (SCARRY8(*(long *)(puVar5 + 0x10),uVar7)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101d53e38);
            (*pcVar4)();
          }
          if (*(long *)(puVar5 + 0x18) < lVar2) {
            func_0x0001001833c8(lVar2,puVar6);
            uVar15 = uVar10;
            uVar7 = uVar12;
            func_0x000100029284();
            if (((uint)uVar14 & 1) != ((uint)uVar7 & 1)) {
              func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x101d53e90);
              (*pcVar4)();
            }
          }
          else {
            uVar7 = uVar14;
            if (((ulong)puVar6 & 1) == 0) {
              func_0x000100184498();
            }
          }
          if ((uVar14 & 1) == 0) {
            *(ulong *)(puVar5 + (uVar15 >> 6) * 8 + 0x40) =
                 *(ulong *)(puVar5 + (uVar15 >> 6) * 8 + 0x40) | 1L << (uVar15 & 0x3f);
            puVar3 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar15 * 0x10);
            *puVar3 = uVar10;
            puVar3[1] = uVar12;
            puVar3 = (ulong *)(*(long *)(puVar5 + 0x38) + uVar15 * 0x10);
            *puVar3 = uVar11;
            puVar3[1] = uVar13;
            func_0x000107c61170(uVar9);
            if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x101d53e3c);
              (*pcVar4)();
            }
            *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
          }
          else {
            puVar3 = (ulong *)(*(long *)(puVar5 + 0x38) + uVar15 * 0x10);
            uVar15 = puVar3[1];
            *puVar3 = uVar11;
            puVar3[1] = uVar13;
            func_0x000107c6142c(uVar12);
            func_0x000107c61170(uVar9);
            func_0x000107c6142c(uVar15);
          }
        }
      }
      uVar16 = uVar16 + 1;
    } while (uVar1 != uVar17);
  }
  func_0x000107c6142c(uVar8);
  return puVar5;
}



/* Entry: 101d53e90; end: 101d53eff;  */

void FUN_101d53e90(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101d53f00; end: 101d53f13;  */

void FUN_101d53f00(void)

{
  FUN_101d533e4();
  return;
}



/* Entry: 101d53f14; end: 101d53f23;  */

void FUN_101d53f14(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101d53f24; end: 101d53f43;  */

void FUN_101d53f24(void)

{
  func_0x000107c61168(&PTR_PTR_112e28b70);
  return;
}



/* Entry: 101d53f44; end: 101d53f93;  */

void FUN_101d53f44(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11047c1a0;
  if (lRam0000000112e28bc8 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112e28bc8 = param_1;
  }
  return;
}



/* Entry: 101d53f94; end: 101d53fd7;  */

void FUN_101d53f94(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 101d53fd8; end: 101d54023;  */

void FUN_101d53fd8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101d54024; end: 101d540ff;  */

undefined8 FUN_101d54024(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_48;
  
  uVar1 = 0x112d51a30;
  func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
  func_0x000104888f7c();
  func_0x0001000d224c(&uStack_48);
  puVar2 = &UNK_11047c2a0;
  func_0x000107c613fc(&UNK_11047c2a0,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  uVar3 = 0x112e28ca0;
  func_0x0001000285a8(0x112e28ca0,&UNK_10da10ef8);
  uVar4 = uStack_48;
  func_0x000100775264(uStack_48,1,FUN_101d54860,puVar2,uVar3);
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uStack_48);
  func_0x000107c61574(puVar2);
  return uVar4;
}



/* Entry: 101d54100; end: 101d542cf;  */

undefined8 FUN_101d54100(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  long extraout_x8;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  long lStack_68;
  
  lVar1 = 0;
  func_0x000107c5f804();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)&puStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar6 = *param_1;
  puVar2 = PTR_PTR_1126bf788;
  func_0x000107c610f8(PTR_PTR_1126bf788);
  func_0x000107c46b50();
  func_0x0001000285a8(0x112e28cb0,&UNK_10da10f00);
  func_0x000107c613fc();
  lVar3 = 0;
  func_0x00010095c380();
  func_0x0001000295c4(0);
  (**(code **)(lVar8 + 0x68))
            (lVar7,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_11034f7f0,lVar1)
  ;
  func_0x000107c61174(puVar2);
  lVar4 = lVar7;
  func_0x000107c5fff0(lVar7);
  (**(code **)(lVar8 + 8))(lVar7,lVar1);
  pcStack_70 = FUN_101d548d0;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  uStack_80 = 0x101d548e0;
  puStack_78 = &UNK_11047c2e0;
  ppuVar5 = &puStack_90;
  lStack_68 = lVar3;
  func_0x000107c60bc4(ppuVar5);
  lVar1 = lStack_68;
  func_0x000107c6157c(lVar3);
  func_0x000107c61574(lVar1);
  func_0x000107c50398(uVar6);
  func_0x000107c61170(puVar2);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(lVar4);
  uVar6 = *(undefined8 *)(lVar3 + 0x10);
  func_0x000107c6157c(uVar6);
  func_0x000107c61574(lVar3);
  return uVar6;
}



/* Entry: 101d542d0; end: 101d543c7;  */

void FUN_101d542d0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  if (param_1 == 0) {
    lVar4 = 0;
    lVar2 = 0;
    uVar5 = 0xf000000000000000;
    uVar3 = 0xf000000000000000;
  }
  else {
    lVar4 = param_1;
    func_0x000107c4a8c4();
    func_0x000107c61180();
    if (lVar4 == 0) {
      lVar2 = 0;
      uVar3 = 0xf000000000000000;
      uVar5 = param_2;
    }
    else {
      lVar2 = lVar4;
      func_0x000107c5ee30();
      uVar5 = param_2;
      func_0x000107c61170(lVar4);
      uVar3 = param_2;
    }
    lVar1 = param_1;
    func_0x000107c3ab84();
    func_0x000107c61180();
    if (lVar1 == 0) {
      lVar4 = 0;
      uVar5 = 0xf000000000000000;
    }
    else {
      lVar4 = lVar1;
      func_0x000107c5ee30();
      func_0x000107c61170(lVar1);
    }
    func_0x000107c49ce8();
  }
  uStack_58 = (undefined1)param_1;
  lStack_78 = lVar2;
  uStack_70 = uVar3;
  lStack_68 = lVar4;
  uStack_60 = uVar5;
  func_0x000100b60084(&lStack_78);
  func_0x0001000b44c0(lVar2,uVar3);
  func_0x0001000b44c0(lVar4,uVar5);
  return;
}



/* Entry: 101d543c8; end: 101d5457b;  */

undefined8 FUN_101d543c8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  long extraout_x8;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar1 = 0;
  func_0x000107c5f804();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar6 = (long)&puStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar5 = *param_1;
  func_0x0001000285a8(0x112e28c98,&UNK_10da10ee8);
  func_0x000107c613fc();
  lVar2 = 0;
  func_0x00010095c380();
  func_0x000107c5fadc(param_2,param_3);
  func_0x0001000295c4(0);
  (**(code **)(lVar7 + 0x68))
            (lVar6,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_11034f7f0,lVar1)
  ;
  lVar3 = lVar6;
  func_0x000107c5fff0(lVar6);
  (**(code **)(lVar7 + 8))(lVar6,lVar1);
  uStack_70 = 0x101d54768;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1010c8c0c;
  puStack_78 = &UNK_11047c268;
  ppuVar4 = &puStack_90;
  lStack_68 = lVar2;
  func_0x000107c60bc4(ppuVar4);
  lVar1 = lStack_68;
  func_0x000107c6157c(lVar2);
  func_0x000107c61574(lVar1);
  func_0x000107c503a4(uVar5);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(param_2);
  func_0x000107c61170(lVar3);
  uVar5 = *(undefined8 *)(lVar2 + 0x10);
  func_0x000107c6157c(uVar5);
  func_0x000107c61574(lVar2);
  return uVar5;
}



/* Entry: 101d5457c; end: 101d545cb;  */

void FUN_101d5457c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  (*pcVar1)(param_2);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 101d545cc; end: 101d5474f;  */

undefined8 FUN_101d545cc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_48;
  
  uVar1 = param_1;
  FUN_101d54024();
  func_0x0001000d224c(&uStack_48);
  puVar2 = &UNK_11047c2c8;
  func_0x000107c613fc(&UNK_11047c2c8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  func_0x000107c615f0(param_1);
  uVar3 = uStack_48;
  func_0x0001048898b8(uStack_48,1,0x101d548b8,puVar2,&UNK_11047c470);
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uStack_48);
  func_0x000107c61574(puVar2);
  return uVar3;
}



/* Entry: 101d54750; end: 101d5478b;  */

void FUN_101d54750(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101d543c8(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 101d5478c; end: 101d547a7;  */

void FUN_101d5478c(long param_1,long param_2)

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



/* Entry: 101d547a8; end: 101d5485f;  */

void FUN_101d547a8(long *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  long lStack_28;
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  uVar1 = 0;
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_3 + 0x10);
    func_0x000107c6157c(uVar1);
    func_0x000107c61574(param_3);
    func_0x0001000d224c(&lStack_28);
    func_0x000107c61574(uVar1);
    if (lStack_28 != 0) {
      *param_1 = lStack_28;
      return;
    }
  }
  func_0x000101d54878();
  func_0x000107c613f8(&UNK_11047c390,uVar1,0,0);
  func_0x000107c61654();
  return;
}



/* Entry: 101d54860; end: 101d548cf;  */

void FUN_101d54860(void)

{
  FUN_101d547a8();
  return;
}



/* Entry: 101d548d0; end: 101d548eb;  */

void FUN_101d548d0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 unaff_x20;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  if (param_1 == 0) {
    lVar4 = 0;
    lVar2 = 0;
    uVar5 = 0xf000000000000000;
    uVar3 = 0xf000000000000000;
  }
  else {
    lVar4 = param_1;
    func_0x000107c4a8c4();
    func_0x000107c61180();
    if (lVar4 == 0) {
      lVar2 = 0;
      uVar3 = 0xf000000000000000;
      uVar5 = unaff_x20;
    }
    else {
      lVar2 = lVar4;
      func_0x000107c5ee30();
      uVar5 = unaff_x20;
      func_0x000107c61170(lVar4);
      uVar3 = unaff_x20;
    }
    lVar1 = param_1;
    func_0x000107c3ab84();
    func_0x000107c61180();
    if (lVar1 == 0) {
      lVar4 = 0;
      uVar5 = 0xf000000000000000;
    }
    else {
      lVar4 = lVar1;
      func_0x000107c5ee30();
      func_0x000107c61170(lVar1);
    }
    func_0x000107c49ce8();
  }
  uStack_58 = (undefined1)param_1;
  lStack_78 = lVar2;
  uStack_70 = uVar3;
  lStack_68 = lVar4;
  uStack_60 = uVar5;
  func_0x000100b60084(&lStack_78);
  func_0x0001000b44c0(lVar2,uVar3);
  func_0x0001000b44c0(lVar4,uVar5);
  return;
}



/* Entry: 101d548ec; end: 101d5498b;  */

void FUN_101d548ec(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 101d5498c; end: 101d54aa7;  */

void FUN_101d5498c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 101d54aa8; end: 101d54ae7;  */

void FUN_101d54aa8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e28ce0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da10fa4;
  func_0x000107c61520(&UNK_10da10fa4,&UNK_11047c390);
  puRam0000000112e28ce0 = puVar1;
  return;
}



/* Entry: 101d54ae8; end: 101d54e77;  */

long FUN_101d54ae8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101d54e78; end: 101d54ebb;  */

void FUN_101d54e78(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101d54ebc; end: 101d5565f;  */

undefined **
FUN_101d54ebc(double param_1,long param_2,ulong param_3,undefined8 param_4,long param_5,uint param_6
             )

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long lVar14;
  long lVar15;
  code *pcVar16;
  uint uVar17;
  long lVar18;
  long lVar19;
  undefined *puVar20;
  long lVar21;
  undefined *puVar22;
  long lVar23;
  code *pcVar24;
  double dVar25;
  undefined1 auStack_e0 [8];
  long lStack_d8;
  ulong uStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  uint uStack_ac;
  undefined1 *puStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined *apuStack_88 [5];
  
  lVar3 = 0;
  uStack_a0 = param_4;
  lStack_98 = param_5;
  func_0x000107c5eea4();
  lVar18 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar18 + 0x40));
  puStack_a8 = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = (long)(auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  lVar4 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar21 = lVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar23 = lVar21 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = lVar23 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar19 = lVar15 - extraout_x12_02;
  lVar4 = param_2;
  func_0x000107c42950();
  func_0x000107c61180();
  if (lVar4 == 0) {
    puVar6 = (undefined1 *)0x112e28d88;
    func_0x0001000285a8(0x112e28d88,&UNK_10da11060);
    func_0x000101d55660();
    ppuVar7 = (undefined **)&UNK_11047c528;
    func_0x000107c613f8(&UNK_11047c528,puVar6,0,0);
    *puVar6 = 0;
    ppuVar8 = ppuVar7;
    func_0x00010488904c();
    func_0x000107c614ac(ppuVar7);
    return ppuVar8;
  }
  lVar5 = param_2;
  uStack_d0 = param_3;
  lStack_b8 = lVar4;
  func_0x000107c43c4c();
  func_0x000107c61180();
  lVar4 = lVar5;
  func_0x000107c42998();
  lStack_c0 = lVar4;
  func_0x000107c615e8(lVar5);
  lVar4 = param_2;
  func_0x000107c43c94();
  lVar5 = param_2;
  lStack_c8 = lVar4;
  func_0x000107c4236c();
  func_0x000107c61180();
  uStack_ac = param_6;
  if (lVar5 != 0) {
    func_0x000107c5ee94(lVar19);
    func_0x000107c61170(lVar5);
  }
  pcVar16 = *(code **)(lVar18 + 0x38);
  (*pcVar16)(lVar19,lVar5 == 0,1,lVar3);
  func_0x0001009f0578(lVar19,lVar15);
  pcVar24 = *(code **)(lVar18 + 0x30);
  lVar4 = lVar15;
  (*pcVar24)(lVar15,1,lVar3);
  if ((int)lVar4 == 1) {
    func_0x0001000d1dcc(lVar19);
  }
  else {
    (**(code **)(lVar18 + 0x20))(lVar14,lVar15,lVar3);
    func_0x0001000d224c(apuStack_88);
    func_0x000107c5ee8c();
    param_1 = (double)(long)param_1;
    lVar15 = (long)param_1 * 1000;
    bVar2 = SUB168(SEXT816((long)param_1) * SEXT816(1000),8) == lVar15 >> 0x3f;
    lVar4 = 0;
    if (bVar2) {
      lVar4 = lVar15;
    }
    bVar1 = false;
    if ((-9.223372036854778e+18 < param_1) && (bVar1 = false, !NAN(param_1))) {
      bVar1 = param_1 < 9.223372036854776e+18;
    }
    lStack_d8 = 0;
    if (bVar1) {
      lStack_d8 = lVar4;
    }
    (**(code **)(lVar18 + 8))(lVar14,lVar3);
    func_0x0001000d1dcc(lVar19);
    func_0x0001000834e4(apuStack_88);
    if (bVar1 && bVar2) {
      puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c47580();
      goto LAB_101d551b0;
    }
  }
  puVar20 = (undefined *)0x0;
LAB_101d551b0:
  lVar4 = param_2;
  func_0x000107c3e514();
  func_0x000107c61180();
  if (lVar4 != 0) {
    func_0x000107c5ee94(lVar23);
    func_0x000107c61170(lVar4);
  }
  (*pcVar16)(lVar23,lVar4 == 0,1,lVar3);
  func_0x0001009f0578(lVar23,lVar21);
  lVar4 = lVar21;
  (*pcVar24)(lVar21,1,lVar3);
  puVar6 = puStack_a8;
  if ((int)lVar4 == 1) {
    func_0x0001000d1dcc(lVar23);
    puVar22 = (undefined *)0x0;
    uVar17 = uStack_ac;
  }
  else {
    (**(code **)(lVar18 + 0x20))(puStack_a8,lVar21,lVar3);
    func_0x0001000d224c(apuStack_88);
    func_0x000107c5ee8c();
    dVar25 = (double)(long)param_1;
    (**(code **)(lVar18 + 8))(puVar6,lVar3);
    func_0x0001000d1dcc(lVar23);
    func_0x0001000834e4(apuStack_88);
    uVar17 = uStack_ac;
    if (dVar25 <= -9.223372036854778e+18 ||
        (9.223372036854776e+18 <= dVar25 ||
        SUB168(SEXT816((long)dVar25) * SEXT816(1000),8) != (long)dVar25 * 1000 >> 0x3f)) {
      puVar22 = (undefined *)0x0;
    }
    else {
      puVar22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c47580();
    }
  }
  puVar9 = PTR_PTR_1126d8280;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar4 = lStack_b8;
  puVar10 = puVar9;
  func_0x000107c545ec();
  func_0x000107c61180();
  func_0x000107c61170(puVar9);
  func_0x000107c61170(lVar4);
  if (puVar10 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar16 = (code *)SoftwareBreakpoint(1,0x101d5563c);
    (*pcVar16)();
  }
  puVar9 = puVar10;
  func_0x000107c5461c();
  func_0x000107c61180();
  func_0x000107c61170(puVar10);
  if (puVar9 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar16 = (code *)SoftwareBreakpoint(1,0x101d55640);
    (*pcVar16)();
  }
  func_0x000107c51f28(param_2);
  puVar10 = puVar9;
  func_0x000107c58f60();
  func_0x000107c61180();
  func_0x000107c61170(puVar9);
  if (puVar10 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar16 = (code *)SoftwareBreakpoint(1,0x101d55644);
    (*pcVar16)();
  }
  lVar4 = param_2;
  func_0x000107c42c98(param_2);
  func_0x000107c61180();
  puVar9 = puVar10;
  func_0x000107c547f8();
  func_0x000107c61180();
  func_0x000107c61170(puVar10);
  func_0x000107c61170(lVar4);
  if (puVar9 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar16 = (code *)SoftwareBreakpoint(1,0x101d55648);
    (*pcVar16)();
  }
  puVar10 = puVar9;
  func_0x000107c54628();
  func_0x000107c61180();
  func_0x000107c61170(puVar9);
  if (puVar10 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar16 = (code *)SoftwareBreakpoint(1,0x101d5564c);
    (*pcVar16)();
  }
  puVar9 = puVar10;
  func_0x000107c53a88();
  func_0x000107c61180();
  func_0x000107c61170(puVar10);
  if (puVar9 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar16 = (code *)SoftwareBreakpoint(1,0x101d55650);
    (*pcVar16)();
  }
  puVar10 = puVar9;
  func_0x000107c55a08();
  func_0x000107c61180();
  func_0x000107c61170(puVar9);
  if (puVar10 != (undefined *)0x0) {
    lVar4 = param_2;
    func_0x000107c43c4c(param_2);
    func_0x000107c61180();
    lVar3 = lVar4;
    func_0x000107c43750();
    func_0x000107c61180();
    func_0x000107c615e8(lVar4);
    puVar9 = puVar10;
    func_0x000107c54ac8();
    func_0x000107c61180();
    func_0x000107c61170(puVar10);
    func_0x000107c61170(lVar3);
    if (puVar9 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar16 = (code *)SoftwareBreakpoint(1,0x101d55658);
      (*pcVar16)();
    }
    func_0x000107c43c4c(param_2);
    func_0x000107c61180();
    lVar4 = param_2;
    func_0x000107c4caac();
    func_0x000107c61180();
    func_0x000107c615e8(param_2);
    puVar10 = puVar9;
    func_0x000107c564c0();
    func_0x000107c61180();
    func_0x000107c61170(puVar9);
    func_0x000107c61170(lVar4);
    uVar13 = uStack_d0;
    if (puVar10 != (undefined *)0x0) {
      if (uStack_d0 >> 0x3e == 0) {
        uVar11 = *(ulong *)((uStack_d0 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar11 = uStack_d0 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uStack_d0) {
          uVar11 = uStack_d0;
        }
        func_0x000107c60480();
      }
      if (uVar11 != 0) {
        uVar12 = 0;
        func_0x000101d556a0(0);
        func_0x000107c5fc48(uVar13,uVar12);
        puVar9 = puVar10;
        func_0x000107c59424(puVar10);
        func_0x000107c61180();
        func_0x000107c61170(uVar13);
        func_0x000107c61170(puVar9);
      }
      if (lStack_98 != 0) {
        uVar12 = uStack_a0;
        func_0x000107c5fadc(uStack_a0);
        puVar9 = puVar10;
        func_0x000107c59e18(puVar10);
        func_0x000107c61180();
        func_0x000107c61170(uVar12);
        func_0x000107c61170(puVar9);
      }
      if ((uVar17 & 0xff) != 2) {
        func_0x000107c557c8(puVar10);
        func_0x000107c61180();
        func_0x000107c61170();
      }
      puVar9 = puVar10;
      func_0x000107c3ecc8();
      func_0x000107c61180();
      if (puVar9 != (undefined *)0x0) {
        func_0x0001000285a8(0x112e28d88,&UNK_10da11060);
        ppuVar7 = apuStack_88;
        apuStack_88[0] = puVar9;
        func_0x000104888f7c(ppuVar7);
        func_0x000107c61170(puVar9);
        func_0x000107c61170(puVar20);
        func_0x000107c61170(puVar22);
        func_0x000107c61170(puVar10);
        return ppuVar7;
      }
                    /* WARNING: Does not return */
      pcVar16 = (code *)SoftwareBreakpoint(1,0x101d55660);
      (*pcVar16)();
    }
                    /* WARNING: Does not return */
    pcVar16 = (code *)SoftwareBreakpoint(1,0x101d5565c);
    (*pcVar16)();
  }
                    /* WARNING: Does not return */
  pcVar16 = (code *)SoftwareBreakpoint(1,0x101d55654);
  (*pcVar16)();
}



/* Entry: 101d55660; end: 101d556e3;  */

void FUN_101d55660(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e28d90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da11124;
  func_0x000107c61520(&UNK_10da11124,&UNK_11047c528);
  puRam0000000112e28d90 = puVar1;
  return;
}



/* Entry: 101d556e4; end: 101d556f7;  */

bool FUN_101d556e4(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101d556f8; end: 101d557a3;  */

void FUN_101d556f8(void)

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



/* Entry: 101d557a4; end: 101d5593b;  */

void FUN_101d557a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 101d5593c; end: 101d5597b;  */

void FUN_101d5593c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e28dc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da110fc;
  func_0x000107c61520(&UNK_10da110fc,&UNK_11047c528);
  puRam0000000112e28dc8 = puVar1;
  return;
}



/* Entry: 101d5597c; end: 101d55b27;  */

long FUN_101d5597c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101d55b28; end: 101d55b3b;  */

bool FUN_101d55b28(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101d55b3c; end: 101d55be7;  */

void FUN_101d55b3c(void)

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



/* Entry: 101d55be8; end: 101d55c03;  */

void FUN_101d55be8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 101d55c04; end: 101d55c2b;  */

void FUN_101d55c04(uint *param_1)

{
  uint uVar1;
  byte *unaff_x20;
  
  uVar1 = (uint)*unaff_x20;
  func_0x000101d55bf8();
  *param_1 = uVar1;
  return;
}



/* Entry: 101d55c2c; end: 101d55db7;  */

uint FUN_101d55c2c(void)

{
  byte *unaff_x20;
  
  return (uint)(*unaff_x20 < 0xd) & 0x1e20U >> (ulong)(*unaff_x20 & 0x1f);
}



/* Entry: 101d55db8; end: 101d55e8b;  */

void FUN_101d55db8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e28df8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da1121c;
  func_0x000107c61520(&UNK_10da1121c,&UNK_11047c6a8);
  puRam0000000112e28df8 = puVar1;
  return;
}



/* Entry: 101d55e8c; end: 101d55f1f;  */

undefined8 FUN_101d55e8c(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [24];
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    param_3 = 0;
  }
  else {
    FUN_101d55f20(param_3,uVar1,uVar2);
    func_0x000107c61574(param_2);
  }
  return param_3;
}



/* Entry: 101d55f20; end: 101d56257;  */

undefined8 * FUN_101d55f20(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined8 **ppuVar6;
  undefined8 **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar4 = param_2;
  puVar10 = param_3;
  if (0xe < (ulong)param_3 >> 0x3c) {
    puVar1 = param_1;
    puVar10 = param_2;
    func_0x000107c5b1b0();
    func_0x000107c61180();
    if (puVar1 == (undefined8 *)0x0) {
      func_0x0001000285a8(0x112e28f30,&UNK_10da11338);
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_68 = 0;
      puVar4 = &uStack_78;
      func_0x000104888f7c(puVar4);
      return puVar4;
    }
    puVar4 = puVar1;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar1);
  }
  func_0x000100de78a0(param_2,param_3);
  func_0x0001000d224c(&uStack_78);
  uVar2 = uStack_78;
  func_0x000107c614f0(uStack_78);
  puVar1 = puVar4;
  puVar11 = puVar10;
  func_0x000103fbfb2c(puVar4,puVar10,uVar2,uStack_70);
  puVar12 = puVar11;
  func_0x000107c615e8(uStack_78);
  if (((uint)puVar11 & 0xff) == 1) {
    puStack_88 = (undefined8 *)CONCAT71(puStack_88._1_7_,(char)puVar1);
    uVar2 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if ((int)uVar2 != 0) {
      FUN_101d58f10();
      func_0x000107c61658(&puStack_88,&UNK_11072c980,uVar2);
    }
    puVar5 = (undefined1 *)0x112e28f30;
    func_0x0001000285a8(0x112e28f30,&UNK_10da11338);
    FUN_101d58c28();
    puVar1 = (undefined8 *)&UNK_11047c6a8;
    func_0x000107c613f8(&UNK_11047c6a8,puVar5,0,0);
    *puVar5 = 8;
    puVar3 = puVar1;
    func_0x00010488904c();
    func_0x000107c614ac(puVar1);
    func_0x00010006c090(puVar4,puVar10);
  }
  else {
    func_0x0001000d224c(&uStack_78);
    func_0x000107c5b2d0();
    func_0x000107c61180();
    if (param_1 == (undefined8 *)0x0) {
      puVar5 = (undefined1 *)0x112e28f20;
      func_0x0001000285a8(0x112e28f20,&UNK_10da11330);
      func_0x000101d58e80();
      ppuVar6 = (undefined8 **)&UNK_11047d048;
      func_0x000107c613f8(&UNK_11047d048,puVar5,0,0);
      *puVar5 = 0;
      ppuVar7 = ppuVar6;
      func_0x00010488904c();
      func_0x000107c614ac(ppuVar6);
    }
    else {
      puVar3 = param_1;
      func_0x000107c5faec();
      func_0x000107c61170(param_1);
      func_0x0001000285a8(0x112e28f20,&UNK_10da11330);
      ppuVar7 = &puStack_88;
      puStack_88 = puVar3;
      puStack_80 = puVar12;
      func_0x000104888f7c(ppuVar7);
      func_0x000107c6142c(puVar12);
    }
    func_0x0001000d224c(&puStack_88);
    puVar12 = puStack_88;
    puVar8 = &UNK_11047c788;
    func_0x000107c613fc(&UNK_11047c788,0x18,7);
    func_0x000107c61644(puVar8 + 0x10);
    puVar9 = &UNK_11047caa8;
    func_0x000107c613fc(&UNK_11047caa8,0x30,7);
    *(undefined **)(puVar9 + 0x10) = puVar8;
    *(undefined8 **)(puVar9 + 0x18) = puVar4;
    *(undefined8 **)(puVar9 + 0x20) = puVar10;
    *(undefined8 **)(puVar9 + 0x28) = puVar1;
    func_0x00010006c00c(puVar4,puVar10);
    FUN_101d58f6c(puVar1,puVar11);
    uVar2 = 0x112e28f40;
    func_0x0001000285a8(0x112e28f40,&UNK_10da11340);
    puVar3 = puVar12;
    func_0x000100775264(puVar12,1,0x101d58f50,puVar9,uVar2);
    func_0x00010006c090(puVar4,puVar10);
    func_0x000101d58f7c(puVar1,puVar11);
    func_0x000107c61574(ppuVar7);
    func_0x000107c61170(puVar12);
    func_0x000107c61574(puVar9);
    func_0x0001000834e4(&uStack_78);
  }
  return puVar3;
}



/* Entry: 101d56258; end: 101d567b7;  */

void FUN_101d56258(undefined8 *param_1,undefined8 *param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  ulong uVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined8 ***pppuVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 ***pppuVar17;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  int iVar22;
  undefined1 *puVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  ulong uVar27;
  ulong uVar28;
  ulong *puVar29;
  undefined8 **ppuStack_80;
  undefined1 auStack_78 [24];
  ulong uStack_58;
  
  uVar10 = *param_2;
  uVar14 = param_2[1];
  func_0x000107c61428(param_3 + 0x10,auStack_78,0,0);
  puVar7 = (undefined1 *)(param_3 + 0x10);
  func_0x000107c61648();
  if (puVar7 == (undefined1 *)0x0) {
    FUN_101d58c28();
    func_0x000107c613f8(&UNK_11047c6a8,puVar7,0,0);
    *puVar7 = 2;
    func_0x000107c61654();
  }
  else {
    puVar23 = *(undefined1 **)(puVar7 + 0x28);
    func_0x000107c6157c(puVar23);
    func_0x0001000d224c(&uStack_58);
    func_0x000107c61574();
    uVar4 = uStack_58;
    if (uStack_58 == 0) {
      FUN_101d58c28();
      func_0x000107c613f8(&UNK_11047c6a8,puVar23,0,0);
      *puVar23 = 2;
      func_0x000107c61654();
      func_0x000107c61574(puVar7);
    }
    else {
      uVar8 = 0;
      func_0x000107c5ee24(0,param_4,param_5);
      puVar9 = PTR_PTR_1126b25b8;
      func_0x000107c610f8();
      func_0x000107c5fadc(uVar10,uVar14);
      func_0x000107c46814();
      func_0x000107c61170(uVar10);
      uVar10 = 0x112d38280;
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      func_0x000107c61538();
      puVar11 = PTR_PTR_1126b1060;
      func_0x000107c610f8(PTR_PTR_1126b1060);
      func_0x000107c5fc48(uVar10,PTR___sSSN_11034da80);
      func_0x000107c47d08(puVar11);
      func_0x000107c61170(uVar10);
      uVar12 = uVar4;
      func_0x000107c5076c();
      func_0x000107c61180();
      func_0x000107c61170(puVar11);
      uVar27 = uVar12;
      func_0x000107c4412c();
      func_0x000107c61180();
      if (uVar27 == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101d567b8);
        (*pcVar5)();
      }
      pppuVar13 = (undefined8 ***)0x0;
      FUN_101d58f8c(0,0x112d51158,&PTR_PTR_1126bcf20);
      uVar10 = 0x112d51160;
      func_0x0001000285a8(0x112d51160,&UNK_10da11350);
      uVar14 = uVar10;
      func_0x000100fac9e4();
      uVar15 = uVar27;
      func_0x000107c5f9e8(uVar27,pppuVar13,uVar10,uVar14);
      func_0x000107c61170(uVar27);
      if ((uVar15 & 0xc000000000000001) == 0) {
        uVar19 = -1L << ((ulong)*(byte *)(uVar15 + 0x20) & 0x3f);
        uVar20 = ~uVar19;
        puVar29 = (ulong *)(uVar15 + 0x40);
        uVar19 = -uVar19;
        uVar27 = 0xffffffffffffffff;
        if (uVar19 < 0x40) {
          uVar27 = ~(-1L << (uVar19 & 0x3f));
        }
        uVar27 = uVar27 & *puVar29;
        uVar19 = uVar15;
      }
      else {
        uVar19 = uVar15 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar15) {
          uVar19 = uVar15;
        }
        func_0x000107c60418();
        puVar29 = (ulong *)0x0;
        uVar20 = 0;
        uVar27 = 0;
        uVar19 = uVar19 | 0x8000000000000000;
      }
      uVar16 = uVar15;
      func_0x000107c61434();
      lVar21 = 0;
      lVar25 = 0;
      while (lVar26 = lVar25, uVar28 = uVar27, -1 < (long)uVar19) {
        while (uVar28 == 0) {
          lVar1 = lVar26 + 1;
          if (SCARRY8(lVar26,1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x101d567a4);
            (*pcVar5)();
          }
          if ((long)(uVar20 + 0x40 >> 6) <= lVar1) {
            uVar27 = 0;
            goto LAB_101d56724;
          }
          lVar26 = lVar1;
          uVar28 = puVar29[lVar1];
        }
        uVar16 = (uVar28 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar28 & 0x5555555555555555) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
        uVar24 = *(ulong *)(*(long *)(uVar19 + 0x38) + LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) * 8
                           + lVar26 * 0x200);
        uStack_58 = uVar24;
        func_0x000107c615f0(uVar24);
        uVar28 = uVar28 - 1 & uVar28;
        if (uVar24 == 0) goto LAB_101d56728;
LAB_101d56600:
        uVar27 = uVar24;
        func_0x000107c44130();
        cVar2 = puVar7[0x50];
        uVar16 = uVar24;
        func_0x000107c43fb4();
        func_0x000107c61180();
        if ((cVar2 == '\x01') && ((int)uVar27 == 3)) {
          if (uVar16 == 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x101d567b4);
            (*pcVar5)();
          }
          uVar27 = uVar16;
          func_0x000107c44338();
          func_0x000107c615e8(uVar16);
          func_0x000107c615e8();
          uVar16 = uVar24;
        }
        else {
          uVar27 = uVar16;
          func_0x000107c30a1c();
          func_0x000107c61180();
          func_0x000107c615e8(uVar16);
          if (uVar27 == 0) {
            func_0x000107c615e8();
            uVar27 = 0;
            uVar16 = uVar24;
          }
          else {
            uVar16 = uVar27;
            func_0x000107c5ee30();
            func_0x000107c61170(uVar27);
            func_0x000107c615e8(uVar24);
            uVar3 = (uint)((ulong)pppuVar13 >> 0x20);
            uVar18 = uVar3 >> 0x1e;
            if (uVar3 >> 0x1e < 2) {
              if (uVar18 == 0) {
                pppuVar17 = pppuVar13;
                func_0x00010006c090();
                uVar27 = (ulong)pppuVar13 >> 0x30 & 0xff;
                pppuVar13 = pppuVar17;
              }
              else {
                uVar24 = uVar16;
                func_0x00010006c090();
                iVar22 = (int)(uVar16 >> 0x20);
                if (SBORROW4(iVar22,(int)uVar16)) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x101d567ac);
                  (*pcVar5)();
                }
                uVar27 = (ulong)(iVar22 - (int)uVar16);
                uVar16 = uVar24;
              }
            }
            else if (uVar18 == 2) {
              lVar25 = *(long *)(uVar16 + 0x10);
              lVar1 = *(long *)(uVar16 + 0x18);
              func_0x00010006c090();
              uVar27 = lVar1 - lVar25;
              if (SBORROW8(lVar1,lVar25)) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x101d567b0);
                (*pcVar5)();
              }
            }
            else {
              func_0x00010006c090();
              uVar27 = 0;
            }
          }
        }
        bVar6 = SCARRY8(lVar21,uVar27);
        lVar21 = lVar21 + uVar27;
        lVar25 = lVar26;
        uVar27 = uVar28;
        if (bVar6) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101d567a8);
          (*pcVar5)();
        }
      }
      func_0x000107c60444();
      if (uVar16 == 0) {
LAB_101d56724:
        uStack_58 = 0;
      }
      else {
        func_0x000107c615e8();
        pppuVar17 = &ppuStack_80;
        ppuStack_80 = pppuVar13;
        func_0x000107c6147c(&uStack_58,pppuVar17,PTR___syXlN_11034f1a0 + 8,uVar10,7);
        pppuVar13 = pppuVar17;
        uVar24 = uStack_58;
        if (uStack_58 != 0) goto LAB_101d56600;
      }
LAB_101d56728:
      func_0x000107c615e8(uVar4);
      func_0x000107c615e8(uVar12);
      func_0x000107c6142c(uVar15);
      func_0x000107c61170(puVar9);
      func_0x000107c61574(puVar7);
      FUN_101d58fcc(uVar19,puVar29,uVar20,lVar25,uVar27);
      *param_1 = uVar8;
      param_1[1] = param_4;
      param_1[2] = lVar21;
    }
  }
  return;
}



/* Entry: 101d567b8; end: 101d5693b;  */

undefined8 FUN_101d567b8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uStack_68;
  
  uVar1 = param_1;
  FUN_101d5693c();
  func_0x0001000d224c(&uStack_68);
  uVar6 = uStack_68;
  puVar5 = &UNK_11047c788;
  puVar2 = puVar5;
  func_0x000107c613fc(&UNK_11047c788,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  puVar3 = &UNK_11047c968;
  func_0x000107c613fc(&UNK_11047c968,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  func_0x000107c61174();
  uVar4 = uVar6;
  func_0x000104889f74(uVar6,1,FUN_101d58d64,puVar3);
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61574(puVar3);
  func_0x0001000d224c(&uStack_68);
  func_0x000107c613fc(&UNK_11047c788,0x18,7);
  func_0x000107c61644(puVar5 + 0x10);
  puVar3 = &UNK_11047c990;
  func_0x000107c613fc(&UNK_11047c990,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar5;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  func_0x000107c61174(param_1);
  uVar6 = uStack_68;
  func_0x0001048898b8(uStack_68,1,0x101d58da8,puVar3,&UNK_11047cbf8);
  func_0x000107c61574(uVar4);
  func_0x000107c61170(uStack_68);
  func_0x000107c61574(puVar3);
  return uVar6;
}


