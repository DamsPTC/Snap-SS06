/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1008ee874; end: 1008ee8bb;  */

void FUN_1008ee874(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1008ee8bc; end: 1008ee8bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008ee8bc(code *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long unaff_x20;
  ulong uVar6;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar2 = _DAT_112d9dcc8;
  func_0x000107c61428(unaff_x20 + _DAT_112d9dcc8,auStack_58,0,0);
  if (*(char *)(unaff_x20 + lVar2) == '\x01') {
    (*param_1)(*(undefined1 *)(unaff_x20 + _DAT_112d9dcd8));
  }
  else {
    puVar3 = &UNK_1103b8be8;
    func_0x000107c613fc(&UNK_1103b8be8,0x20,7);
    *(code **)(puVar3 + 0x10) = param_1;
    *(undefined8 *)(puVar3 + 0x18) = param_2;
    lVar2 = _DAT_112d9dcd0;
    func_0x000107c61428(unaff_x20 + _DAT_112d9dcd0,auStack_70,0x21,0);
    uVar6 = *(ulong *)(unaff_x20 + lVar2);
    func_0x000107c6157c(param_2);
    uVar4 = uVar6;
    func_0x000107c61558();
    *(ulong *)(unaff_x20 + lVar2) = uVar6;
    uVar5 = uVar6;
    if ((uVar4 & 1) == 0) {
      uVar5 = 0;
      func_0x0001008eea20(0,*(long *)(uVar6 + 0x10) + 1,1,uVar6,0x112d9de80,&UNK_10d93eac8);
      *(ulong *)(unaff_x20 + lVar2) = uVar5;
    }
    uVar4 = *(ulong *)(uVar5 + 0x10);
    uVar6 = uVar5;
    if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar4) {
      uVar6 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
      func_0x0001008eea20(uVar6,uVar4 + 1,1,uVar5,0x112d9de80,&UNK_10d93eac8);
    }
    *(ulong *)(uVar6 + 0x10) = uVar4 + 1;
    lVar1 = uVar6 + uVar4 * 0x10;
    *(code **)(lVar1 + 0x20) = FUN_100a15c14;
    *(undefined **)(lVar1 + 0x28) = puVar3;
    *(ulong *)(unaff_x20 + lVar2) = uVar6;
    func_0x000107c614a8(auStack_70);
  }
  return;
}



/* Entry: 1008ee8c0; end: 1008eeb47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008ee8c0(code *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long unaff_x20;
  ulong uVar6;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar2 = _DAT_112d9dcc8;
  func_0x000107c61428(unaff_x20 + _DAT_112d9dcc8,auStack_58,0,0);
  if (*(char *)(unaff_x20 + lVar2) == '\x01') {
    (*param_1)(*(undefined1 *)(unaff_x20 + _DAT_112d9dcd8));
  }
  else {
    puVar3 = &UNK_1103b8be8;
    func_0x000107c613fc(&UNK_1103b8be8,0x20,7);
    *(code **)(puVar3 + 0x10) = param_1;
    *(undefined8 *)(puVar3 + 0x18) = param_2;
    lVar2 = _DAT_112d9dcd0;
    func_0x000107c61428(unaff_x20 + _DAT_112d9dcd0,auStack_70,0x21,0);
    uVar6 = *(ulong *)(unaff_x20 + lVar2);
    func_0x000107c6157c(param_2);
    uVar4 = uVar6;
    func_0x000107c61558();
    *(ulong *)(unaff_x20 + lVar2) = uVar6;
    uVar5 = uVar6;
    if ((uVar4 & 1) == 0) {
      uVar5 = 0;
      func_0x0001008eea20(0,*(long *)(uVar6 + 0x10) + 1,1,uVar6,0x112d9de80,&UNK_10d93eac8);
      *(ulong *)(unaff_x20 + lVar2) = uVar5;
    }
    uVar4 = *(ulong *)(uVar5 + 0x10);
    uVar6 = uVar5;
    if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar4) {
      uVar6 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
      func_0x0001008eea20(uVar6,uVar4 + 1,1,uVar5,0x112d9de80,&UNK_10d93eac8);
    }
    *(ulong *)(uVar6 + 0x10) = uVar4 + 1;
    lVar1 = uVar6 + uVar4 * 0x10;
    *(code **)(lVar1 + 0x20) = FUN_100a15c14;
    *(undefined **)(lVar1 + 0x28) = puVar3;
    *(ulong *)(unaff_x20 + lVar2) = uVar6;
    func_0x000107c614a8(auStack_70);
  }
  return;
}



/* Entry: 1008eeb48; end: 1008eeb4f; -[SCBlizzardEventConfigurer appOpenTs] */

undefined8 FUN_1008eeb48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1008eeb50; end: 1008eebcb;  */

void FUN_1008eeb50(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1008eebcc; end: 1008eed2f; -[SCBlizzardPageViewStateManager _maybeUpdatePageViewStateWithPagePageView:] */

/* WARNING: Possible PIC construction at 0x0001008eec84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008eecd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008eecf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008eed04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008eecf8) */
/* WARNING: Removing unreachable block (ram,0x0001008eecdc) */
/* WARNING: Removing unreachable block (ram,0x0001008eece0) */
/* WARNING: Removing unreachable block (ram,0x0001008eecf0) */
/* WARNING: Removing unreachable block (ram,0x0001008eec88) */
/* WARNING: Removing unreachable block (ram,0x0001008eed08) */

void FUN_1008eebcc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c4d2e0(param_3);
  func_0x000107c61180();
  func_0x000107c4d9e8();
  func_0x000107c61180();
  func_0x000107c4d9e8(param_3,param_2,&PTR____CFConstantStringClassReference_110e6ed38);
  func_0x000107c61180();
  func_0x000107c4d9e8(param_3,param_2,&PTR____CFConstantStringClassReference_110db1138);
  func_0x000107c61180();
  func_0x000107c4d9e8(param_3,param_2,&PTR____CFConstantStringClassReference_110e6ed58);
  func_0x000107c61180();
  func_0x000107c4223c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1008eed30; end: 1008eef83;  */

undefined * FUN_1008eed30(long param_1,undefined *param_2,undefined8 *param_3,ulong param_4)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_3;
  uVar5 = param_4;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  if (param_1 != 0) {
    plVar2 = *(long **)(param_1 + 8);
    (**(code **)(*plVar2 + 0x28))(plVar2,&UNK_11095c9c0);
    if ((int)plVar2 != 0) {
      plVar2 = *(long **)(param_1 + 8);
      func_0x000107c61174(param_2);
      if (param_2 == (undefined *)0x0) {
        puVar6 = &UNK_10f3adf9b;
      }
      else {
        puVar6 = param_2;
        func_0x000107c61178(param_2);
        func_0x000107c3ac4c();
      }
      func_0x000107c61170(param_2);
      FUN_10002b838(auStack_78,puVar6);
      func_0x000107c61174(param_3);
      if (param_3 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        func_0x000107c61178(param_3);
        puVar3 = param_3;
        func_0x000107c3ac4c(param_3);
      }
      func_0x000107c61170(param_3);
      FUN_10002b838(auStack_60,puVar3);
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_88 = 0;
      FUN_10007e1e8(&uStack_98,auStack_78,&lStack_48,2);
      uVar5 = param_4 * 10;
      puVar3 = &uStack_98;
      (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_11095c9c0,puVar3);
      puStack_80 = &uStack_98;
      FUN_10007e5dc(&puStack_80);
      lVar7 = 0;
      do {
        if ((&cStack_49)[lVar7] < '\0') {
          func_0x000107c60e14(*(undefined8 *)((long)auStack_60 + lVar7));
        }
        lVar7 = lVar7 + -0x18;
      } while (lVar7 != -0x30);
    }
  }
  func_0x000107c61170(param_3);
  puVar6 = param_2;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar6;
  }
  func_0x000107c60e78();
  func_0x000107c61170(param_3);
  if (cStack_61 < '\0') {
    func_0x000107c60e14(auStack_78[0]);
  }
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
  func_0x000107c60bd8();
  func_0x000107c61174(puVar3);
  func_0x000107c40808();
  if (uVar5 < 2) {
    iVar1 = (int)*(undefined8 *)(puVar6 + 8);
    func_0x000107c40404();
    if (iVar1 != 0) {
      puVar4 = *(undefined8 **)(puVar6 + 0x28);
      func_0x000107c4e29c(puVar4);
      func_0x000107c61180();
      puVar6 = (undefined *)(ulong)(puVar3 != puVar4);
      func_0x000107c61170();
      goto LAB_1008eefec;
    }
  }
  puVar6 = (undefined *)0x0;
LAB_1008eefec:
  func_0x000107c61170(puVar3);
  return puVar6;
}



/* Entry: 1008eef84; end: 1008ef007; -[SCBlizzardPageViewStateManager _hasTabChanged:stack:] */

bool FUN_1008eef84(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x000107c61174(param_3);
  func_0x000107c40808();
  if (param_4 < 2) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x000107c40404(uVar2,param_2,param_3);
    if ((int)uVar2 != 0) {
      lVar3 = *(long *)(param_1 + 0x28);
      func_0x000107c4e29c(lVar3);
      func_0x000107c61180();
      bVar1 = param_3 != lVar3;
      func_0x000107c61170();
      goto LAB_1008eefec;
    }
  }
  bVar1 = false;
LAB_1008eefec:
  func_0x000107c61170(param_3);
  return bVar1;
}



/* Entry: 1008ef008; end: 1008ef00f; -[SCBlizzardPageViewState pageName] */

undefined8 FUN_1008ef008(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1008ef010; end: 1008ef127; -[SCBlizzardPageViewStateManager _updatePageViewStateWithPageName:pageChangeTs:] */

/* WARNING: Possible PIC construction at 0x0001008ef084: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008ef098: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008ef10c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008ef09c) */
/* WARNING: Removing unreachable block (ram,0x0001008ef0b0) */
/* WARNING: Removing unreachable block (ram,0x0001008ef0bc) */
/* WARNING: Removing unreachable block (ram,0x0001008ef088) */
/* WARNING: Removing unreachable block (ram,0x0001008ef110) */

void FUN_1008ef010(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126d05b0;
  func_0x000107c61174(param_4);
  func_0x000107c610f4(puVar1);
  lVar2 = *(long *)(param_2 + 0x28);
  func_0x000107c4e2e8(lVar2);
  func_0x000107c3b888(param_2,param_3,param_4);
  func_0x000107c47d4c(param_1,puVar1,param_3,lVar2 + 1,param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1008ef128; end: 1008ef133;  */

undefined ** FUN_1008ef128(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 1008ef134; end: 1008ef21f;  */

void FUN_1008ef134(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110601870;
  func_0x000107c613fc(&UNK_110601870,0x50,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  FUN_1000823a8(FUN_1008ef26c,puVar1);
  return;
}



/* Entry: 1008ef220; end: 1008ef26b;  */

void FUN_1008ef220(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1008ef134(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                *(undefined8 *)(unaff_x20 + 0x48));
  FUN_100082720("SCUserNavigationScopeDevelopmentScopeInitializationPluginPluginProvider",0x47,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1008ef26c; end: 1008ef27f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008ef26c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long unaff_x20;
  undefined8 uVar12;
  long alStack_a0 [2];
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x48);
  FUN_100083b20(&lStack_68,lVar4,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,uVar2,uVar12,*(undefined8 *)(unaff_x20 + 0x38));
  FUN_100083b20(&lStack_70);
  FUN_1008ef624();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined8 *)(lVar5 + _DAT_112f36078) = 0;
  *(undefined8 *)(lVar5 + _DAT_112f36080) = 0;
  *(undefined8 *)(lVar5 + _DAT_112f36088) = 0;
  *(undefined8 *)(lVar5 + _DAT_112f36090) = uVar2;
  *(undefined8 *)(lVar5 + _DAT_112f36098) = uVar12;
  puVar7 = PTR_s_init_1125d9248;
  lStack_80 = lVar5;
  lStack_78 = lVar4;
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar12);
  plVar6 = &lStack_80;
  func_0x000107c61154(plVar6,puVar7);
  if (*(char *)(lStack_70 + _DAT_11307ce50) == '\x01') {
    FUN_100083b20(alStack_a0);
    lVar4 = alStack_a0[0];
    uVar12 = *(undefined8 *)(alStack_a0[0] + _DAT_113097748);
    func_0x000107c615f0(uVar12);
    func_0x000107c61170(lVar4);
    func_0x000107c5bb50(uVar12);
    func_0x000107c615e8(uVar12);
    FUN_100083b20(alStack_a0);
    lVar4 = alStack_a0[0];
    func_0x000107c5fcec(0);
    puVar7 = &UNK_103053598;
    plVar11 = alStack_a0;
    uStack_90 = uVar3;
    uStack_88 = uVar1;
    func_0x000103052a54(&UNK_103053598,plVar11,
                        "UserNavigationScopedDevelopmentFeatureImplementation/SCUserNavigationScopeDevelopmentScopeInitializationPlugin.swift"
                        ,0x74,2,0x35);
    func_0x000107c4f6f4();
    lVar5 = lVar4;
    func_0x000107c41418(lVar4);
    func_0x000107c61180();
    func_0x000107c5a1dc();
    func_0x000107c615e8(lVar5);
    puVar8 = PTR_PTR_1126ce4b0;
    func_0x000107c61168(PTR_PTR_1126ce4b0);
    func_0x000107c5c660();
    func_0x000107c61180();
    func_0x000107c5e58c();
    func_0x000107c61180();
    func_0x000107c61170();
    func_0x000107c5e45c(puVar8);
    func_0x000107c61180();
    func_0x000107c61170();
    lVar5 = lVar4;
    func_0x000107c4f224();
    func_0x000107c61180();
    lVar9 = lVar5;
    func_0x000107c508d0();
    func_0x000107c61180();
    func_0x000107c615e8(lVar5);
    lVar5 = lVar9;
    func_0x000107c5c658();
    func_0x000107c61180();
    func_0x000107c615e8(lVar9);
    lVar9 = lVar5;
    func_0x000107c3d8b0();
    func_0x000107c61180();
    func_0x000107c5a2cc();
    func_0x000107c53e08(lVar9);
    uVar12 = *(undefined8 *)((long)plVar6 + _DAT_112f36088);
    *(long *)((long)plVar6 + _DAT_112f36088) = lVar9;
    func_0x000107c615f0(lVar9);
    func_0x000107c615e8(uVar12);
    lVar10 = lVar5;
    func_0x000107c3ecc8();
    func_0x000107c61180();
    uVar12 = *(undefined8 *)((long)plVar6 + _DAT_112f36080);
    *(long *)((long)plVar6 + _DAT_112f36080) = lVar10;
    func_0x000107c615f0();
    func_0x000107c615e8(uVar12);
    func_0x000107c4f01c(lVar10);
    func_0x000107c3e2c0(*(undefined8 *)(lStack_68 + _DAT_113083f10));
    FUN_100083b20(alStack_a0);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(plVar11);
    func_0x000107c615e8(lVar9);
    func_0x000107c615e8(lVar10);
    func_0x000107c61170(lStack_70);
    func_0x000107c615e8(lVar4);
    func_0x000107c615e8(lVar5);
    func_0x000107c61170(lStack_68);
    func_0x000107c61170(puVar8);
    func_0x000107c615e8(alStack_a0[0]);
  }
  else {
    func_0x000107c61170(lStack_70);
    func_0x000107c61170(lStack_68);
  }
  *param_1 = plVar6;
  param_1[1] = &PTR_DAT_110601898;
  return;
}



/* Entry: 1008ef280; end: 1008ef623;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008ef280(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long lVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long alStack_a0 [2];
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  FUN_100083b20(&lStack_68);
  FUN_100083b20(&lStack_70);
  FUN_1008ef624();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f36078) = 0;
  *(undefined8 *)(lVar1 + _DAT_112f36080) = 0;
  *(undefined8 *)(lVar1 + _DAT_112f36088) = 0;
  *(undefined8 *)(lVar1 + _DAT_112f36090) = param_5;
  *(undefined8 *)(lVar1 + _DAT_112f36098) = param_6;
  puVar3 = PTR_s_init_1125d9248;
  lStack_80 = lVar1;
  lStack_78 = param_2;
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  plVar2 = &lStack_80;
  func_0x000107c61154(plVar2,puVar3);
  if (*(char *)(lStack_70 + _DAT_11307ce50) == '\x01') {
    FUN_100083b20(alStack_a0);
    lVar1 = alStack_a0[0];
    uVar9 = *(undefined8 *)(alStack_a0[0] + _DAT_113097748);
    func_0x000107c615f0(uVar9);
    func_0x000107c61170(lVar1);
    func_0x000107c5bb50(uVar9);
    func_0x000107c615e8(uVar9);
    FUN_100083b20(alStack_a0);
    lVar1 = alStack_a0[0];
    func_0x000107c5fcec(0);
    puVar3 = &UNK_103053598;
    plVar8 = alStack_a0;
    uStack_90 = param_9;
    uStack_88 = param_8;
    func_0x000103052a54(&UNK_103053598,plVar8,
                        "UserNavigationScopedDevelopmentFeatureImplementation/SCUserNavigationScopeDevelopmentScopeInitializationPlugin.swift"
                        ,0x74,2,0x35);
    func_0x000107c4f6f4();
    lVar4 = lVar1;
    func_0x000107c41418(lVar1);
    func_0x000107c61180();
    func_0x000107c5a1dc();
    func_0x000107c615e8(lVar4);
    puVar5 = PTR_PTR_1126ce4b0;
    func_0x000107c61168(PTR_PTR_1126ce4b0);
    func_0x000107c5c660();
    func_0x000107c61180();
    func_0x000107c5e58c();
    func_0x000107c61180();
    func_0x000107c61170();
    func_0x000107c5e45c(puVar5);
    func_0x000107c61180();
    func_0x000107c61170();
    lVar4 = lVar1;
    func_0x000107c4f224();
    func_0x000107c61180();
    lVar6 = lVar4;
    func_0x000107c508d0();
    func_0x000107c61180();
    func_0x000107c615e8(lVar4);
    lVar4 = lVar6;
    func_0x000107c5c658();
    func_0x000107c61180();
    func_0x000107c615e8(lVar6);
    lVar6 = lVar4;
    func_0x000107c3d8b0();
    func_0x000107c61180();
    func_0x000107c5a2cc();
    func_0x000107c53e08(lVar6);
    uVar9 = *(undefined8 *)((long)plVar2 + _DAT_112f36088);
    *(long *)((long)plVar2 + _DAT_112f36088) = lVar6;
    func_0x000107c615f0(lVar6);
    func_0x000107c615e8(uVar9);
    lVar7 = lVar4;
    func_0x000107c3ecc8();
    func_0x000107c61180();
    uVar9 = *(undefined8 *)((long)plVar2 + _DAT_112f36080);
    *(long *)((long)plVar2 + _DAT_112f36080) = lVar7;
    func_0x000107c615f0();
    func_0x000107c615e8(uVar9);
    func_0x000107c4f01c(lVar7);
    func_0x000107c3e2c0(*(undefined8 *)(lStack_68 + _DAT_113083f10));
    FUN_100083b20(alStack_a0);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(plVar8);
    func_0x000107c615e8(lVar6);
    func_0x000107c615e8(lVar7);
    func_0x000107c61170(lStack_70);
    func_0x000107c615e8(lVar1);
    func_0x000107c615e8(lVar4);
    func_0x000107c61170(lStack_68);
    func_0x000107c61170(puVar5);
    func_0x000107c615e8(alStack_a0[0]);
  }
  else {
    func_0x000107c61170(lStack_70);
    func_0x000107c61170(lStack_68);
  }
  *param_1 = plVar2;
  param_1[1] = &PTR_DAT_110601898;
  return;
}



/* Entry: 1008ef624; end: 1008ef643;  */

void FUN_1008ef624(void)

{
  func_0x000107c61168(&PTR_PTR_1128b1da0);
  return;
}



/* Entry: 1008ef644; end: 1008ef713; -[SCBlizzardPageViewStateManager _getPageTabTypeFromPageName:] */

undefined8 FUN_1008ef644(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000107c49d0c(param_3,param_2,&PTR____CFConstantStringClassReference_110e30ab8);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x000107c49d0c(param_3,param_2,&PTR____CFConstantStringClassReference_110f59bb8);
    if ((uVar1 & 1) == 0) {
      uVar1 = param_3;
      func_0x000107c49d0c(param_3,param_2,&PTR____CFConstantStringClassReference_110f59ad8);
      if ((uVar1 & 1) == 0) {
        uVar1 = param_3;
        func_0x000107c49d0c(param_3,param_2,&PTR____CFConstantStringClassReference_110eb57b8);
        if ((uVar1 & 1) == 0) {
          uVar1 = param_3;
          func_0x000107c49d0c(param_3,param_2,&PTR____CFConstantStringClassReference_110f5a898);
          uVar2 = 5;
          if ((int)uVar1 == 0) {
            uVar2 = 0;
          }
        }
        else {
          uVar2 = 4;
        }
      }
      else {
        uVar2 = 3;
      }
    }
    else {
      uVar2 = 2;
    }
  }
  else {
    uVar2 = 1;
  }
  func_0x000107c61170(param_3);
  return uVar2;
}



/* Entry: 1008ef714; end: 1008ef71f; -[SCBlizzardPageViewState .cxx_destruct] */

void FUN_1008ef714(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 1008ef720; end: 1008ef797;  */

void FUN_1008ef720(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_11095c970,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    FUN_10007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1008ef798; end: 1008ef90b;  */

void FUN_1008ef798(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_2);
  if (param_1 != 0) {
    plVar2 = *(long **)(param_1 + 8);
    func_0x000107c61174(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
    }
    else {
      puVar1 = param_2;
      func_0x000107c61178(param_2);
      func_0x000107c3ac4c();
    }
    func_0x000107c61170(param_2);
    FUN_10002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    FUN_10007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_11095c920,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    FUN_10007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      func_0x000107c60e14(auStack_60[0]);
    }
  }
  puVar1 = param_2;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_2);
  func_0x000107c60bd8(puVar1);
  func_0x000107c61574(*(undefined8 *)(puVar1 + 0x10));
  func_0x000107c61574(*(undefined8 *)(puVar1 + 0x18));
  func_0x000107c61574(*(undefined8 *)(puVar1 + 0x20));
  func_0x000107c61574(*(undefined8 *)(puVar1 + 0x28));
  func_0x000107c61574(*(undefined8 *)(puVar1 + 0x30));
  func_0x000107c61574(*(undefined8 *)(puVar1 + 0x38));
  func_0x000107c61574(*(undefined8 *)(puVar1 + 0x40));
  func_0x000107c61574(*(undefined8 *)(puVar1 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)(puVar1,0x50,7);
  return;
}



/* Entry: 1008ef90c; end: 1008ef967;  */

void FUN_1008ef90c(void)

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



/* Entry: 1008ef968; end: 1008ef98b;  */

undefined ** FUN_1008ef968(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 1008ef98c; end: 1008ef9df;  */

void FUN_1008ef98c(undefined8 *param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  (*param_3)(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  FUN_100082720(param_4,param_5,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1008ef9e0; end: 1008efb17;  */

void FUN_1008ef9e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1106015f0;
  func_0x000107c613fc(&UNK_1106015f0,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(0x1008efa78,puVar1);
  return;
}



/* Entry: 1008efb18; end: 1008efc37;  */

/* WARNING: Possible PIC construction at 0x0001008efbd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008efbe8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008efbf8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008efc08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008efbfc) */
/* WARNING: Removing unreachable block (ram,0x0001008efbec) */
/* WARNING: Removing unreachable block (ram,0x0001008efbdc) */
/* WARNING: Removing unreachable block (ram,0x0001008efc0c) */

void FUN_1008efb18(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x50);
  puVar8 = &UNK_1105a21c8;
  func_0x000107c613fc(&UNK_1105a21c8,0x58,7);
  *(undefined8 *)(puVar8 + 0x10) = uVar1;
  *(undefined8 *)(puVar8 + 0x18) = uVar4;
  *(undefined8 *)(puVar8 + 0x20) = uVar9;
  *(undefined8 *)(puVar8 + 0x28) = uVar5;
  *(undefined8 *)(puVar8 + 0x30) = uVar2;
  *(undefined8 *)(puVar8 + 0x38) = uVar6;
  *(undefined8 *)(puVar8 + 0x40) = uVar3;
  *(undefined8 *)(puVar8 + 0x48) = uVar7;
  *(undefined8 *)(puVar8 + 0x50) = uVar11;
  uVar9 = 0x112ef6da0;
  FUN_1000285a8(0x112ef6da0,&UNK_10db258f8);
  func_0x000107c613fc();
  puVar10 = &UNK_102b5b794;
  FUN_1000841f8(&UNK_102b5b794,puVar8,uVar9);
  FUN_100084214(&UNK_10db258d0,0x22,2);
  *param_1 = puVar10;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1008efc38; end: 1008efc3b;  */

void FUN_1008efc38(void)

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



/* Entry: 1008efc3c; end: 1008efcbf;  */

void FUN_1008efc3c(void)

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



/* Entry: 1008efcc0; end: 1008efd83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008efcc0(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (*(char *)(param_2 + _DAT_11307ce50) == '\0') {
    FUN_10008a7c8(&uStack_48);
    FUN_100083b20(&uStack_50);
    func_0x000107c61574(uStack_48);
    uVar1 = *(undefined8 *)(param_1 + _DAT_113083f10);
    func_0x000107c615f0(uVar1);
    func_0x000107c3e2c0();
    func_0x000107c61170(uStack_50);
    func_0x000107c615e8(uVar1);
  }
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  func_0x000107c61574(param_3);
  return;
}



/* Entry: 1008efd84; end: 1008efdb7;  */

void FUN_1008efd84(void)

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



/* Entry: 1008efdb8; end: 1008efdef;  */

undefined ** FUN_1008efdb8(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 1008efdf0; end: 1008efe87;  */

void FUN_1008efdf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c613fc(param_4,0x28,7);
  *(undefined8 *)(param_4 + 0x10) = param_1;
  *(undefined8 *)(param_4 + 0x18) = param_2;
  *(undefined8 *)(param_4 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(param_5,param_4);
  return;
}



/* Entry: 1008efe88; end: 1008efe93;  */

void FUN_1008efe88(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_1008f0028();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_1008f0048(uStack_48,uStack_50,uStack_58);
  func_0x000107c61574(uStack_48);
  func_0x000107c61574(uStack_50);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1104e4548;
  return;
}



/* Entry: 1008efe94; end: 1008eff43;  */

void FUN_1008efe94(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_1008f0028();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_1008f0048(uStack_48,uStack_50,uStack_58);
  func_0x000107c61574(uStack_48);
  func_0x000107c61574(uStack_50);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1104e4548;
  return;
}



/* Entry: 1008eff44; end: 1008eff57;  */

void FUN_1008eff44(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x112e65260;
  FUN_1000285a8(0x112e65260,&UNK_10da70168);
  func_0x000107c613fc();
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  func_0x000107c61614(lVar1 + 0x18,0);
  *param_1 = lVar1;
  return;
}



/* Entry: 1008eff58; end: 1008effa7;  */

void FUN_1008eff58(long *param_1,long param_2)

{
  FUN_1000285a8();
  func_0x000107c613fc();
  *(undefined **)(param_2 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(param_2 + 0x20) = 0;
  func_0x000107c61614(param_2 + 0x18,0);
  *param_1 = param_2;
  return;
}



/* Entry: 1008effa8; end: 1008effbb;  */

void FUN_1008effa8(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x112e65248;
  FUN_1000285a8(0x112e65248,&UNK_10da70150);
  func_0x000107c613fc();
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  func_0x000107c61614(lVar1 + 0x18,0);
  *param_1 = lVar1;
  return;
}



/* Entry: 1008effbc; end: 1008f0027;  */

void FUN_1008effbc(undefined8 *param_1)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e4aa08,&UNK_10da42c40);
  func_0x000107c613fc();
  puVar1 = &UNK_101fae854;
  FUN_1000841f8(&UNK_101fae854,0);
  FUN_100084214("SCUserNavigationScopeApplicationLifeCycleListenerPluginRegistryServiceProvider",
                0x4e,2);
  *param_1 = puVar1;
  return;
}



/* Entry: 1008f0028; end: 1008f0047;  */

void FUN_1008f0028(void)

{
  func_0x000107c61168(&PTR_PTR_112e651e8);
  return;
}



/* Entry: 1008f0048; end: 1008f0103;  */

void FUN_1008f0048(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  *(long *)(unaff_x20 + 0x10) = param_2;
  lVar1 = param_2;
  func_0x000107c6157c(param_2);
  FUN_1008f0104();
  func_0x000107c61574(param_3);
  func_0x000107c6142c(lVar1);
  func_0x000107c61428(param_2 + 0x10,auStack_58,1,0);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  *(undefined **)(param_2 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c6142c(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61428(param_1 + 0x18,auStack_70,1,0);
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_1104e42c8;
  func_0x000107c61604(param_1 + 0x18,uVar2);
  return;
}



/* Entry: 1008f0104; end: 1008f0117;  */

undefined * FUN_1008f0104(void)

{
  return PTR___swiftEmptyArrayStorage_11034f1c8;
}



/* Entry: 1008f0118; end: 1008f014b;  */

void FUN_1008f0118(void)

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



/* Entry: 1008f014c; end: 1008f016f;  */

undefined ** FUN_1008f014c(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 1008f0170; end: 1008f023f;  */

void FUN_1008f0170(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110602030;
  func_0x000107c613fc(&UNK_110602030,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1008f0240,puVar1);
  return;
}



/* Entry: 1008f0240; end: 1008f0247;  */

void FUN_1008f0240(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  code *pcVar3;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_58,lVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_68);
  func_0x0001008f1b48();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = uStack_58;
  *(undefined8 *)(lVar1 + 0x18) = uStack_68;
  *(long *)(lVar1 + 0x20) = lStack_60;
  uVar2 = uStack_68;
  func_0x000107c614f0(uStack_68);
  pcVar3 = *(code **)(lStack_60 + 0x18);
  func_0x000107c61580(uStack_58,2);
  func_0x000107c615f0(uStack_68);
  (*pcVar3)(uStack_58,&PTR_DAT_110601dc8,uVar2,lStack_60);
  func_0x000107c61574(uStack_58);
  func_0x000107c615e8(uStack_68);
  *param_1 = lVar1;
  param_1[1] = (long)&PTR_DAT_110602058;
  return;
}



/* Entry: 1008f0248; end: 1008f031b;  */

void FUN_1008f0248(long *param_1,long param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  FUN_100083b20(&uStack_58);
  FUN_100083b20(&uStack_68);
  func_0x0001008f1b48();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x10) = uStack_58;
  *(undefined8 *)(param_2 + 0x18) = uStack_68;
  *(long *)(param_2 + 0x20) = lStack_60;
  uVar1 = uStack_68;
  func_0x000107c614f0(uStack_68);
  pcVar2 = *(code **)(lStack_60 + 0x18);
  func_0x000107c61580(uStack_58,2);
  func_0x000107c615f0(uStack_68);
  (*pcVar2)(uStack_58,&PTR_DAT_110601dc8,uVar1,lStack_60);
  func_0x000107c61574(uStack_58);
  func_0x000107c615e8(uStack_68);
  *param_1 = param_2;
  param_1[1] = (long)&PTR_DAT_110602058;
  return;
}



/* Entry: 1008f031c; end: 1008f032f; -[SCAPagePageView getPayloadIdentifier] */

undefined8 FUN_1008f031c(void)

{
  return 0x61e;
}



/* Entry: 1008f0330; end: 1008f03e3;  */

void FUN_1008f0330(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined1 auStack_80 [40];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_100083b20(auStack_80);
  FUN_100360f48();
  func_0x000107c613fc();
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_1006c82b4();
  *(undefined8 *)(param_2 + 0x48) = uStack_50;
  *(undefined **)(param_2 + 0x50) = puVar1;
  *(undefined8 *)(param_2 + 0x10) = uStack_48;
  *(undefined8 *)(param_2 + 0x18) = uStack_58;
  FUN_1008f1af4(auStack_80,param_2 + 0x20);
  *param_1 = param_2;
  return;
}



/* Entry: 1008f03e4; end: 1008f03fb; -[SCAPagePageView toProtoWithAllowedFields:] */

void FUN_1008f03e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,2,param_3);
  return;
}



/* Entry: 1008f03fc; end: 1008f049b;  */

undefined1  [16] FUN_1008f03fc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 auVar5 [16];
  
  uVar1 = 0xff;
  func_0x000107c614b8(0xff,param_2,param_1,&UNK_10e81e564,&UNK_10e81e574);
  uVar2 = 0xff;
  func_0x000107c614b8(0xff,param_2,param_1,&UNK_10e81e564,&UNK_10e81e56c);
  uVar3 = 0x4000001;
  func_0x000107c614d8(0x4000001,uVar2,uVar1);
  puVar4 = PTR___sSON_11034d8b8;
  func_0x000107c5f9cc(PTR___sSON_11034d8b8,uVar3,PTR___sSOSHsWP_11034d8c0);
  auVar5._8_8_ = puVar4;
  auVar5._0_8_ = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  return auVar5;
}



/* Entry: 1008f049c; end: 1008f066f;  */

void FUN_1008f049c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  
  puVar1 = &UNK_110602158;
  ppuVar3 = &PTR_DAT_112f36740;
  FUN_1008f03fc();
  func_0x000107c6157c(param_1);
  uVar2 = 0x112e4a970;
  FUN_1000285a8(0x112e4a970,&UNK_10da42ac0);
  FUN_1008f06c0(&UNK_11056db98,"CreatorSubscriptionOnboardingDevelopmentRoute",0x2d,2,&UNK_101fa9f04
                ,param_1,uVar2,&UNK_11056db98,&PTR_DAT_112ecd950);
  func_0x000107c61574(param_1);
  func_0x000107c6157c(param_2);
  FUN_1008f06c0(&UNK_11056f4a0,"CreatorSubscriptionsPaywallDevelopmentRoute",0x2b,2,&UNK_101fa9f44,
                param_2,uVar2,&UNK_11056f4a0,&PTR_DAT_112ece1a0);
  func_0x000107c61574(param_2);
  FUN_1008f06c0(&UNK_110601a38,"DeckNavigationTestbedRoute",0x1a,2,&UNK_101fa9f84,0,uVar2,
                &UNK_110601a38,&PTR_DAT_112f361e0);
  func_0x000107c6157c(param_3);
  FUN_1008f06c0(&UNK_11051f658,"MapWidgetOnboardingDevelopmentRoute",0x23,2,&UNK_101fa9fc0,param_3,
                uVar2,&UNK_11051f658,&PTR_DAT_112ea4ed8);
  func_0x000107c61574(param_3);
  uVar2 = 0x112e4a978;
  FUN_1000285a8(0x112e4a978,&UNK_10da42ac8);
  func_0x000107c613fc();
  FUN_1008f088c(puVar1,ppuVar3,uVar2);
  return;
}



/* Entry: 1008f0670; end: 1008f06ab;  */

void FUN_1008f0670(undefined8 *param_1,undefined8 param_2)

{
  FUN_1008f049c();
  FUN_1008f08a4("LegacyNavigationPluginRegistryServiceProvider",0x2d,2);
  *param_1 = param_2;
  return;
}



/* Entry: 1008f06ac; end: 1008f06bf;  */

void FUN_1008f06ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&DAT_10e81e9e4);
  return;
}



/* Entry: 1008f06c0; end: 1008f0867;  */

void FUN_1008f06c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  undefined8 uVar7;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  uVar7 = unaff_x20[1];
  uVar6 = *(undefined8 *)(param_7 + 0x10);
  uVar4 = *(undefined8 *)(param_7 + 0x18);
  uVar2 = 0xff;
  uStack_78 = param_1;
  func_0x000107c614b8(0xff,uVar4,uVar6,&UNK_10e81e564,&UNK_10e81e574);
  uVar3 = 0xff;
  func_0x000107c614b8(0xff,uVar4,uVar6,&UNK_10e81e564,&UNK_10e81e56c);
  uVar4 = 0x4000001;
  func_0x000107c614d8(0x4000001,uVar3,uVar2);
  func_0x000107c5fa40(&puStack_70,&uStack_78,uVar7,PTR___sSON_11034d8b8,uVar4,
                      PTR___sSOSHsWP_11034d8c0);
  if (puStack_70 == (undefined *)0x0) {
    uVar2 = *unaff_x20;
    func_0x000107c61558(uVar2);
    puStack_70 = (undefined *)*unaff_x20;
    FUN_1000a7188(param_2,param_3,param_4,param_1,uVar2);
    *unaff_x20 = puStack_70;
    puVar5 = &UNK_1107a4380;
    func_0x000107c613fc(&UNK_1107a4380,0x38,7);
    *(undefined8 *)(puVar5 + 0x10) = uVar6;
    *(undefined8 *)(puVar5 + 0x18) = param_8;
    *(undefined8 *)(puVar5 + 0x20) = param_9;
    *(undefined8 *)(puVar5 + 0x28) = param_5;
    *(undefined8 *)(puVar5 + 0x30) = param_6;
    puStack_70 = &UNK_1048586ec;
    uVar6 = 0;
    uStack_78 = param_1;
    puStack_68 = puVar5;
    func_0x000107c5fa34(0,PTR___sSON_11034d8b8,uVar4,PTR___sSOSHsWP_11034d8c0);
    func_0x000107c6157c(param_6);
    func_0x000107c5fa44(&puStack_70,&uStack_78,uVar6);
    return;
  }
  func_0x0001048586fc(puStack_70,puStack_68);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008f0868);
  (*pcVar1)();
}



/* Entry: 1008f0868; end: 1008f088b;  */

void FUN_1008f0868(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1008f088c; end: 1008f08a3;  */

void FUN_1008f088c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined2 *)(unaff_x20 + 0x30) = 0x100;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 1008f08a4; end: 1008f0913;  */

void FUN_1008f08a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  code *pcVar2;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x20,auStack_58,1,0);
  cVar1 = *(char *)(unaff_x20 + 0x31);
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  *(char *)(unaff_x20 + 0x30) = (char)param_3;
  *(char *)(unaff_x20 + 0x31) = (char)((ulong)param_3 >> 8);
  if (cVar1 == '\x01') {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1008f0914);
  (*pcVar2)();
}



/* Entry: 1008f0914; end: 1008f091f;  */

void FUN_1008f0914(void)

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



/* Entry: 1008f0920; end: 1008f0977;  */

void FUN_1008f0920(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_30);
  FUN_1008f0ca8(&uStack_28);
  func_0x000107c61574(uStack_30);
  FUN_100083b20(param_1);
  func_0x000107c61574(uStack_28);
  return;
}



/* Entry: 1008f0978; end: 1008f0acb;  */

void FUN_1008f0978(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined *puVar1;
  code *pcVar2;
  
  puVar1 = &UNK_1104a0708;
  func_0x000107c613fc(&UNK_1104a0708,0x70,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  *(undefined8 *)(puVar1 + 0x50) = param_10;
  *(undefined8 *)(puVar1 + 0x58) = param_11;
  *(undefined8 *)(puVar1 + 0x60) = param_12;
  *(undefined8 *)(puVar1 + 0x68) = param_13;
  FUN_1000285a8(0x112e40ec0,&UNK_10da2f820);
  func_0x000107c613fc();
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
  pcVar2 = FUN_1008f0fcc;
  FUN_1008f0b08(FUN_1008f0fcc,puVar1);
  FUN_1008f0b74(&UNK_10da2f7f0,0x29,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1008f0acc; end: 1008f0b07;  */

void FUN_1008f0acc(void)

{
  long unaff_x20;
  
  FUN_1008f0978(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68));
  return;
}



/* Entry: 1008f0b08; end: 1008f0b73;  */

void FUN_1008f0b08(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 *puVar2;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_1002acfc8();
  func_0x000107c613fc();
  puVar2 = (undefined4 *)0x4;
  func_0x000107c6158c(4,0xffffffffffffffff);
  *puVar2 = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined4 **)(lVar1 + 0x10) = puVar2;
  *(undefined2 *)(lVar1 + 0x28) = 0x100;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(long *)(unaff_x20 + 0x20) = lVar1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 1008f0b74; end: 1008f0bdb;  */

void FUN_1008f0b74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long unaff_x20;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(lVar3 + 0x10);
  func_0x000107c611ec(uVar2);
  if (*(char *)(lVar3 + 0x29) == '\x01') {
    *(undefined8 *)(lVar3 + 0x18) = param_1;
    *(undefined8 *)(lVar3 + 0x20) = param_2;
    *(char *)(lVar3 + 0x28) = (char)param_3;
    *(char *)(lVar3 + 0x29) = (char)((ulong)param_3 >> 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__os_unfair_lock_unlock_11034c790)(uVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008f0bdc);
  (*pcVar1)();
}



/* Entry: 1008f0bdc; end: 1008f0bdf;  */

void FUN_1008f0bdc(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1008f0be0; end: 1008f0c5b;  */

void FUN_1008f0be0(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1008f0c5c; end: 1008f0ca7;  */

undefined8 FUN_1008f0c5c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  
  lVar3 = *(long *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(lVar3 + 0x10);
  func_0x000107c611ec(uVar2);
  uVar1 = *(undefined8 *)(lVar3 + 0x18);
  func_0x000107c611f0(uVar2);
  return uVar1;
}



/* Entry: 1008f0ca8; end: 1008f0fcb;  */

void FUN_1008f0ca8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long *unaff_x20;
  long lVar2;
  undefined1 auStack_d0 [16];
  long lStack_b8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  long lStack_68;
  
  lVar2 = *unaff_x20;
  uVar1 = param_2;
  FUN_1008f0c5c();
  if (((uint)param_4 & 0xff00) != 0x100) {
    func_0x000107c61428(0x1138153c0,auStack_a0,0,0);
    FUN_10008a8e8(0x1138153c0,auStack_d0);
    if (lStack_b8 != 0) {
      func_0x000104857124(auStack_d0,auStack_88);
      FUN_1000a8868(auStack_88,uStack_70);
      (**(code **)(lStack_68 + 0x28))
                (param_1,uVar1,param_3,param_4,&UNK_104858da4,auStack_d0,
                 *(undefined8 *)(lVar2 + 0x58),uStack_70,lStack_68);
      func_0x0001000834e4(auStack_88);
      return;
    }
    func_0x00010008a938(auStack_d0);
  }
  (*(code *)unaff_x20[2])(param_1,param_2);
  return;
}



/* Entry: 1008f0fcc; end: 1008f100b;  */

void FUN_1008f0fcc(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x0001008f0dbc(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68));
  return;
}



/* Entry: 1008f100c; end: 1008f102b;  */

undefined1  [16] FUN_1008f100c(void)

{
  return ZEXT816(0x110601b68);
}



/* Entry: 1008f102c; end: 1008f10ab;  */

void FUN_1008f102c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e412e0,&UNK_10da2fc20);
  puVar1 = &UNK_1104a0af8;
  func_0x000107c613fc(&UNK_1104a0af8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(&UNK_101f29b5c,puVar1);
  return;
}



/* Entry: 1008f10ac; end: 1008f10af;  */

void FUN_1008f10ac(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1008f10b0; end: 1008f10bf;  */

undefined1  [16] FUN_1008f10b0(void)

{
  return ZEXT816(0x1104a1008);
}



/* Entry: 1008f10c0; end: 1008f10cf;  */

undefined1  [16] FUN_1008f10c0(void)

{
  return ZEXT816(0x1104a0d88);
}



/* Entry: 1008f10d0; end: 1008f10df;  */

undefined1  [16] FUN_1008f10d0(void)

{
  return ZEXT816(0x1106efb68);
}



/* Entry: 1008f10e0; end: 1008f10ef;  */

void FUN_1008f10e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&DAT_10e81eba0);
  return;
}



/* Entry: 1008f10f0; end: 1008f1143;  */

void FUN_1008f10f0(long param_1)

{
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_28 = PTR___sBbWV_11034d660 + 0x40;
  puStack_18 = PTR___sBoWV_11034d678 + 0x40;
  puStack_20 = puStack_28;
  func_0x000107c61524(param_1,0,3,&puStack_28,param_1 + 0x60);
  return;
}



/* Entry: 1008f1144; end: 1008f11db;  */

void FUN_1008f1144(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e40f10,&UNK_10da2f8a0);
  puVar1 = &UNK_1104a07d0;
  func_0x000107c613fc(&UNK_1104a07d0,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(FUN_1008f13f4,puVar1);
  return;
}



/* Entry: 1008f11dc; end: 1008f13f3;  */

void FUN_1008f11dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e40f08,&UNK_10da2f870);
  puVar1 = &UNK_1106ef740;
  func_0x000107c613fc(&UNK_1106ef740,0x60,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  FUN_1000823a8(0x1008f12f0,puVar1);
  return;
}



/* Entry: 1008f13f4; end: 1008f13ff;  */

/* WARNING: Possible PIC construction at 0x0001008f1474: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008f1478) */

void FUN_1008f13f4(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar3 = lVar1;
  FUN_1008f1400();
  lVar4 = lVar3;
  func_0x000107c613fc();
  *(long *)(lVar4 + 0x10) = lVar1;
  *(undefined8 *)(lVar4 + 0x18) = uVar2;
  *(undefined8 *)(lVar4 + 0x20) = uVar5;
  param_1[3] = lVar3;
  param_1[4] = (long)&PTR_DAT_1104a07e8;
  *param_1 = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(lVar1);
  return;
}



/* Entry: 1008f1400; end: 1008f141f;  */

void FUN_1008f1400(void)

{
  func_0x000107c61168(&PTR_PTR_112e40f60);
  return;
}



/* Entry: 1008f1420; end: 1008f1497;  */

/* WARNING: Possible PIC construction at 0x0001008f1474: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008f1478) */

void FUN_1008f1420(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_2;
  FUN_1008f1400();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(long *)(lVar2 + 0x10) = param_2;
  *(undefined8 *)(lVar2 + 0x18) = param_3;
  *(undefined8 *)(lVar2 + 0x20) = param_4;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_1104a07e8;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1008f1498; end: 1008f14a3;  */

void FUN_1008f1498(void)

{
  undefined *UNRECOVERED_JUMPTABLE;
  long unaff_x20;
  
  UNRECOVERED_JUMPTABLE = PTR__swift_deallocObject_11034f298;
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0001008f14e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1008f14a4; end: 1008f14e7;  */

void FUN_1008f14a4(code *UNRECOVERED_JUMPTABLE)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0001008f14e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1008f14e8; end: 1008f14ef;  */

void FUN_1008f14e8(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  
  puVar1 = &UNK_1106efb68;
  ppuVar3 = &PTR_DAT_112ffc1c0;
  FUN_1008f14f0();
  func_0x000107c6157c();
  FUN_1000285a8(0x112e40ef0,&UNK_10da2f850);
  FUN_1008f16a4(&UNK_1104a5f40,"MapRoute",8,2,&UNK_101f25584);
  func_0x000107c61574();
  uVar2 = 0x112e40ef8;
  FUN_1000285a8(0x112e40ef8,&UNK_10da2f858);
  func_0x000107c613fc();
  FUN_1008f1870(puVar1,ppuVar3,uVar2);
  FUN_1008f18dc("NavigationPluginRegistryServiceProvider",0x27,2);
  *param_1 = puVar1;
  return;
}



/* Entry: 1008f14f0; end: 1008f168f;  */

undefined1  [16] FUN_1008f14f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 auVar5 [16];
  
  uVar1 = 0xff;
  func_0x000107c614b8(0xff,param_2,param_1,&UNK_10e81e564,&UNK_10e81e574);
  uVar2 = 0xff;
  func_0x000107c614b8(0xff,param_2,param_1,&UNK_10e81e564,&UNK_10e81e56c);
  uVar3 = 0x44000001;
  func_0x000107c614d8(0x44000001,uVar2,uVar1);
  puVar4 = PTR___sSON_11034d8b8;
  func_0x000107c5f9cc(PTR___sSON_11034d8b8,uVar3,PTR___sSOSHsWP_11034d8c0);
  auVar5._8_8_ = puVar4;
  auVar5._0_8_ = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  return auVar5;
}



/* Entry: 1008f1690; end: 1008f16a3;  */

void FUN_1008f1690(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&DAT_10e81eb64);
  return;
}



/* Entry: 1008f16a4; end: 1008f184b;  */

void FUN_1008f16a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  undefined8 uVar7;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  uVar7 = unaff_x20[1];
  uVar6 = *(undefined8 *)(param_7 + 0x10);
  uVar4 = *(undefined8 *)(param_7 + 0x18);
  uVar2 = 0xff;
  uStack_78 = param_1;
  func_0x000107c614b8(0xff,uVar4,uVar6,&UNK_10e81e564,&UNK_10e81e574);
  uVar3 = 0xff;
  func_0x000107c614b8(0xff,uVar4,uVar6,&UNK_10e81e564,&UNK_10e81e56c);
  uVar4 = 0x44000001;
  func_0x000107c614d8(0x44000001,uVar3,uVar2);
  func_0x000107c5fa40(&puStack_70,&uStack_78,uVar7,PTR___sSON_11034d8b8,uVar4,
                      PTR___sSOSHsWP_11034d8c0);
  if (puStack_70 == (undefined *)0x0) {
    uVar2 = *unaff_x20;
    func_0x000107c61558(uVar2);
    puStack_70 = (undefined *)*unaff_x20;
    FUN_1000a7188(param_2,param_3,param_4,param_1,uVar2);
    *unaff_x20 = puStack_70;
    puVar5 = &UNK_1107a4718;
    func_0x000107c613fc(&UNK_1107a4718,0x38,7);
    *(undefined8 *)(puVar5 + 0x10) = uVar6;
    *(undefined8 *)(puVar5 + 0x18) = param_8;
    *(undefined8 *)(puVar5 + 0x20) = param_9;
    *(undefined8 *)(puVar5 + 0x28) = param_5;
    *(undefined8 *)(puVar5 + 0x30) = param_6;
    puStack_70 = &UNK_104859260;
    uVar6 = 0;
    uStack_78 = param_1;
    puStack_68 = puVar5;
    func_0x000107c5fa34(0,PTR___sSON_11034d8b8,uVar4,PTR___sSOSHsWP_11034d8c0);
    func_0x000107c6157c(param_6);
    func_0x000107c5fa44(&puStack_70,&uStack_78,uVar6);
    return;
  }
  func_0x000104859270(puStack_70,puStack_68);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008f184c);
  (*pcVar1)();
}



/* Entry: 1008f184c; end: 1008f186f;  */

void FUN_1008f184c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1008f1870; end: 1008f18db;  */

void FUN_1008f1870(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 *puVar2;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_1002acfc8();
  func_0x000107c613fc();
  puVar2 = (undefined4 *)0x4;
  func_0x000107c6158c(4,0xffffffffffffffff);
  *puVar2 = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined4 **)(lVar1 + 0x10) = puVar2;
  *(undefined2 *)(lVar1 + 0x28) = 0x100;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(long *)(unaff_x20 + 0x20) = lVar1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 1008f18dc; end: 1008f1943;  */

void FUN_1008f18dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long unaff_x20;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(lVar3 + 0x10);
  func_0x000107c611ec(uVar2);
  if (*(char *)(lVar3 + 0x29) == '\x01') {
    *(undefined8 *)(lVar3 + 0x18) = param_1;
    *(undefined8 *)(lVar3 + 0x20) = param_2;
    *(char *)(lVar3 + 0x28) = (char)param_3;
    *(char *)(lVar3 + 0x29) = (char)((ulong)param_3 >> 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__os_unfair_lock_unlock_11034c790)(uVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008f1944);
  (*pcVar1)();
}



/* Entry: 1008f1944; end: 1008f1963;  */

void FUN_1008f1944(void)

{
  func_0x000107c61168(&PTR_PTR_112f36830);
  return;
}



/* Entry: 1008f1964; end: 1008f19b3;  */

void FUN_1008f1964(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1008f1944();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 0;
  func_0x000107c61614(lVar1 + 0x10,0);
  *param_1 = lVar1;
  param_1[1] = (long)&PTR_DAT_110602308;
  return;
}



/* Entry: 1008f19b4; end: 1008f19cb;  */

undefined8 * FUN_1008f19b4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 1008f19cc; end: 1008f1a63;  */

void FUN_1008f19cc(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1008f1a64; end: 1008f1a67;  */

void FUN_1008f1a64(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1008f1a68; end: 1008f1a93;  */

void FUN_1008f1a68(void)

{
  long unaff_x20;
  
  func_0x000107c61590(*(undefined8 *)(unaff_x20 + 0x10),0xffffffffffffffff,0xffffffffffffffff);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1008f1a94; end: 1008f1ab3;  */

void FUN_1008f1a94(void)

{
  func_0x000107c61168(&PTR_PTR_112da9280);
  return;
}



/* Entry: 1008f1ab4; end: 1008f1af3;  */

void FUN_1008f1ab4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1008f1a94();
  uVar1 = param_2;
  func_0x000107c613fc();
  param_1[3] = param_2;
  param_1[4] = &PTR_DAT_1103cd8f8;
  *param_1 = uVar1;
  return;
}



/* Entry: 1008f1af4; end: 1008f1b0b;  */

undefined8 * FUN_1008f1af4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 1008f1b0c; end: 1008f1b67;  */

void FUN_1008f1b0c(void)

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



/* Entry: 1008f1b68; end: 1008f1bc3;  */

void FUN_1008f1b68(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,1,0);
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  func_0x000107c61604(unaff_x20 + 0x10,param_1);
  func_0x000107c615e8(param_1);
  return;
}


