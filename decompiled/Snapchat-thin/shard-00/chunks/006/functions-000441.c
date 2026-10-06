/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10090a964; end: 10090aa4f;  */

void FUN_10090a964(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  FUN_100083b20(&uStack_58);
  FUN_100083b20(&uStack_60);
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  uVar1 = uStack_58;
  FUN_10090aa80(uStack_58,uStack_60,uStack_68,uStack_70,uStack_78);
  func_0x000107c61180();
  func_0x000107c615e8(uStack_58);
  func_0x000107c615e8(uStack_60);
  func_0x000107c61170(uStack_68);
  func_0x000107c61170(uStack_70);
  func_0x000107c61170(uStack_78);
  *param_1 = uVar1;
  return;
}



/* Entry: 10090aa50; end: 10090aa7f;  */

void FUN_10090aa50(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126a6f60;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = puVar1;
  return;
}



/* Entry: 10090aa80; end: 10090ade7;  */

void FUN_10090aa80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  puVar1 = PTR_PTR_1126b6cf0;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c610fc(puVar1);
  puVar2 = PTR_PTR_1126b6cf8;
  func_0x000107c610f4();
  func_0x000107c45874();
  func_0x000107c61170(param_1);
  puVar3 = PTR_PTR_1126b6d00;
  func_0x000107c61160(PTR_PTR_1126b6d00);
  FUN_10090b1c8(puVar1,puVar3,puVar2,param_2);
  uVar4 = param_2;
  func_0x000107c3ebd4();
  puVar9 = (undefined *)0x0;
  if ((int)uVar4 != 0) {
    func_0x0001054e44d0(param_2);
    puVar5 = PTR_PTR_1126b6d08;
    func_0x000107c610f4();
    uVar4 = param_3;
    func_0x000107c3ecc4(param_3);
    func_0x000107c61180();
    func_0x000107c45a84();
    func_0x000107c61170(uVar4);
    puVar6 = PTR_PTR_1126b6d10;
    func_0x000107c610f4(PTR_PTR_1126b6d10);
    func_0x000107c4575c();
    puVar8 = PTR_PTR_1126b6d18;
    puVar9 = PTR__OBJC_CLASS___NSBundle_1126aea78;
    func_0x000107c4c12c(PTR__OBJC_CLASS___NSBundle_1126aea78);
    func_0x000107c61180();
    puVar7 = puVar9;
    func_0x000107c4d9bc();
    func_0x000107c61180();
    func_0x000107c40c24(puVar8);
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar9);
    puVar7 = PTR_PTR_1126b6d20;
    puVar9 = PTR_PTR_1126b6d28;
    func_0x000107c43f74(PTR_PTR_1126b6d28);
    func_0x000107c61180();
    func_0x000107c408fc(puVar7);
    func_0x000107c61180();
    func_0x000107c61170(puVar9);
    puVar9 = PTR_PTR_1126b6d30;
    func_0x000107c610f4();
    func_0x000107c46718();
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar5);
  }
  puVar8 = PTR_PTR_1126b6d38;
  func_0x000107c610f4();
  uVar4 = param_4;
  func_0x000107c44f4c(param_4);
  func_0x000107c61180();
  func_0x000107c61170(param_4);
  func_0x000107c46c58();
  func_0x000107c61170(uVar4);
  func_0x000107c61174(puVar9);
  func_0x000107c61174(puVar8);
  func_0x000107c5d43c(puVar1);
  puVar7 = PTR_PTR_1126b6d40;
  func_0x000107c610f4(PTR_PTR_1126b6d40);
  func_0x000107c48438();
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10090ade8; end: 10090ae03; -[SCValdiRuntimeManager .cxx_construct] */

void FUN_10090ade8(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined2 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  return;
}



/* Entry: 10090ae04; end: 10090af6f; -[SCValdiRuntimeManager init] */

undefined8 * FUN_10090ae04(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126fc6f0;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c41570(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    func_0x000107c61180();
    func_0x000107c3d7bc();
    FUN_10090af70();
    puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x000107c5dc6c();
    func_0x000107c61180();
    uVar4 = puVar1[0x14];
    puVar1[0x14] = puVar2;
    func_0x00010090af78(uVar4);
    *(undefined1 *)((long)puVar1 + 0x9b) = 1;
    func_0x00010090af80();
    uStack_60 = 0xc2000000;
    uStack_58 = 0x10090b070;
    puStack_50 = &UNK_110a1ef70;
    func_0x00010090af90();
    puVar3 = auStack_68;
    puStack_48 = puVar1;
    FUN_10090afa0();
    FUN_10090b024();
    func_0x000107c3e15c();
    func_0x000107c61180();
    uVar4 = puVar1[0x15];
    puVar1[0x15] = puVar3;
    func_0x00010090af78(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMapTable_1126b4428;
    func_0x000107c5c210();
    func_0x000107c61180();
    uVar4 = puVar1[0x16];
    puVar1[0x16] = puVar2;
    func_0x00010090af78(uVar4);
    func_0x00010090b094();
  }
  return puVar1;
}



/* Entry: 10090af70; end: 10090af9f;  */

void FUN_10090af70(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10090afa0; end: 10090b023;  */

void FUN_10090afa0(void)

{
  long unaff_x19;
  
  func_0x00010090af98();
  if (lRam0000000113729318 != -1) {
    FUN_10002a2fc(0x113729318,&PTR___NSConcreteGlobalBlock_110a1eff0);
  }
  FUN_10090b060();
  func_0x00010090b068();
  (**(code **)(unaff_x19 + 0x10))();
  func_0x00010090b080();
  func_0x00010090af70();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10090b024; end: 10090b02f;  */

undefined * FUN_10090b024(void)

{
  return PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
}



/* Entry: 10090b030; end: 10090b05f;  */

void FUN_10090b030(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_10090b024();
  func_0x000107c3e15c();
  func_0x000107c61180();
  uVar1 = uRam0000000113729320;
  uRam0000000113729320 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10090b060; end: 10090b09b;  */

void FUN_10090b060(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10090b09c; end: 10090b15b; -[SCNComposerSnapModulesComposerSnapModulesDependencies initWithAuthContextDelegate:contentManager:] */

undefined1 *
FUN_10090b09c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126e74a0;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10090b15c; end: 10090b1c7; -[SCComposerBadFrameRegistrar init] */

undefined1 * FUN_10090b15c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e7470;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMapTable_1126b4428;
    func_0x000107c5c214();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10090b1c8; end: 10090b33b;  */

void FUN_10090b1c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x000107c61174(param_4);
  puVar1 = PTR_PTR_1126b6d58;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_1);
  func_0x000107c40a8c(puVar1);
  func_0x000107c61180();
  func_0x000107c4fc60(param_1);
  func_0x000107c61170(puVar1);
  puVar1 = PTR_PTR_1126b6d60;
  func_0x000107c610f4(PTR_PTR_1126b6d60);
  func_0x000107c482c4();
  func_0x000107c61170(param_2);
  func_0x000107c4fc60(param_1);
  func_0x000107c61170(puVar1);
  func_0x000107c61158(PTR_PTR_1126b3c88);
  func_0x000107c4fcbc(param_1);
  func_0x000107c61158(PTR_PTR_1126b6d68);
  func_0x000107c4fcbc(param_1);
  func_0x000107c4fcc0(param_1);
  func_0x000107c61174(param_4);
  func_0x000107c5d43c(param_1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_4);
  return;
}



/* Entry: 10090b33c; end: 10090b413; +[SCNComposerSnapModulesComposerSnapModules createModuleFactoriesProvider:] */

void FUN_10090b33c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [16];
  
  func_0x000107c61174(param_3);
  FUN_10090b414(auStack_60,param_3);
  FUN_10090b680(auStack_40,auStack_60);
  func_0x00010090b808(auStack_60);
  func_0x00010090b830(auStack_40);
  func_0x000107c61180();
  func_0x00010090bacc();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10090b414; end: 10090b4f3;  */

void FUN_10090b414(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c61174();
  uVar3 = param_2;
  func_0x000107c3e420(param_2);
  func_0x000107c61180();
  FUN_10090b508(&uStack_40);
  func_0x000107c40480(param_2);
  func_0x000107c61180();
  FUN_10090b558(&uStack_50);
  uVar2 = uStack_38;
  uVar1 = uStack_40;
  uStack_40 = 0;
  uStack_38 = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uStack_48;
  param_1[2] = uStack_50;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10090b5a0(&uStack_50);
  func_0x000107c61170(param_2);
  func_0x00010048b850(&uStack_40);
  func_0x000107c61170(uVar3);
  FUN_10090b5c4();
  return;
}



/* Entry: 10090b4f4; end: 10090b507; -[SCNComposerSnapModulesComposerSnapModulesDependencies authContextDelegate] */

undefined8 FUN_10090b4f4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10090b508; end: 10090b54f;  */

void FUN_10090b508(void)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00010090b4fc();
  if (unaff_x19 == 0) {
    *unaff_x20 = 0;
    unaff_x20[1] = 0;
  }
  else {
    FUN_100459fd0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10090b550; end: 10090b557; -[SCNComposerSnapModulesComposerSnapModulesDependencies contentManager] */

undefined8 FUN_10090b550(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10090b558; end: 10090b59f;  */

void FUN_10090b558(void)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00010090b4fc();
  if (unaff_x19 == 0) {
    *unaff_x20 = 0;
    unaff_x20[1] = 0;
  }
  else {
    func_0x000107c2bdf0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10090b5a0; end: 10090b5c3;  */

void FUN_10090b5a0(long param_1)

{
  FUN_1003a81cc();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10090b5c4; end: 10090b5db;  */

void FUN_10090b5c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10090b5dc; end: 10090b65b;  */

void FUN_10090b5dc(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  undefined1 uStack_51;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 auStack_40 [16];
  long lStack_30;
  undefined8 uStack_28;
  
  puVar2 = auStack_40;
  func_0x00010090b5cc();
  uStack_28 = extraout_x8;
  FUN_10090b6dc(auStack_40,1);
  func_0x00010090b738(lStack_30,param_3);
  lVar1 = lStack_30;
  lStack_30 = 0;
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  func_0x00010090b7b4(auStack_40);
  func_0x00010090b7c4(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x00010090b7b4(auStack_40);
  func_0x000104bd59e4();
  pcStack_48 = FUN_10090b65c;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_10090b5dc(&uStack_51,puVar2);
  return;
}



/* Entry: 10090b65c; end: 10090b67f;  */

void FUN_10090b65c(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_10090b5dc(&uStack_11,param_1);
  return;
}



/* Entry: 10090b680; end: 10090b6bf;  */

void FUN_10090b680(undefined8 *param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_10090b65c(&uStack_30);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10090b7e4(&uStack_30);
  return;
}



/* Entry: 10090b6c0; end: 10090b6db;  */

long FUN_10090b6c0(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 >> 0x3a == 0) {
    lVar1 = param_2 << 6;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bd35f4();
  *(ulong *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10090b6c0();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10090b6dc; end: 10090b703;  */

long FUN_10090b6dc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10090b6c0();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10090b704; end: 10090b717;  */

undefined8 * FUN_10090b704(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1107e2e48;
  return param_1 + 1;
}



/* Entry: 10090b718; end: 10090b767;  */

void FUN_10090b718(void)

{
  FUN_10090b704();
  FUN_10090b768();
  return;
}



/* Entry: 10090b768; end: 10090b7e3;  */

void FUN_10090b768(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar2;
  
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_1003a8170();
    } while (extraout_w10 != 0);
  }
  lVar1 = param_2[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_1003a8170();
    } while (extraout_w10_00 != 0);
  }
  return;
}



/* Entry: 10090b7e4; end: 10090b89b;  */

void FUN_10090b7e4(long param_1)

{
  FUN_1003a81cc();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10090b89c; end: 10090b90f;  */

void FUN_10090b89c(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110d7b1e8;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_10090b910();
    } while (extraout_w10 != 0);
  }
  FUN_10015c218(&ppuStack_28,&uStack_40,FUN_10090b920);
  func_0x000107c61180();
  func_0x00010090ba90();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10090b910; end: 10090b91f;  */

void FUN_10090b910(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10090b920; end: 10090b997;  */

void FUN_10090b920(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126e1b98;
  func_0x000107c610f4();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_10090b910();
    } while (extraout_w10 != 0);
  }
  func_0x000107c46220();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_10090ba64(&uStack_30);
  return;
}



/* Entry: 10090b998; end: 10090b9d7; -[SCNValdiCoreModuleFactoriesProviderCppProxy .cxx_construct] */

undefined8 * FUN_10090b998(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  FUN_10015c19c();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_10090b910();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10090b9d8; end: 10090b9df;  */

void FUN_10090b9d8(void)

{
  return;
}



/* Entry: 10090b9e0; end: 10090ba57; -[SCNValdiCoreModuleFactoriesProviderCppProxy initWithCpp:] */

undefined1 * FUN_10090b9e0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_11270c0e8;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_10090b910();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_10090ba64(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10090ba58; end: 10090ba63;  */

undefined8 FUN_10090ba58(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10090ba64; end: 10090ba87;  */

void FUN_10090ba64(long param_1)

{
  FUN_10090ba58();
  if (param_1 != 0) {
    func_0x0001003a81fc();
  }
  return;
}



/* Entry: 10090ba88; end: 10090ba9b;  */

void FUN_10090ba88(void)

{
  return;
}



/* Entry: 10090ba9c; end: 10090bac3;  */

long FUN_10090ba9c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001003a81fc();
  }
  return param_1;
}



/* Entry: 10090bac4; end: 10090bad7;  */

void FUN_10090bac4(void)

{
  return;
}



/* Entry: 10090bad8; end: 10090baff;  */

long FUN_10090bad8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10090bb00; end: 10090bbeb;  */

void FUN_10090bb00(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  int extraout_w10;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    puVar2 = PTR_PTR_1126e1b98;
    func_0x000107c61158(PTR_PTR_1126e1b98);
    uVar3 = param_2;
    func_0x000107c6115c(param_2,puVar2);
    if ((uVar3 & 1) == 0) {
      FUN_10090be6c();
      ppuStack_38 = &PTR_DAT_110d7b118;
      uStack_40 = param_2;
      FUN_1000de59c(&uStack_30,&ppuStack_38,&uStack_40,FUN_10090be74);
      uVar1 = uStack_28;
      uVar5 = uStack_30;
      uStack_30 = 0;
      uStack_28 = 0;
      FUN_10090ba9c(&uStack_30);
      func_0x000107c61170(uStack_40);
      param_1[1] = uVar1;
      *param_1 = uVar5;
      uStack_50 = 0;
      uStack_48 = 0;
      FUN_10090bf60(&uStack_50);
    }
    else {
      lVar4 = *(long *)(param_2 + 0x20);
      uVar5 = *(undefined8 *)(param_2 + 0x18);
      param_1[1] = *(undefined8 *)(param_2 + 0x20);
      *param_1 = uVar5;
      if (lVar4 != 0) {
        do {
          FUN_10090b910();
        } while (extraout_w10 != 0);
      }
    }
  }
  FUN_10090bd14();
  return;
}



/* Entry: 10090bbec; end: 10090bd13; -[SCValdiRuntimeManager registerModuleFactoriesProvider:] */

void FUN_10090bbec(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_10090bb00(&uStack_50,param_3);
  func_0x00010090af90();
  func_0x00010090bd1c();
  if (*(long *)(param_1 + 8) == 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x38);
    if (puVar2 < *(undefined8 **)(param_1 + 0x40)) {
      puVar8 = puVar2 + 2;
      puVar2[1] = uStack_48;
      *puVar2 = uStack_50;
      uStack_50 = 0;
      uStack_48 = 0;
    }
    else {
      lVar6 = *(long *)(param_1 + 0x30);
      lVar7 = (long)puVar2 - lVar6;
      uVar1 = (lVar7 >> 4) + 1;
      if (uVar1 >> 0x3c != 0) {
        func_0x000107c28500();
LAB_10090bcfc:
        func_0x000104bfe188();
        func_0x0001080d89ac();
        func_0x00010090bd2c();
        FUN_10090ba64(&uStack_50);
        func_0x0001080d89d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(param_1);
        return;
      }
      uVar4 = (long)*(undefined8 **)(param_1 + 0x40) - lVar6;
      uVar5 = (long)uVar4 >> 3;
      if (uVar5 <= uVar1) {
        uVar5 = uVar1;
      }
      if (0x7fffffffffffffef < uVar4) {
        uVar5 = 0xfffffffffffffff;
      }
      if (uVar5 == 0) {
        lVar3 = 0;
      }
      else {
        if (uVar5 >> 0x3c != 0) goto LAB_10090bcfc;
        lVar3 = uVar5 << 4;
        func_0x000107c60e20();
      }
      puVar2 = (undefined8 *)(lVar3 + lVar7);
      puVar8 = puVar2 + 2;
      puVar2[1] = uStack_48;
      *puVar2 = uStack_50;
      uStack_50 = 0;
      uStack_48 = 0;
      func_0x000107c610b4(puVar2 + (lVar7 >> 4) * -2,lVar6,lVar7);
      *(undefined8 **)(param_1 + 0x30) = puVar2 + (lVar7 >> 4) * -2;
      *(undefined8 **)(param_1 + 0x38) = puVar8;
      *(ulong *)(param_1 + 0x40) = lVar3 + uVar5 * 0x10;
      if (lVar6 != 0) {
        func_0x000107c60e14(lVar6);
      }
    }
    *(undefined8 **)(param_1 + 0x38) = puVar8;
  }
  else {
    func_0x000107c30df8(*(long *)(param_1 + 8),&uStack_50);
  }
  func_0x00010090bd24();
  func_0x00010090bd2c();
  FUN_10090ba64(&uStack_50);
  return;
}



/* Entry: 10090bd14; end: 10090bd47;  */

void FUN_10090bd14(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10090bd48; end: 10090bdbf; -[SCNValdiCoreModuleFactoriesProviderCppProxy .cxx_destruct] */

void FUN_10090bd48(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10090bdc0();
    FUN_1004a52a0();
  }
  FUN_10090ba64((long *)(param_1 + 0x18));
  FUN_10090bdcc(param_1 + 8);
  return;
}



/* Entry: 10090bdc0; end: 10090bdcb;  */

void FUN_10090bdc0(void)

{
  return;
}



/* Entry: 10090bdcc; end: 10090bdf7;  */

long FUN_10090bdcc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001003a81fc();
  }
  return param_1;
}



/* Entry: 10090bdf8; end: 10090be6b; -[SCComposerSnapchatModuleFactoriesProvider initWithRegistrar:] */

undefined1 * FUN_10090bdf8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126e7488;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10090be6c; end: 10090be73;  */

void FUN_10090be6c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10090be74; end: 10090bf5f;  */

void FUN_10090be74(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  int extraout_w10;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar5 = (undefined8 *)*param_2;
  puVar1 = (undefined8 *)0x38;
  func_0x000107c60e20();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110d7b158;
  puVar1[3] = &PTR_DAT_110d7b1d0;
  puVar2 = puVar5;
  func_0x000107c61174();
  func_0x000107c6110c();
  puVar3 = puVar2;
  FUN_1000de520();
  lVar4 = puVar3[1];
  uVar6 = *puVar3;
  puVar1[5] = puVar3[1];
  puVar1[4] = uVar6;
  if (lVar4 != 0) {
    do {
      FUN_10090b910();
    } while (extraout_w10 != 0);
  }
  func_0x000107c61174(puVar5);
  puVar1[6] = puVar5;
  func_0x000107c61108(puVar2);
  func_0x000107c61170(puVar5);
  puVar1[3] = &PTR_DAT_110d7b1a8;
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10090bf60(&uStack_50);
  return;
}



/* Entry: 10090bf60; end: 10090bf87;  */

long FUN_10090bf60(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001003a81fc();
  }
  return param_1;
}



/* Entry: 10090bf88; end: 10090bff7; -[SCValdiRuntimeManager registerTypeConverterForClass:converterFunctionPath:] */

void FUN_10090bf88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_4);
  func_0x000107c60b14(param_3);
  func_0x000107c61180();
  func_0x000107c4fcc0(param_1,param_2,param_3,param_4);
  FUN_10090af70();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10090bff8; end: 10090c17f; -[SCValdiRuntimeManager registerTypeConverterForClassName:converterFunctionPath:] */

void FUN_10090bff8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long extraout_x8;
  long extraout_x8_00;
  long *plVar2;
  long lVar3;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 auStack_58 [2];
  long lStack_48;
  
  func_0x000107c61174(param_4);
  FUN_10090c180();
  uStack_70 = 0;
  uStack_68 = 0;
  FUN_1003ad8f8(auStack_58,param_3);
  func_0x00010090c188();
  FUN_10090c1cc(&uStack_70,auStack_58);
  FUN_1003a8cb8(auStack_58[0]);
  FUN_1003ad8f8(auStack_58,param_4);
  FUN_10090c1cc((ulong)&uStack_70 | 8,auStack_58);
  FUN_1003a8cb8(auStack_58[0]);
  FUN_10090b060();
  func_0x00010090b068();
  if (*(long *)(param_1 + 8) == 0) {
    if (*(ulong *)(param_1 + 0x50) < *(ulong *)(param_1 + 0x58)) {
      FUN_10090c2c0();
      lVar3 = extraout_x8 + 0x10;
      *(long *)(param_1 + 0x50) = lVar3;
    }
    else {
      plVar2 = (long *)(param_1 + 0x48);
      plVar1 = plVar2;
      FUN_10090c1f8(plVar2,((long)(*(ulong *)(param_1 + 0x50) - *plVar2) >> 4) + 1);
      func_0x00010090c278(auStack_58,plVar1,
                          *(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 4,
                          (ulong *)(param_1 + 0x58));
      FUN_10090c2c0(lStack_48);
      lStack_48 = extraout_x8_00 + 0x10;
      FUN_10090c2e4(plVar2,auStack_58);
      lVar3 = *(long *)(param_1 + 0x50);
      func_0x00010090c3d4(auStack_58);
    }
    *(long *)(param_1 + 0x50) = lVar3;
  }
  else {
    func_0x000107c30dfc(*(long *)(param_1 + 8),&uStack_70,(ulong)&uStack_70 | 8);
  }
  func_0x00010090b080();
  FUN_10090af70();
  func_0x00010090c434(&uStack_70);
  func_0x00010090bd2c();
  return;
}



/* Entry: 10090c180; end: 10090c18f;  */

void FUN_10090c180(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10090c190; end: 10090c1cb;  */

undefined8 * FUN_10090c190(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    uVar2 = *param_2;
    *param_2 = 0;
    uVar1 = *param_1;
    *param_1 = uVar2;
    FUN_1003a8cb8(uVar1);
  }
  return param_1;
}



/* Entry: 10090c1cc; end: 10090c1f7;  */

long FUN_10090c1cc(long param_1,long param_2)

{
  if (param_1 != param_2) {
    FUN_10090c190(param_1);
  }
  return param_1;
}



/* Entry: 10090c1f8; end: 10090c253;  */

/* WARNING: Possible PIC construction at 0x00010090c264: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010090c268) */

ulong FUN_10090c1f8(long *param_1,ulong param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  ulong unaff_x19;
  undefined8 unaff_x20;
  undefined1 *puVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3c == 0) {
    uVar2 = param_1[2] - *param_1 >> 3;
    if (uVar2 <= param_2) {
      uVar2 = param_2;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - *param_1)) {
      uVar2 = 0xfffffffffffffff;
    }
    return uVar2;
  }
  puVar3 = &stack0xfffffffffffffff0;
  uVar4 = 0x10090c238;
  func_0x0001080d8440();
  puVar1 = &stack0xfffffffffffffff0;
  while (param_2 >> 0x3c != 0) {
    *(undefined1 **)(puVar1 + -0x10) = puVar3;
    *(undefined8 *)(puVar1 + -8) = uVar4;
    func_0x000104bfe188();
    *(undefined8 *)(puVar1 + -0x30) = unaff_x20;
    *(ulong *)(puVar1 + -0x28) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x20) = puVar1 + -0x10;
    *(code **)(puVar1 + -0x18) = FUN_10090c254;
    puVar3 = puVar1 + -0x20;
    uVar4 = 0x10090c268;
    puVar1 = puVar1 + -0x30;
    unaff_x19 = param_2;
  }
  param_2 = param_2 << 4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(param_2);
  return param_2;
}



/* Entry: 10090c254; end: 10090c2bf;  */

void FUN_10090c254(void)

{
  func_0x00010090c238();
  return;
}



/* Entry: 10090c2c0; end: 10090c2e3;  */

void FUN_10090c2c0(undefined8 *param_1)

{
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  *param_1 = in_stack_00000000;
  param_1[1] = in_stack_00000008;
  return;
}



/* Entry: 10090c2e4; end: 10090c35f;  */

void FUN_10090c2e4(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00010090c2d8();
  lVar1 = *(long *)(param_2 + 8) + (*param_1 - param_1[1]);
  FUN_10090c360(param_1 + 2,*param_1,param_1[1],lVar1);
  unaff_x19[1] = lVar1;
  uVar2 = *unaff_x20;
  unaff_x20[1] = uVar2;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar2;
  uVar2 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar2;
  uVar2 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar2;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 10090c360; end: 10090c393;  */

void FUN_10090c360(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  
  for (puVar1 = param_2; puVar1 != param_3; puVar1 = puVar1 + 2) {
    *param_4 = *puVar1;
    *puVar1 = 0;
    param_4[1] = puVar1[1];
    puVar1[1] = 0;
    param_4 = param_4 + 2;
  }
  for (; param_2 != param_3; param_2 = param_2 + 2) {
    func_0x00010090c434();
  }
  return;
}



/* Entry: 10090c394; end: 10090c3c3;  */

void FUN_10090c394(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x10) {
    func_0x00010090c434();
  }
  return;
}



/* Entry: 10090c3c4; end: 10090c3d3;  */

void FUN_10090c3c4(void)

{
  return;
}



/* Entry: 10090c3d4; end: 10090c45b;  */

long * FUN_10090c3d4(long *param_1)

{
  func_0x00010090c3cc();
  if (*param_1 != 0) {
    func_0x000107c60e14();
  }
  return param_1;
}



/* Entry: 10090c45c; end: 10090c473;  */

void FUN_10090c45c(void)

{
  return;
}



/* Entry: 10090c474; end: 10090c4f3; -[SCValdiRuntimeManager updateConfiguration:] */

void FUN_10090c474(void)

{
  long unaff_x19;
  
  func_0x00010090c464();
  FUN_10090b060();
  func_0x00010090b068();
  func_0x000107c3b880();
  func_0x000107c61180();
  (**(code **)(unaff_x19 + 0x10))();
  func_0x000107c3adac();
  func_0x00010090cf2c();
  func_0x00010090b080();
  FUN_10090af70();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10090c4f4; end: 10090c53b; -[SCValdiRuntimeManager _getOrCreateConfiguration] */

void FUN_10090c4f4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126d9480;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(undefined **)(param_1 + 0x18) = puVar1;
    func_0x00010090af78(uVar2);
    lVar3 = *(long *)(param_1 + 0x18);
  }
  FUN_10090b060();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10090c53c; end: 10090c597; -[SCValdiConfiguration init] */

undefined1 * FUN_10090c53c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270c010;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 0xe) = 1;
    func_0x000107c544b0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10090c598; end: 10090c59f; -[SCValdiConfiguration setEnableDebuggerService:] */

void FUN_10090c598(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xf) = param_3;
  return;
}



/* Entry: 10090c5a0; end: 10090c69b;  */

/* WARNING: Possible PIC construction at 0x00010090c5e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010090c604: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010090c5e4) */
/* WARNING: Removing unreachable block (ram,0x00010090c608) */
/* WARNING: Removing unreachable block (ram,0x00010090c684) */
/* WARNING: Removing unreachable block (ram,0x00010090c64c) */

void FUN_10090c5a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x000107c61174(param_2);
  puVar1 = PTR_PTR_1126b6d70;
  func_0x000107c61160(PTR_PTR_1126b6d70);
  func_0x000107c54ae4(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10090c69c; end: 10090c6bb; -[SCValdiConfiguration setFontLoader:] */

void FUN_10090c69c(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10090c6bc();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  *(undefined8 *)(unaff_x20 + 0x40) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10090c6bc; end: 10090c6d3;  */

void FUN_10090c6bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 10090c6d4; end: 10090c6db; -[SCValdiConfiguration setPerformHapticFeedbackBlock:] */

void FUN_10090c6d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10090c6dc; end: 10090c6e3; -[SCValdiConfiguration setEnableReferenceTracking:] */

void FUN_10090c6dc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xd) = param_3;
  return;
}



/* Entry: 10090c6e4; end: 10090c757;  */

ulong FUN_10090c6e4(ulong param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  ulong uVar2;
  
  func_0x000107c61174();
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c02c8;
  func_0x000107c49820();
  if (ppuVar1 == (undefined **)0xffffffffffffffff) {
    if (param_1 == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = param_1;
      func_0x000107c3ebd4(param_1,param_2,&PTR____CFConstantStringClassReference_110de62f8,1,0);
    }
  }
  else {
    uVar2 = (ulong)(ppuVar1 == (undefined **)0x1);
  }
  func_0x000107c61170(param_1);
  return uVar2;
}



/* Entry: 10090c758; end: 10090c75f; -[SCValdiConfiguration setEnableGesturePrewarm:] */

void FUN_10090c758(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xe) = param_3;
  return;
}



/* Entry: 10090c760; end: 10090c7bf;  */

undefined ** FUN_10090c760(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  
  func_0x000107c61174();
  ppuVar2 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c02c8;
  func_0x000107c49820();
  if (ppuVar2 == (undefined **)0xffffffffffffffff) {
    uVar1 = param_1;
    func_0x000107c4980c(param_1,param_2,&PTR____CFConstantStringClassReference_110de62b8,0,0);
    ppuVar2 = (undefined **)(long)(int)uVar1;
  }
  func_0x000107c61170(param_1);
  return ppuVar2;
}



/* Entry: 10090c7c0; end: 10090c7c7; -[SCValdiConfiguration setJavaScriptEngineType:] */

void FUN_10090c7c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x68) = param_3;
  return;
}



/* Entry: 10090c7c8; end: 10090c827;  */

/* WARNING: Possible PIC construction at 0x00010090c814: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010090c818) */

void FUN_10090c7c8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
  func_0x000107c4f2b0();
  func_0x000107c61180();
  func_0x000107c3e148();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c40404();
  uRam00000001136b95e0 = SUB81(puVar2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10090c828; end: 10090c82f; -[SCValdiConfiguration setIsTestEnvironment:] */

void FUN_10090c828(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x11) = param_3;
  return;
}



/* Entry: 10090c830; end: 10090c8a3;  */

ulong FUN_10090c830(ulong param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  ulong uVar2;
  
  func_0x000107c61174();
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c02c8;
  func_0x000107c49820();
  if (ppuVar1 == (undefined **)0xffffffffffffffff) {
    if (param_1 == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = param_1;
      func_0x000107c3ebd4(param_1,param_2,&PTR____CFConstantStringClassReference_110de62d8,1,0);
    }
  }
  else {
    uVar2 = (ulong)(ppuVar1 == (undefined **)0x1);
  }
  func_0x000107c61170(param_1);
  return uVar2;
}



/* Entry: 10090c8a4; end: 10090c8bb; -[SCValdiConfiguration setDisableFontLeadingInTextMeasure:] */

void FUN_10090c8a4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xb) = param_3;
  return;
}



/* Entry: 10090c8bc; end: 10090cf0f; -[SCValdiRuntimeManager _applyConfiguration] */

ulong FUN_10090c8bc(ulong param_1)

{
  undefined *puVar1;
  undefined1 in_ZR;
  ulong uVar2;
  ulong uVar3;
  undefined8 extraout_x8;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 auStack_280 [66];
  undefined8 uStack_70;
  
  uVar2 = param_1;
  func_0x00010090c8ac();
  uStack_70 = extraout_x8;
  func_0x000107c3b880();
  func_0x000107c61180();
  uVar4 = uVar2;
  func_0x000107c425f0();
  *(char *)(param_1 + 0x9b) = (char)uVar4;
  if (*(long *)(param_1 + 8) != 0) {
    uVar4 = uVar2;
    func_0x000107c42660();
    *(char *)(param_1 + 0x9a) = (char)uVar4;
    func_0x000107c5d8b8(uVar2);
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x000107c3dbf4(uVar2);
    func_0x000107c5264c(uVar5);
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x000107c4a5cc(uVar2);
    func_0x000107c556d8(uVar5);
    func_0x000107c41ee8(uVar2);
    func_0x000107c5416c(*(undefined8 *)(param_1 + 0x10));
    puVar1 = PTR_PTR_1126d92f8;
    func_0x000107c41ecc(uVar2);
    func_0x000107c54ae0(puVar1);
    func_0x000107c4e58c(uVar2);
    func_0x000107c61180();
    func_0x0001080d8b1c();
    func_0x000107c5730c();
    FUN_10090af70();
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    uVar4 = uVar2;
    func_0x000107c413d4(uVar2);
    func_0x000107c61180();
    func_0x0001080c3c4c(uVar5,uVar4);
    func_0x00010090c188();
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    uVar4 = uVar2;
    func_0x000107c42b24(uVar2);
    func_0x000107c61180();
    func_0x0001080c3d3c(uVar5,uVar4);
    func_0x00010090c188();
    uVar4 = uVar2;
    func_0x000107c503b4();
    func_0x000107c61180();
    if (uVar4 == 0) {
      uVar4 = *(ulong *)(param_1 + 0x70);
    }
    FUN_10090b060();
    func_0x00010090c188();
    lVar6 = *(long *)(param_1 + 8);
    func_0x000107c30e38(auStack_280,uVar4);
    func_0x000107c30e00(lVar6 + 0x188,auStack_280);
    func_0x0001080d87c4(auStack_280);
    uVar4 = uVar2;
    func_0x000107c5d984();
    func_0x000107c61180();
    func_0x000107c4adac();
    func_0x00010090c188();
    if (uVar4 == 0) {
      auStack_280[0] = 0;
      func_0x0001080d8b6c();
      FUN_1003a8cb8(auStack_280[0]);
    }
    else {
      func_0x000107c5d984(uVar2);
      func_0x000107c61180();
      FUN_1003ad8f8(auStack_280);
      func_0x0001080d8b6c();
      FUN_1003a8cb8(auStack_280[0]);
      func_0x0001009a36f4();
    }
    uVar4 = uVar2;
    func_0x000107c41ed4();
    if ((int)uVar4 != 0) {
      uRam00000001138468a0 = 1;
    }
    uVar4 = uVar2;
    func_0x000107c3dd44();
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x260);
    in_ZR = uVar4 == 1;
    if ((long)uVar4 < 1) {
      func_0x000107c30de8(uVar5);
    }
    else {
      uVar4 = uVar2;
      func_0x000107c3dd44(uVar2);
      func_0x000107c30de4(uVar5,uVar4 * 1000000);
    }
    uVar5 = *(undefined8 *)(param_1 + 0x90);
    func_0x000107c4378c(uVar2);
    func_0x000107c61180();
    func_0x000107c54ae4(uVar5);
    func_0x00010090c188();
    uVar8 = uVar2;
    func_0x000107c450c8();
    func_0x000107c61180();
    func_0x000107c40794();
    func_0x0001009a36f4();
    uVar7 = *(ulong *)(param_1 + 0x78);
    uVar4 = uVar7;
    func_0x000107c61174();
    func_0x0001080d89e4();
    lVar6 = lRam0000000000000000;
    while (uVar4 != 0) {
      uVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar6) {
          func_0x000107c61128(uVar7);
        }
        uVar3 = uVar8;
        func_0x000107c40404();
        if ((uVar3 & 1) == 0) {
          uVar3 = param_1;
          func_0x000107c3cb44();
        }
        uVar9 = uVar9 + 1;
        in_ZR = uVar9 == uVar4;
      } while (uVar9 < uVar4);
      func_0x0001080d89e4();
      uVar4 = uVar3;
    }
    func_0x0001009a36f4();
    func_0x00010090c180();
    uVar4 = uVar8;
    func_0x0001080d89f0();
    lVar6 = lRam0000000000000000;
    while (uVar4 != 0) {
      uVar7 = 0;
      do {
        if (lRam0000000000000000 != lVar6) {
          func_0x000107c61128(uVar8);
        }
        uVar9 = *(ulong *)(param_1 + 0x78);
        func_0x000107c40404();
        if ((uVar9 & 1) == 0) {
          func_0x000107c3c278(param_1);
        }
        uVar7 = uVar7 + 1;
        in_ZR = uVar7 == uVar4;
      } while (uVar7 < uVar4);
      uVar4 = uVar8;
      func_0x0001080d89f0();
    }
    func_0x00010090c188();
    func_0x00010090c180();
    uVar5 = *(undefined8 *)(param_1 + 0x78);
    *(ulong *)(param_1 + 0x78) = uVar8;
    func_0x000107c61170(uVar5);
    func_0x000107c5ddc4();
    func_0x000107c61180();
    func_0x000107c40794();
    func_0x0001080d89f8();
    uVar8 = *(ulong *)(param_1 + 0x80);
    func_0x000107c61174(uVar8);
    uVar4 = uVar8;
    func_0x0001080d89f0();
    lVar6 = lRam0000000000000000;
    while (uVar4 != 0) {
      uVar7 = 0;
      do {
        if (lRam0000000000000000 != lVar6) {
          func_0x000107c61128(uVar8);
        }
        uVar9 = uVar2;
        func_0x000107c40404();
        if ((uVar9 & 1) == 0) {
          func_0x000107c3cb48(param_1);
        }
        uVar7 = uVar7 + 1;
        in_ZR = uVar7 == uVar4;
      } while (uVar7 < uVar4);
      uVar4 = uVar8;
      func_0x0001080d89f0();
    }
    func_0x0001080d89f8();
    uVar4 = uVar2;
    func_0x000107c61174();
    func_0x0001080d89e4();
    lVar6 = lRam0000000000000000;
    while (uVar4 != 0) {
      uVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar6) {
          func_0x000107c61128(uVar2);
        }
        uVar7 = *(ulong *)(param_1 + 0x80);
        func_0x000107c40404();
        if ((uVar7 & 1) == 0) {
          uVar7 = param_1;
          func_0x000107c3c29c();
        }
        uVar8 = uVar8 + 1;
        in_ZR = uVar8 == uVar4;
      } while (uVar8 < uVar4);
      func_0x0001080d89e4();
      uVar4 = uVar7;
    }
    func_0x0001009a36f4();
    uVar4 = *(ulong *)(param_1 + 0x80);
    *(ulong *)(param_1 + 0x80) = uVar2;
    func_0x000107c61170();
    func_0x00010090c188();
    FUN_10090af70();
  }
  func_0x00010090bd2c();
  func_0x00010090cf18(uStack_70);
  if ((bool)in_ZR) {
    return uVar4;
  }
  func_0x000107c60e78();
  FUN_10090af70();
  func_0x00010090bd2c();
  func_0x0001080d8a10();
  return (ulong)*(byte *)(uVar4 + 0xe);
}



/* Entry: 10090cf10; end: 10090cf33; -[SCValdiConfiguration enableGesturePrewarm] */

undefined1 FUN_10090cf10(long param_1)

{
  return *(undefined1 *)(param_1 + 0xe);
}



/* Entry: 10090cf34; end: 10090cfa7; -[SCComposerSnapHTTPRequestManager initWithHTTPService:] */

undefined1 * FUN_10090cf34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126fe660;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10090cfa8; end: 10090d003;  */

void FUN_10090cfa8(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c61174(param_2);
  func_0x000107c57de4(param_2);
  func_0x000107c53d08(param_2);
  func_0x000107c52738(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10090d004; end: 10090d023; -[SCValdiConfiguration setRequestManager:] */

void FUN_10090d004(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10090c6bc();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x28) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10090d024; end: 10090d043; -[SCValdiConfiguration setCustomModuleProvider:] */

void FUN_10090d024(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10090c6bc();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
  *(undefined8 *)(unaff_x20 + 0x48) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10090d044; end: 10090d04b; -[SCValdiConfiguration setAnrTimeoutMs:] */

void FUN_10090d044(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x70) = param_3;
  return;
}



/* Entry: 10090d04c; end: 10090d0bf; -[SCComposerFrameworkProvider initWithRuntimeManager:] */

undefined1 * FUN_10090d04c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126e7450;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10090d0c0; end: 10090d0ef; -[SCNComposerSnapModulesComposerSnapModulesDependencies .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010090d0d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010090d0dc) */

void FUN_10090d0c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10090d0f0; end: 10090d133;  */

void FUN_10090d0f0(void)

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



/* Entry: 10090d134; end: 10090d15b; -[SCComposerFrameworkProvider runtimeManager] */

void FUN_10090d134(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10090d15c; end: 10090d167;  */

void FUN_10090d15c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1aa550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setImageLoaders__112648378,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10090d168; end: 10090d16f; -[SCValdiConfiguration setImageLoaders:] */

void FUN_10090d168(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10090d170; end: 10090d19b;  */

void FUN_10090d170(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10090d19c; end: 10090d1c3;  */

undefined ** FUN_10090d19c(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 10090d1c4; end: 10090d203;  */

void FUN_10090d1c4(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010090d1a8();
  FUN_100082720("MemoriesOpportunisticRetranscodeOrchestrationServiceProviderWrapperScopeInitializationPluginProvider"
                ,100,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10090d204; end: 10090d20b;  */

void FUN_10090d204(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102e557f0);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}


