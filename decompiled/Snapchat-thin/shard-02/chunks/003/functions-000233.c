/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101bfec78; end: 101bfece3;  */

void FUN_101bfec78(long param_1)

{
  undefined8 uVar1;
  long unaff_x22;
  
  func_0x000107c5fce8();
  *(long *)(unaff_x22 + 0x88) = param_1;
  if (param_1 == 0) {
    param_1 = 0;
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
    func_0x000107c614f0();
    func_0x000107c5fca8();
  }
  *(long *)(unaff_x22 + 0x90) = param_1;
  *(undefined8 *)(unaff_x22 + 0x98) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bfece4,param_1);
  return;
}



/* Entry: 101bfece4; end: 101bfee1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bfece4(void)

{
  long lVar1;
  long lVar2;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x50);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(undefined8 *)(unaff_x22 + 0x18) = 0x101bfed38;
  lVar2 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar2,0);
  *(long *)(lVar1 + _DAT_112e08c18) = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101bfee20; end: 101bfee2b;  */

void FUN_101bfee20(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)();
  return;
}



/* Entry: 101bfee2c; end: 101bfeebb;  */

void FUN_101bfee2c(void)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  plVar2 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x101bfee78;
  plVar2[0x12] = lVar3;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar3 = lVar1;
  func_0x000107c5fce8();
  plVar2[0x13] = lVar3;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar2[0x14] = lVar1;
  plVar2[0x15] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bfa870,lVar1,lVar3);
  return;
}



/* Entry: 101bfeebc; end: 101bfeec3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_101bfeebc(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  lVar2 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_112fcd5d8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    uVar5 = 0;
    uVar4 = 0;
    goto LAB_101bfacc4;
  }
  func_0x000107c5fadc(param_1,param_2);
  lVar3 = lVar2;
  func_0x000107c4c39c();
  func_0x000107c61180();
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(param_1);
  if (lVar3 == 0) {
    uVar5 = 0;
    uVar4 = 0;
    goto LAB_101bfacc4;
  }
  uVar4 = ((ulong *)(lVar3 + _DAT_112fcd620))[1];
  if (uVar4 == 0) {
LAB_101bfac6c:
    uVar5 = *(ulong *)(lVar3 + _DAT_112fcd618);
    uVar4 = ((ulong *)(lVar3 + _DAT_112fcd618))[1];
    uVar1 = uVar5 & 0xffffffffffff;
    if ((uVar4 & 0x2000000000000000) != 0) {
      uVar1 = uVar4 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) goto LAB_101bfac94;
    uVar5 = 0;
    uVar4 = 0;
  }
  else {
    uVar5 = *(ulong *)(lVar3 + _DAT_112fcd620);
    uVar1 = uVar5 & 0xffffffffffff;
    if ((uVar4 & 0x2000000000000000) != 0) {
      uVar1 = uVar4 >> 0x38 & 0xf;
    }
    if (uVar1 == 0) goto LAB_101bfac6c;
LAB_101bfac94:
    func_0x000107c61434(uVar4);
  }
  func_0x000107c61170(lVar3);
LAB_101bfacc4:
  auVar6._8_8_ = uVar4;
  auVar6._0_8_ = uVar5;
  return auVar6;
}



/* Entry: 101bfeec4; end: 101bfef8b;  */

/* WARNING: Possible PIC construction at 0x000101bfef70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101bfef74) */

void FUN_101bfeec4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = &UNK_110455818;
  func_0x000107c613fc(&UNK_110455818,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  puVar2 = &UNK_110455840;
  func_0x000107c613fc(&UNK_110455840,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10d9ddf88;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x0001001ca524(7,3,0x50,3,0,0,&UNK_10d9ddf98,puVar2,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 101bfef8c; end: 101bfeff7;  */

void FUN_101bfef8c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bfeff8,uVar1,uVar2);
  return;
}



/* Entry: 101bfeff8; end: 101bff093;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bfeff8(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x20));
  lVar1 = _DAT_112e08c10;
  lVar4 = *(long *)(lVar3 + _DAT_112e08c10);
  if (lVar4 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x000107c6157c(lVar4);
    func_0x000107c5fd50();
    func_0x000107c61574(lVar4);
    uVar2 = *(undefined8 *)(lVar3 + lVar1);
  }
  uVar5 = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(lVar3 + lVar1) = 0;
  func_0x000107c61574(uVar2);
  func_0x000107c42018(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000101bff090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bff094; end: 101bff0f3;  */

void FUN_101bff094(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 *unaff_x20;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar4 = *unaff_x20;
  uVar6 = unaff_x20[3];
  uVar5 = unaff_x20[2];
  *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20[1];
  *(undefined8 *)(unaff_x22 + 0x10) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar5;
  uVar4 = unaff_x20[4];
  uVar6 = unaff_x20[7];
  uVar5 = unaff_x20[6];
  *(undefined8 *)(unaff_x22 + 0x38) = unaff_x20[5];
  *(undefined8 *)(unaff_x22 + 0x30) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar5;
  plVar3 = (long *)0x590;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x50) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101bff0f4;
  plVar3[0x92] = unaff_x22 + 0x10;
  plVar3[0x91] = param_1;
  lVar1 = 0;
  func_0x000107c5fcec();
  plVar3[0x93] = lVar1;
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[0x94] = lVar2;
  func_0x000100eea164();
  plVar3[0x95] = lVar2;
  func_0x000107c5fca8();
  plVar3[0x96] = lVar1;
  plVar3[0x97] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bf953c,lVar1,lVar2);
  return;
}



/* Entry: 101bff0f4; end: 101bff12f;  */

void FUN_101bff0f4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x000101bff12c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101bff130; end: 101bff133; -[_TtC47ListeningActivityPermissionsSheetImplementation28PermissionsSheetTrayDelegate tray:positionDidChange:] */

void FUN_101bff130(void)

{
  return;
}



/* Entry: 101bff134; end: 101bff1ab;  */

void FUN_101bff134(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_3;
  uVar1 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar1;
  plVar2 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x28) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101bff1ac;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORs_rlE5valuexvg_11034fdd8)();
  return;
}



/* Entry: 101bff1ac; end: 101bff20f;  */

void FUN_101bff1ac(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x28);
  uVar2 = *(undefined8 *)(*unaff_x22 + 0x18);
  func_0x000107c615c0(uVar1);
  func_0x000100eea164();
  func_0x000107c5fca8(uVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bff210,uVar2,uVar1);
  return;
}



/* Entry: 101bff210; end: 101bff24b;  */

void FUN_101bff210(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x20));
  func_0x000107c61450(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101bff248. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bff24c; end: 101bff297; -[_TtC47ListeningActivityPermissionsSheetImplementation28PermissionsSheetTrayDelegate trayDidDismiss:] */

/* WARNING: Possible PIC construction at 0x000101bff280: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101bff284) */

void FUN_101bff24c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_101bffe94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 101bff298; end: 101bff317;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bff298(void)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112e08c18) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e08c10) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e08c20) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112e08c28) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e08c08);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e08c30) = 0;
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101bff318; end: 101bff337; -[_TtC47ListeningActivityPermissionsSheetImplementation28PermissionsSheetTrayDelegate init] */

void FUN_101bff318(void)

{
  FUN_101bff298();
  return;
}



/* Entry: 101bff338; end: 101bff33b;  */

void FUN_101bff338(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101bff33c; end: 101bff397; -[_TtC47ListeningActivityPermissionsSheetImplementation28PermissionsSheetTrayDelegate .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101bff358: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101bff35c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bff33c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e08c10));
  return;
}



/* Entry: 101bff398; end: 101bff47b;  */

/* WARNING: Possible PIC construction at 0x000101bff45c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101bff460) */

void FUN_101bff398(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = &UNK_110455908;
  func_0x000107c613fc(&UNK_110455908,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_1;
  puVar2 = &UNK_110455930;
  func_0x000107c613fc(&UNK_110455930,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10d9ddfb8;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c61174(param_2);
  func_0x000107c6157c(param_4);
  func_0x000107c61434(param_1);
  func_0x0001001ca524(7,3,0x50,3,0,0,&UNK_10d9ddfc0,puVar2,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 101bff47c; end: 101bff4eb;  */

void FUN_101bff47c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bff4ec,uVar1,uVar2);
  return;
}



/* Entry: 101bff4ec; end: 101bff53f;  */

void FUN_101bff4ec(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
  pcVar2 = *(code **)(unaff_x22 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x30));
  func_0x000107c41864(uVar3,param_2,0);
  (*pcVar2)(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101bff53c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bff540; end: 101bff597;  */

void FUN_101bff540(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c5fc54(param_2,PTR___sSSN_11034da80);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101bff598; end: 101bff603;  */

void FUN_101bff598(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  func_0x000107c453e4();
  puVar2 = PTR_PTR_1126ae820;
  func_0x000107c610f8(PTR_PTR_1126ae820);
  func_0x000107c49470();
  func_0x000107c61170(puVar1);
  puVar1 = puVar2;
  func_0x000107c5cb24(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 101bff604; end: 101bff63f; -[_TtC47ListeningActivityPermissionsSheetImplementationP33_38480665AC97B43169783CCBF86A13D922StubFriendmojiProvider init] */

void FUN_101bff604(undefined8 param_1)

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



/* Entry: 101bff640; end: 101bff673;  */

void FUN_101bff640(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101bff674; end: 101bff67b;  */

undefined8 FUN_101bff674(void)

{
  return 1;
}



/* Entry: 101bff67c; end: 101bff71b;  */

void FUN_101bff67c(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 101bff71c; end: 101bff72b;  */

void FUN_101bff71c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 101bff72c; end: 101bff74b;  */

void FUN_101bff72c(void)

{
  func_0x000107c61168(&PTR_PTR_1127fc7c8);
  return;
}



/* Entry: 101bff74c; end: 101bff7a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bff74c(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [40];
  undefined1 auStack_70 [40];
  undefined1 auStack_48 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar3 + 0x10,auStack_48,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    FUN_101c00330(unaff_x20 + 0x18,auStack_70);
    FUN_101c00330(unaff_x20 + 0x40,auStack_98);
    func_0x000101c00374(unaff_x20 + 0x68,&uStack_c0);
    puVar1 = &UNK_110455a20;
    func_0x000107c613fc(&UNK_110455a20,0x88,7);
    func_0x000100cc98ac(auStack_70,puVar1 + 0x10);
    func_0x000100cc98ac(auStack_98,puVar1 + 0x38);
    *(undefined8 *)(puVar1 + 0x68) = uStack_b8;
    *(undefined8 *)(puVar1 + 0x60) = uStack_c0;
    *(undefined8 *)(puVar1 + 0x78) = uStack_a8;
    *(undefined8 *)(puVar1 + 0x70) = uStack_b0;
    *(undefined8 *)(puVar1 + 0x80) = uStack_a0;
    uVar2 = 7;
    func_0x0001001ca524(7,3,0x50,3,0,0,&UNK_10d9de038,puVar1,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(puVar1);
    uVar4 = *(undefined8 *)(lVar3 + _DAT_112e08c30);
    *(undefined8 *)(lVar3 + _DAT_112e08c30) = uVar2;
    func_0x000107c61170(lVar3);
    func_0x000107c61574(uVar4);
  }
  return;
}



/* Entry: 101bff7a8; end: 101bff7e3;  */

undefined8 FUN_101bff7a8(undefined8 param_1,undefined8 param_2)

{
  FUN_101bf8704(param_2,param_1);
  return param_2;
}



/* Entry: 101bff7e4; end: 101bff7f7;  */

void FUN_101bff7e4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
  FUN_101bff7a8(unaff_x20 + 0x38,&uStack_88);
  puVar4 = &UNK_110455868;
  func_0x000107c613fc(&UNK_110455868,0x80,7);
  *(undefined8 *)(puVar4 + 0x50) = uStack_70;
  *(undefined8 *)(puVar4 + 0x48) = uStack_78;
  *(undefined8 *)(puVar4 + 0x60) = uStack_60;
  *(undefined8 *)(puVar4 + 0x58) = uStack_68;
  *(undefined8 *)(puVar4 + 0x70) = uStack_50;
  *(undefined8 *)(puVar4 + 0x68) = uStack_58;
  *(undefined8 *)(puVar4 + 0x10) = uVar5;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  *(undefined8 *)(puVar4 + 0x20) = uVar1;
  *(undefined8 *)(puVar4 + 0x28) = uVar3;
  *(undefined8 *)(puVar4 + 0x30) = uVar6;
  *(undefined8 *)(puVar4 + 0x78) = uStack_48;
  *(undefined8 *)(puVar4 + 0x40) = uStack_80;
  *(undefined8 *)(puVar4 + 0x38) = uStack_88;
  func_0x000107c6157c(uVar5);
  func_0x000107c61174(uVar2);
  func_0x000107c615f0(uVar1);
  func_0x000107c61174(uVar3);
  func_0x000107c6157c(uVar6);
  uVar5 = 7;
  func_0x0001001ca524(7,3,0x50,3,0,0,&UNK_10d9ddfa8,puVar4,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(uVar5);
  return;
}



/* Entry: 101bff7f8; end: 101bff85b;  */

void FUN_101bff7f8(long param_1)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x58);
  plVar2 = (long *)0xd0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101bff85c;
  plVar2[7] = unaff_x20 + 0x10;
  plVar2[8] = lVar3;
  plVar2[6] = param_1;
  lVar1 = 0;
  func_0x000107c5fcec();
  plVar2[9] = lVar1;
  lVar3 = lVar1;
  func_0x000107c5fce8();
  plVar2[10] = lVar3;
  func_0x000107c5fce8();
  plVar2[0xb] = lVar3;
  func_0x000100eea164();
  plVar2[0xc] = lVar3;
  func_0x000107c5fca8();
  plVar2[0xd] = lVar1;
  plVar2[0xe] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bfe6fc,lVar1,lVar3);
  return;
}



/* Entry: 101bff85c; end: 101bff897;  */

void FUN_101bff85c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101bff894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101bff898; end: 101bff8ef;  */

void FUN_101bff898(long param_1)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  plVar2 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101bff8f0;
  plVar2[10] = param_1;
  plVar2[0xb] = lVar3;
  lVar1 = 0;
  func_0x000107c5fcec();
  plVar2[0xc] = lVar1;
  lVar3 = lVar1;
  func_0x000107c5fce8();
  plVar2[0xd] = lVar3;
  func_0x000100eea164();
  plVar2[0xe] = lVar3;
  func_0x000107c5fca8();
  plVar2[0xf] = lVar1;
  plVar2[0x10] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bfec78,lVar1,lVar3);
  return;
}



/* Entry: 101bff8f0; end: 101bff92b;  */

void FUN_101bff8f0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101bff928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101bff92c; end: 101bff933;  */

/* WARNING: Possible PIC construction at 0x000101bfef70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101bfef74) */

void FUN_101bff92c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar3 = &UNK_110455818;
  func_0x000107c613fc(&UNK_110455818,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  puVar4 = &UNK_110455840;
  func_0x000107c613fc(&UNK_110455840,0x20,7);
  *(undefined **)(puVar4 + 0x10) = &UNK_10d9ddf88;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x0001001ca524(7,3,0x50,3,0,0,&UNK_10d9ddf98,puVar4,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar4);
  return;
}



/* Entry: 101bff934; end: 101bff967;  */

undefined8 FUN_101bff934(undefined8 param_1)

{
  (*(code *)(undefined *)0x101bf86d8)();
  return param_1;
}



/* Entry: 101bff968; end: 101bff977;  */

undefined1  [16] FUN_101bff968(void)

{
  return ZEXT816(0x1104556a8);
}



/* Entry: 101bff978; end: 101bff9fb;  */

long FUN_101bff978(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101bff9fc; end: 101bffa8f;  */

undefined8 * FUN_101bff9fc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar4 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  uVar1 = param_2[2];
  uVar5 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar5;
  uVar2 = param_2[4];
  uVar6 = param_2[5];
  param_1[4] = uVar2;
  param_1[5] = uVar6;
  uVar3 = param_2[6];
  uVar7 = param_2[7];
  param_1[6] = uVar3;
  param_1[7] = uVar7;
  func_0x000107c6157c();
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar7);
  return param_1;
}



/* Entry: 101bffa90; end: 101bffb7b;  */

undefined8 * FUN_101bffa90(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 101bffb7c; end: 101bffbff;  */

undefined8 * FUN_101bffb7c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61574(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61574(uVar1);
  func_0x000107c61574(param_1[2]);
  uVar1 = param_1[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  func_0x000107c61574(uVar1);
  func_0x000107c61574(param_1[4]);
  uVar1 = param_1[5];
  uVar2 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  func_0x000107c61574(uVar1);
  func_0x000107c61574(param_1[6]);
  uVar1 = param_1[7];
  uVar2 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar2;
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 101bffc00; end: 101bffca7;  */

int FUN_101bffc00(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101bffca8; end: 101bffcc7;  */

void FUN_101bffca8(void)

{
  func_0x000107c61168(&PTR_PTR_1127fc8a8);
  return;
}



/* Entry: 101bffcc8; end: 101bffdb7;  */

uint FUN_101bffcc8(uint *param_1,int param_2)

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



/* Entry: 101bffdb8; end: 101bffdf7;  */

void FUN_101bffdb8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e08c88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9ddf08;
  func_0x000107c61520(&UNK_10d9ddf08,&UNK_1104557d0);
  puRam0000000112e08c88 = puVar1;
  return;
}



/* Entry: 101bffdf8; end: 101bffe1b;  */

void FUN_101bffdf8(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112e08c90;
  plVar5 = (long *)&UNK_10daed690;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_101c00880(0,0x112e08bd8,&PTR_PTR_1126a8c48);
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



/* Entry: 101bffe1c; end: 101bffe93;  */

void FUN_101bffe1c(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_101c00880(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 101bffe94; end: 101c00037;  */

/* WARNING: Possible PIC construction at 0x000101bfff48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101bffff4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101bfff4c) */
/* WARNING: Removing unreachable block (ram,0x000101bffff8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bffe94(void)

{
  long lVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lVar6;
  
  if ((*(byte *)(unaff_x20 + _DAT_112e08c28) & 1) == 0) {
    *(undefined1 *)(unaff_x20 + _DAT_112e08c28) = 1;
    pcVar3 = *(code **)(unaff_x20 + _DAT_112e08c08);
    if (pcVar3 != (code *)0x0) {
      uVar5 = ((undefined8 *)(unaff_x20 + _DAT_112e08c08))[1];
      func_0x000107c6157c(uVar5);
      (*pcVar3)();
      func_0x00010058d43c(pcVar3,uVar5);
    }
  }
  lVar1 = _DAT_112e08c18;
  lVar4 = *(long *)(unaff_x20 + _DAT_112e08c18);
  if (lVar4 != 0) {
    lVar6 = *(long *)(unaff_x20 + _DAT_112e08c10);
    if (lVar6 == 0) {
      *(undefined8 *)(unaff_x20 + _DAT_112e08c10) = 0;
      func_0x000107c61574(0);
      *(undefined8 *)(unaff_x20 + lVar1) = 0;
      lVar6 = *(long *)(unaff_x20 + _DAT_112e08c30);
      if (lVar6 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_continuation_throwingResume_110350088)(lVar4);
        return;
      }
      puVar2 = &UNK_1104557f0;
      func_0x000107c613fc(&UNK_1104557f0,0x20,7);
      *(long *)(puVar2 + 0x10) = lVar6;
      *(long *)(puVar2 + 0x18) = lVar4;
      func_0x000107c61580(lVar6,2);
      func_0x0001001ca524(7,3,0x50,3,0,0,&UNK_10d9ddf78,puVar2,PTR___sytN_11034f1b0 + 8);
    }
    else {
      func_0x000107c6157c(lVar6);
      func_0x000107c5fd50();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(lVar6);
    return;
  }
  return;
}



/* Entry: 101c00038; end: 101c0009b;  */

void FUN_101c00038(void)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101c00940;
  plVar3[2] = lVar1;
  lVar1 = 0;
  func_0x000107c5fcec();
  plVar3[3] = lVar1;
  func_0x000107c5fce8();
  plVar3[4] = lVar1;
  plVar2 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
  func_0x000107c615b8();
  plVar3[5] = (long)plVar2;
  *plVar2 = (long)plVar3;
  plVar2[1] = (long)FUN_101bff1ac;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORs_rlE5valuexvg_11034fdd8)();
  return;
}



/* Entry: 101c0009c; end: 101c000eb;  */

void FUN_101c0009c(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101c00944;
  plVar3[2] = lVar2;
  plVar3[3] = lVar1;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[4] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bfeff8,lVar1,lVar2);
  return;
}



/* Entry: 101c000ec; end: 101c0015b;  */

void FUN_101c000ec(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101c00948;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 101c0015c; end: 101c001b7;  */

void FUN_101c0015c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  FUN_101c0083c(unaff_x20 + 0x38);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101c001b8; end: 101c00243;  */

void FUN_101c001b8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  long lVar6;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  lVar6 = *(long *)(unaff_x20 + 0x30);
  plVar5 = (long *)0xf0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x101c0094c;
  plVar5[0x15] = lVar6;
  plVar5[0x16] = unaff_x20 + 0x38;
  plVar5[0x13] = lVar3;
  plVar5[0x14] = lVar2;
  plVar5[0x11] = lVar4;
  plVar5[0x12] = lVar1;
  lVar3 = 0;
  func_0x000107c5fcec();
  lVar4 = lVar3;
  func_0x000107c5fce8();
  plVar5[0x17] = lVar4;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar5[0x18] = lVar3;
  plVar5[0x19] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bfd870,lVar3,lVar4);
  return;
}



/* Entry: 101c00244; end: 101c0025b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c00244(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined *puStack_58;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  puVar3 = *(undefined **)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(lVar5 + _DAT_112e08c20);
  *(undefined8 *)(lVar5 + _DAT_112e08c20) = param_1;
  func_0x000107c6142c(uVar1,lVar5,puVar3,unaff_x20 + 0x20);
  func_0x000107c61434(param_1);
  FUN_101bf8c94();
  puVar2 = PTR___sSiN_11034deb0;
  puVar6 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  puStack_58 = puVar3;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  puVar3 = PTR_PTR_1126a8c50;
  func_0x000107c610f8();
  lVar4 = lVar5;
  func_0x000107c5fc48(lVar5,PTR___sSSN_11034da80);
  func_0x000107c5fadc(puVar2,puVar6);
  func_0x000107c6142c(puVar6);
  func_0x000107c4567c();
  func_0x000107c6142c(lVar5);
  func_0x000107c6142c(param_1);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(puVar2);
  puStack_58 = puVar3;
  func_0x0001007d6d78(&puStack_58);
  func_0x000107c61170(puVar3);
  return;
}



/* Entry: 101c0025c; end: 101c002bf;  */

void FUN_101c0025c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x101c00950;
  plVar5[4] = lVar3;
  plVar5[5] = lVar2;
  plVar5[2] = lVar4;
  plVar5[3] = lVar1;
  lVar3 = 0;
  func_0x000107c5fcec();
  lVar4 = lVar3;
  func_0x000107c5fce8();
  plVar5[6] = lVar4;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar3,lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bff4ec,lVar3,lVar4);
  return;
}



/* Entry: 101c002c0; end: 101c0032f;  */

void FUN_101c002c0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101c00954;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 101c00330; end: 101c003af;  */

long FUN_101c00330(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 101c003b0; end: 101c003fb;  */

void FUN_101c003b0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  FUN_101c0083c(unaff_x20 + 0x20);
  FUN_101c0083c(unaff_x20 + 0x48);
  if (*(long *)(unaff_x20 + 0x88) != 0) {
    FUN_101c0083c(unaff_x20 + 0x70);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101c003fc; end: 101c0045f;  */

void FUN_101c003fc(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101c00958;
  plVar3[0x14] = unaff_x20 + 0x48;
  plVar3[0x15] = unaff_x20 + 0x70;
  plVar3[0x12] = lVar1;
  plVar3[0x13] = unaff_x20 + 0x20;
  plVar3[0x11] = lVar2;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[0x16] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bfd3f4,lVar1,lVar2);
  return;
}



/* Entry: 101c00460; end: 101c004cf;  */

void FUN_101c00460(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101c0095c;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 101c004d0; end: 101c0052b;  */

void FUN_101c004d0(void)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long unaff_x20;
  long unaff_x22;
  
  plVar6 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = 0x101c00960;
  lVar4 = 0;
  func_0x000107c5fcec();
  plVar6[2] = lVar4;
  func_0x000107c5fce8();
  plVar6[3] = lVar4;
  plVar5 = (long *)0xf0;
  func_0x000107c615b8();
  plVar6[4] = (long)plVar5;
  *plVar5 = (long)plVar6;
  plVar5[1] = (long)FUN_101bfd64c;
  plVar5[8] = unaff_x20 + 0x38;
  plVar5[9] = unaff_x20 + 0x60;
  plVar5[7] = unaff_x20 + 0x10;
  lVar4 = 0;
  func_0x000103a82768();
  plVar5[10] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar5[0xb] = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xf;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0xc] = uVar1;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0xd] = uVar1;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0xe] = uVar2;
  lVar4 = 0x112e085c8;
  func_0x0001000285a8(0x112e085c8,&UNK_10d9dcfb0);
  uVar2 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xf;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0xf] = uVar1;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0x10] = uVar1;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0x11] = uVar1;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0x12] = uVar1;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0x13] = uVar2;
  lVar3 = 0;
  func_0x000107c5fcec();
  lVar4 = lVar3;
  func_0x000107c5fce8();
  plVar5[0x14] = lVar4;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar5[0x15] = lVar3;
  plVar5[0x16] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bfb01c,lVar3,lVar4);
  return;
}



/* Entry: 101c0052c; end: 101c00633;  */

undefined8 FUN_101c0052c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000103a82768();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 101c00634; end: 101c006b7;  */

void FUN_101c00634(void)

{
  undefined4 uVar1;
  long *plVar2;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  long lVar4;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined4 *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x98);
  plVar2 = (long *)0x100;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x101c00964;
  plVar2[0x17] = unaff_x20 + 0x70;
  plVar2[0x18] = lVar4;
  plVar2[0x15] = unaff_x20 + 0x20;
  plVar2[0x16] = unaff_x20 + 0x48;
  *(undefined4 *)(plVar2 + 0x1f) = uVar1;
  plVar2[0x14] = lVar3;
  lVar4 = 0;
  func_0x000107c5fcec();
  lVar3 = lVar4;
  func_0x000107c5fce8();
  plVar2[0x19] = lVar3;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar2[0x1a] = lVar4;
  plVar2[0x1b] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bfbeb4,lVar4,lVar3);
  return;
}



/* Entry: 101c006b8; end: 101c00737;  */

void FUN_101c006b8(void)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(unaff_x20 + 0x18);
  uVar1 = *(undefined4 *)(unaff_x20 + 0x20);
  plVar6 = (long *)0x130;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = 0x101c00968;
  plVar6[0xd] = unaff_x20 + 0x50;
  plVar6[0xe] = unaff_x20 + 0x78;
  plVar6[0xb] = lVar5;
  plVar6[0xc] = unaff_x20 + 0x28;
  *(undefined4 *)(plVar6 + 0x24) = uVar1;
  plVar6[10] = lVar4;
  lVar4 = 0x112e085c8;
  func_0x0001000285a8(0x112e085c8,&UNK_10d9dcfb0);
  uVar3 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0xf] = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0x10] = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0x11] = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0x12] = uVar3;
  lVar4 = 0;
  func_0x000103a82768();
  plVar6[0x13] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar6[0x14] = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0x15] = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0x16] = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0x17] = uVar3;
  lVar5 = 0;
  func_0x000107c5fcec();
  lVar4 = lVar5;
  func_0x000107c5fce8();
  plVar6[0x18] = lVar4;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar6[0x19] = lVar5;
  plVar6[0x1a] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bfc1d8,lVar5,lVar4);
  return;
}



/* Entry: 101c00738; end: 101c0077b;  */

undefined8 FUN_101c00738(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000103a82768();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 101c0077c; end: 101c007b7;  */

void FUN_101c0077c(void)

{
  long unaff_x20;
  
  FUN_101c0083c(unaff_x20 + 0x10);
  FUN_101c0083c(unaff_x20 + 0x38);
  if (*(long *)(unaff_x20 + 0x78) != 0) {
    FUN_101c0083c(unaff_x20 + 0x60);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101c007b8; end: 101c00813;  */

void FUN_101c007b8(void)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long unaff_x22;
  
  plVar6 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = 0x101c0096c;
  lVar1 = 0;
  func_0x000107c5fcec();
  plVar6[2] = lVar1;
  func_0x000107c5fce8();
  plVar6[3] = lVar1;
  plVar2 = (long *)0xf0;
  func_0x000107c615b8();
  plVar6[4] = (long)plVar2;
  *plVar2 = (long)plVar6;
  plVar2[1] = (long)FUN_101bfae7c;
  plVar2[8] = unaff_x20 + 0x38;
  plVar2[9] = unaff_x20 + 0x60;
  plVar2[7] = unaff_x20 + 0x10;
  lVar1 = 0;
  func_0x000103a82768();
  plVar2[10] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar2[0xb] = lVar1;
  uVar4 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0xc] = uVar3;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0xd] = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0xe] = uVar4;
  lVar1 = 0x112e085c8;
  func_0x0001000285a8(0x112e085c8,&UNK_10d9dcfb0);
  uVar4 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0xf] = uVar3;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0x10] = uVar3;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0x11] = uVar3;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0x12] = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0x13] = uVar4;
  lVar5 = 0;
  func_0x000107c5fcec();
  lVar1 = lVar5;
  func_0x000107c5fce8();
  plVar2[0x14] = lVar1;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar2[0x15] = lVar5;
  plVar2[0x16] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bfb01c,lVar5,lVar1);
  return;
}



/* Entry: 101c00814; end: 101c00823;  */

long FUN_101c00814(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x38);
  *(long *)(param_1 + 0x38) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 0x20,param_2 + 0x20);
  return param_1 + 0x20;
}



/* Entry: 101c00824; end: 101c0083b;  */

void FUN_101c00824(long param_1)

{
  FUN_101c0083c(param_1 + 0x20);
  return;
}



/* Entry: 101c0083c; end: 101c0087f;  */

void FUN_101c0083c(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000101c00850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 101c00880; end: 101c008bf;  */

void FUN_101c00880(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101c008c0; end: 101c0091b;  */

void FUN_101c008c0(void)

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



/* Entry: 101c0091c; end: 101c00937;  */

void FUN_101c0091c(long param_1,long param_2)

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



/* Entry: 101c00938; end: 101c0093b; -[_TtC47ListeningActivityPermissionsSheetImplementationP33_38480665AC97B43169783CCBF86A13D922StubFriendmojiProvider observeFriendmojisForGroupsWithRequests:] */

void FUN_101c00938(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  func_0x000107c453e4();
  puVar2 = PTR_PTR_1126ae820;
  func_0x000107c610f8(PTR_PTR_1126ae820);
  func_0x000107c49470();
  func_0x000107c61170(puVar1);
  puVar1 = puVar2;
  func_0x000107c5cb24(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 101c0093c; end: 101c00973; -[_TtC47ListeningActivityPermissionsSheetImplementationP33_38480665AC97B43169783CCBF86A13D922StubFriendmojiProvider observeFriendmojisForUsersWithRequests:] */

void FUN_101c0093c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  func_0x000107c453e4();
  puVar2 = PTR_PTR_1126ae820;
  func_0x000107c610f8(PTR_PTR_1126ae820);
  func_0x000107c49470();
  func_0x000107c61170(puVar1);
  puVar1 = puVar2;
  func_0x000107c5cb24(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 101c00974; end: 101c00977; -[_TtC47ListeningActivityPermissionsSheetImplementationP33_38480665AC97B43169783CCBF86A13D922StubFriendmojiProvider forGroupsWithRequests:completion:] */

void FUN_101c00974(void)

{
  undefined *puVar1;
  long in_x3;
  
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
  (**(code **)(in_x3 + 0x10))(in_x3,puVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 101c00978; end: 101c0097b; -[_TtC47ListeningActivityPermissionsSheetImplementationP33_38480665AC97B43169783CCBF86A13D922StubFriendmojiProvider forUsersWithRequests:completion:] */

void FUN_101c00978(void)

{
  undefined *puVar1;
  long in_x3;
  
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
  (**(code **)(in_x3 + 0x10))(in_x3,puVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 101c0097c; end: 101c00b63;  */

void FUN_101c0097c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long extraout_x8;
  long lVar9;
  long unaff_x20;
  undefined1 auStack_d0 [8];
  long lStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined1 uStack_b7;
  undefined6 uStack_b6;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar3 = 0x112e08cb0;
  lStack_c8 = param_1;
  func_0x0001000285a8(0x112e08cb0,&UNK_10d9de0d0);
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x58);
  func_0x000107c6157c(uVar8);
  uVar4 = 0x112e08cb8;
  func_0x0001000285a8(0x112e08cb8,&UNK_10d9de0d8);
  uVar5 = 0x112e08cc0;
  FUN_101c01890(0x112e08cc0,0x112e08cb8,&UNK_10d9de0d8,
                PTR___s7SwiftUI6HStackVyxGAA4ViewAAMc_110349878);
  func_0x000107c5f738(auStack_d0 + -extraout_x8,uVar6,uVar8,0x101c01888,&uStack_c0,uVar4,uVar5);
  FUN_101c12fa0();
  uStack_b7 = (undefined1)((ulong)uVar8 >> 8);
  uStack_b8 = (undefined1)uVar8;
  uVar4 = 0x112e08cc8;
  uStack_c0 = uVar6;
  FUN_101c01890(0x112e08cc8,0x112e08cb0,&UNK_10d9de0d0,
                PTR___s7SwiftUI6ButtonVyxGAA4ViewAAMc_110349850);
  uVar5 = uVar4;
  FUN_101c018d4();
  lVar2 = lStack_c8;
  func_0x000107c5f60c(lStack_c8,&uStack_c0,lVar3,&UNK_110456990,uVar4,uVar5);
  FUN_101c01914(uVar6,uVar8);
  (**(code **)(lVar9 + 8))(auStack_d0 + -extraout_x8,lVar3);
  FUN_101c01924();
  puVar7 = &UNK_110455c08;
  func_0x000107c613fc(&UNK_110455c08,0x70,7);
  *(undefined8 *)(puVar7 + 0x38) = uStack_98;
  *(undefined8 *)(puVar7 + 0x30) = uStack_a0;
  *(undefined8 *)(puVar7 + 0x48) = uStack_88;
  *(undefined8 *)(puVar7 + 0x40) = uStack_90;
  *(undefined8 *)(puVar7 + 0x58) = uStack_78;
  *(undefined8 *)(puVar7 + 0x50) = uStack_80;
  *(undefined8 *)(puVar7 + 0x68) = uStack_68;
  *(undefined8 *)(puVar7 + 0x60) = uStack_70;
  *(ulong *)(puVar7 + 0x18) = CONCAT62(uStack_b6,CONCAT11(uStack_b7,uStack_b8));
  *(undefined8 *)(puVar7 + 0x10) = uStack_c0;
  *(undefined8 *)(puVar7 + 0x28) = uStack_a8;
  *(long *)(puVar7 + 0x20) = unaff_x20;
  lVar3 = 0x112e08cd8;
  func_0x0001000285a8(0x112e08cd8,&UNK_10d9de0e0);
  puVar1 = (undefined8 *)(lVar2 + *(int *)(lVar3 + 0x24));
  *puVar1 = FUN_101c01958;
  puVar1[1] = puVar7;
  puVar1[2] = 0;
  puVar1[3] = 0;
  return;
}



/* Entry: 101c00b64; end: 101c00d2f;  */

void FUN_101c00b64(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_340 [136];
  undefined7 uStack_2b8;
  undefined1 uStack_2b1;
  undefined7 uStack_2b0;
  undefined1 uStack_2a9;
  undefined7 uStack_2a8;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 uStack_230;
  undefined7 uStack_22f;
  undefined1 uStack_228;
  undefined7 uStack_227;
  undefined1 uStack_220;
  undefined7 uStack_21f;
  undefined1 uStack_218;
  undefined7 uStack_217;
  undefined1 uStack_210;
  undefined7 uStack_20f;
  undefined1 uStack_208;
  undefined7 uStack_207;
  undefined1 uStack_200;
  undefined7 uStack_1ff;
  undefined1 uStack_1f8;
  undefined7 uStack_1f7;
  undefined1 uStack_1f0;
  undefined7 uStack_1ef;
  undefined1 uStack_1e8;
  undefined7 uStack_1e7;
  undefined1 uStack_1e0;
  undefined7 uStack_1df;
  undefined1 uStack_1d8;
  undefined7 uStack_1d7;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 uStack_150;
  undefined7 uStack_14f;
  undefined1 uStack_148;
  undefined7 uStack_147;
  undefined1 uStack_140;
  undefined7 uStack_13f;
  undefined1 uStack_138;
  undefined7 uStack_137;
  undefined1 uStack_130;
  undefined7 uStack_12f;
  undefined1 uStack_128;
  undefined7 uStack_127;
  undefined1 uStack_120;
  undefined7 uStack_11f;
  undefined1 uStack_118;
  undefined7 uStack_117;
  undefined1 uStack_110;
  undefined7 uStack_10f;
  undefined1 uStack_108;
  undefined7 uStack_107;
  undefined1 uStack_100;
  undefined7 uStack_ff;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  undefined1 uStack_f0;
  undefined7 uStack_ef;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
  undefined7 uStack_df;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  
  uVar1 = param_2;
  func_0x000107c5f410();
  FUN_101c00d30(&uStack_d8,param_2);
  uStack_208 = uStack_a0;
  uStack_207 = uStack_9f;
  uStack_210 = uStack_a8;
  uStack_20f = uStack_a7;
  uStack_1f8 = uStack_90;
  uStack_1f7 = uStack_8f;
  uStack_200 = uStack_98;
  uStack_1ff = uStack_97;
  uStack_1e8 = uStack_80;
  uStack_1e7 = uStack_7f;
  uStack_1f0 = uStack_88;
  uStack_1ef = uStack_87;
  uStack_1d8 = uStack_70;
  uStack_1d7 = uStack_6f;
  uStack_1e0 = uStack_78;
  uStack_1df = uStack_77;
  uStack_228 = uStack_c0;
  uStack_227 = uStack_bf;
  uStack_230 = uStack_c8;
  uStack_22f = uStack_c7;
  uStack_238 = uStack_d0;
  uStack_240 = uStack_d8;
  uStack_218 = uStack_b0;
  uStack_217 = uStack_af;
  uStack_220 = uStack_b8;
  uStack_21f = uStack_b7;
  uStack_1c8 = uStack_d0;
  uStack_1d0 = uStack_d8;
  FUN_101c01a3c(&uStack_240,&uStack_160,0x112e08ce0,&UNK_10d9de100);
  func_0x000101c01a84(&uStack_1d0,0x112e08ce0,&UNK_10d9de100);
  uStack_2a9 = (undefined1)uStack_238;
  uStack_2a8 = (undefined7)((ulong)uStack_238 >> 8);
  uStack_2b1 = (undefined1)uStack_240;
  uStack_2b0 = (undefined7)((ulong)uStack_240 >> 8);
  uStack_107 = uStack_1ff;
  uStack_100 = uStack_1f8;
  uStack_10f = uStack_207;
  uStack_108 = uStack_200;
  uStack_f7 = uStack_1ef;
  uStack_f0 = uStack_1e8;
  uStack_ff = uStack_1f7;
  uStack_f8 = uStack_1f0;
  uStack_e7 = uStack_1df;
  uStack_ef = uStack_1e7;
  uStack_e8 = uStack_1e0;
  uStack_147 = uStack_2b0;
  uStack_140 = uStack_2a9;
  uStack_14f = uStack_2b8;
  uStack_148 = uStack_2b1;
  uStack_137 = uStack_22f;
  uStack_130 = uStack_228;
  uStack_13f = uStack_2a8;
  uStack_138 = uStack_230;
  uStack_127 = uStack_21f;
  uStack_120 = uStack_218;
  uStack_12f = uStack_227;
  uStack_128 = uStack_220;
  uStack_117 = uStack_20f;
  uStack_110 = uStack_208;
  uStack_11f = uStack_217;
  uStack_118 = uStack_210;
  uStack_158 = 0x4020000000000000;
  uStack_150 = 0;
  uStack_e0 = uStack_1d8;
  uStack_df = uStack_1d7;
  uStack_d0 = 0x4020000000000000;
  uStack_c8 = 0;
  uStack_b7 = uStack_2a8;
  uStack_bf = uStack_2b0;
  uStack_b8 = uStack_2a9;
  uStack_c0 = uStack_2b1;
  uStack_160 = uVar1;
  uStack_d8 = uVar1;
  FUN_101c01a3c(&uStack_160,auStack_340,0x112e08cb8,&UNK_10d9de0d8);
  func_0x000101c01a84(&uStack_d8,0x112e08cb8,&UNK_10d9de0d8);
  param_1[0xd] = CONCAT71(uStack_f7,uStack_f8);
  param_1[0xc] = CONCAT71(uStack_ff,uStack_100);
  param_1[0xf] = CONCAT71(uStack_e7,uStack_e8);
  param_1[0xe] = CONCAT71(uStack_ef,uStack_f0);
  param_1[0x10] = CONCAT71(uStack_df,uStack_e0);
  param_1[5] = CONCAT71(uStack_137,uStack_138);
  param_1[4] = CONCAT71(uStack_13f,uStack_140);
  param_1[7] = CONCAT71(uStack_127,uStack_128);
  param_1[6] = CONCAT71(uStack_12f,uStack_130);
  param_1[9] = CONCAT71(uStack_117,uStack_118);
  param_1[8] = CONCAT71(uStack_11f,uStack_120);
  param_1[0xb] = CONCAT71(uStack_107,uStack_108);
  param_1[10] = CONCAT71(uStack_10f,uStack_110);
  param_1[1] = uStack_158;
  *param_1 = uStack_160;
  param_1[3] = CONCAT71(uStack_147,uStack_148);
  param_1[2] = CONCAT71(uStack_14f,uStack_150);
  return;
}



/* Entry: 101c00d30; end: 101c010b7;  */

void FUN_101c00d30(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined5 *puVar6;
  undefined5 **ppuVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined1 auStack_2c0 [80];
  undefined5 *puStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 auStack_220 [16];
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined5 *puStack_1f0;
  undefined8 uStack_1e8;
  undefined2 uStack_1e0;
  undefined1 uStack_1de;
  undefined3 uStack_1d8;
  undefined5 uStack_1d5;
  undefined3 uStack_1d0;
  undefined5 uStack_1cd;
  undefined3 uStack_1c8;
  undefined5 uStack_1c5;
  undefined3 uStack_1c0;
  undefined5 uStack_1bd;
  undefined3 uStack_1b8;
  undefined5 uStack_1b5;
  undefined3 uStack_1b0;
  undefined5 uStack_1ad;
  undefined5 *puStack_1a8;
  undefined8 uStack_1a0;
  undefined2 uStack_198;
  undefined1 uStack_196;
  undefined8 uStack_195;
  undefined8 uStack_18d;
  undefined8 uStack_185;
  undefined8 uStack_17d;
  undefined8 uStack_175;
  undefined5 uStack_16d;
  undefined3 uStack_168;
  undefined5 uStack_165;
  undefined5 *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined5 uStack_110;
  undefined3 uStack_10b;
  undefined5 uStack_108;
  undefined3 uStack_103;
  undefined5 uStack_100;
  undefined3 uStack_fb;
  undefined5 uStack_f8;
  undefined3 uStack_f3;
  undefined5 uStack_f0;
  undefined3 uStack_eb;
  undefined5 uStack_e8;
  undefined3 uStack_e3;
  undefined5 uStack_e0;
  undefined3 uStack_db;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined5 *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar1 = param_2;
  FUN_101c010b8(&puStack_c0);
  func_0x000107c5f7ac();
  uVar2 = 0x403a000000000000;
  func_0x000107c5f2d4(auStack_220,0x403a000000000000,0,0x403a000000000000,0,lVar1,param_3);
  uStack_103 = (undefined3)auStack_220._8_8_;
  uStack_100 = SUB85(auStack_220._8_8_,3);
  uStack_10b = (undefined3)auStack_220._0_8_;
  uStack_108 = SUB85(auStack_220._0_8_,3);
  uStack_f3 = (undefined3)uStack_208;
  uStack_f0 = (undefined5)((ulong)uStack_208 >> 0x18);
  uStack_fb = (undefined3)uStack_210;
  uStack_f8 = (undefined5)((ulong)uStack_210 >> 0x18);
  uStack_e3 = (undefined3)uStack_1f8;
  uStack_e0 = (undefined5)((ulong)uStack_1f8 >> 0x18);
  uStack_eb = (undefined3)uStack_200;
  uStack_e8 = (undefined5)((ulong)uStack_200 >> 0x18);
  func_0x000107c5f2e4();
  uVar3 = uVar2;
  func_0x000107c5f7e4();
  func_0x000107c5f2e0(0x3feb333333333333,uStack_200,uStack_210);
  uVar4 = uVar3;
  func_0x000107c5f2e8();
  func_0x000107c61574(uVar2);
  func_0x000107c61574();
  func_0x000107c5f7c8(0x3fe0000000000000,0x3ff0000000000000,0);
  uVar2 = uVar3;
  func_0x000107c5f7c0(0x4000000000000000);
  func_0x000107c61574(uVar3);
  uVar5 = uVar2;
  func_0x000107c5f2ec(uVar2,uVar4);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(uVar2);
  puStack_1f0 = puStack_c0;
  uStack_1e8 = uStack_b8;
  uStack_1e0 = (undefined2)uStack_b0;
  uStack_1de = uStack_b0._2_1_;
  uStack_18d = CONCAT35(uStack_103,uStack_108);
  uStack_195 = CONCAT35(uStack_10b,uStack_110);
  uStack_17d = CONCAT35(uStack_f3,uStack_f8);
  uStack_185 = CONCAT35(uStack_fb,uStack_100);
  uStack_1d5 = uStack_108;
  uStack_1d0 = uStack_103;
  uStack_1d8 = uStack_10b;
  uStack_1c5 = uStack_f8;
  uStack_1c0 = uStack_f3;
  uStack_1cd = uStack_100;
  uStack_1c8 = uStack_fb;
  uStack_175 = CONCAT35(uStack_eb,uStack_f0);
  uStack_1b5 = uStack_e8;
  uStack_1bd = uStack_f0;
  uStack_1b8 = uStack_eb;
  uStack_258 = CONCAT53(uStack_108,uStack_10b);
  uStack_260 = CONCAT53(uStack_110,(int3)uStack_b0);
  uStack_268 = uStack_b8;
  puStack_270 = puStack_c0;
  uStack_248 = CONCAT53(uStack_f8,uStack_fb);
  uStack_250 = CONCAT53(uStack_100,uStack_103);
  uStack_238 = CONCAT53(uStack_e8,uStack_eb);
  uStack_240 = CONCAT53(uStack_f0,uStack_f3);
  uStack_230 = CONCAT53(uStack_e0,uStack_e3);
  uStack_1b0 = uStack_e3;
  uStack_1ad = uStack_e0;
  puStack_1a8 = puStack_c0;
  uStack_1a0 = uStack_b8;
  uStack_198 = (undefined2)uStack_b0;
  uStack_196 = uStack_b0._2_1_;
  uStack_165 = uStack_e0;
  uStack_16d = uStack_e8;
  uStack_168 = uStack_e3;
  FUN_101c01a3c(&puStack_1f0,&puStack_c0,0x112e08ce8,&UNK_10d9de108);
  func_0x000101c01a84(&puStack_1a8,0x112e08ce8,&UNK_10d9de108);
  uStack_138 = uStack_248;
  uStack_140 = uStack_250;
  uStack_128 = uStack_238;
  uStack_130 = uStack_240;
  uStack_158 = uStack_268;
  puStack_160 = puStack_270;
  uStack_148 = uStack_258;
  uStack_150 = uStack_260;
  uStack_120 = uStack_230;
  uStack_e8 = (undefined5)uStack_248;
  uStack_e3 = (undefined3)((ulong)uStack_248 >> 0x28);
  uStack_f0 = (undefined5)uStack_250;
  uStack_eb = (undefined3)((ulong)uStack_250 >> 0x28);
  uStack_d8 = uStack_238;
  uStack_e0 = (undefined5)uStack_240;
  uStack_db = (undefined3)((ulong)uStack_240 >> 0x28);
  uStack_108 = (undefined5)uStack_268;
  uStack_103 = (undefined3)((ulong)uStack_268 >> 0x28);
  uStack_110 = SUB85(puStack_270,0);
  uStack_10b = (undefined3)((ulong)puStack_270 >> 0x28);
  uStack_f8 = (undefined5)uStack_258;
  uStack_f3 = (undefined3)((ulong)uStack_258 >> 0x28);
  uStack_100 = (undefined5)uStack_260;
  uStack_fb = (undefined3)((ulong)uStack_260 >> 0x28);
  uStack_d0 = uStack_230;
  uVar3 = 0x112e08cf0;
  puVar10 = &UNK_10d9de110;
  uStack_118 = uVar5;
  uStack_c8 = uVar5;
  FUN_101c01a3c(&puStack_160,&puStack_c0,0x112e08cf0);
  puVar6 = &uStack_110;
  func_0x000101c01a84(puVar6,0x112e08cf0,&UNK_10d9de110);
  FUN_101c12434();
  lVar1 = 0x112d36008;
  func_0x0001000285a8(0x112d36008,&UNK_10d900720);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 2;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  uVar4 = *(undefined8 *)(param_2 + 0x40);
  lVar8 = *(long *)(param_2 + 0x48);
  func_0x0001000a8868(param_2 + 0x28,uVar4);
  (**(code **)(lVar8 + 8))();
  puVar9 = PTR___sSSN_11034da80;
  *(undefined **)(lVar1 + 0x38) = PTR___sSSN_11034da80;
  uVar2 = uVar4;
  func_0x00010075bbf0();
  *(undefined8 *)(lVar1 + 0x40) = uVar2;
  *(undefined8 *)(lVar1 + 0x20) = uVar4;
  *(long *)(lVar1 + 0x28) = lVar8;
  uVar4 = uVar3;
  func_0x000107c5fb00(puVar6,uVar3,lVar1);
  func_0x000107c6142c();
  puStack_c0 = puVar6;
  uStack_b8 = uVar4;
  func_0x000100e8b654();
  ppuVar7 = &puStack_c0;
  func_0x000107c5f5e0();
  uStack_248 = uStack_138;
  uStack_250 = uStack_140;
  uStack_238 = uStack_128;
  uStack_240 = uStack_130;
  uStack_228 = uStack_118;
  uStack_230 = uStack_120;
  uStack_88 = uStack_128;
  uStack_90 = uStack_130;
  uStack_78 = uStack_118;
  uStack_80 = uStack_120;
  uStack_268 = uStack_158;
  puStack_270 = puStack_160;
  uStack_258 = uStack_148;
  uStack_260 = uStack_150;
  uStack_a8 = uStack_148;
  uStack_b0 = uStack_150;
  uStack_98 = uStack_138;
  uStack_a0 = uStack_140;
  uStack_b8 = uStack_158;
  puStack_c0 = puStack_160;
  param_1[7] = uStack_128;
  param_1[6] = uStack_130;
  param_1[9] = uStack_118;
  param_1[8] = uStack_120;
  param_1[3] = uStack_148;
  param_1[2] = uStack_150;
  param_1[5] = uStack_138;
  param_1[4] = uStack_140;
  param_1[1] = uStack_158;
  *param_1 = puStack_160;
  param_1[10] = ppuVar7;
  param_1[0xb] = puVar9;
  *(char *)(param_1 + 0xc) = (char)uVar3;
  param_1[0xd] = puVar10;
  FUN_101c01a3c(&puStack_c0,auStack_2c0,0x112e08cf0,&UNK_10d9de110);
  func_0x000100f8a880(ppuVar7,puVar9,uVar3);
  func_0x000107c61434(puVar10);
  func_0x000100f795bc(ppuVar7,puVar9,uVar3);
  func_0x000107c6142c(puVar10);
  func_0x000101c01a84(&puStack_270,0x112e08cf0,&UNK_10d9de110);
  return;
}



/* Entry: 101c010b8; end: 101c0128b;  */

void FUN_101c010b8(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long extraout_x8;
  undefined1 *puVar7;
  long lVar8;
  undefined1 auStack_90 [8];
  undefined1 *puStack_88;
  undefined8 uStack_80;
  undefined2 uStack_78;
  undefined1 uStack_76;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined2 uStack_60;
  undefined1 uStack_5e;
  
  lVar1 = 0;
  func_0x000107c5f6f0();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar7 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uStack_68 = *(undefined8 *)(param_2 + 0x20);
  uStack_70 = *(undefined8 *)(param_2 + 0x18);
  func_0x0001000285a8(0x112d50000,&UNK_10d9dea90);
  func_0x000107c5f72c(&puStack_88);
  if (puStack_88 == (undefined1 *)0x0) {
    func_0x000107c5f6cc();
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_76 = 1;
    uVar5 = 0x112d4fc40;
    func_0x0001000285a8(0x112d4fc40,&UNK_10d915c90);
    uVar6 = uVar5;
    func_0x000100f8450c();
    func_0x000107c5f490(&uStack_70,&puStack_88,uVar5,PTR___s7SwiftUI5ColorVN_1103496f0,uVar6,
                        PTR___s7SwiftUI5ColorVAA4ViewAAWP_1103496e0);
  }
  else {
    puVar2 = puStack_88;
    func_0x000107c61174();
    puVar3 = puVar2;
    func_0x000107c5f6e8();
    (**(code **)(lVar8 + 0x68))
              (puVar7,*(undefined4 *)PTR___s7SwiftUI5ImageV12ResizingModeO7stretchyA2EmFWC_110349738
               ,lVar1);
    puVar4 = puVar7;
    func_0x000107c5f6fc(0,0,0,0,puVar7,puVar3);
    func_0x000107c61574(puVar3);
    (**(code **)(lVar8 + 8))(puVar7,lVar1);
    uStack_80 = 0;
    uStack_78 = 1;
    uStack_76 = 0;
    uVar5 = 0x112d4fc40;
    puStack_88 = puVar4;
    func_0x0001000285a8(0x112d4fc40,&UNK_10d915c90);
    uVar6 = uVar5;
    func_0x000100f8450c();
    func_0x000107c5f490(&uStack_70,&puStack_88,uVar5,PTR___s7SwiftUI5ColorVN_1103496f0,uVar6,
                        PTR___s7SwiftUI5ColorVAA4ViewAAWP_1103496e0);
    func_0x000107c61170(puVar2);
  }
  param_1[1] = uStack_68;
  *param_1 = uStack_70;
  *(undefined2 *)(param_1 + 2) = uStack_60;
  *(undefined1 *)((long)param_1 + 0x12) = uStack_5e;
  return;
}



/* Entry: 101c0128c; end: 101c01373;  */

void FUN_101c0128c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *param_1;
  uVar4 = param_1[1];
  uVar5 = (ulong)*(ushort *)(param_1 + 2);
  FUN_101c10620(uVar1,uVar4,uVar5);
  FUN_101c01924(param_1,&uStack_a0);
  puVar2 = &UNK_110455c30;
  func_0x000107c613fc(&UNK_110455c30,0x70,7);
  *(undefined8 *)(puVar2 + 0x38) = uStack_78;
  *(undefined8 *)(puVar2 + 0x30) = uStack_80;
  *(undefined8 *)(puVar2 + 0x48) = uStack_68;
  *(undefined8 *)(puVar2 + 0x40) = uStack_70;
  *(undefined8 *)(puVar2 + 0x58) = uStack_58;
  *(undefined8 *)(puVar2 + 0x50) = uStack_60;
  *(undefined8 *)(puVar2 + 0x68) = uStack_48;
  *(undefined8 *)(puVar2 + 0x60) = uStack_50;
  *(undefined8 *)(puVar2 + 0x18) = uStack_98;
  *(undefined8 *)(puVar2 + 0x10) = uStack_a0;
  *(undefined8 *)(puVar2 + 0x28) = uStack_88;
  *(undefined8 *)(puVar2 + 0x20) = uStack_90;
  uVar3 = uVar1;
  func_0x0001001ca524(uVar1,uVar4,uVar5,3,0,0,&UNK_10d9de0f0,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar3);
  func_0x00010007d980(uVar1,uVar4,uVar5);
  return;
}



/* Entry: 101c01374; end: 101c013df;  */

void FUN_101c01374(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x28) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c013e0,uVar1,uVar2);
  return;
}



/* Entry: 101c013e0; end: 101c0145b;  */

void FUN_101c013e0(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  int *piVar6;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x18);
  uVar2 = *(undefined8 *)(lVar5 + 0x40);
  lVar3 = *(long *)(lVar5 + 0x48);
  func_0x0001000a8868(lVar5 + 0x28,uVar2);
  piVar6 = *(int **)(lVar3 + 0x10);
  iVar1 = *piVar6;
  plVar4 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x38) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101c0145c;
                    /* WARNING: Could not recover jumptable at 0x000101c01458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(uVar2,lVar3);
  return;
}



/* Entry: 101c0145c; end: 101c014a7;  */

void FUN_101c0145c(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x40) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_101c014a8,*(undefined8 *)(lVar1 + 0x28),*(undefined8 *)(lVar1 + 0x30));
  return;
}



/* Entry: 101c014a8; end: 101c0150f;  */

void FUN_101c014a8(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x20));
  *(undefined8 *)(unaff_x22 + 0x10) = uVar1;
  uVar1 = 0x112d50000;
  func_0x0001000285a8(0x112d50000,&UNK_10d9dea90);
  func_0x000107c5f730((undefined8 *)(unaff_x22 + 0x10),uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101c0150c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101c01510; end: 101c0151f;  */

void FUN_101c01510(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb6854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_110349438
  )();
  return;
}



/* Entry: 101c01520; end: 101c0154b;  */

long FUN_101c01520(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101c0154c; end: 101c0155f;  */

void FUN_101c0154c(undefined8 param_1,undefined8 param_2,uint param_3,char param_4)

{
  if (param_4 != '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)();
    return;
  }
  if ((param_3 & 0xfc) == 0x6c) {
    if ((param_3 & 3) == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
      return;
    }
    return;
  }
  return;
}



/* Entry: 101c01560; end: 101c015ab;  */

/* WARNING: Possible PIC construction at 0x000101c01590: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c01594) */

void FUN_101c01560(undefined8 *param_1)

{
  FUN_101c015ac(*param_1,param_1[1],*(undefined1 *)(param_1 + 2),
                *(undefined1 *)((long)param_1 + 0x11));
  func_0x000107c61170(param_1[3]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1[4]);
  return;
}



/* Entry: 101c015ac; end: 101c015bf;  */

void FUN_101c015ac(undefined8 param_1,undefined8 param_2,uint param_3,char param_4)

{
  if (param_4 != '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)();
    return;
  }
  if ((param_3 & 0xfc) == 0x6c) {
    if ((param_3 & 3) == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
      return;
    }
    return;
  }
  return;
}



/* Entry: 101c015c0; end: 101c0172f;  */

undefined8 * FUN_101c015c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar3 = *param_2;
  uVar6 = param_2[1];
  uVar1 = *(undefined1 *)((long)param_2 + 0x11);
  uVar2 = *(undefined1 *)(param_2 + 2);
  FUN_101c0154c(uVar3,uVar6,uVar2,uVar1);
  *param_1 = uVar3;
  param_1[1] = uVar6;
  *(undefined1 *)(param_1 + 2) = uVar2;
  *(undefined1 *)((long)param_1 + 0x11) = uVar1;
  uVar3 = param_2[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar3;
  lVar5 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = lVar5;
  pcVar4 = (code *)**(undefined8 **)(lVar5 + -8);
  func_0x000107c61174();
  func_0x000107c6157c(uVar3);
  (*pcVar4)(param_1 + 5,param_2 + 5,lVar5);
  uVar3 = param_2[0xb];
  uVar6 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar6;
  func_0x000107c6157c(uVar3);
  return param_1;
}



/* Entry: 101c01730; end: 101c017c7;  */

undefined8 * FUN_101c01730(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = *(undefined2 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar1 = *(undefined1 *)(param_1 + 2);
  *(undefined2 *)(param_1 + 2) = uVar2;
  FUN_101c015ac(uVar3,uVar4,uVar1,*(undefined1 *)((long)param_1 + 0x11));
  uVar3 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61170(uVar3);
  uVar3 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c61574(uVar3);
  func_0x0001000834e4(param_1 + 5);
  uVar3 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar3;
  uVar3 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar3;
  param_1[9] = param_2[9];
  uVar3 = param_1[0xb];
  uVar4 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar4;
  func_0x000107c61574(uVar3);
  return param_1;
}



/* Entry: 101c017c8; end: 101c0188f;  */

int FUN_101c017c8(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x18] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 0x10);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101c01890; end: 101c018d3;  */

void FUN_101c01890(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    func_0x000107c61520(param_4,param_2);
    *param_1 = param_4;
  }
  return;
}



/* Entry: 101c018d4; end: 101c01913;  */

void FUN_101c018d4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e08cd0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9dee40;
  func_0x000107c61520(&UNK_10d9dee40,&UNK_110456990);
  puRam0000000112e08cd0 = puVar1;
  return;
}



/* Entry: 101c01914; end: 101c01923;  */

void FUN_101c01914(undefined8 param_1,char param_2)

{
  if (param_2 != '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)();
  return;
}


