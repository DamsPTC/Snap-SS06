/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103c403e8; end: 103c4040f; -[SCSimpleWebBrowserScopeGraphBridgeSaberEntryPoint begin] */

void FUN_103c403e8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103c402b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103c40410; end: 103c40453; -[SCSimpleWebBrowserScopeGraphBridgeSaberEntryPoint end] */

void FUN_103c40410(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103c40454; end: 103c405eb;  */

void FUN_103c40454(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffd1) || (param_3 != -0x7ffffffef0e4ee40)) {
      uVar2 = 0xd00000000000002f;
      func_0x000107c605b8(0xd00000000000002f,0x800000010f1b11c0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "SimpleWebBrowserScopeGraphBridge/SCSimpleWebBrowserScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x58,2,0x2e,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103c405ec);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c592cc();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103c405ec; end: 103c40697; -[SCSimpleWebBrowserScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_103c405ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_103c40454(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103c40698; end: 103c40703; -[SCSimpleWebBrowserScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c40698(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ffae30,0);
  *(undefined8 *)(param_1 + _DAT_112ffae38) = 0;
  *(undefined8 *)(param_1 + _DAT_112ffae40) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103c40704; end: 103c40737;  */

void FUN_103c40704(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103c40738; end: 103c4077f; -[SCSimpleWebBrowserScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103c40764: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c40768) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c40738(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ffae30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ffae38));
  return;
}



/* Entry: 103c40780; end: 103c4079f;  */

void FUN_103c40780(void)

{
  func_0x000107c61168(&PTR_PTR_1129486e8);
  return;
}



/* Entry: 103c407a0; end: 103c407e7; -[SCSimpleWebBrowserScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c407a0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ffae70;
  func_0x000107c61428(param_1 + _DAT_112ffae70,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103c407e8; end: 103c4083f; -[SCSimpleWebBrowserScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c407e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ffae70;
  func_0x000107c61428(param_1 + _DAT_112ffae70,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103c40840; end: 103c40917;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c40840(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  plVar7 = &lStack_50;
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = 0;
    FUN_103c3fd40();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112ffad98) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103c40918);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112ffada0);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112ffae78);
    *(long **)(unaff_x20 + _DAT_112ffae78) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 103c40918; end: 103c4093f; -[SCSimpleWebBrowserScopedServicesSaberEntryPoint begin] */

void FUN_103c40918(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103c40840();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103c40940; end: 103c40ab7;  */

/* WARNING: Possible PIC construction at 0x000103c409a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c40a40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c409ac) */
/* WARNING: Removing unreachable block (ram,0x000103c40a44) */
/* WARNING: Removing unreachable block (ram,0x000103c40a5c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c40940(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112ffae78);
  if (lVar2 == 0) {
    func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_end_1125c29d0);
  }
  else {
    puVar1 = PTR_PTR_1126afc98;
    func_0x000107c61168(PTR_PTR_1126afc98);
    func_0x000107c61174(lVar2);
    func_0x000107c3e26c(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 103c40ab8; end: 103c40abf;  */

void FUN_103c40ab8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 103c40ac0; end: 103c40af3; -[SCSimpleWebBrowserScopedServicesSaberEntryPoint end] */

void FUN_103c40ac0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103c40940();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103c40af4; end: 103c40c13;  */

void FUN_103c40af4(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 != 0x6e496e69676562 || param_3 != -0x1900000000000000) &&
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) == 0))
  {
    func_0x000107c602fc(0x15);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c5fb78(param_2,param_3);
    func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                        "SimpleWebBrowserScopeGraphBridge/SCSimpleWebBrowserScopedServicesSaberEntryPoint.swift"
                        ,0x56,2,0x2a,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103c40c14);
    (*pcVar1)();
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c52c38();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103c40c14; end: 103c40cbf; -[SCSimpleWebBrowserScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_103c40c14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_103c40af4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103c40cc0; end: 103c40d1f; -[SCSimpleWebBrowserScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c40cc0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ffae70,0);
  *(undefined8 *)(param_1 + _DAT_112ffae78) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103c40d20; end: 103c40d53;  */

void FUN_103c40d20(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103c40d54; end: 103c40d8b; -[SCSimpleWebBrowserScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c40d54(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ffae70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ffae78));
  return;
}



/* Entry: 103c40d8c; end: 103c40dab;  */

void FUN_103c40d8c(void)

{
  func_0x000107c61168(&PTR_PTR_1129487b0);
  return;
}



/* Entry: 103c40dac; end: 103c40de7;  */

void FUN_103c40dac(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 103c40de8; end: 103c40df3;  */

void FUN_103c40de8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 103c40df4; end: 103c411d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c40df4(void)

{
  ulong *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong *puVar9;
  long *plVar10;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar11;
  long unaff_x20;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lStack_90;
  ulong uStack_88;
  long lStack_70;
  long lStack_68;
  
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = (long)&lStack_90 - extraout_x8;
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar16 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  lVar12 = lVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c5dbd4();
  func_0x000107c61180();
  lVar2 = lVar4;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  if (lVar2 != 0) {
    lVar4 = lVar2;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    if (lVar4 != 0) {
      uVar15 = *(ulong *)(unaff_x20 + 0x10);
      func_0x000107c615f0(lVar4);
      uVar14 = uVar15;
      func_0x000107c496d8();
      func_0x000107c61180();
      uVar5 = 0;
      func_0x000104848f7c();
      uVar6 = uVar14;
      func_0x000107c5fc54();
      func_0x000107c61170(uVar14);
      uVar14 = uVar15;
      func_0x000107c5d7e8();
      func_0x000107c61180();
      func_0x000107c5edb4(lVar12);
      func_0x000107c61170();
      func_0x000107c5ed70();
      (**(code **)(lVar16 + 8))(lVar12,lVar3);
      uStack_88 = uVar15;
      func_0x000107c41ed0();
      lVar7 = 0;
      FUN_103c42ae4();
      lStack_90 = lVar7;
      func_0x000107c610f8();
      lVar2 = _DAT_112ffaf50;
      func_0x000107c61614(lVar7 + _DAT_112ffaf50,0);
      puVar1 = (ulong *)(lVar7 + _DAT_112ffaf58);
      *puVar1 = uVar14;
      puVar1[1] = uVar5;
      *(char *)(lVar7 + _DAT_112ffaf60) = (char)uVar15;
      *(long *)(lVar7 + _DAT_112ffaf68) = lVar4;
      func_0x000107c61604(lVar7 + lVar2,unaff_x20);
      FUN_103c56918(0);
      lVar12 = lVar4;
      func_0x000107c615f0();
      FUN_103c558f8();
      (**(code **)(lVar16 + 0x38))(lVar13,1,1,lVar3);
      uVar8 = 0;
      lVar2 = lVar13;
      FUN_103c55980(0,lVar13);
      func_0x0001000293e4(lVar13);
      func_0x000107c5fadc(uVar8,lVar2);
      func_0x000107c6142c(lVar2);
      func_0x000107c5284c(lVar12);
      func_0x000107c61170(uVar8);
      uVar8 = 0;
      FUN_103c43334();
      func_0x000107c610f8();
      func_0x000107c469b0(0,0,0,0);
      lVar2 = _DAT_112ffaf70;
      *(undefined8 *)(lVar7 + _DAT_112ffaf70) = uVar8;
      if (uVar6 >> 0x3e == 0) {
        uVar14 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
        puVar1 = (ulong *)PTR__swift_isaMask_11034f488;
      }
      else {
        uVar14 = uVar6 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar6) {
          uVar14 = uVar6;
        }
        func_0x000107c60480();
        puVar1 = (ulong *)PTR__swift_isaMask_11034f488;
      }
      PTR__swift_isaMask_11034f488 = (undefined *)puVar1;
      if (uVar14 != 0) {
        if ((long)uVar14 < 1) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x103c411d4);
          (*pcVar11)();
        }
        uVar5 = 0;
        do {
          if ((uVar6 & 0xc000000000000001) == 0) {
            uVar15 = *(ulong *)(uVar6 + uVar5 * 8 + 0x20);
            func_0x000107c61174(uVar15);
          }
          else {
            uVar15 = uVar5;
            func_0x000103c412c0(uVar5,uVar6);
          }
          uVar5 = uVar5 + 1;
          puVar9 = *(ulong **)(lVar7 + lVar2);
          pcVar11 = *(code **)((*puVar1 & *puVar9) + 0x118);
          func_0x000107c61174();
          (*pcVar11)(uVar15);
          func_0x000107c61170(uVar15);
          func_0x000107c61170(puVar9);
        } while (uVar14 != uVar5);
      }
      func_0x000107c6142c(uVar6);
      lStack_68 = lStack_90;
      plVar10 = &lStack_70;
      lStack_70 = lVar7;
      func_0x000107c61154(plVar10,PTR_s_initWithNibName_bundle__1125e9850,0,0);
      func_0x000107c615e8(lVar4);
      func_0x000107c61170(lVar12);
      uVar14 = uStack_88;
      func_0x000107c5d17c(uStack_88);
      func_0x000107c61180();
      func_0x000107c3e2c0();
      func_0x000107c615e8(lVar4);
      func_0x000107c61170(plVar10);
      func_0x000107c615e8(uVar14);
    }
  }
  return;
}



/* Entry: 103c411d4; end: 103c411ff;  */

void FUN_103c411d4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103c41200; end: 103c4121f;  */

void FUN_103c41200(void)

{
  FUN_103c40df4();
  return;
}



/* Entry: 103c41220; end: 103c41227;  */

undefined8 FUN_103c41220(void)

{
  return 0;
}



/* Entry: 103c41228; end: 103c41273; -[_TtC16SimpleWebBrowser26SimpleWebBrowserEntryPoint dismiss] */

void FUN_103c41228(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c6157c();
  func_0x000107c5d17c(uVar1);
  func_0x000107c61180();
  func_0x000107c41864();
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 103c41274; end: 103c41467; -[_TtC16SimpleWebBrowser26SimpleWebBrowserEntryPoint didDismiss] */

void FUN_103c41274(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x000107c6157c();
  func_0x000107c4168c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c41af8();
    func_0x000107c615e8(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 103c41468; end: 103c41487;  */

void FUN_103c41468(void)

{
  func_0x000107c61168(&PTR_PTR_112ffaee8);
  return;
}



/* Entry: 103c41488; end: 103c41733;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103c41488(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong *puVar6;
  ulong uVar7;
  undefined1 *puVar8;
  long extraout_x8;
  long unaff_x20;
  code *pcVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uStack_90;
  undefined1 auStack_70 [16];
  
  lVar4 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)&uStack_90 - extraout_x8;
  func_0x000107c610f8();
  lVar4 = _DAT_112ffaf50;
  func_0x000107c61614(unaff_x20 + _DAT_112ffaf50,0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ffaf58);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined1 *)(unaff_x20 + _DAT_112ffaf60) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112ffaf68) = param_1;
  func_0x000107c61604(unaff_x20 + lVar4,param_6);
  FUN_103c56918(0);
  uVar3 = param_1;
  func_0x000107c615f0();
  FUN_103c558f8();
  lVar4 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(lVar10,1,1,lVar4);
  uVar5 = 0;
  lVar4 = lVar10;
  FUN_103c55980(0,lVar10);
  func_0x0001000293e4(lVar10);
  func_0x000107c5fadc(uVar5,lVar4);
  func_0x000107c6142c(lVar4);
  func_0x000107c5284c(uVar3);
  func_0x000107c61170(uVar5);
  uVar5 = 0;
  FUN_103c43334();
  func_0x000107c610f8();
  uStack_90 = uVar3;
  func_0x000107c469b0(0,0,0,0);
  lVar4 = _DAT_112ffaf70;
  *(undefined8 *)(unaff_x20 + _DAT_112ffaf70) = uVar5;
  if (param_2 >> 0x3e == 0) {
    uVar11 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
    puVar2 = (ulong *)PTR__swift_isaMask_11034f488;
  }
  else {
    uVar11 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar11 = param_2;
    }
    func_0x000107c60480();
    puVar2 = (ulong *)PTR__swift_isaMask_11034f488;
  }
  PTR__swift_isaMask_11034f488 = (undefined *)puVar2;
  if (uVar11 != 0) {
    if ((long)uVar11 < 1) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x103c41734);
      (*pcVar9)();
    }
    uVar12 = 0;
    do {
      if ((param_2 & 0xc000000000000001) == 0) {
        uVar7 = *(ulong *)(param_2 + uVar12 * 8 + 0x20);
        func_0x000107c61174(uVar7);
      }
      else {
        uVar7 = uVar12;
        func_0x000103c412c0(uVar12,param_2);
      }
      uVar12 = uVar12 + 1;
      puVar6 = *(ulong **)(unaff_x20 + lVar4);
      pcVar9 = *(code **)((*puVar2 & *puVar6) + 0x118);
      func_0x000107c61174();
      (*pcVar9)(uVar7);
      func_0x000107c61170(uVar7);
      func_0x000107c61170(puVar6);
    } while (uVar11 != uVar12);
  }
  func_0x000107c6142c(param_2);
  puVar8 = auStack_70;
  func_0x000107c61154(puVar8,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(param_6);
  func_0x000107c61170(uStack_90);
  return puVar8;
}



/* Entry: 103c41734; end: 103c417f7; -[SCSimpleWebBrowserViewController initWithRuntime:injectionScripts:url:disableFullscreen:delegate:] */

undefined8
FUN_103c41734(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  func_0x000104848f7c(0);
  func_0x000107c5fc54(param_4,uVar1);
  if (param_5 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c5faec(param_5);
  }
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_7);
  uVar2 = param_3;
  FUN_103c42860(param_3,param_4,param_5,uVar1,param_6,param_7);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_7);
  return uVar2;
}



/* Entry: 103c417f8; end: 103c41863; -[SCSimpleWebBrowserViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c417f8(long param_1)

{
  code *pcVar1;
  
  func_0x000107c61614(param_1 + _DAT_112ffaf50,0);
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SimpleWebBrowser/SimpleWebBrowserViewController.swift",0x35,2,0x31,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103c41864);
  (*pcVar1)();
}



/* Entry: 103c41864; end: 103c418a3; -[SCSimpleWebBrowserViewController loadView] */

/* WARNING: Possible PIC construction at 0x000103c41890: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c41894) */

void FUN_103c41864(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103c41c90();
  func_0x000107c5a568(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103c418a4; end: 103c41957; -[SCSimpleWebBrowserViewController viewDidLoad] */

void FUN_103c418a4(long param_1)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_1;
  FUN_103c42ae4();
  puVar1 = PTR_s_viewDidLoad_112684cd8;
  lStack_40 = param_1;
  lStack_38 = lVar3;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_40,puVar1);
  lVar3 = param_1;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 != 0) {
    uVar4 = 0xd000000000000012;
    func_0x000107c5fadc(0xd000000000000012,0x800000010f1b12f0);
    func_0x000107c520f4(lVar3);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103c41958);
  (*pcVar2)();
}



/* Entry: 103c41958; end: 103c419eb; -[SCSimpleWebBrowserViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c41958(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  FUN_103c42ae4();
  puVar1 = PTR_s_viewDidDisappear__112684c48;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_40,puVar1,param_3);
  lVar2 = param_1;
  func_0x000107c49aa0();
  if ((int)lVar2 != 0) {
    lVar2 = param_1 + _DAT_112ffaf50;
    func_0x000107c61618();
    if (lVar2 != 0) {
      func_0x000107c41af8();
      func_0x000107c615e8(lVar2);
    }
  }
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 103c419ec; end: 103c41b17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c419ec(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  puVar3 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5eb08();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar4 = (long)puVar3 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112ffaf70);
  (**(code **)(lVar6 + 0x10))(puVar3,param_1,lVar1);
  func_0x000107c5eaec(lVar4,0x404e000000000000,puVar3,0);
  func_0x000107c5eae0();
  (**(code **)(lVar7 + 8))(lVar4,lVar2);
  func_0x000107c4b768(uVar5);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar5);
  return;
}



/* Entry: 103c41b18; end: 103c41c8f; -[SCSimpleWebBrowserViewController loadURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c41b18(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined1 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar1 = 0;
  func_0x000107c5eb08();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar3 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar6 = (long)puVar3 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = lVar6 - extraout_x12;
  func_0x000107c5edb4(lVar4,param_3);
  uVar5 = *(undefined8 *)(param_1 + _DAT_112ffaf70);
  (**(code **)(lVar7 + 0x10))(lVar6,lVar4,lVar2);
  func_0x000107c61174(param_1);
  func_0x000107c5eaec(puVar3,0x404e000000000000,lVar6,0);
  func_0x000107c5eae0();
  (**(code **)(lVar8 + 8))(puVar3,lVar1);
  func_0x000107c4b768(uVar5);
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  func_0x000107c61170(uVar5);
  (**(code **)(lVar7 + 8))(lVar4,lVar2);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 103c41c90; end: 103c41d83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103c41c90(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  FUN_103c41d84();
  puVar1 = PTR_PTR_1126ad9e0;
  func_0x000107c610f8(PTR_PTR_1126ad9e0);
  func_0x000107c453e4();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c54d28(puVar1);
  func_0x000107c61170(puVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_112ffaf58))[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112ffaf58);
    func_0x000107c5fadc(uVar3);
  }
  func_0x000107c5a26c(puVar1);
  func_0x000107c61170(uVar3);
  puVar2 = PTR_PTR_1126ad9e8;
  func_0x000107c610f8(PTR_PTR_1126ad9e8);
  func_0x000107c49520();
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar1);
  return puVar2;
}



/* Entry: 103c41d84; end: 103c420d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103c41d84(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar4 = &puStack_90;
  ppuVar6 = &puStack_90;
  ppuVar7 = &puStack_90;
  ppuVar8 = &puStack_90;
  ppuVar9 = &puStack_90;
  ppuVar11 = &puStack_90;
  puVar2 = PTR_PTR_1126ad9d8;
  func_0x000107c610f8(PTR_PTR_1126ad9d8);
  func_0x000107c453e4();
  puVar10 = &UNK_1106ee608;
  puVar3 = puVar10;
  func_0x000107c613fc(&UNK_1106ee608,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_70 = FUN_103c42b28;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_1106ee620;
  puStack_68 = puVar3;
  func_0x000107c60bc4(&puStack_90);
  func_0x000107c61574(puStack_68);
  func_0x000107c59058(puVar2);
  func_0x000107c60bd0(ppuVar4);
  puVar3 = &UNK_1106ee658;
  func_0x000107c613fc(&UNK_1106ee658,0x18,7);
  lVar5 = unaff_x20 + _DAT_112ffaf50;
  func_0x000107c61618(lVar5);
  func_0x000107c61614(puVar3 + 0x10,lVar5);
  func_0x000107c615e8(lVar5);
  pcStack_70 = FUN_103c42b4c;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_1106ee670;
  puStack_68 = puVar3;
  func_0x000107c60bc4(&puStack_90);
  func_0x000107c61574(puStack_68);
  func_0x000107c541e0(puVar2);
  func_0x000107c60bd0(ppuVar6);
  puVar3 = puVar10;
  func_0x000107c613fc(&UNK_1106ee608,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  pcStack_70 = (code *)0x103c42b74;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_1106ee698;
  puStack_68 = puVar3;
  func_0x000107c60bc4(&puStack_90);
  func_0x000107c61574(puStack_68);
  func_0x000107c54b48(puVar2);
  func_0x000107c60bd0(ppuVar7);
  puVar3 = puVar10;
  func_0x000107c613fc(&UNK_1106ee608,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  pcStack_70 = (code *)0x103c42b9c;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_1106ee6c0;
  puStack_68 = puVar3;
  func_0x000107c60bc4(&puStack_90);
  func_0x000107c61574(puStack_68);
  func_0x000107c52b30(puVar2);
  func_0x000107c60bd0(ppuVar8);
  puVar3 = puVar10;
  func_0x000107c613fc(&UNK_1106ee608,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  pcStack_70 = (code *)0x103c42bc4;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_1106ee6e8;
  puStack_68 = puVar3;
  func_0x000107c60bc4(&puStack_90);
  func_0x000107c61574(puStack_68);
  func_0x000107c57c94(puVar2);
  func_0x000107c60bd0(ppuVar9);
  uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112ffaf68);
  func_0x000107c613fc(&UNK_1106ee608,0x18,7);
  func_0x000107c61614(puVar10 + 0x10);
  pcStack_70 = FUN_103c42bec;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100f11710;
  puStack_78 = &UNK_1106ee710;
  puStack_68 = puVar10;
  func_0x000107c60bc4(&puStack_90);
  func_0x000107c61574(puStack_68);
  FUN_103c43334(0);
  func_0x000107c614e8();
  func_0x000107c4c214(uVar12);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar11);
  func_0x000107c5a6c8(puVar2);
  func_0x000107c615e8(uVar12);
  return puVar2;
}



/* Entry: 103c420d4; end: 103c42427;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c420d4(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  long extraout_x8;
  long lVar8;
  long extraout_x12;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar10 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = (long)puVar10 - extraout_x12;
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  lVar1 = param_1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar8 = *(long *)(lVar1 + _DAT_112ffaf70);
    func_0x000107c61174();
    func_0x000107c61170(lVar1);
    lVar1 = lVar8;
    func_0x000107c3abfc();
    func_0x000107c61180();
    func_0x000107c61170(lVar8);
    if (lVar1 != 0) {
      func_0x000107c5edb4(puVar10,lVar1);
      func_0x000107c61170(lVar1);
    }
    lVar8 = 0;
    func_0x000107c5ede0();
    lVar11 = *(long *)(lVar8 + -8);
    (**(code **)(lVar11 + 0x38))(puVar10,lVar1 == 0,1,lVar8);
    func_0x0001001021cc(puVar10,lVar9);
    uVar7 = 1;
    lVar1 = lVar9;
    (**(code **)(lVar11 + 0x30))(lVar9,1,lVar8);
    if ((int)lVar1 == 1) {
      func_0x0001000293e4(lVar9);
    }
    else {
      func_0x000107c5ed70();
      (**(code **)(lVar11 + 8))(lVar9,lVar8);
      puVar2 = PTR_PTR_1126c9d18;
      func_0x000107c610f8();
      func_0x000107c453e4();
      lVar9 = 0x112d38dc0;
      func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
      func_0x000107c613fc();
      *(undefined8 *)(lVar9 + 0x18) = 2;
      *(undefined8 *)(lVar9 + 0x10) = 1;
      *(undefined **)(lVar9 + 0x38) = PTR___sSSN_11034da80;
      *(long *)(lVar9 + 0x20) = lVar1;
      *(undefined8 *)(lVar9 + 0x28) = uVar7;
      lVar1 = lVar9;
      func_0x0001030bae68();
      func_0x000107c613fc();
      *(undefined8 *)(lVar1 + 0x18) = 3;
      *(undefined8 *)(lVar1 + 0x10) = 1;
      *(undefined **)(lVar1 + 0x20) = puVar2;
      puVar3 = PTR_PTR_1126aeb08;
      func_0x000107c610f8();
      func_0x000107c61174(puVar2);
      lVar8 = lVar9;
      func_0x000107c5fc48(lVar9,PTR___sypN_11034f1a8 + 8);
      func_0x000107c61574(lVar9);
      uVar7 = 0;
      FUN_103c42c14(0);
      lVar9 = lVar1;
      func_0x000107c5fc48(lVar1,uVar7);
      func_0x000107c61574(lVar1);
      func_0x000107c4555c();
      func_0x000107c61170(lVar8);
      func_0x000107c61170(lVar9);
      pcVar4 = "createSimpleWebBrowserViewContext()";
      func_0x0001000c10c0("createSimpleWebBrowserViewContext()");
      func_0x000107c61180();
      puVar5 = &UNK_1106ee7e8;
      func_0x000107c613fc(&UNK_1106ee7e8,0x20,7);
      *(long *)(puVar5 + 0x10) = param_1;
      *(undefined **)(puVar5 + 0x18) = puVar3;
      pcStack_68 = FUN_103c42c58;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      puStack_78 = &UNK_1000f6b44;
      puStack_70 = &UNK_1106ee800;
      ppuVar6 = &puStack_88;
      puStack_60 = puVar5;
      func_0x000107c60bc4(ppuVar6);
      puVar5 = puStack_60;
      func_0x000107c6157c(param_1);
      func_0x000107c61174(puVar3);
      func_0x000107c61574(puVar5);
      func_0x000107c4e524(pcVar4);
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(puVar3);
      func_0x000107c615e8(pcVar4);
    }
  }
  return;
}



/* Entry: 103c42428; end: 103c425f7;  */

void FUN_103c42428(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c4f018();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 103c425f8; end: 103c426a7;  */

void FUN_103c425f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar3 = &puStack_60;
  pcVar2 = "createSimpleWebBrowserViewContext()";
  func_0x0001000c10c0("createSimpleWebBrowserViewContext()");
  func_0x000107c61180();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  uStack_48 = param_3;
  uStack_40 = param_2;
  uStack_38 = param_1;
  func_0x000107c60bc4(&puStack_60);
  uVar1 = uStack_38;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(uVar1);
  func_0x000107c4e524(pcVar2);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar2);
  return;
}



/* Entry: 103c426a8; end: 103c427a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c426a8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112ffaf70);
    func_0x000107c61174(uVar2);
    func_0x000107c61170(param_1);
    uVar1 = uVar2;
    func_0x000107c4fd70(uVar2);
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar1);
  }
  return;
}



/* Entry: 103c427a8; end: 103c42803; -[SCSimpleWebBrowserViewController initWithNibName:bundle:] */

void FUN_103c427a8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SimpleWebBrowser.SimpleWebBrowserViewController",0x2f,"init(nibName:bundle:)"
                      ,0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103c427d4);
  (*pcVar1)();
}



/* Entry: 103c42804; end: 103c4285f; -[SCSimpleWebBrowserViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103c42804(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ffaf68));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ffaf58 + 8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ffaf70));
  param_1 = param_1 + _DAT_112ffaf50;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 103c42860; end: 103c42ae3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103c42860(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  ulong *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined1 *puVar7;
  long extraout_x8;
  long unaff_x20;
  code *pcVar8;
  undefined1 *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = _DAT_112ffaf50;
  puVar9 = auStack_80 + -extraout_x8;
  func_0x000107c61614(unaff_x20 + _DAT_112ffaf50,0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ffaf58);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined1 *)(unaff_x20 + _DAT_112ffaf60) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112ffaf68) = param_1;
  func_0x000107c61604(unaff_x20 + lVar3,param_6);
  FUN_103c56918(0);
  func_0x000107c615f0();
  FUN_103c558f8();
  lVar3 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(puVar9,1,1,lVar3);
  uVar4 = 0;
  puVar7 = puVar9;
  FUN_103c55980(0,puVar9);
  func_0x0001000293e4(puVar9);
  func_0x000107c5fadc(uVar4,puVar7);
  func_0x000107c6142c(puVar7);
  func_0x000107c5284c(param_1);
  func_0x000107c61170(uVar4);
  uVar4 = 0;
  FUN_103c43334();
  func_0x000107c610f8();
  uStack_78 = param_1;
  func_0x000107c469b0(0,0,0,0);
  lVar3 = _DAT_112ffaf70;
  *(undefined8 *)(unaff_x20 + _DAT_112ffaf70) = uVar4;
  if (param_2 >> 0x3e == 0) {
    uVar10 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
    puVar2 = (ulong *)PTR__swift_isaMask_11034f488;
  }
  else {
    uVar10 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar10 = param_2;
    }
    func_0x000107c60480();
    puVar2 = (ulong *)PTR__swift_isaMask_11034f488;
  }
  PTR__swift_isaMask_11034f488 = (undefined *)puVar2;
  if (uVar10 != 0) {
    if ((long)uVar10 < 1) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x103c42ae4);
      (*pcVar8)();
    }
    uVar11 = 0;
    do {
      if ((param_2 & 0xc000000000000001) == 0) {
        uVar6 = *(ulong *)(param_2 + uVar11 * 8 + 0x20);
        func_0x000107c61174(uVar6);
      }
      else {
        uVar6 = uVar11;
        func_0x000103c412c0(uVar11,param_2);
      }
      uVar11 = uVar11 + 1;
      puVar5 = *(ulong **)(unaff_x20 + lVar3);
      pcVar8 = *(code **)((*puVar2 & *puVar5) + 0x118);
      func_0x000107c61174();
      (*pcVar8)(uVar6);
      func_0x000107c61170(uVar6);
      func_0x000107c61170(puVar5);
    } while (uVar10 != uVar11);
  }
  func_0x000107c6142c();
  FUN_103c42ae4();
  puVar7 = &stack0xffffffffffffff90;
  func_0x000107c61154(puVar7,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  func_0x000107c61170(uStack_78);
  return puVar7;
}



/* Entry: 103c42ae4; end: 103c42b03;  */

void FUN_103c42ae4(void)

{
  func_0x000107c61168(&PTR_PTR_112948870);
  return;
}



/* Entry: 103c42b04; end: 103c42b27;  */

undefined8 FUN_103c42b04(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 103c42b28; end: 103c42b4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c42b28(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  long extraout_x8;
  long lVar8;
  long extraout_x12;
  long lVar9;
  long unaff_x20;
  undefined1 *puVar10;
  long lVar11;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar10 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = (long)puVar10 - extraout_x12;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar8 = *(long *)(lVar1 + _DAT_112ffaf70);
    func_0x000107c61174();
    func_0x000107c61170(lVar1);
    lVar1 = lVar8;
    func_0x000107c3abfc();
    func_0x000107c61180();
    func_0x000107c61170(lVar8);
    if (lVar1 != 0) {
      func_0x000107c5edb4(puVar10,lVar1);
      func_0x000107c61170(lVar1);
    }
    lVar8 = 0;
    func_0x000107c5ede0();
    lVar11 = *(long *)(lVar8 + -8);
    (**(code **)(lVar11 + 0x38))(puVar10,lVar1 == 0,1,lVar8);
    func_0x0001001021cc(puVar10,lVar9);
    uVar7 = 1;
    lVar1 = lVar9;
    (**(code **)(lVar11 + 0x30))(lVar9,1,lVar8);
    if ((int)lVar1 == 1) {
      func_0x0001000293e4(lVar9);
    }
    else {
      func_0x000107c5ed70();
      (**(code **)(lVar11 + 8))(lVar9,lVar8);
      puVar2 = PTR_PTR_1126c9d18;
      func_0x000107c610f8();
      func_0x000107c453e4();
      lVar9 = 0x112d38dc0;
      func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
      func_0x000107c613fc();
      *(undefined8 *)(lVar9 + 0x18) = 2;
      *(undefined8 *)(lVar9 + 0x10) = 1;
      *(undefined **)(lVar9 + 0x38) = PTR___sSSN_11034da80;
      *(long *)(lVar9 + 0x20) = lVar1;
      *(undefined8 *)(lVar9 + 0x28) = uVar7;
      lVar1 = lVar9;
      func_0x0001030bae68();
      func_0x000107c613fc();
      *(undefined8 *)(lVar1 + 0x18) = 3;
      *(undefined8 *)(lVar1 + 0x10) = 1;
      *(undefined **)(lVar1 + 0x20) = puVar2;
      puVar3 = PTR_PTR_1126aeb08;
      func_0x000107c610f8();
      func_0x000107c61174(puVar2);
      lVar8 = lVar9;
      func_0x000107c5fc48(lVar9,PTR___sypN_11034f1a8 + 8);
      func_0x000107c61574(lVar9);
      uVar7 = 0;
      FUN_103c42c14(0);
      lVar9 = lVar1;
      func_0x000107c5fc48(lVar1,uVar7);
      func_0x000107c61574(lVar1);
      func_0x000107c4555c();
      func_0x000107c61170(lVar8);
      func_0x000107c61170(lVar9);
      pcVar4 = "createSimpleWebBrowserViewContext()";
      func_0x0001000c10c0("createSimpleWebBrowserViewContext()");
      func_0x000107c61180();
      puVar5 = &UNK_1106ee7e8;
      func_0x000107c613fc(&UNK_1106ee7e8,0x20,7);
      *(long *)(puVar5 + 0x10) = unaff_x20;
      *(undefined **)(puVar5 + 0x18) = puVar3;
      pcStack_68 = FUN_103c42c58;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      puStack_78 = &UNK_1000f6b44;
      puStack_70 = &UNK_1106ee800;
      ppuVar6 = &puStack_88;
      puStack_60 = puVar5;
      func_0x000107c60bc4(ppuVar6);
      puVar5 = puStack_60;
      func_0x000107c6157c();
      func_0x000107c61174(puVar3);
      func_0x000107c61574(puVar5);
      func_0x000107c4e524(pcVar4);
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(puVar3);
      func_0x000107c615e8(pcVar4);
    }
  }
  return;
}



/* Entry: 103c42b4c; end: 103c42beb;  */

void FUN_103c42b4c(void)

{
  FUN_103c425f8();
  return;
}



/* Entry: 103c42bec; end: 103c42c13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103c42bec(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112ffaf70);
    func_0x000107c61174(uVar2);
    func_0x000107c61170(lVar1);
  }
  return uVar2;
}



/* Entry: 103c42c14; end: 103c42c57;  */

void FUN_103c42c14(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f39088 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___UIActivity_1126acb48;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112f39088 = puVar1;
  return;
}



/* Entry: 103c42c58; end: 103c42caf;  */

void FUN_103c42c58(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar1 + 0x10,auStack_38,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c4f018();
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 103c42cb0; end: 103c42ccf; -[SCComposerWebView onLoadingProgressChange] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c42cb0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11380d140;
  func_0x000107c61428(param_1 + _DAT_11380d140,auStack_38,0,0);
  func_0x000107c615f0(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103c42cd0; end: 103c42cef; -[SCComposerWebView setOnLoadingProgressChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c42cd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11380d140;
  func_0x000107c61428(param_1 + _DAT_11380d140,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c615f0(param_3);
  func_0x000107c615e8(uVar2);
  return;
}



/* Entry: 103c42cf0; end: 103c42d2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103c42cf0(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_11380d140;
  func_0x000107c61428(unaff_x20 + _DAT_11380d140,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x103c45ddc;
  return auVar2;
}



/* Entry: 103c42d30; end: 103c42d4f; -[SCComposerWebView onUrlChange] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c42d30(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11380d148;
  func_0x000107c61428(param_1 + _DAT_11380d148,auStack_38,0,0);
  func_0x000107c615f0(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103c42d50; end: 103c42d6f; -[SCComposerWebView setOnUrlChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c42d50(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11380d148;
  func_0x000107c61428(param_1 + _DAT_11380d148,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c615f0(param_3);
  func_0x000107c615e8(uVar2);
  return;
}



/* Entry: 103c42d70; end: 103c42daf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103c42d70(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_11380d148;
  func_0x000107c61428(unaff_x20 + _DAT_11380d148,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_103c42db0;
  return auVar2;
}



/* Entry: 103c42db0; end: 103c42db3;  */

void FUN_103c42db0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 103c42db4; end: 103c42dd3; -[SCComposerWebView onTitleChange] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c42db4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11380d150;
  func_0x000107c61428(param_1 + _DAT_11380d150,auStack_38,0,0);
  func_0x000107c615f0(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103c42dd4; end: 103c42df3; -[SCComposerWebView setOnTitleChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c42dd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11380d150;
  func_0x000107c61428(param_1 + _DAT_11380d150,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c615f0(param_3);
  func_0x000107c615e8(uVar2);
  return;
}



/* Entry: 103c42df4; end: 103c42e33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103c42df4(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_11380d150;
  func_0x000107c61428(unaff_x20 + _DAT_11380d150,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x103c45de0;
  return auVar2;
}



/* Entry: 103c42e34; end: 103c42e53; -[SCComposerWebView onNavigationStatusChange] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c42e34(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11380d158;
  func_0x000107c61428(param_1 + _DAT_11380d158,auStack_38,0,0);
  func_0x000107c615f0(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103c42e54; end: 103c42e73; -[SCComposerWebView setOnNavigationStatusChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c42e54(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11380d158;
  func_0x000107c61428(param_1 + _DAT_11380d158,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c615f0(param_3);
  func_0x000107c615e8(uVar2);
  return;
}



/* Entry: 103c42e74; end: 103c42eb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103c42e74(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_11380d158;
  func_0x000107c61428(unaff_x20 + _DAT_11380d158,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x103c45de4;
  return auVar2;
}



/* Entry: 103c42eb4; end: 103c42ed3; -[SCComposerWebView onAutofillInfoDetected] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c42eb4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11380d160;
  func_0x000107c61428(param_1 + _DAT_11380d160,auStack_38,0,0);
  func_0x000107c615f0(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103c42ed4; end: 103c42ef3; -[SCComposerWebView setOnAutofillInfoDetected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c42ed4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11380d160;
  func_0x000107c61428(param_1 + _DAT_11380d160,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c615f0(param_3);
  func_0x000107c615e8(uVar2);
  return;
}



/* Entry: 103c42ef4; end: 103c42f33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103c42ef4(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_11380d160;
  func_0x000107c61428(unaff_x20 + _DAT_11380d160,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x103c45de8;
  return auVar2;
}



/* Entry: 103c42f34; end: 103c42fa7; -[SCComposerWebView messages] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c42f34(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11380d168;
  func_0x000107c61428(param_1 + _DAT_11380d168,auStack_38,0,0);
  lVar1 = *(long *)(param_1 + lVar1);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c61434(lVar1);
    func_0x000107c5fc48();
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 103c42fa8; end: 103c42fbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c42fa8(void)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = _DAT_11380d168;
  puVar1 = PTR__swift_bridgeObjectRetain_11034f268;
  func_0x000107c61428(unaff_x20 + _DAT_11380d168,auStack_48,0,0);
  (*(code *)puVar1)(*(undefined8 *)(unaff_x20 + lVar2));
  return;
}



/* Entry: 103c42fbc; end: 103c4302f; -[SCComposerWebView setMessages:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c42fbc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    func_0x000107c5fc54(param_3,PTR___sSSN_11034da80);
  }
  lVar1 = _DAT_11380d168;
  func_0x000107c61428(param_1 + _DAT_11380d168,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(long *)(param_1 + lVar1) = param_3;
  func_0x000107c6142c(uVar2);
  return;
}



/* Entry: 103c43030; end: 103c43043;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c43030(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = _DAT_11380d168;
  puVar1 = PTR__swift_bridgeObjectRelease_11034f258;
  func_0x000107c61428(unaff_x20 + _DAT_11380d168,auStack_48,1,0);
  uVar3 = *(undefined8 *)(unaff_x20 + lVar2);
  *(undefined8 *)(unaff_x20 + lVar2) = param_1;
  (*(code *)puVar1)(uVar3);
  return;
}



/* Entry: 103c43044; end: 103c43083;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103c43044(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_11380d168;
  func_0x000107c61428(unaff_x20 + _DAT_11380d168,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x103c45dec;
  return auVar2;
}



/* Entry: 103c43084; end: 103c4308f; -[SCComposerWebView onRecievedMessage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c43084(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11380d170;
  func_0x000107c61428(param_1 + _DAT_11380d170,auStack_38,0,0);
  func_0x000107c615f0(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103c43090; end: 103c430d3;  */

void FUN_103c43090(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c615f0(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103c430d4; end: 103c430e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c430d4(void)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = _DAT_11380d170;
  puVar1 = PTR__swift_unknownObjectRetain_11034f540;
  func_0x000107c61428(unaff_x20 + _DAT_11380d170,auStack_48,0,0);
  (*(code *)puVar1)(*(undefined8 *)(unaff_x20 + lVar2));
  return;
}



/* Entry: 103c430e8; end: 103c43133;  */

void FUN_103c430e8(long *param_1,code *param_2)

{
  long unaff_x20;
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_1;
  func_0x000107c61428(unaff_x20 + lVar1,auStack_48,0,0);
  (*param_2)(*(undefined8 *)(unaff_x20 + lVar1));
  return;
}



/* Entry: 103c43134; end: 103c4313f; -[SCComposerWebView setOnRecievedMessage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c43134(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11380d170;
  func_0x000107c61428(param_1 + _DAT_11380d170,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c615f0(param_3);
  func_0x000107c615e8(uVar2);
  return;
}



/* Entry: 103c43140; end: 103c4319f;  */

void FUN_103c43140(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_4;
  func_0x000107c61428(param_1 + lVar2,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  func_0x000107c615f0(param_3);
  func_0x000107c615e8(uVar1);
  return;
}



/* Entry: 103c431a0; end: 103c431b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c431a0(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = _DAT_11380d170;
  puVar1 = PTR__swift_unknownObjectRelease_11034f530;
  func_0x000107c61428(unaff_x20 + _DAT_11380d170,auStack_48,1,0);
  uVar3 = *(undefined8 *)(unaff_x20 + lVar2);
  *(undefined8 *)(unaff_x20 + lVar2) = param_1;
  (*(code *)puVar1)(uVar3);
  return;
}



/* Entry: 103c431b4; end: 103c43207;  */

void FUN_103c431b4(undefined8 param_1,long *param_2,code *param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_2;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_48,1,0);
  uVar1 = *(undefined8 *)(unaff_x20 + lVar2);
  *(undefined8 *)(unaff_x20 + lVar2) = param_1;
  (*param_3)(uVar1);
  return;
}



/* Entry: 103c43208; end: 103c43247;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103c43208(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_11380d170;
  func_0x000107c61428(unaff_x20 + _DAT_11380d170,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x103c45df0;
  return auVar2;
}



/* Entry: 103c43248; end: 103c43333;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103c43248(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 *puVar1;
  long unaff_x20;
  
  puVar1 = &stack0xffffffffffffffb0;
  *(undefined8 *)(unaff_x20 + _DAT_11380d140) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11380d148) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11380d150) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11380d158) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11380d160) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11380d168) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11380d170) = 0;
  FUN_103c43334();
  func_0x000107c61154(param_1,param_2,param_3,param_4,&stack0xffffffffffffffb0,
                      PTR_s_initWithFrame_configuration__1125e2a10,param_5);
  func_0x000107c61180();
  func_0x000103c434b8();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_5);
  return puVar1;
}



/* Entry: 103c43334; end: 103c4336b;  */

void FUN_103c43334(undefined8 param_1)

{
  if (lRam0000000112ffafc8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7bbfc4);
  return;
}



/* Entry: 103c4336c; end: 103c433c3; -[SCComposerWebView initWithFrame:configuration:] */

void FUN_103c4336c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  func_0x000107c61174(param_7);
  FUN_103c43248(param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 103c433c4; end: 103c4348f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103c433c4(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  
  puVar1 = &stack0xffffffffffffffc0;
  *(undefined8 *)(unaff_x20 + _DAT_11380d140) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11380d148) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11380d150) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11380d158) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11380d160) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11380d168) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11380d170) = 0;
  FUN_103c43334();
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_initWithCoder__1125dd730,param_1);
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = puVar1;
    func_0x000107c61174(puVar1);
    func_0x000103c434b8();
    func_0x000107c61170(puVar2);
  }
  func_0x000107c61170(param_1);
  return puVar1;
}



/* Entry: 103c43490; end: 103c43737; -[SCComposerWebView initWithCoder:] */

void FUN_103c43490(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_103c433c4();
  return;
}



/* Entry: 103c43738; end: 103c4375f; -[SCComposerWebView prepareForReuse] */

void FUN_103c43738(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x000103c435fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103c43760; end: 103c437cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c43760(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x00010b97f424();
  func_0x00010b97f8a0();
  lVar1 = _DAT_11380d160;
  func_0x000107c61428(unaff_x20 + _DAT_11380d160,auStack_48,0,0);
  if (*(long *)(unaff_x20 + lVar1) != 0) {
    func_0x000107c4e5ec();
  }
  func_0x00010b97f45c(param_1);
  return;
}



/* Entry: 103c437d0; end: 103c43867; -[SCComposerWebView notifyAutofillInfoDetectedWithFormInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c437d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  lVar2 = param_1;
  func_0x00010b97f424();
  func_0x00010b97f8a0();
  lVar1 = _DAT_11380d160;
  func_0x000107c61428(param_1 + _DAT_11380d160,auStack_48,0,0);
  if (*(long *)(param_1 + lVar1) != 0) {
    func_0x000107c4e5ec();
  }
  func_0x00010b97f45c(lVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 103c43868; end: 103c439a3; -[SCComposerWebView observeValueForKeyPath:ofObject:change:context:] */

void FUN_103c43868(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  if (param_4 == 0) {
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c615f0(param_4);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_1);
    func_0x000107c60234(&uStack_60,param_4);
    func_0x000107c615e8(param_4);
  }
  if (param_5 == 0) {
    lVar3 = 0;
  }
  else {
    uVar1 = 0;
    func_0x000101e6bfa8(0);
    uVar2 = 0x112e33ee8;
    func_0x000103c45d14(0x112e33ee8,&UNK_10da1d680);
    lVar3 = param_5;
    func_0x000107c5f9e8(param_5,uVar1,PTR___sypN_11034f1a8 + 8,uVar2);
    func_0x000107c61170(param_5);
  }
  FUN_103c44c2c(param_3,param_2,&uStack_60);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(lVar3);
  func_0x000107c6142c(param_2);
  func_0x000103c45c4c(&uStack_60,0x112d387f8,&UNK_10d902650);
  return;
}



/* Entry: 103c439a4; end: 103c43a1f;  */

/* WARNING: Possible PIC construction at 0x000103c439b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c439d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c439f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c439dc) */
/* WARNING: Removing unreachable block (ram,0x000103c439bc) */
/* WARNING: Removing unreachable block (ram,0x000103c439fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c439a4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(unaff_x20 + _DAT_11380d140));
  return;
}



/* Entry: 103c43a20; end: 103c43b63;  */

void FUN_103c43a20(void)

{
  undefined8 uVar1;
  
  uVar1 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010f1b1370);
  func_0x000107c4ffa4();
  func_0x000107c61170(uVar1);
  uVar1 = 0x4c5255;
  func_0x000107c5fadc(0x4c5255,0xe300000000000000);
  func_0x000107c4ffa4();
  func_0x000107c61170(uVar1);
  uVar1 = 0x726f466f476e6163;
  func_0x000107c5fadc(0x726f466f476e6163,0xec00000064726177);
  func_0x000107c4ffa4();
  func_0x000107c61170(uVar1);
  uVar1 = 0x6361426f476e6163;
  func_0x000107c5fadc(0x6361426f476e6163,0xe90000000000006b);
  func_0x000107c4ffa4();
  func_0x000107c61170(uVar1);
  uVar1 = 0x656c746974;
  func_0x000107c5fadc(0x656c746974,0xe500000000000000);
  func_0x000107c4ffa4();
  func_0x000107c61170(uVar1);
  FUN_103c43334();
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103c43b64; end: 103c43b87; -[SCComposerWebView dealloc] */

void FUN_103c43b64(void)

{
  func_0x000107c61174();
  FUN_103c43a20();
  return;
}



/* Entry: 103c43b88; end: 103c43c0f; -[SCComposerWebView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103c43ba4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c43bc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c43be4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c43bc8) */
/* WARNING: Removing unreachable block (ram,0x000103c43ba8) */
/* WARNING: Removing unreachable block (ram,0x000103c43be8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c43b88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_11380d140));
  return;
}



/* Entry: 103c43c10; end: 103c43fcf;  */

void FUN_103c43c10(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long extraout_x8;
  long extraout_x12;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar11 = (long)&uStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar11 - extraout_x12;
  uVar4 = 0;
  FUN_103c43334(0);
  lVar3 = param_1;
  func_0x000107c61480(param_1,uVar4);
  if (lVar3 == 0) {
    return;
  }
  func_0x000107c61174(param_1);
  lVar5 = lVar3;
  func_0x000107c51a60(lVar3);
  func_0x000107c61180();
  func_0x000107c58cd8();
  func_0x000107c61170(lVar5);
  func_0x000103c45ccc(param_2,&lStack_80,0x112d387f8,&UNK_10d902650);
  if (lStack_68 == 0) {
LAB_103c43d84:
    func_0x000107c61170(param_1);
    func_0x000103c45c4c(&lStack_80,0x112d387f8,&UNK_10d902650);
    return;
  }
  uVar4 = 0;
  func_0x000103c45c8c(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
  puVar1 = PTR___sypN_11034f1a8;
  plVar6 = &lStack_a0;
  func_0x000107c6147c(plVar6,&lStack_80,PTR___sypN_11034f1a8 + 8,uVar4,6);
  lVar5 = lStack_a0;
  if (((ulong)plVar6 & 1) == 0) {
LAB_103c43db0:
    func_0x000107c61170(param_1);
    return;
  }
  lVar8 = lStack_a0;
  func_0x000107c40808();
  if (lVar8 != 2) {
    func_0x000107c61170(lVar5);
    goto LAB_103c43db0;
  }
  lVar8 = lVar5;
  func_0x000107c43638();
  func_0x000107c61180();
  if (lVar8 == 0) {
    uStack_98 = 0;
    lStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    func_0x000107c60234(&lStack_a0);
    func_0x000107c615e8(lVar8);
  }
  uStack_78 = uStack_98;
  lStack_80 = lStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    func_0x000107c61170(param_1);
    param_1 = lVar5;
    goto LAB_103c43d84;
  }
  puVar7 = &uStack_b0;
  func_0x000107c6147c(puVar7,&lStack_80,puVar1 + 8,PTR___sSSN_11034da80,6);
  uVar2 = uStack_a8;
  uVar4 = uStack_b0;
  if (((ulong)puVar7 & 1) == 0) {
    func_0x000107c61170(param_1);
    param_1 = lVar5;
    goto LAB_103c43db0;
  }
  lVar8 = lVar5;
  func_0x000107c4aa28();
  func_0x000107c61180();
  if (lVar8 == 0) {
    uStack_98 = 0;
    lStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    func_0x000107c60234(&lStack_a0);
    func_0x000107c615e8(lVar8);
  }
  uStack_78 = uStack_98;
  lStack_80 = lStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    func_0x000103c45c4c(&lStack_80,0x112d387f8,&UNK_10d902650);
  }
  else {
    puVar7 = &uStack_b0;
    func_0x000107c6147c(puVar7,&lStack_80,puVar1 + 8,PTR___sSSN_11034da80,6);
    if (((ulong)puVar7 & 1) != 0) {
      func_0x000107c5edd0(lVar10,uStack_b0,uStack_a8);
      func_0x000107c6142c(uStack_a8);
      goto LAB_103c43ef0;
    }
  }
  lVar8 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar8 + -8) + 0x38))(lVar10,1,1,lVar8);
LAB_103c43ef0:
  func_0x000107c5fadc(uVar4,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000103c45ccc(lVar10,lVar11,0x112d36580,&UNK_10d9016d0);
  lVar9 = 0;
  func_0x000107c5ede0();
  lVar13 = *(long *)(lVar9 + -8);
  lVar8 = lVar11;
  (**(code **)(lVar13 + 0x30))(lVar11,1,lVar9);
  lVar12 = 0;
  if ((int)lVar8 != 1) {
    func_0x000107c5ed90();
    (**(code **)(lVar13 + 8))(lVar11,lVar9);
    lVar12 = lVar8;
  }
  func_0x000107c4b73c(lVar3);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar5);
  func_0x000103c45c4c(lVar10,0x112d36580,&UNK_10d9016d0);
  return;
}



/* Entry: 103c43fd0; end: 103c44047;  */

/* WARNING: Possible PIC construction at 0x000103c44028: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c4402c) */

void FUN_103c43fd0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = 0;
  FUN_103c43334(0);
  lVar2 = param_1;
  func_0x000107c61480(param_1,uVar1);
  if (lVar2 != 0) {
    func_0x000107c61174(param_1);
    func_0x000107c51a60(lVar2);
    func_0x000107c61180();
    func_0x000107c58cd8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 103c44048; end: 103c4427b;  */

undefined8 FUN_103c44048(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lStack_70;
  undefined8 uStack_68;
  
  lVar1 = 0;
  uStack_68 = param_2;
  func_0x000107c5eb08();
  lVar5 = *(long *)(lVar1 + -8);
  lStack_70 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  lVar6 = (long)&lStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = lVar6 - extraout_x8_00;
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar10 = lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar10 - extraout_x12;
  uVar3 = 0;
  FUN_103c43334(0);
  lVar1 = param_1;
  func_0x000107c61480(param_1,uVar3);
  uVar3 = 0;
  if ((lVar1 != 0) && (param_3 != 0)) {
    func_0x000107c61174(param_1);
    func_0x000107c5edd0(lVar9,uStack_68,param_3);
    lVar4 = lVar9;
    (**(code **)(lVar8 + 0x30))(lVar9,1,lVar2);
    if ((int)lVar4 == 1) {
      func_0x000107c61170(param_1);
      FUN_103c45c4c(lVar9,0x112d36580,&UNK_10d9016d0);
      uVar3 = 0;
    }
    else {
      (**(code **)(lVar8 + 0x20))(lVar7,lVar9,lVar2);
      (**(code **)(lVar8 + 0x10))(lVar10,lVar7,lVar2);
      func_0x000107c5eaec(lVar6,0x404e000000000000,lVar10,0);
      func_0x000107c5eae0();
      (**(code **)(lVar5 + 8))(lVar6,lStack_70);
      func_0x000107c4b768(lVar1);
      func_0x000107c61180();
      func_0x000107c61170(param_1);
      func_0x000107c61170(lVar10);
      func_0x000107c61170(lVar1);
      (**(code **)(lVar8 + 8))(lVar7,lVar2);
      uVar3 = 1;
    }
  }
  return uVar3;
}


