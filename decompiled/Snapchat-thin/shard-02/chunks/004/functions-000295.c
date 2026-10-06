/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101d06478; end: 101d064c7;  */

void FUN_101d06478(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101d064c8;
  plVar3[5] = lVar1;
  plVar3[6] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d0619c,0,0);
  return;
}



/* Entry: 101d064c8; end: 101d06503;  */

void FUN_101d064c8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101d06500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101d06504; end: 101d06507;  */

void FUN_101d06504(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101d06500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101d06508; end: 101d0659f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d06508(undefined1 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_112e1ede0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101d065a0; end: 101d065f7; -[_TtC26FriendLocationWidgetBridge33FriendLocationWidgetConfiguration init] */

void FUN_101d065a0(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0xd00000000000001f,0x800000010f009ca0,
                      "FriendLocationWidgetBridge/FriendLocationWidgetConfiguration.swift",0x42,2,
                      0x20,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101d065f8);
  (*pcVar1)();
}



/* Entry: 101d065f8; end: 101d0669f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101d065f8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  puVar3 = auStack_50;
  func_0x000107c610f8();
  uVar1 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f00c9c0);
  uVar2 = param_1;
  func_0x000107c41454();
  func_0x000107c61170(uVar1);
  *(char *)(unaff_x20 + _DAT_112e1ede0) = (char)uVar2;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  return puVar3;
}



/* Entry: 101d066a0; end: 101d06753; -[_TtC26FriendLocationWidgetBridge33FriendLocationWidgetConfiguration initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101d066a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lStack_50;
  long lStack_48;
  
  plVar4 = &lStack_50;
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61174();
  uVar2 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f00c9c0);
  uVar3 = param_3;
  func_0x000107c41454();
  func_0x000107c61170(uVar2);
  *(char *)(param_1 + _DAT_112e1ede0) = (char)uVar3;
  lStack_50 = param_1;
  lStack_48 = lVar1;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  func_0x000107c61170(param_3);
  return (undefined1 *)plVar4;
}



/* Entry: 101d06754; end: 101d067df; -[_TtC26FriendLocationWidgetBridge33FriendLocationWidgetConfiguration encodeWithCoder:] */

/* WARNING: Possible PIC construction at 0x000101d067c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d067c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d06754(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f00c9c0);
  func_0x000107c42724(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 101d067e0; end: 101d06833;  */

void FUN_101d067e0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101d06834; end: 101d06863;  */

void FUN_101d06834(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 101d06864; end: 101d0686f;  */

void FUN_101d06864(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 101d06870; end: 101d069a7;  */

void FUN_101d06870(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
  func_0x000107c61168();
  func_0x000107c3e100();
  func_0x000107c61180();
  puVar2 = (undefined *)0x0;
  func_0x000107c61174();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = puVar2;
    func_0x000107c5ed30();
    func_0x000107c61170(puVar2);
    func_0x000107c61654();
    func_0x000107c614ac(puVar1);
  }
  else {
    puVar2 = puVar1;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar1);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
    puVar1 = puVar2;
    func_0x000107c5ee20(puVar2,param_2);
    uVar3 = 0xd000000000000024;
    func_0x000107c5fadc(0xd000000000000024,0x800000010f00c9e0);
    func_0x000107c56bcc(uVar5);
    func_0x000107c61170(puVar1);
    func_0x000107c61170(uVar3);
    func_0x00010006c090(puVar2,param_2);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c615e8(*(undefined8 *)(puVar1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)(puVar1,0x18,7);
  return;
}



/* Entry: 101d069a8; end: 101d069eb;  */

void FUN_101d069a8(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101d069ec; end: 101d069ff;  */

bool FUN_101d069ec(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101d06a00; end: 101d06aab;  */

void FUN_101d06a00(void)

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



/* Entry: 101d06aac; end: 101d06abb;  */

void FUN_101d06aac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 101d06abc; end: 101d06b2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d06abc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e1eeb8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e1eec0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e1eec8) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101d06b30; end: 101d06b4f;  */

void FUN_101d06b30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xd8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 200) = param_1;
  *(undefined8 *)(unaff_x22 + 0xd0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_3;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d06b50,0,0);
  return;
}



/* Entry: 101d06b50; end: 101d06d8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d06b50(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long *plVar5;
  int *piVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  
  func_0x000100083b20(unaff_x22 + 0x98);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar2 = uVar7;
  func_0x000107c5abdc();
  func_0x000107c615e8(uVar7);
  if ((int)uVar2 != 0) {
    func_0x000100083b20(unaff_x22 + 0x70);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
    lVar8 = *(long *)(unaff_x22 + 0x90);
    func_0x0001000a8868(unaff_x22 + 0x70,uVar2);
    piVar6 = *(int **)(lVar8 + 8);
    iVar1 = *piVar6;
    plVar5 = (long *)(ulong)(uint)piVar6[1];
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xe0) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_101d06d90;
                    /* WARNING: Could not recover jumptable at 0x000101d06c2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar6))
              (*(undefined8 *)(unaff_x22 + 200),*(undefined8 *)(unaff_x22 + 0xd0),
               *(undefined8 *)(unaff_x22 + 0xb8),*(undefined8 *)(unaff_x22 + 0xc0),uVar2,lVar8);
    return;
  }
  func_0x000100083b20(unaff_x22 + 0xa0);
  lVar8 = *(long *)(unaff_x22 + 0xa0);
  puVar3 = *(undefined1 **)(lVar8 + _DAT_112fda3e8);
  func_0x000107c61174();
  func_0x000107c61170(lVar8);
  puVar4 = puVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  *(undefined1 **)(unaff_x22 + 0xf8) = puVar4;
  func_0x000107c61170();
  if (puVar4 != (undefined1 *)0x0) {
    uVar10 = *(undefined8 *)(unaff_x22 + 200);
    uVar9 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar2 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar7 = *(undefined8 *)(unaff_x22 + 0xc0);
    func_0x000103a78b0c(0);
    func_0x000107c610f8();
    func_0x000107c61434(uVar7);
    func_0x000103a788dc(uVar10,uVar9,uVar2,uVar7);
    *(undefined8 *)(unaff_x22 + 0x100) = uVar2;
    func_0x000107c4f58c();
    func_0x000107c61180();
    *(undefined1 **)(unaff_x22 + 0x108) = puVar4;
    plVar5 = (long *)0x60;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x110) = plVar5;
    lVar8 = 0x112d657e8;
    func_0x0001000285a8(0x112d657e8,&UNK_10d92a540);
    *plVar5 = unaff_x22;
    plVar5[1] = 0x101d06e34;
    plVar5[7] = (long)puVar4;
    plVar5[8] = lVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(&UNK_103968380,0,0);
    return;
  }
  func_0x000101d0718c();
  func_0x000107c613f8(&UNK_110472928,puVar3,0,0);
  *puVar3 = 0;
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000101d06d8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101d06d90; end: 101d06dfb;  */

void FUN_101d06d90(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xe8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xe0));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0xf0) = param_1;
    pcVar1 = FUN_101d06dfc;
  }
  else {
    pcVar1 = FUN_101d07158;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101d06dfc; end: 101d06e8b;  */

void FUN_101d06dfc(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x70);
                    /* WARNING: Could not recover jumptable at 0x000101d06e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0xf0));
  return;
}



/* Entry: 101d06e8c; end: 101d07157;  */

void FUN_101d06e8c(undefined1 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long unaff_x22;
  long lVar11;
  
  lVar8 = *(long *)(unaff_x22 + 0x118);
  if (lVar8 == 0) {
    uVar9 = *(undefined8 *)(unaff_x22 + 0xf8);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x100);
    func_0x000101d0718c();
    func_0x000107c613f8(&UNK_110472928,param_1,0,0);
    *param_1 = 1;
    func_0x000107c61654();
    func_0x000107c61170(uVar1);
    func_0x000107c615e8(uVar9);
  }
  else {
    *(undefined8 *)(unaff_x22 + 0xa8) = 0;
    *(undefined8 *)(unaff_x22 + 0xb0) = 0;
    puVar3 = &UNK_1104727a8;
    func_0x000107c613fc(&UNK_1104727a8,0x18,7);
    *(long *)(puVar3 + 0x10) = unaff_x22 + 0xa8;
    puVar4 = &UNK_1104727d0;
    func_0x000107c613fc(&UNK_1104727d0,0x20,7);
    *(code **)(puVar4 + 0x10) = FUN_101d071cc;
    *(undefined **)(puVar4 + 0x18) = puVar3;
    *(undefined8 *)(unaff_x22 + 0x30) = 0x101d071f8;
    *(undefined **)(unaff_x22 + 0x38) = puVar4;
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    puVar5 = (undefined8 *)(unaff_x22 + 0x10);
    *puVar5 = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x20) = &UNK_1010a45c8;
    *(undefined **)(unaff_x22 + 0x28) = &UNK_1104727e8;
    func_0x000107c60bc4();
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
    puVar4 = &UNK_110472820;
    func_0x000107c613fc(&UNK_110472820,0x18,7);
    *(long **)(puVar4 + 0x10) = (long *)(unaff_x22 + 0xb0);
    puVar6 = &UNK_110472848;
    func_0x000107c613fc(&UNK_110472848,0x20,7);
    *(code **)(puVar6 + 0x10) = FUN_101d07234;
    *(undefined **)(puVar6 + 0x18) = puVar4;
    puVar10 = (undefined8 *)(unaff_x22 + 0x40);
    *puVar10 = puVar2;
    *(undefined8 *)(unaff_x22 + 0x60) = 0x101d07998;
    *(undefined **)(unaff_x22 + 0x68) = puVar6;
    *(undefined8 *)(unaff_x22 + 0x48) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x50) = &UNK_100e27b38;
    *(undefined **)(unaff_x22 + 0x58) = &UNK_110472860;
    func_0x000107c60bc4(puVar10);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x68));
    func_0x000107c4c754(lVar8);
    func_0x000107c60bd0(puVar10);
    func_0x000107c60bd0(puVar5);
    puVar7 = *(undefined1 **)(unaff_x22 + 0xa8);
    if (puVar7 != (undefined1 *)0x0) {
      uVar9 = *(undefined8 *)(unaff_x22 + 0xf8);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x100);
      func_0x000107c61174();
      func_0x000107c61170(lVar8);
      func_0x000107c61170(uVar1);
      func_0x000107c615e8(uVar9);
      func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0xb0));
      uVar9 = *(undefined8 *)(unaff_x22 + 0xa8);
      func_0x000107c61574(puVar3);
      func_0x000107c61574(puVar4);
      func_0x000107c61170(uVar9);
                    /* WARNING: Could not recover jumptable at 0x000101d07060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))(puVar7);
      return;
    }
    lVar11 = *(long *)(unaff_x22 + 0xb0);
    if (lVar11 == 0) {
      func_0x000101d0718c();
      func_0x000107c613f8(&UNK_110472928,puVar7,0,0);
      *puVar7 = 1;
    }
    uVar9 = *(undefined8 *)(unaff_x22 + 0xf8);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x100);
    func_0x000107c61654();
    func_0x000107c614b0(lVar11);
    func_0x000107c61170(lVar8);
    func_0x000107c61170(uVar1);
    func_0x000107c615e8(uVar9);
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0xb0));
    uVar9 = *(undefined8 *)(unaff_x22 + 0xa8);
    func_0x000107c61574(puVar3);
    func_0x000107c61574(puVar4);
    func_0x000107c61170(uVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x000101d07154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101d07158; end: 101d071cb;  */

void FUN_101d07158(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x70);
                    /* WARNING: Could not recover jumptable at 0x000101d07188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101d071cc; end: 101d07217;  */

void FUN_101d071cc(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = **(undefined8 **)(unaff_x20 + 0x10);
  **(undefined8 **)(unaff_x20 + 0x10) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 101d07218; end: 101d07233;  */

void FUN_101d07218(long param_1,long param_2)

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



/* Entry: 101d07234; end: 101d0725f;  */

void FUN_101d07234(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = **(undefined8 **)(unaff_x20 + 0x10);
  **(undefined8 **)(unaff_x20 + 0x10) = param_1;
  func_0x000107c614b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(uVar1);
  return;
}



/* Entry: 101d07260; end: 101d073b7; -[_TtC34MapMemoriesThumbnailImplementation28MapMemoriesThumbnailProvider thumbnailWithSnapId:targetSize:completionHandler:] */

void FUN_101d07260(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  
  lVar2 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c60bc4();
  puVar1 = &UNK_110472948;
  func_0x000107c613fc(&UNK_110472948,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_6;
  *(undefined8 *)(puVar1 + 0x30) = param_3;
  lVar2 = 0;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(&stack0xffffffffffffffb0 + -extraout_x8,1,1,lVar2);
  puVar3 = &UNK_110472970;
  func_0x000107c613fc(&UNK_110472970,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined **)(puVar3 + 0x20) = &UNK_10da01558;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  puVar1 = &UNK_110472998;
  func_0x000107c613fc(&UNK_110472998,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined **)(puVar1 + 0x20) = &UNK_10da01568;
  *(undefined **)(puVar1 + 0x28) = puVar3;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_3);
  func_0x000100e8e0b0(0,0,&stack0xffffffffffffffb0 + -extraout_x8,&UNK_10da01578,puVar1);
  func_0x000107c61574();
  return;
}



/* Entry: 101d073b8; end: 101d0744b;  */

void FUN_101d073b8(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  long unaff_x22;
  long *plVar1;
  
  *(long *)(unaff_x22 + 0x10) = param_4;
  *(long *)(unaff_x22 + 0x18) = param_5;
  func_0x000107c5faec();
  *(long *)(unaff_x22 + 0x20) = param_4;
  plVar1 = (long *)0x120;
  func_0x000107c61174();
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x28) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101d0744c;
  plVar1[0x1b] = param_5;
  plVar1[0x19] = param_1;
  plVar1[0x1a] = param_2;
  plVar1[0x17] = param_3;
  plVar1[0x18] = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d06b50,0,0);
  return;
}



/* Entry: 101d0744c; end: 101d074fb;  */

void FUN_101d0744c(long param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar5 + 0x20);
  uVar4 = *(undefined8 *)(lVar5 + 0x18);
  lVar3 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar5 + 0x28));
  func_0x000107c6142c(uVar1);
  func_0x000107c61170(uVar4);
  if (unaff_x20 == 0) {
    unaff_x20 = 0;
    lVar2 = param_1;
  }
  else {
    func_0x000107c5ed2c();
    func_0x000107c614ac();
    param_1 = unaff_x20;
    lVar2 = 0;
  }
  (**(code **)(*(long *)(lVar5 + 0x10) + 0x10))(*(long *)(lVar5 + 0x10),lVar2,unaff_x20);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x000101d074f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))();
  return;
}



/* Entry: 101d074fc; end: 101d0752f;  */

void FUN_101d074fc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101d07530; end: 101d0753f;  */

undefined1  [16] FUN_101d07530(void)

{
  return ZEXT816(0x110472898);
}



/* Entry: 101d07540; end: 101d07587; -[_TtC34MapMemoriesThumbnailImplementation28MapMemoriesThumbnailProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101d0755c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d07560) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d07540(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e1eeb8));
  return;
}



/* Entry: 101d07588; end: 101d076ef;  */

int FUN_101d07588(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101d07604;
        goto LAB_101d075e8;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_101d075e8:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_101d07604:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 101d076f0; end: 101d0772f;  */

void FUN_101d076f0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e1ef00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da014dc;
  func_0x000107c61520(&UNK_10da014dc,&UNK_110472928);
  puRam0000000112e1ef00 = puVar1;
  return;
}



/* Entry: 101d07730; end: 101d077af;  */

void FUN_101d07730(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long unaff_x22;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar6 = *(long *)(unaff_x20 + 0x18);
  lVar7 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  lVar1 = *(long *)(unaff_x20 + 0x30);
  plVar2 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101d077b0;
  plVar2[2] = lVar3;
  plVar2[3] = lVar1;
  func_0x000107c5faec();
  plVar2[4] = lVar3;
  plVar5 = (long *)0x120;
  func_0x000107c61174();
  func_0x000107c615b8();
  plVar2[5] = (long)plVar5;
  *plVar5 = (long)plVar2;
  plVar5[1] = (long)FUN_101d0744c;
  plVar5[0x1b] = lVar1;
  plVar5[0x19] = lVar6;
  plVar5[0x1a] = lVar7;
  plVar5[0x17] = lVar4;
  plVar5[0x18] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d06b50,0,0);
  return;
}



/* Entry: 101d077b0; end: 101d077eb;  */

void FUN_101d077b0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101d077e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101d077ec; end: 101d07863;  */

void FUN_101d077ec(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x101d0799c;
  (*(code *)&UNK_100e8ded0)(uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 101d07864; end: 101d078cb;  */

void FUN_101d07864(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101d0789c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101d078cc; end: 101d0794f;  */

void FUN_101d078cc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x101d079a4;
  (*(code *)&UNK_100e8df9c)(plVar5,param_1,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 101d07950; end: 101d0798f;  */

void FUN_101d07950(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101d0798c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101d07990; end: 101d079a7;  */

void FUN_101d07990(long param_1,long param_2)

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



/* Entry: 101d079a8; end: 101d07c7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d079a8(long param_1)

{
  undefined1 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  char *pcVar10;
  long unaff_x20;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined1 auStack_90 [24];
  long alStack_78 [3];
  undefined8 uStack_60;
  
  uVar3 = 0xd000000000000012;
  uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112e1ef18);
  if (param_1 == 0) {
    pcVar10 = "blocked_map_action";
  }
  else {
    if (param_1 != 1) {
      alStack_78[0] = param_1;
      func_0x000107c60614(&UNK_1106c1010,alStack_78,&UNK_1106c1010,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101d07c80);
      (*pcVar2)();
    }
    pcVar10 = "is_primary_response";
    uVar3 = 0xd000000000000013;
  }
  func_0x000107c5fadc(uVar3,(ulong)(pcVar10 + -0x20) | 0x8000000000000000);
  func_0x000107c6142c((ulong)(pcVar10 + -0x20) | 0x8000000000000000);
  uVar4 = 0x7972616d697270;
  func_0x000107c5fadc(0x7972616d697270,0xe700000000000000);
  func_0x000105f50ee0(uVar13,uVar3,uVar4,1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (param_1 == 0) {
    func_0x0001000d224c(alStack_78);
    plVar5 = alStack_78;
    func_0x0001000a8868(plVar5,uStack_60);
    puVar11 = &UNK_110472aa8;
    func_0x000107c613fc(&UNK_110472aa8,0x18,7);
    func_0x000107c61614(puVar11 + 0x10);
    lVar14 = *plVar5;
    lVar12 = *(long *)(lVar14 + 0x18);
    if (lVar12 == 0) {
      func_0x000107c61428(puVar11 + 0x10,auStack_90,0,0);
      func_0x000107c61618(puVar11 + 0x10);
      func_0x000107c61170();
    }
    else {
      puVar6 = PTR_PTR_1126bc1b8;
      func_0x000107c61168();
      uVar1 = uRam0000000112e1f0d0;
      func_0x000107c61580(puVar11,2);
      func_0x000107c615f0(lVar12);
      func_0x000106b13b74(puVar6,uVar1,0);
      func_0x000107c61180();
      uVar3 = *(undefined8 *)(lVar14 + 0x20);
      lVar7 = lVar12;
      func_0x000107c614f0(lVar12);
      puVar8 = &UNK_110472ad0;
      func_0x000107c613fc(&UNK_110472ad0,0x18,7);
      func_0x000107c61644(puVar8 + 0x10,lVar14);
      puVar9 = &UNK_110472af8;
      func_0x000107c613fc(&UNK_110472af8,0x38,7);
      *(undefined **)(puVar9 + 0x10) = puVar8;
      *(code **)(puVar9 + 0x18) = FUN_101d07f98;
      *(undefined **)(puVar9 + 0x20) = puVar11;
      *(undefined **)(puVar9 + 0x28) = puVar6;
      *(undefined8 *)(puVar9 + 0x30) = uVar3;
      func_0x000107c6157c(puVar8);
      func_0x000107c6157c(puVar11);
      func_0x000107c61174(puVar6);
      func_0x000107c61174(uVar3);
      func_0x00010090569c(0x101d07fa0,puVar9,lVar7);
      func_0x000107c61578(puVar11,2);
      func_0x000107c615e8(lVar12);
      func_0x000107c61170(puVar6);
      func_0x000107c61574(puVar8);
      func_0x000107c61574(puVar9);
    }
  }
  else {
    func_0x0001000d224c(alStack_78);
    plVar5 = alStack_78;
    func_0x0001000a8868(plVar5,uStack_60);
    puVar11 = *(undefined **)(*plVar5 + 0x10);
    auStack_90[0] = 0;
    func_0x000107c6157c(puVar11);
    func_0x000100087c34(auStack_90);
  }
  func_0x000107c61574(puVar11);
  func_0x0001000834e4(alStack_78);
  return;
}



/* Entry: 101d07c80; end: 101d07d2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d07c80(long param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 uStack_61;
  long alStack_60 [3];
  undefined8 uStack_48;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    if (param_1 == 1) {
      func_0x0001000d224c(alStack_60);
      plVar1 = alStack_60;
      func_0x0001000a8868(plVar1,uStack_48);
      uVar2 = *(undefined8 *)(*plVar1 + 0x10);
      uStack_61 = 0;
      func_0x000107c6157c(uVar2);
      func_0x000100087c34(&uStack_61);
      func_0x000107c61574(uVar2);
      func_0x000107c61170(param_2);
      func_0x0001000834e4(alStack_60);
    }
    else {
      func_0x000107c61170();
    }
  }
  return;
}



/* Entry: 101d07d30; end: 101d07d5f; -[SCDeviceLocationPrimacyMutator requestSwitchToPrimaryDeviceWithSource:] */

void FUN_101d07d30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_101d079a8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101d07d60; end: 101d07e9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d07d60(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  char *pcVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined1 uStack_69;
  long alStack_68 [3];
  undefined8 uStack_50;
  
  uVar2 = 0xd000000000000012;
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112e1ef18);
  if (param_1 == 0) {
    pcVar5 = "valis_out_of_range";
  }
  else {
    if (param_1 != 1) {
      alStack_68[0] = param_1;
      func_0x000107c60614(&UNK_1106c1030,alStack_68,&UNK_1106c1030,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101d07ea0);
      (*pcVar1)();
    }
    pcVar5 = "is_primary_response";
    uVar2 = 0xd000000000000013;
  }
  func_0x000107c5fadc(uVar2,(ulong)(pcVar5 + -0x20) | 0x8000000000000000);
  func_0x000107c6142c((ulong)(pcVar5 + -0x20) | 0x8000000000000000);
  uVar3 = 0x7261646e6f636573;
  func_0x000107c5fadc(0x7261646e6f636573,0xe900000000000079);
  func_0x000105f50ee0(uVar6,uVar2,uVar3,1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x0001000d224c(alStack_68);
  plVar4 = alStack_68;
  func_0x0001000a8868(plVar4,uStack_50);
  uVar2 = *(undefined8 *)(*plVar4 + 0x10);
  uStack_69 = 1;
  func_0x000107c6157c(uVar2);
  func_0x000100087c34(&uStack_69);
  func_0x000107c61574(uVar2);
  func_0x0001000834e4(alStack_68);
  return;
}



/* Entry: 101d07ea0; end: 101d07ecf; -[SCDeviceLocationPrimacyMutator requestSwitchToSecondaryDeviceWithSource:] */

void FUN_101d07ea0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_101d07d60(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101d07ed0; end: 101d07f2f; -[SCDeviceLocationPrimacyMutator init] */

void FUN_101d07ed0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PrimaryLocationDeviceServiceProvider.DeviceLocationPrimacyMutator",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101d07efc);
  (*pcVar1)();
}



/* Entry: 101d07f30; end: 101d07f77; -[SCDeviceLocationPrimacyMutator .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d07f30(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e1ef08));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e1ef10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e1ef18));
  return;
}



/* Entry: 101d07f78; end: 101d07f97;  */

void FUN_101d07f78(void)

{
  func_0x000107c61168(&PTR_PTR_112802250);
  return;
}



/* Entry: 101d07f98; end: 101d07faf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d07f98(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 uStack_61;
  long alStack_60 [3];
  undefined8 uStack_48;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    if (param_1 == 1) {
      func_0x0001000d224c(alStack_60);
      plVar2 = alStack_60;
      func_0x0001000a8868(plVar2,uStack_48);
      uVar3 = *(undefined8 *)(*plVar2 + 0x10);
      uStack_61 = 0;
      func_0x000107c6157c(uVar3);
      func_0x000100087c34(&uStack_61);
      func_0x000107c61574(uVar3);
      func_0x000107c61170(lVar1);
      func_0x0001000834e4(alStack_60);
    }
    else {
      func_0x000107c61170();
    }
  }
  return;
}



/* Entry: 101d07fb0; end: 101d07fdb;  */

void FUN_101d07fb0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101d07fdc; end: 101d08067; -[_TtC36PrimaryLocationDeviceServiceProviderP33_AB616341BDD9AD1D71E42780AEFE845829SCDeviceLocationPrimacyObject init] */

void FUN_101d07fdc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PrimaryLocationDeviceServiceProvider.SCDeviceLocationPrimacyObject",0x42,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101d08008);
  (*pcVar1)();
}



/* Entry: 101d08068; end: 101d0807b;  */

void FUN_101d08068(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000101d08070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 101d0807c; end: 101d080bb;  */

void FUN_101d0807c(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_38,1,0);
  *(undefined1 *)(param_2 + 0x10) = uVar1;
  return;
}



/* Entry: 101d080bc; end: 101d0831f;  */

void FUN_101d080bc(long param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  if (param_1 != 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
    lVar1 = param_2 + 0x10;
    func_0x000107c61648();
    func_0x000107c615f0(param_1);
    if (lVar1 != 0) {
      func_0x000101d08168(param_1);
      func_0x000107c61574(lVar1);
    }
    func_0x000107c61428(param_2 + 0x10,auStack_60,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61648();
    if (param_2 != 0) {
      func_0x000101d08244(param_1);
      func_0x000107c61574(param_2);
    }
    func_0x000107c615e8(param_1);
  }
  return;
}



/* Entry: 101d08320; end: 101d0837b;  */

void FUN_101d08320(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_101d0837c(param_1);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 101d0837c; end: 101d084ef;  */

void FUN_101d0837c(ulong param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x20;
  
  uVar1 = param_1;
  func_0x000107c42210();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5faec();
  func_0x000107c61170(uVar1);
  lVar3 = param_2;
  if (uVar2 != 0x616e752e43505267 || param_2 != -0x15ffffffffff868e) {
    func_0x000107c605b8(uVar2,param_2,0x616e752e43505267,0xea00000000007972,0);
    func_0x000107c6142c(param_2);
    if ((uVar2 & 1) != 0) goto LAB_101d08464;
    uVar1 = param_1;
    func_0x000107c42210();
    func_0x000107c61180();
    uVar2 = uVar1;
    func_0x000107c5faec();
    func_0x000107c61170(uVar1);
    if ((uVar2 != 0xd000000000000014) || (lVar3 != -0x7ffffffef0ff34b0)) {
      func_0x000107c605b8(uVar2,lVar3,0xd000000000000014,0x800000010f00cb50,0);
      func_0x000107c6142c(lVar3);
      if ((uVar2 & 1) == 0) {
        return;
      }
      goto LAB_101d08464;
    }
  }
  func_0x000107c6142c(lVar3);
LAB_101d08464:
  func_0x000107c3fcb0();
  if (param_1 == 0xb) {
    lVar3 = *(long *)(unaff_x20 + 0x10);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c5041c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar3);
      return;
    }
  }
  return;
}



/* Entry: 101d084f0; end: 101d0858b;  */

void FUN_101d084f0(int param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    iVar1 = param_1;
    func_0x000107c49804();
    func_0x000106771494();
    if ((iVar1 != 0) && (func_0x000107c49804(), param_1 == 1)) {
      lVar2 = *(long *)(param_2 + 0x10);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar2 != 0) {
        func_0x000107c5041c();
        func_0x000107c615e8(lVar2);
      }
    }
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 101d0858c; end: 101d087d3;  */

void FUN_101d0858c(long param_1,undefined8 param_2)

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



/* Entry: 101d087d4; end: 101d0883f;  */

void FUN_101d087d4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000834e4(unaff_x20 + 0x30);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101d08840; end: 101d08877;  */

void FUN_101d08840(int param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    iVar1 = param_1;
    func_0x000107c49804();
    func_0x000106771494();
    if ((iVar1 != 0) && (func_0x000107c49804(), param_1 == 1)) {
      lVar3 = *(long *)(lVar2 + 0x10);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar3 != 0) {
        func_0x000107c5041c();
        func_0x000107c615e8(lVar3);
      }
    }
    func_0x000107c61574(lVar2);
  }
  return;
}



/* Entry: 101d08878; end: 101d088bf;  */

void FUN_101d08878(long param_1,undefined8 param_2)

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



/* Entry: 101d088c0; end: 101d08c9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_101d088c0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  puVar1 = &UNK_110472c40;
  func_0x000107c613fc(&UNK_110472c40,0x18,7);
  func_0x000107c615fc(puVar1 + 0x10,param_4);
  puVar2 = &UNK_110472c68;
  func_0x000107c613fc(&UNK_110472c68,0x18,7);
  func_0x000107c615fc(puVar2 + 0x10,param_5);
  puVar3 = &UNK_110472c90;
  func_0x000107c613fc(&UNK_110472c90,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar1;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  func_0x0001000285a8(0x112e1f1d8,&UNK_10da01700);
  func_0x000107c613fc();
  pcVar4 = FUN_101d08d50;
  func_0x0001000bdd8c(FUN_101d08d50,puVar3);
  uVar9 = *(undefined8 *)(param_6 + _DAT_113083868);
  lVar5 = 0;
  func_0x000101d09420();
  func_0x000107c613fc();
  uVar7 = *(undefined8 *)(param_2 + _DAT_112fcd700);
  *(undefined8 *)(lVar5 + 0x10) = uVar9;
  uVar8 = *(undefined8 *)(param_2 + _DAT_112fcd710);
  func_0x000107c61174(uVar9);
  func_0x000107c6157c(uVar7);
  func_0x000107c61174(uVar8);
  uVar9 = param_3;
  func_0x000107c5dc04(param_3);
  func_0x000107c61180();
  FUN_101d08e2c(uVar7,uVar8,pcVar4,uVar9,lVar5);
  *(undefined8 *)(unaff_x20 + _DAT_112e1f1e0) = uVar7;
  puVar6 = auStack_70;
  func_0x000107c61154(puVar6,PTR_s_init_1125d9248);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  return puVar6;
}



/* Entry: 101d08ca0; end: 101d08d4f;  */

void FUN_101d08ca0(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_2 = param_2 + 0x10;
  func_0x000107c61600();
  lVar1 = param_2;
  func_0x000107c44580();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  param_3 = param_3 + 0x10;
  func_0x000107c61600(param_3);
  lVar2 = param_3;
  func_0x000107c3e270();
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  lVar3 = 0;
  func_0x000101d09d04();
  func_0x000107c613fc();
  FUN_101d09440(lVar1,lVar2);
  param_1[3] = lVar3;
  param_1[4] = (long)&PTR_DAT_110472dd0;
  *param_1 = lVar1;
  return;
}



/* Entry: 101d08d50; end: 101d08d57;  */

void FUN_101d08d50(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x10) + 0x10;
  func_0x000107c61600();
  lVar2 = lVar1;
  func_0x000107c44580();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61600(lVar3);
  lVar1 = lVar3;
  func_0x000107c3e270();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  lVar3 = 0;
  func_0x000101d09d04();
  func_0x000107c613fc();
  FUN_101d09440(lVar2,lVar1);
  param_1[3] = lVar3;
  param_1[4] = (long)&PTR_DAT_110472dd0;
  *param_1 = lVar2;
  return;
}



/* Entry: 101d08d58; end: 101d08daf; +[_TtC36PrimaryLocationDeviceServiceProvider38PrimaryLocationDeviceCheckerEntryPoint attributedTask] */

void FUN_101d08d58(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000100079360(0);
  uVar1 = 0;
  func_0x0001005e21cc(0);
  func_0x000100965cd0();
  uVar2 = uVar1;
  func_0x0001005e2264();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 101d08db0; end: 101d08e0f; -[_TtC36PrimaryLocationDeviceServiceProvider38PrimaryLocationDeviceCheckerEntryPoint init] */

void FUN_101d08db0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PrimaryLocationDeviceServiceProvider.PrimaryLocationDeviceCheckerEntryPoint",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101d08ddc);
  (*pcVar1)();
}



/* Entry: 101d08e10; end: 101d08e2b; -[_TtC36PrimaryLocationDeviceServiceProvider38PrimaryLocationDeviceCheckerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d08e10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e1f1e0));
  return;
}



/* Entry: 101d08e2c; end: 101d09323;  */

long FUN_101d08e2c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long *param_5)

{
  undefined1 uVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  code *pcVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long extraout_x8;
  long extraout_x12;
  code *pcVar12;
  undefined8 uVar13;
  long lVar14;
  byte *pbVar15;
  undefined *puVar16;
  long alStack_130 [3];
  undefined1 auStack_118 [24];
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  long *plStack_e8;
  long lStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [24];
  long alStack_b8 [3];
  long lStack_a0;
  undefined **ppuStack_98;
  long *aplStack_90 [3];
  long lStack_78;
  undefined **ppuStack_70;
  
  lVar14 = *param_5;
  ppuStack_70 = &PTR_DAT_110472db8;
  lVar2 = 0;
  aplStack_90[0] = param_5;
  lStack_78 = lVar14;
  func_0x000101d08820();
  func_0x000107c613fc();
  func_0x0001000c6518(aplStack_90,lVar14);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar14 + -8) + 0x40));
  plVar4 = (long *)((long)alStack_130 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(plVar4);
  alStack_b8[0] = *plVar4;
  ppuStack_98 = &PTR_DAT_110472db8;
  *(undefined8 *)(lVar2 + 0x18) = 0;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  puVar3 = PTR_PTR_1126c5b08;
  lStack_a0 = lVar14;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x58) = puVar3;
  *(undefined8 *)(lVar2 + 0x10) = param_2;
  *(long *)(lVar2 + 0x28) = param_3;
  FUN_101d09370(alStack_b8,lVar2 + 0x30);
  puVar3 = &UNK_110472cf8;
  func_0x000107c613fc(&UNK_110472cf8,0x11,7);
  pbVar15 = puVar3 + 0x10;
  *pbVar15 = 2;
  func_0x000107c61174();
  alStack_130[2] = param_2;
  func_0x000107c6157c(param_3);
  func_0x0001000d224c(&puStack_100);
  plVar4 = plStack_e8;
  func_0x0001000a8868(&puStack_100,plStack_e8);
  (**(code **)(lStack_e0 + 8))(plVar4,lStack_e0);
  pcVar12 = *(code **)(*plVar4 + 0x60);
  func_0x000107c6157c(puVar3);
  pcVar5 = FUN_101d093b4;
  (*pcVar12)(FUN_101d093b4,puVar3);
  func_0x000107c61574(plVar4);
  func_0x000107c61574(puVar3);
  func_0x000107c615e8(pcVar5);
  func_0x0001000834e4(&puStack_100);
  func_0x000107c61428(pbVar15,auStack_d0,0,0);
  if (*pbVar15 - 1 < 2) {
    func_0x0001000d224c(&puStack_100);
    ppuVar6 = &puStack_100;
    func_0x0001000a8868(ppuVar6,plStack_e8);
    puVar11 = &UNK_110472d20;
    func_0x000107c613fc(&UNK_110472d20,0x18,7);
    func_0x000107c61644(puVar11 + 0x10,lVar2);
    puVar16 = *ppuVar6;
    lVar14 = *(long *)(puVar16 + 0x18);
    if (lVar14 == 0) {
      func_0x000107c61428(puVar11 + 0x10,auStack_118,0,0);
      func_0x000107c61648(puVar11 + 0x10);
    }
    else {
      puVar7 = PTR_PTR_1126bc1b8;
      func_0x000107c61168();
      uVar1 = uRam0000000112e1f0d0;
      alStack_130[0] = param_1;
      func_0x000107c61580(puVar11,2);
      func_0x000107c615f0(lVar14);
      func_0x000106b13b74(puVar7,uVar1,0);
      func_0x000107c61180();
      uVar13 = *(undefined8 *)(puVar16 + 0x20);
      lVar8 = lVar14;
      func_0x000107c614f0(lVar14);
      puVar9 = &UNK_110472d70;
      alStack_130[1] = param_3;
      func_0x000107c613fc(&UNK_110472d70,0x18,7);
      func_0x000107c61644(puVar9 + 0x10,puVar16);
      puVar16 = &UNK_110472d98;
      func_0x000107c613fc(&UNK_110472d98,0x38,7);
      *(undefined **)(puVar16 + 0x10) = puVar9;
      *(undefined8 *)(puVar16 + 0x18) = 0x101d093e0;
      *(undefined **)(puVar16 + 0x20) = puVar11;
      *(undefined **)(puVar16 + 0x28) = puVar7;
      *(undefined8 *)(puVar16 + 0x30) = uVar13;
      func_0x000107c6157c(puVar9);
      func_0x000107c6157c(puVar11);
      func_0x000107c61174(puVar7);
      func_0x000107c61174(uVar13);
      param_3 = alStack_130[1];
      func_0x00010090569c(0x101d093e8,puVar16,lVar8);
      func_0x000107c61578(puVar11,2);
      func_0x000107c615e8(lVar14);
      param_1 = alStack_130[0];
      func_0x000107c61170(puVar7);
      func_0x000107c61574(puVar9);
    }
    func_0x000107c61574();
    func_0x000107c61574(puVar11);
    func_0x0001000834e4(&puStack_100);
  }
  else {
    uVar13 = *(undefined8 *)(lVar2 + 0x58);
    func_0x000107c61174(uVar13);
    uVar10 = 0x7972616d697270;
    func_0x000107c5fadc(0x7972616d697270,0xe700000000000000);
    func_0x000105f50d6c(uVar13,uVar10,1);
    func_0x000107c61170(uVar13);
    func_0x000107c61170(uVar10);
    plVar4 = alStack_b8;
    func_0x0001000a8868(plVar4,lStack_a0);
    lVar14 = *plVar4;
    puVar11 = PTR_PTR_1126a9230;
    func_0x000107c610f8(PTR_PTR_1126a9230);
    func_0x000107c453e4();
    func_0x000107c5580c();
    lVar14 = *(long *)(lVar14 + 0x10);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar14 != 0) {
      func_0x000107c4bfb0();
      func_0x000107c615e8(lVar14);
    }
    func_0x000107c61170(puVar11);
  }
  puVar11 = &UNK_110472d20;
  func_0x000107c613fc(&UNK_110472d20,0x18,7);
  func_0x000107c61644(puVar11 + 0x10,lVar2);
  lStack_e0 = 0x101d093bc;
  puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f8 = 0x42000000;
  pcStack_f0 = FUN_101d08878;
  plStack_e8 = (long *)&UNK_110472d38;
  ppuVar6 = &puStack_100;
  puStack_d8 = puVar11;
  func_0x000107c60bc4(ppuVar6);
  func_0x000107c61574(puStack_d8);
  func_0x000107c4db94(param_4);
  func_0x000107c61574(param_1);
  func_0x000107c61170(alStack_130[2]);
  func_0x000107c61574(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61574(puVar3);
  func_0x0001000834e4(alStack_b8);
  func_0x0001000834e4(aplStack_90);
  return lVar2;
}



/* Entry: 101d09324; end: 101d0936f;  */

void FUN_101d09324(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101d09370; end: 101d093b3;  */

long FUN_101d09370(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 101d093b4; end: 101d093fb;  */

void FUN_101d093b4(undefined1 *param_1)

{
  undefined1 uVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,1,0);
  *(undefined1 *)(unaff_x20 + 0x10) = uVar1;
  return;
}



/* Entry: 101d093fc; end: 101d0943f;  */

void FUN_101d093fc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101d09440; end: 101d09607;  */

void FUN_101d09440(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar5 = &puStack_80;
  puVar1 = PTR_PTR_1126c5b08;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x20) = puVar1;
  lVar2 = param_2;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    *(undefined8 *)(unaff_x20 + 0x10) = 0;
    *(undefined8 *)(unaff_x20 + 0x18) = 0;
    uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
    func_0x000107c61174(uVar6);
    uVar7 = 0xd000000000000014;
    func_0x000107c5fadc(0xd000000000000014,0x800000010f00cbc0);
    func_0x000105f51894(uVar6,uVar7,1);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
  }
  else {
    lVar3 = lVar2;
    func_0x000107c4f7fc();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    *(long *)(unaff_x20 + 0x18) = lVar3;
    puVar4 = PTR_PTR_1126ae720;
    func_0x000107c61168();
    puVar1 = &UNK_110472e48;
    func_0x000107c613fc(&UNK_110472e48,0x20,7);
    *(long *)(puVar1 + 0x10) = lVar3;
    *(undefined8 *)(puVar1 + 0x18) = param_1;
    uStack_60 = 0x101d09d60;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    pcStack_70 = FUN_101d096ac;
    puStack_68 = &UNK_110472e60;
    puStack_58 = puVar1;
    func_0x000107c60bc4(&puStack_80);
    puVar1 = puStack_58;
    func_0x000107c61174(lVar3);
    func_0x000107c61174();
    func_0x000107c61174(param_1);
    func_0x000107c61574(puVar1);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(lVar3);
    func_0x000107c60bd0(ppuVar5);
    *(undefined **)(unaff_x20 + 0x10) = puVar4;
  }
  return;
}



/* Entry: 101d09608; end: 101d096ab;  */

undefined * FUN_101d09608(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126bc1b8;
  func_0x000107c61168(PTR_PTR_1126bc1b8);
  uVar2 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f00cbe0);
  func_0x000106b139c8(puVar1,uVar2,param_1,param_2);
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  puVar3 = PTR_PTR_1126a9240;
  func_0x000107c610f8(PTR_PTR_1126a9240);
  func_0x000107c49088();
  func_0x000107c61170(puVar1);
  return puVar3;
}



/* Entry: 101d096ac; end: 101d096e3;  */

void FUN_101d096ac(long param_1)

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



/* Entry: 101d096e4; end: 101d0986f;  */

void FUN_101d096e4(undefined8 param_1,long param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    lVar5 = *(long *)(param_2 + 0x10);
    lVar1 = lVar5;
    func_0x000107c61174();
    func_0x000107c61574(param_2);
    if (lVar5 != 0) {
      lVar5 = lVar1;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar1);
      if (lVar5 != 0) {
        func_0x000107c6071c();
        puVar2 = PTR_PTR_1126a9248;
        func_0x000107c610f8(PTR_PTR_1126a9248);
        func_0x000107c453e4();
        puVar3 = &UNK_110472e98;
        func_0x000107c613fc(&UNK_110472e98,0x30,7);
        *(undefined8 *)(puVar3 + 0x10) = param_1;
        *(undefined8 *)(puVar3 + 0x18) = param_6;
        *(code **)(puVar3 + 0x20) = param_3;
        *(undefined8 *)(puVar3 + 0x28) = param_4;
        pcStack_88 = FUN_101d09d94;
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0x42000000;
        uStack_98 = 0x101d09dcc;
        puStack_90 = &UNK_110472eb0;
        ppuVar4 = &puStack_a8;
        puStack_80 = puVar3;
        func_0x000107c60bc4(ppuVar4);
        puVar3 = puStack_80;
        func_0x000107c61174(param_6);
        func_0x000107c6157c(param_4);
        func_0x000107c61574(puVar3);
        func_0x000107c4a260(lVar5);
        func_0x000107c60bd0(ppuVar4);
        func_0x000107c61170(lVar5);
        func_0x000107c61170(puVar2);
        return;
      }
    }
  }
  (*param_3)(0,1);
  return;
}



/* Entry: 101d09870; end: 101d099df;  */

/* WARNING: Possible PIC construction at 0x000101d09920: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d09990: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d09924) */
/* WARNING: Removing unreachable block (ram,0x000101d09994) */

void FUN_101d09870(double param_1,long param_2,undefined8 param_3,undefined8 param_4,code *param_5)

{
  undefined8 uVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  
  lVar4 = 0x65736c6166;
  dVar5 = param_1;
  func_0x000107c6071c();
  if (param_2 == 0) {
    func_0x000107c614b0(param_3);
    (*param_5)(param_3,1);
    func_0x000101d09da4(param_3,1);
    func_0x000107c5fadc(0x65736c6166,0xe500000000000000);
    func_0x000107c6142c(0xe500000000000000);
    func_0x000105f51284(dVar5 - param_1,param_4,lVar4);
  }
  else {
    func_0x000107c61174();
    func_0x000107c4a258();
    lVar3 = param_2;
    func_0x000107c4a258();
    bVar2 = (int)lVar3 == 0;
    lVar3 = 0x65757274;
    if (bVar2) {
      lVar3 = lVar4;
    }
    uVar1 = 0xe400000000000000;
    if (bVar2) {
      uVar1 = 0xe500000000000000;
    }
    func_0x000107c5fadc(lVar3,uVar1);
    func_0x000107c6142c(uVar1);
    func_0x000105f51418(param_4,lVar3,1);
    lVar4 = param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 101d099e0; end: 101d09b67;  */

void FUN_101d099e0(undefined8 param_1,long param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    lVar5 = *(long *)(param_2 + 0x10);
    lVar1 = lVar5;
    func_0x000107c61174();
    func_0x000107c61574(param_2);
    if (lVar5 != 0) {
      lVar5 = lVar1;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar1);
      if (lVar5 != 0) {
        func_0x000107c6071c();
        puVar2 = PTR_PTR_1126a9238;
        func_0x000107c610f8(PTR_PTR_1126a9238);
        func_0x000107c453e4();
        puVar3 = &UNK_110472df8;
        func_0x000107c613fc(&UNK_110472df8,0x30,7);
        *(undefined8 *)(puVar3 + 0x10) = param_1;
        *(undefined8 *)(puVar3 + 0x18) = param_6;
        *(code **)(puVar3 + 0x20) = param_3;
        *(undefined8 *)(puVar3 + 0x28) = param_4;
        pcStack_88 = FUN_101d09d24;
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0x42000000;
        uStack_98 = 0x101d09dc8;
        puStack_90 = &UNK_110472e10;
        ppuVar4 = &puStack_a8;
        puStack_80 = puVar3;
        func_0x000107c60bc4(ppuVar4);
        puVar3 = puStack_80;
        func_0x000107c61174(param_6);
        func_0x000107c6157c(param_4);
        func_0x000107c61574(puVar3);
        func_0x000107c57840(lVar5);
        func_0x000107c60bd0(ppuVar4);
        func_0x000107c61170(lVar5);
        func_0x000107c61170(puVar2);
        return;
      }
    }
  }
  (*param_3)(0);
  return;
}



/* Entry: 101d09b68; end: 101d09c57;  */

/* WARNING: Possible PIC construction at 0x000101d09c0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d09c10) */

void FUN_101d09b68(long param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c6071c();
  if (param_1 == 0) {
    func_0x000107c614b0(param_2);
    uVar2 = 0x65736c6166;
    uVar1 = 0xe500000000000000;
  }
  else {
    uVar1 = 0xe400000000000000;
    param_2 = 1;
    uVar2 = 0x65757274;
  }
  (*param_4)(param_2);
  func_0x000101d09d50(param_2);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000105f5158c(param_3,uVar2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 101d09c58; end: 101d09ccf;  */

/* WARNING: Possible PIC construction at 0x000101d09cb4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d09cb8) */

void FUN_101d09c58(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 101d09cd0; end: 101d09d23;  */

void FUN_101d09cd0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101d09d24; end: 101d09d67;  */

/* WARNING: Possible PIC construction at 0x000101d09c0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d09c10) */

void FUN_101d09d24(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  pcVar2 = *(code **)(unaff_x20 + 0x20);
  func_0x000107c6071c(*(undefined8 *)(unaff_x20 + 0x10));
  if (param_1 == 0) {
    func_0x000107c614b0(param_2);
    uVar4 = 0x65736c6166;
    uVar3 = 0xe500000000000000;
  }
  else {
    uVar3 = 0xe400000000000000;
    param_2 = 1;
    uVar4 = 0x65757274;
  }
  (*pcVar2)(param_2);
  func_0x000101d09d50(param_2);
  func_0x000107c5fadc(uVar4,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000105f5158c(uVar1,uVar4,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 101d09d68; end: 101d09d93;  */

void FUN_101d09d68(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101d09d94; end: 101d09dcf;  */

/* WARNING: Possible PIC construction at 0x000101d09920: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d09990: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d09924) */
/* WARNING: Removing unreachable block (ram,0x000101d09994) */

void FUN_101d09d94(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  double dVar7;
  double dVar8;
  
  dVar8 = *(double *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  pcVar3 = *(code **)(unaff_x20 + 0x20);
  lVar6 = 0x65736c6166;
  dVar7 = dVar8;
  func_0x000107c6071c();
  if (param_1 == 0) {
    func_0x000107c614b0(param_2);
    (*pcVar3)(param_2,1);
    func_0x000101d09da4(param_2,1);
    func_0x000107c5fadc(0x65736c6166,0xe500000000000000);
    func_0x000107c6142c(0xe500000000000000);
    func_0x000105f51284(dVar7 - dVar8,uVar2,lVar6);
  }
  else {
    func_0x000107c61174();
    func_0x000107c4a258();
    lVar5 = param_1;
    func_0x000107c4a258();
    bVar4 = (int)lVar5 == 0;
    lVar5 = 0x65757274;
    if (bVar4) {
      lVar5 = lVar6;
    }
    uVar1 = 0xe400000000000000;
    if (bVar4) {
      uVar1 = 0xe500000000000000;
    }
    func_0x000107c5fadc(lVar5,uVar1);
    func_0x000107c6142c(uVar1);
    func_0x000105f51418(uVar2,lVar5,1);
    lVar6 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar6);
  return;
}



/* Entry: 101d09dd0; end: 101d09eaf;  */

void FUN_101d09dd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  return;
}



/* Entry: 101d09eb0; end: 101d09eb7;  */

void FUN_101d09eb0(long param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_60 [24];
  long lStack_48;
  undefined8 uStack_40;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6162c();
  func_0x00010058c978(auStack_60);
  func_0x000107c61574(uVar1);
  func_0x00010058ced8(auStack_60,lStack_48);
  *(undefined8 *)(param_1 + 0x20) = uStack_40;
  *(long *)(param_1 + 0x18) = lStack_48;
  func_0x0001000c5db4(param_1);
  (**(code **)(*(long *)(lStack_48 + -8) + 0x10))();
  func_0x00010058cefc(auStack_60);
  return;
}



/* Entry: 101d09eb8; end: 101d09f87;  */

void FUN_101d09eb8(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = param_2;
  func_0x000107c6162c();
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(param_2);
  uVar3 = uVar2;
  func_0x000107c44580();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c6162c(param_2);
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c61174(uVar4);
  func_0x000107c61574(param_2);
  uVar2 = uVar4;
  func_0x000107c3e270(uVar4);
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  uVar5 = 0;
  func_0x000101d09d04();
  uVar4 = uVar5;
  func_0x000107c613fc();
  FUN_101d09440(uVar3,uVar2,uVar4);
  param_1[3] = uVar5;
  param_1[4] = &PTR_DAT_110472dd0;
  *param_1 = uVar3;
  return;
}



/* Entry: 101d09f88; end: 101d09f8f;  */

void FUN_101d09f88(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  lVar1 = lVar6;
  func_0x000107c6162c();
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lVar6);
  uVar3 = uVar2;
  func_0x000107c44580();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c6162c(lVar6);
  uVar4 = *(undefined8 *)(lVar6 + 0x20);
  func_0x000107c61174(uVar4);
  func_0x000107c61574(lVar6);
  uVar2 = uVar4;
  func_0x000107c3e270(uVar4);
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  uVar5 = 0;
  func_0x000101d09d04();
  uVar4 = uVar5;
  func_0x000107c613fc();
  FUN_101d09440(uVar3,uVar2,uVar4);
  param_1[3] = uVar5;
  param_1[4] = &PTR_DAT_110472dd0;
  *param_1 = uVar3;
  return;
}



/* Entry: 101d09f90; end: 101d0a037;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d09f90(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lStack_50;
  long lStack_48;
  
  lVar2 = 0;
  FUN_101d07f78();
  lVar3 = lVar2;
  func_0x000107c610f8();
  lVar1 = _DAT_112e1ef18;
  puVar4 = PTR_PTR_1126c5b08;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar3 + lVar1) = puVar4;
  *(undefined8 *)(lVar3 + _DAT_112e1ef08) = param_1;
  *(undefined8 *)(lVar3 + _DAT_112e1ef10) = param_2;
  puVar4 = PTR_s_init_1125d9248;
  lStack_50 = lVar3;
  lStack_48 = lVar2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_50,puVar4);
  return;
}



/* Entry: 101d0a038; end: 101d0a03f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d0a038(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar4 = 0;
  FUN_101d07f78();
  lVar5 = lVar4;
  func_0x000107c610f8();
  lVar3 = _DAT_112e1ef18;
  puVar6 = PTR_PTR_1126c5b08;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar5 + lVar3) = puVar6;
  *(undefined8 *)(lVar5 + _DAT_112e1ef08) = uVar1;
  *(undefined8 *)(lVar5 + _DAT_112e1ef10) = uVar2;
  puVar6 = PTR_s_init_1125d9248;
  lStack_50 = lVar5;
  lStack_48 = lVar4;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c61154(&lStack_50,puVar6);
  return;
}



/* Entry: 101d0a040; end: 101d0a06b;  */

long FUN_101d0a040(void)

{
  long lVar1;
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  lVar1 = 0x112e1f370;
  func_0x0001000285a8(0x112e1f370,&UNK_10da01878);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(unaff_x20 + 0x28,lVar1);
  return unaff_x20 + 0x28;
}



/* Entry: 101d0a06c; end: 101d0a0e7;  */

void FUN_101d0a06c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x00010058caec(unaff_x20 + 0x28);
  func_0x000107c61574();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101d0a0e8; end: 101d0a107;  */

undefined8 * FUN_101d0a0e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar3 = param_1[2];
  uVar5 = param_1[5];
  uVar4 = param_1[4];
  param_2[3] = param_1[3];
  param_2[2] = uVar3;
  param_2[5] = uVar5;
  param_2[4] = uVar4;
  param_2[1] = uVar2;
  *param_2 = uVar1;
  return param_2;
}



/* Entry: 101d0a108; end: 101d0a167; -[_TtC36PrimaryLocationDeviceServiceProvider36DeviceLocationPrimacyS2RInfoProvider init] */

void FUN_101d0a108(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PrimaryLocationDeviceServiceProvider.DeviceLocationPrimacyS2RInfoProvider",
                      0x49,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101d0a134);
  (*pcVar1)();
}



/* Entry: 101d0a168; end: 101d0a177; -[_TtC36PrimaryLocationDeviceServiceProvider36DeviceLocationPrimacyS2RInfoProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d0a168(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_weakDestroy_11034f5e0)(param_1 + _DAT_112e1f460);
  return;
}



/* Entry: 101d0a178; end: 101d0a197;  */

void FUN_101d0a178(void)

{
  func_0x000107c61168(&PTR_PTR_1128024a0);
  return;
}



/* Entry: 101d0a198; end: 101d0a31b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_101d0a198(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  undefined1 auStack_68 [24];
  long *plStack_50;
  long lStack_48;
  
  param_1 = param_1 + _DAT_112e1f460;
  func_0x000107c61648();
  if (param_1 == 0) {
    uVar4 = 0x800000010f00cca0;
    uVar5 = 0xd00000000000002d;
  }
  else {
    func_0x000104875e28(auStack_68);
    plVar2 = plStack_50;
    FUN_101d0a490(auStack_68);
    if (plVar2 == (long *)0x0) {
      uVar5 = 0xd000000000000025;
      func_0x000107c61574(param_1);
      uVar4 = 0x800000010f00ccd0;
    }
    else {
      puVar1 = &UNK_110473048;
      func_0x000107c613fc(&UNK_110473048,0x20,7);
      puVar6 = (undefined8 *)(puVar1 + 0x10);
      *puVar6 = 0;
      *(undefined8 *)(puVar1 + 0x18) = 0xe000000000000000;
      func_0x0001000d224c(auStack_68);
      func_0x0001000a8868(auStack_68,plStack_50);
      plVar2 = plStack_50;
      (**(code **)(lStack_48 + 8))(plStack_50,lStack_48);
      pcVar7 = *(code **)(*plVar2 + 0x60);
      func_0x000107c6157c(puVar1);
      pcVar3 = FUN_101d0a4d8;
      (*pcVar7)(FUN_101d0a4d8,puVar1);
      func_0x000107c61574(plVar2);
      func_0x000107c61574(puVar1);
      func_0x000107c61574(param_1);
      func_0x000107c615e8(pcVar3);
      func_0x0001000834e4(auStack_68);
      func_0x000107c61428(puVar6,auStack_68,0,0);
      uVar5 = *puVar6;
      uVar4 = *(undefined8 *)(puVar1 + 0x18);
      func_0x000107c61434(uVar4);
      func_0x000107c61574(puVar1);
    }
  }
  auVar8._8_8_ = uVar4;
  auVar8._0_8_ = uVar5;
  return auVar8;
}



/* Entry: 101d0a31c; end: 101d0a3bb;  */

void FUN_101d0a31c(char *param_1,long param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [24];
  
  uVar4 = 0xd00000000000001a;
  pcVar3 = "Location primacy is UNKNOWN for this device";
  if (*param_1 != '\x01') {
    uVar4 = 0xd00000000000002b;
    pcVar3 = "Location primacy was never determined";
  }
  pcVar1 = "This is a SECONDARY device";
  uVar2 = 0xd000000000000018;
  if (*param_1 != '\0') {
    pcVar1 = pcVar3 + 0x10;
    uVar2 = uVar4;
  }
  func_0x000107c61428(param_2 + 0x10,auStack_48,1,0);
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x10) = uVar2;
  *(ulong *)(param_2 + 0x18) = (ulong)pcVar1 | 0x8000000000000000;
  func_0x000107c6142c(uVar4);
  return;
}



/* Entry: 101d0a3bc; end: 101d0a48f; -[_TtC36PrimaryLocationDeviceServiceProvider36DeviceLocationPrimacyS2RInfoProvider getMetaInfo] */

void FUN_101d0a3bc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101d0a198();
  func_0x000107c602fc(0x4f);
  func_0x000107c5fb78(0xd000000000000044,0x800000010f00cc50);
  func_0x000107c5fb78(uVar1,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c5fb78(0x7d6c656e61707b0a,0xe90000000000000a);
  func_0x000107c61170(param_1);
  uVar1 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  func_0x000107c6142c(0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}


