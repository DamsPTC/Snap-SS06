/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1032f62c4; end: 1032f62fb; -[SCSingleLensFeatureScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032f62c4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f57850);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f57858));
  return;
}



/* Entry: 1032f62fc; end: 1032f631b;  */

void FUN_1032f62fc(void)

{
  func_0x000107c61168(&PTR_PTR_1128cc490);
  return;
}



/* Entry: 1032f631c; end: 1032f6507;  */

undefined8 FUN_1032f631c(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c4119c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c5d0f0();
    func_0x000107c61170(lVar1);
    if (lVar2 == 3) {
      lVar1 = unaff_x20;
      func_0x000107c4119c();
      func_0x000107c61180();
      lVar2 = lVar1;
      func_0x000107c4ec4c();
      func_0x000107c61180();
      func_0x000107c61170(lVar1);
      if (lVar2 != 0) {
        func_0x000107c61170(lVar2);
        return 2;
      }
    }
  }
  lVar1 = unaff_x20;
  func_0x000107c4fe18();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c4fe2c();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      lVar1 = lVar2;
      puVar4 = PTR___sSSN_11034da80;
      func_0x000107c5fe10(lVar2,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
      func_0x000107c61170(lVar2);
      uVar3 = 1;
      func_0x0001044e388c();
      func_0x0001000f66f0();
      func_0x000107c6142c(puVar4);
      func_0x000107c6142c(lVar1);
      if ((uVar3 & 1) != 0) {
        return 2;
      }
    }
  }
  func_0x000107c4119c();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar1 = unaff_x20;
    func_0x000107c5d0f0();
    func_0x000107c61170(unaff_x20);
    if (lVar1 == 1) {
      return 0;
    }
  }
  return 1;
}



/* Entry: 1032f6508; end: 1032f674f;  */

void FUN_1032f6508(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  lVar5 = param_2;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_2 == 0) {
    return;
  }
  if (param_1 == 0) {
    lVar4 = 0;
    lVar5 = -0x2000000000000000;
  }
  else {
    lVar7 = param_1;
    func_0x000107c41214(param_1);
    func_0x000107c61180();
    lVar4 = lVar7;
    func_0x000107c5faec();
    func_0x000107c61170(lVar7);
  }
  lVar7 = lVar5;
  func_0x000107c5fadc(lVar4,lVar5);
  func_0x000107c6142c(lVar5);
  if (param_1 == 0) {
    lVar8 = 0;
    lVar7 = 0;
    lVar6 = 0;
    lVar5 = 0;
    goto LAB_1032f66d4;
  }
  lVar5 = param_1;
  func_0x000107c44fcc(param_1);
  func_0x000107c61180();
  lVar6 = param_1;
  func_0x000107c5c82c();
  func_0x000107c61180();
  if (lVar6 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar7);
  }
  lVar7 = param_1;
  func_0x000107c4f4c4();
  func_0x000107c61180();
  if (lVar7 == 0) {
LAB_1032f6660:
    lVar7 = 0;
  }
  else {
    uVar1 = 0;
    lStack_78 = lVar7;
    func_0x000101018e74(0);
    uVar2 = 0;
    func_0x0001000e2834(0);
    func_0x000107c6147c(&uStack_68,&lStack_78,uVar1,uVar2,7);
    lStack_78 = 0;
    lStack_70 = 0;
    func_0x000107c5fae8(uStack_68,&lStack_78);
    func_0x000107c61170(uStack_68);
    lVar8 = lStack_70;
    if (lStack_70 == 0) goto LAB_1032f6660;
    lVar7 = lStack_78;
    func_0x000107c5fadc(lStack_78,lStack_70);
    func_0x000107c6142c(lVar8);
  }
  lVar8 = param_1;
  func_0x000107c5c674(param_1);
  func_0x000107c61180();
  lVar3 = param_1;
  func_0x000107c4f4cc();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c49820();
    func_0x000107c61170(lVar3);
  }
  func_0x000107c4cd44();
  func_0x000107c61180();
LAB_1032f66d4:
  func_0x000107c41190(param_2);
  func_0x000107c615e8(param_2);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1032f6750; end: 1032f6763;  */

void FUN_1032f6750(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11063b170;
  if (lRam0000000112f57888 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112f57888 = param_1;
  }
  return;
}



/* Entry: 1032f6764; end: 1032f67a7;  */

void FUN_1032f6764(long param_1,long *param_2,long param_3)

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



/* Entry: 1032f67a8; end: 1032f6a4b;  */

void FUN_1032f67a8(uint param_1)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar6 = &puStack_70;
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_viewWillAppear__1126853f0,param_1 & 1);
  iVar2 = 2;
  func_0x000100029b9c(2,0x1a,0,0);
  if (iVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1032f698c);
      (*pcVar1)();
    }
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c3fa94();
    func_0x000107c61180();
    func_0x000107c52b50(lVar3);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(puVar4);
    lVar3 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1032f6990);
      (*pcVar1)();
    }
    func_0x000107c56f90();
    func_0x000107c61170(lVar3);
    puVar4 = &UNK_11063b190;
    func_0x000107c613fc(&UNK_11063b190,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    func_0x000107c6157c(puVar4);
    func_0x000107c5cf40();
    func_0x000107c61180();
    if (unaff_x20 == 0) {
      func_0x0001032f6990(puVar4);
      func_0x000107c61578(puVar4,2);
    }
    else {
      func_0x000107c61574(puVar4);
      puVar5 = &UNK_11063b1b8;
      func_0x000107c613fc(&UNK_11063b1b8,0x20,7);
      *(code **)(puVar5 + 0x10) = FUN_1032f6a4c;
      *(undefined **)(puVar5 + 0x18) = puVar4;
      pcStack_50 = FUN_1032f6a54;
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0x42000000;
      puStack_60 = &UNK_1013c1f34;
      puStack_58 = &UNK_11063b1d0;
      puStack_48 = puVar5;
      func_0x000107c60bc4(&puStack_70);
      puVar5 = puStack_48;
      func_0x000107c6157c(puVar4);
      func_0x000107c61574(puVar5);
      func_0x000107c3dcb8(unaff_x20);
      func_0x000107c61574(puVar4);
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c615e8(unaff_x20);
    }
  }
  return;
}



/* Entry: 1032f6a4c; end: 1032f6a53;  */

undefined8 FUN_1032f6a4c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    uVar5 = 1;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c4f044();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = lVar2;
      func_0x000107c403bc();
      func_0x000107c61180();
      if (lVar3 != 0) {
        lVar4 = lVar3;
        func_0x000107c61174();
        FUN_1032f6ac0(lVar3);
        func_0x000107c61170(lVar2);
        func_0x000107c61170(lVar4);
        lVar2 = lVar4;
      }
      func_0x000107c61170(lVar2);
    }
    func_0x000107c61170(lVar1);
    uVar5 = 0;
  }
  return uVar5;
}



/* Entry: 1032f6a54; end: 1032f6a73;  */

void FUN_1032f6a54(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1032f6a74; end: 1032f6a8f;  */

void FUN_1032f6a74(long param_1,long param_2)

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



/* Entry: 1032f6a90; end: 1032f6abf; -[_TtC28SCInLensCreationTrendingList25ILCComposerViewController viewWillAppear:] */

void FUN_1032f6a90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_1032f67a8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1032f6ac0; end: 1032f6d23;  */

void FUN_1032f6ac0(ulong param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 ****ppppuVar4;
  undefined8 *****pppppuVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 ****ppppuVar9;
  ulong uVar10;
  long lVar11;
  ulong unaff_x19;
  ulong unaff_x20;
  undefined8 ****ppppuVar12;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 ****ppppuStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = param_1;
  uStack_d8 = unaff_x19;
  if (param_1 != 0) {
    unaff_x20 = param_1;
    func_0x0001008479c8();
    func_0x000107c61534();
    *(undefined8 *)(unaff_x20 + 0x18) = 3;
    *(undefined8 *)(unaff_x20 + 0x10) = 1;
    *(ulong *)(unaff_x20 + 0x20) = param_1;
    func_0x000107c61174();
    func_0x000107c61174();
    puVar1 = PTR___sSSN_11034da80;
    do {
      while( true ) {
        if (unaff_x20 >> 0x3e == 0) {
          uVar3 = *(ulong *)((unaff_x20 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar3 = unaff_x20 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < unaff_x20) {
            uVar3 = unaff_x20;
          }
          func_0x000107c60480();
        }
        if (uVar3 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1032f6d1c);
          (*pcVar2)();
        }
        uVar3 = unaff_x20;
        func_0x000107c61550();
        if ((unaff_x20 >> 0x3e != 0) || ((uVar3 & 1) == 0)) {
          func_0x0001023b5a6c();
        }
        uVar3 = unaff_x20 & 0xffffffffffffff8;
        if (*(long *)(uVar3 + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1032f6d20);
          (*pcVar2)();
        }
        lVar11 = *(long *)(uVar3 + 0x10) + -1;
        ppppuVar12 = *(undefined8 *****)(uVar3 + lVar11 * 8 + 0x20);
        *(long *)(uVar3 + 0x10) = lVar11;
        ppppuVar4 = ppppuVar12;
        uStack_98 = unaff_x20;
        func_0x000107c614f0();
        uVar8 = 0x112dab9f8;
        ppppuStack_a8 = ppppuVar4;
        func_0x0001000285a8(0x112dab9f8,&UNK_10db30990);
        pppppuVar5 = &ppppuStack_a8;
        func_0x000107c5fb18();
        uStack_b8 = 0xd000000000000010;
        uStack_b0 = 0x800000010ef89450;
        ppppuStack_a8 = pppppuVar5;
        uStack_a0 = uVar8;
        func_0x000100e8b654();
        puVar6 = &uStack_b8;
        param_3 = puVar1;
        func_0x000107c6022c(puVar6,puVar1,puVar1,pppppuVar5,pppppuVar5);
        func_0x000107c6142c(uVar8);
        if (((ulong)puVar6 & 1) != 0) {
          puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
          func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
          func_0x000107c3fa94();
          func_0x000107c61180();
          func_0x000107c52b50(ppppuVar12);
          func_0x000107c61170(puVar7);
          param_3 = (undefined *)0x0;
          func_0x000107c56f90(ppppuVar12);
        }
        ppppuVar4 = ppppuVar12;
        func_0x000107c5c3b0(ppppuVar12);
        func_0x000107c61180();
        uVar8 = 0;
        func_0x000100f115fc(0);
        ppppuVar9 = ppppuVar4;
        func_0x000107c5fc54(ppppuVar4,uVar8);
        func_0x000107c61170(ppppuVar4);
        func_0x000100847d40(ppppuVar9);
        func_0x000107c61170(ppppuVar12);
        unaff_x20 = uStack_98;
        if (uStack_98 >> 0x3e != 0) break;
        if (*(long *)((uStack_98 & 0xffffffffffffff8) + 0x10) == 0) goto LAB_1032f6cd0;
      }
      uVar3 = uStack_98 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uStack_98) {
        uVar3 = uStack_98;
      }
      func_0x000107c60480();
    } while (uVar3 != 0);
LAB_1032f6cd0:
    func_0x000107c6142c(unaff_x20);
    uVar3 = param_1;
    func_0x000107c61170();
    uStack_d8 = param_1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  func_0x000107c60e78();
  pcStack_c8 = FUN_1032f6d24;
  uVar10 = uVar3;
  uStack_e0 = unaff_x20;
  puStack_d0 = &stack0xfffffffffffffff0;
  func_0x000107c614f0();
  uStack_f0 = uVar3;
  uStack_e8 = uVar10;
  func_0x000107c61154(&uStack_f0,PTR_s_initWithValdiView__1125f5a88,param_3);
  return;
}



/* Entry: 1032f6d24; end: 1032f6d67; -[_TtC28SCInLensCreationTrendingList25ILCComposerViewController initWithValdiView:] */

void FUN_1032f6d24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_initWithValdiView__1125f5a88,param_3);
  return;
}



/* Entry: 1032f6d68; end: 1032f6e1f; -[_TtC28SCInLensCreationTrendingList25ILCComposerViewController initWithNibName:bundle:] */

undefined1 * FUN_1032f6d68(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar2 = &uStack_50;
  uVar1 = param_1;
  func_0x000107c614f0();
  if (param_3 == 0) {
    func_0x000107c61174(param_4);
  }
  else {
    func_0x000107c5faec(param_3);
    func_0x000107c61174(param_4);
    func_0x000107c5fadc(param_3,param_2);
    func_0x000107c6142c(param_2);
  }
  uStack_50 = param_1;
  uStack_48 = uVar1;
  func_0x000107c61154(&uStack_50,PTR_s_initWithNibName_bundle__1125e9850,param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  return (undefined1 *)puVar2;
}



/* Entry: 1032f6e20; end: 1032f6e9f; -[_TtC28SCInLensCreationTrendingList25ILCComposerViewController initWithCoder:] */

undefined1 * FUN_1032f6e20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = &uStack_40;
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_initWithCoder__1125dd730;
  uStack_40 = param_1;
  uStack_38 = uVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&uStack_40,puVar1,param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  if (puVar3 != (undefined8 *)0x0) {
    func_0x000107c61170(puVar3);
  }
  return (undefined1 *)puVar3;
}



/* Entry: 1032f6ea0; end: 1032f6ef3;  */

void FUN_1032f6ea0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1032f6ef4; end: 1032f6feb;  */

void FUN_1032f6ef4(ulong param_1,undefined8 param_2,code *param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  ulong uVar4;
  
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar4 = param_1;
    }
    func_0x000107c60480();
  }
  uVar3 = *unaff_x20;
  if (uVar3 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar2 = uVar3;
    }
    func_0x000107c60480();
  }
  if (!SCARRY8(uVar2,uVar4)) {
    FUN_1032fc67c(uVar2 + uVar4,1,param_2);
    uVar3 = *unaff_x20;
    uVar2 = uVar3 & 0xffffffffffffff8;
    (*param_3)(uVar2 + *(long *)(uVar2 + 0x10) * 8 + 0x20,
               (*(ulong *)(uVar2 + 0x18) >> 1) - *(long *)(uVar2 + 0x10));
    func_0x000107c6142c();
    if ((long)param_1 < (long)uVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1032f6fe8);
      (*pcVar1)();
    }
    if (0 < (long)param_1) {
      if (SCARRY8(*(long *)(uVar2 + 0x10),param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1032f6fec);
        (*pcVar1)();
      }
      *(ulong *)(uVar2 + 0x10) = *(long *)(uVar2 + 0x10) + param_1;
    }
    *unaff_x20 = uVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032f6fe4);
  (*pcVar1)();
}



/* Entry: 1032f6fec; end: 1032f70cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032f6fec(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    lVar1 = param_1;
    FUN_1032f70cc(param_1,param_2);
    if (((lVar1 == 0) && (lVar1 = param_1, func_0x0001032f76a8(param_1,param_2), lVar1 == 0)) &&
       (lVar1 = *(long *)(param_3 + _DAT_112f578e0), lVar1 != 0)) {
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar1 != 0) {
        func_0x000107c5fadc(param_1,param_2);
        func_0x000107c5e36c(lVar1);
        func_0x000107c615e8(lVar1);
        func_0x000107c61170(param_1);
      }
    }
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 1032f70cc; end: 1032f7c53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1032f70cc(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  char *pcVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long unaff_x20;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_c0 [24];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  long lStack_78;
  long lStack_70;
  
  lVar19 = _DAT_112f57b30;
  lVar2 = _DAT_112f578c0;
  if (((*(char *)(unaff_x20 + _DAT_112f579d8) == '\x01') &&
      (lVar15 = *(long *)(unaff_x20 + _DAT_112f578e0), lVar15 != 0)) &&
     ((lVar16 = *(long *)(unaff_x20 + _DAT_112f578c0), lVar16 == 0 ||
      (func_0x000107c61428(lVar16 + _DAT_112f57b30,auStack_c0,0,0),
      (*(byte *)(lVar16 + lVar19) & 1) == 0)))) {
    lVar19 = *(long *)(unaff_x20 + _DAT_112f579e8);
    if (lVar19 == 0) {
      func_0x000107c61174(lVar15);
      lVar16 = 0;
    }
    else {
      func_0x000107c61174(lVar15);
      lVar16 = lVar19;
      func_0x000107c5db54(lVar19);
      func_0x000107c5e008(lVar19);
    }
    puVar4 = &UNK_11063b258;
    puVar3 = puVar4;
    func_0x000107c613fc(&UNK_11063b258,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    func_0x000107c613fc(&UNK_11063b258,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    func_0x000100773b04(0);
    func_0x000107c610f8();
    func_0x000107c61434(param_2);
    uVar5 = param_1;
    func_0x00010450dfa4(0,0,0,0,param_1,param_2,0,lVar16,lVar19,0x1032fdedc,puVar3,0x1032fdee4,
                        puVar4);
    if (*(char *)(unaff_x20 + _DAT_112f579e0) == '\x01') {
      uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112f57970);
      uVar14 = *(undefined8 *)(unaff_x20 + _DAT_112f579b0);
      uVar17 = *(undefined8 *)(unaff_x20 + _DAT_112f579b8);
      uVar18 = ((undefined8 *)(unaff_x20 + _DAT_112f579b8))[1];
      lVar6 = 0;
      FUN_1033010a8();
      lVar7 = lVar6;
      func_0x000107c610f8();
      lVar19 = _DAT_112f57a90;
      func_0x000107c61614(lVar7 + _DAT_112f57a90,0);
      lVar16 = _DAT_112f57a98;
      puVar4 = PTR_PTR_1126ae810;
      func_0x000107c610f8();
      lVar8 = lVar15;
      func_0x000107c61174(lVar15);
      uVar9 = uVar5;
      func_0x000107c61174();
      func_0x000107c61434(uVar18);
      func_0x000107c453e4();
      *(undefined **)(lVar7 + lVar16) = puVar4;
      lVar16 = _DAT_112f57aa0;
      puVar4 = PTR_PTR_1126ae568;
      func_0x000107c610f8();
      func_0x000107c453e4();
      *(undefined **)(lVar7 + lVar16) = puVar4;
      *(undefined8 *)(lVar7 + _DAT_112f57aa8) = 0x4048000000000000;
      *(undefined8 *)(lVar7 + _DAT_112f57ab0) = 0x404d000000000000;
      *(undefined8 *)(lVar7 + _DAT_112f57ab8) = 0x4038000000000000;
      *(undefined8 *)(lVar7 + _DAT_112f57ac0) = 0x4038000000000000;
      *(undefined8 *)(lVar7 + _DAT_112f57ac8) = 0x4030000000000000;
      *(undefined8 *)(lVar7 + _DAT_112f57ad0) = 0x403c000000000000;
      *(undefined1 *)(lVar7 + _DAT_112f57ad8) = 0;
      puVar1 = (undefined8 *)(lVar7 + _DAT_112f57ae0);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      *(undefined8 *)(lVar7 + _DAT_112f57ae8) = 0;
      *(undefined8 *)(lVar7 + _DAT_112f57af0) = 0;
      *(undefined8 *)(lVar7 + _DAT_112f57af8) = 0;
      *(undefined8 *)(lVar7 + _DAT_112f57b00) = 0x4020000000000000;
      puVar1 = (undefined8 *)(lVar7 + _DAT_112f57b08);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      puVar1 = (undefined8 *)(lVar7 + _DAT_112f57b10);
      puVar1[1] = 0;
      *puVar1 = 0;
      puVar1[3] = 0;
      puVar1[2] = 0;
      *(undefined1 *)(puVar1 + 4) = 1;
      *(undefined8 *)(lVar7 + _DAT_112f57b18) = 0;
      *(undefined1 *)(lVar7 + _DAT_112f57b20) = 0;
      *(undefined8 *)(lVar7 + _DAT_112f57b28) = 0;
      *(undefined1 *)(lVar7 + _DAT_112f57b30) = 0;
      *(undefined8 *)(lVar7 + _DAT_112f57b38) = uVar9;
      *(undefined8 *)(lVar7 + _DAT_112f57b40) = uVar13;
      *(undefined8 *)(lVar7 + _DAT_112f57b48) = 0;
      func_0x000107c61604(lVar7 + lVar19,lVar8);
      *(undefined8 *)(lVar7 + _DAT_112f57b50) = 0;
      *(undefined8 *)(lVar7 + _DAT_112f57b58) = uVar14;
      puVar1 = (undefined8 *)(lVar7 + _DAT_112f57b60);
      *puVar1 = uVar17;
      puVar1[1] = uVar18;
      puVar4 = PTR_s_init_1125d9248;
      lStack_78 = lVar7;
      lStack_70 = lVar6;
      func_0x000107c61174(uVar9);
      func_0x000107c615f0(uVar13);
      func_0x000107c615f0(uVar14);
      plVar10 = &lStack_78;
      func_0x000107c61154(plVar10,puVar4);
      FUN_1032ff4a4();
      puVar4 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
      func_0x000107c61168(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
      puVar3 = puVar4;
      func_0x000107c41570();
      func_0x000107c61180();
      func_0x000107c3d7bc();
      func_0x000107c61170(puVar3);
      func_0x000107c41570(puVar4);
      func_0x000107c61180();
      func_0x000107c3d7bc();
      func_0x000107c61170(uVar9);
      func_0x000107c61170(lVar8);
      func_0x000107c61170(puVar4);
      uVar17 = *(undefined8 *)(unaff_x20 + lVar2);
      *(long **)(unaff_x20 + lVar2) = plVar10;
      func_0x000107c61174();
      func_0x000107c61170(uVar17);
      pcVar11 = "consumeActiveStateParamsForPostCaptureIfAvailable(_:)";
      func_0x0001000c10c0();
      func_0x000107c61180();
      puVar4 = &UNK_11063b8e8;
      func_0x000107c613fc(&UNK_11063b8e8,0x18,7);
      *(long **)(puVar4 + 0x10) = plVar10;
      uStack_88 = 0x1032fe000;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      puStack_98 = &UNK_1000f6b44;
      puStack_90 = &UNK_11063b900;
      ppuVar12 = &puStack_a8;
      puStack_80 = puVar4;
      func_0x000107c60bc4();
      puVar4 = puStack_80;
      func_0x000107c61174(plVar10);
      func_0x000107c61574(puVar4);
      func_0x000107c4e524(pcVar11);
      func_0x000107c60bd0(ppuVar12);
      func_0x000107c61170(plVar10);
      func_0x000107c615e8(pcVar11);
    }
    uVar18 = *(undefined8 *)(unaff_x20 + lVar2);
    uVar17 = uVar18;
    func_0x000107c61174(uVar18);
    FUN_1032f9920(uVar18,param_1,param_2);
    func_0x000107c61170(lVar15);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar17);
    return uVar18;
  }
  return 0;
}



/* Entry: 1032f7c54; end: 1032f7cb3;  */

void FUN_1032f7c54(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = param_2;
  func_0x000107c5faec(param_2);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2,uVar3);
  func_0x000107c61574(uVar2);
  func_0x000107c6142c(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1032f7cb4; end: 1032f8143;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032f7cb4(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long unaff_x20;
  long lVar10;
  undefined8 uVar11;
  undefined1 uVar12;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [40];
  undefined1 auStack_88 [24];
  long lStack_70;
  long lStack_68;
  
  ppuVar9 = &puStack_e0;
  lVar1 = unaff_x20;
  func_0x000107c614f0();
  lVar10 = *(long *)(unaff_x20 + _DAT_112f579c8);
  if (lVar10 == 0) {
    return;
  }
  puVar2 = PTR_PTR_1126a6180;
  func_0x000107c610f8(PTR_PTR_1126a6180);
  func_0x000107c61174();
  func_0x000107c453e4(puVar2);
  uVar11 = *(undefined8 *)(lVar10 + _DAT_113015ec0);
  func_0x000107c6157c(uVar11);
  func_0x0001000d224c(auStack_88);
  func_0x000107c61574(uVar11);
  lVar4 = lStack_68;
  lVar3 = lStack_70;
  if (*(char *)(unaff_x20 + _DAT_112f579d0) == '\x01') {
    func_0x0001000a8868(auStack_88,lStack_70);
    (**(code **)(lVar4 + 0x50))(lVar3,lVar4);
    lVar6 = lStack_68;
    lVar4 = lStack_70;
    if (lVar3 == 0) goto LAB_1032f7e1c;
    func_0x0001000a8868(auStack_88,lStack_70);
    (**(code **)(lVar6 + 0x18))(lVar4,lVar6);
    puVar5 = &UNK_11063b5c8;
    func_0x000107c613fc(&UNK_11063b5c8,0x18,7);
    *(long *)(puVar5 + 0x10) = lVar3;
    func_0x000107c61174(lVar3);
    uVar11 = 0x112dd7568;
    func_0x0001000285a8(0x112dd7568,&UNK_10dbaf4d0);
    lVar6 = 0x1032fddc4;
    func_0x0001000bfde0(0x1032fddc4,puVar5,uVar11);
    func_0x000107c61574(lVar4);
    func_0x000107c61574(puVar5);
    func_0x000107c61170(lVar3);
  }
  else {
LAB_1032f7e1c:
    lVar3 = lStack_68;
    lVar6 = lStack_70;
    func_0x0001000a8868(auStack_88,lStack_70);
    (**(code **)(lVar3 + 0x18))(lVar6,lVar3);
  }
  puVar5 = &UNK_11063b528;
  func_0x000107c613fc(&UNK_11063b528,0x18,7);
  *(long *)(puVar5 + 0x10) = lVar1;
  uVar7 = 0;
  FUN_1032fdeec(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
  func_0x000107c6157c(lVar6);
  uVar11 = 0x1032fdd4c;
  func_0x0001000bfde0(0x1032fdd4c,puVar5,uVar7);
  func_0x000107c61574(lVar6);
  func_0x000107c61574(puVar5);
  func_0x0001004575f0();
  func_0x000107c61574(uVar11);
  puVar8 = puVar5;
  func_0x000107c5cb24(puVar5);
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  func_0x000107c54c98(puVar2);
  func_0x000107c61170(puVar8);
  if (*(long *)(unaff_x20 + _DAT_112f57978) != 0) {
    func_0x0001000d224c(&puStack_e0);
    puVar5 = puStack_e0;
    func_0x000107c49978();
    func_0x000107c615e8(puStack_e0);
    if ((int)puVar5 != 0) {
      func_0x0001000a8868(auStack_88,lStack_70);
      (**(code **)(lStack_68 + 8))(lStack_70,lStack_68);
      uVar12 = 1;
      lVar3 = lStack_70;
      goto LAB_1032f7fa4;
    }
  }
  lVar4 = lStack_68;
  lVar3 = lStack_70;
  func_0x0001000a8868(auStack_88,lStack_70);
  (**(code **)(lVar4 + 0x10))(lVar3,lVar4);
  func_0x0001000a8868(auStack_88,lStack_70);
  (**(code **)(lStack_68 + 0x38))(lStack_70,lStack_68);
  uVar12 = 0;
LAB_1032f7fa4:
  puVar5 = &UNK_11063b550;
  func_0x000107c613fc(&UNK_11063b550,0x18,7);
  *(long *)(puVar5 + 0x10) = lVar1;
  uVar7 = 0;
  FUN_1032fdeec(0,0x112d55188,&PTR_PTR_1126a6188);
  uVar11 = 0x1032fdd54;
  func_0x0001000d5158(0x1032fdd54,puVar5,uVar7);
  func_0x000107c61574(puVar5);
  func_0x0001004575f0();
  func_0x000107c61574(uVar11);
  puVar8 = puVar5;
  func_0x000107c5cb24(puVar5);
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  func_0x000107c58dec(puVar2);
  func_0x000107c61170(puVar8);
  FUN_1032fdd5c(auStack_88,auStack_b0);
  puVar5 = &UNK_11063b578;
  func_0x000107c613fc(&UNK_11063b578,0x40,7);
  puVar5[0x10] = uVar12;
  FUN_1032fdda0(auStack_b0,puVar5 + 0x18);
  uStack_c0 = 0x1032fddb8;
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0x42000000;
  uStack_d0 = 0x1032fe010;
  puStack_c8 = &UNK_11063b590;
  puStack_b8 = puVar5;
  func_0x000107c60bc4(&puStack_e0);
  func_0x000107c61574(puStack_b8);
  func_0x000107c56e4c(puVar2);
  func_0x000107c60bd0(ppuVar9);
  uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112f57938);
  func_0x000107c61174(puVar2);
  func_0x000107c552d8(uVar11);
  func_0x000107c61170(lVar10);
  func_0x000107c61574(lVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61574(lVar6);
  func_0x0001000834e4(auStack_88);
  return;
}



/* Entry: 1032f8144; end: 1032f814f;  */

void FUN_1032f8144(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_58 [24];
  
  puVar2 = auStack_58;
  func_0x000107c61428(param_2 + 0x10,puVar2,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x000107c4b1dc(param_1);
    func_0x000107c61180();
    uVar1 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
    FUN_1032f8150(uVar1,puVar2);
    func_0x000107c61170(param_2);
    func_0x000107c6142c(puVar2);
  }
  return;
}



/* Entry: 1032f8150; end: 1032f85ab;  */

/* WARNING: Possible PIC construction at 0x0001032f81c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032f8298: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032f82c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032f8588: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032f8428: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032f8468: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032f849c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032f84c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032f84f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032f8504: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032f8530: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032f8568: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032f8580: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032f8534) */
/* WARNING: Removing unreachable block (ram,0x0001032f857c) */
/* WARNING: Removing unreachable block (ram,0x0001032f8544) */
/* WARNING: Removing unreachable block (ram,0x0001032f8508) */
/* WARNING: Removing unreachable block (ram,0x0001032f8518) */
/* WARNING: Removing unreachable block (ram,0x0001032f8520) */
/* WARNING: Removing unreachable block (ram,0x0001032f84f8) */
/* WARNING: Removing unreachable block (ram,0x0001032f84c8) */
/* WARNING: Removing unreachable block (ram,0x0001032f84a0) */
/* WARNING: Removing unreachable block (ram,0x0001032f846c) */
/* WARNING: Removing unreachable block (ram,0x0001032f842c) */
/* WARNING: Removing unreachable block (ram,0x0001032f82c4) */
/* WARNING: Removing unreachable block (ram,0x0001032f82d0) */
/* WARNING: Removing unreachable block (ram,0x0001032f8584) */
/* WARNING: Removing unreachable block (ram,0x0001032f829c) */
/* WARNING: Removing unreachable block (ram,0x0001032f81c8) */
/* WARNING: Removing unreachable block (ram,0x0001032f81cc) */
/* WARNING: Removing unreachable block (ram,0x0001032f81d0) */
/* WARNING: Removing unreachable block (ram,0x0001032f8220) */
/* WARNING: Removing unreachable block (ram,0x0001032f81d4) */
/* WARNING: Removing unreachable block (ram,0x0001032f8228) */
/* WARNING: Removing unreachable block (ram,0x0001032f8238) */
/* WARNING: Removing unreachable block (ram,0x0001032f8248) */
/* WARNING: Removing unreachable block (ram,0x0001032f82d4) */
/* WARNING: Removing unreachable block (ram,0x0001032f82dc) */
/* WARNING: Removing unreachable block (ram,0x0001032f82f0) */
/* WARNING: Removing unreachable block (ram,0x0001032f8300) */
/* WARNING: Removing unreachable block (ram,0x0001032f8304) */
/* WARNING: Removing unreachable block (ram,0x0001032f835c) */
/* WARNING: Removing unreachable block (ram,0x0001032f8374) */
/* WARNING: Removing unreachable block (ram,0x0001032f8260) */
/* WARNING: Removing unreachable block (ram,0x0001032f81fc) */
/* WARNING: Removing unreachable block (ram,0x0001032f856c) */
/* WARNING: Removing unreachable block (ram,0x0001032f8580) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032f8150(void)

{
  long lVar1;
  long unaff_x20;
  
  if ((*(byte *)(unaff_x20 + _DAT_112f579d8) & 1) == 0) {
    lVar1 = *(long *)(unaff_x20 + _DAT_112f578c8);
    if (lVar1 != 0) {
      func_0x000107c61174();
      func_0x000107c4b1dc();
      func_0x000107c61180();
      func_0x000107c5faec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 1032f85ac; end: 1032f8657;  */

void FUN_1032f85ac(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_58 [24];
  
  puVar3 = auStack_58;
  func_0x000107c61428(param_2 + 0x10,puVar3,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar1 = param_1;
    func_0x000107c4b1dc(param_1);
    func_0x000107c61180();
    uVar2 = uVar1;
    func_0x000107c5faec();
    func_0x000107c61170(uVar1);
    func_0x000107c5ac14(param_1);
    FUN_1032f8658(uVar2,puVar3,param_1);
    func_0x000107c61170(param_2);
    func_0x000107c6142c(puVar3);
  }
  return;
}



/* Entry: 1032f8658; end: 1032f89f7;  */

/* WARNING: Possible PIC construction at 0x0001032f86c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032f8874: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032f88b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032f88e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032f8910: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032f8940: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032f8950: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032f897c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032f89b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032f89cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032f89b8) */
/* WARNING: Removing unreachable block (ram,0x0001032f8980) */
/* WARNING: Removing unreachable block (ram,0x0001032f89c8) */
/* WARNING: Removing unreachable block (ram,0x0001032f89cc) */
/* WARNING: Removing unreachable block (ram,0x0001032f8990) */
/* WARNING: Removing unreachable block (ram,0x0001032f8954) */
/* WARNING: Removing unreachable block (ram,0x0001032f8964) */
/* WARNING: Removing unreachable block (ram,0x0001032f896c) */
/* WARNING: Removing unreachable block (ram,0x0001032f8944) */
/* WARNING: Removing unreachable block (ram,0x0001032f8914) */
/* WARNING: Removing unreachable block (ram,0x0001032f88ec) */
/* WARNING: Removing unreachable block (ram,0x0001032f88b8) */
/* WARNING: Removing unreachable block (ram,0x0001032f8878) */
/* WARNING: Removing unreachable block (ram,0x0001032f86c4) */
/* WARNING: Removing unreachable block (ram,0x0001032f86c8) */
/* WARNING: Removing unreachable block (ram,0x0001032f86cc) */
/* WARNING: Removing unreachable block (ram,0x0001032f8724) */
/* WARNING: Removing unreachable block (ram,0x0001032f86d0) */
/* WARNING: Removing unreachable block (ram,0x0001032f86f8) */
/* WARNING: Removing unreachable block (ram,0x0001032f8734) */
/* WARNING: Removing unreachable block (ram,0x0001032f873c) */
/* WARNING: Removing unreachable block (ram,0x0001032f87a8) */
/* WARNING: Removing unreachable block (ram,0x0001032f87c0) */
/* WARNING: Removing unreachable block (ram,0x0001032f8700) */
/* WARNING: Removing unreachable block (ram,0x0001032f89d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032f8658(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112f578c8);
  if (lVar1 != 0) {
    func_0x000107c61174();
    func_0x000107c4b1dc();
    func_0x000107c61180();
    func_0x000107c5faec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1032f89f8; end: 1032f8a03;  */

void FUN_1032f89f8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_58 [24];
  
  puVar2 = auStack_58;
  func_0x000107c61428(param_2 + 0x10,puVar2,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x000107c4b1dc(param_1);
    func_0x000107c61180();
    uVar1 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
    FUN_1032f8aa8(uVar1,puVar2);
    func_0x000107c61170(param_2);
    func_0x000107c6142c(puVar2);
  }
  return;
}



/* Entry: 1032f8a04; end: 1032f8aa7;  */

void FUN_1032f8a04(undefined8 param_1,long param_2,code *param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_58 [24];
  
  puVar2 = auStack_58;
  func_0x000107c61428(param_2 + 0x10,puVar2,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x000107c4b1dc(param_1);
    func_0x000107c61180();
    uVar1 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
    (*param_3)(uVar1,puVar2);
    func_0x000107c61170(param_2);
    func_0x000107c6142c(puVar2);
  }
  return;
}



/* Entry: 1032f8aa8; end: 1032f8e5f;  */

/* WARNING: Possible PIC construction at 0x0001032f8b0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032f8ca0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032f8ce4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032f8d18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032f8d40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032f8d70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032f8d80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032f8db8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032f8de4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032f8e1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032f8e34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032f8e20) */
/* WARNING: Removing unreachable block (ram,0x0001032f8de8) */
/* WARNING: Removing unreachable block (ram,0x0001032f8e30) */
/* WARNING: Removing unreachable block (ram,0x0001032f8e34) */
/* WARNING: Removing unreachable block (ram,0x0001032f8df8) */
/* WARNING: Removing unreachable block (ram,0x0001032f8dbc) */
/* WARNING: Removing unreachable block (ram,0x0001032f8dcc) */
/* WARNING: Removing unreachable block (ram,0x0001032f8dd4) */
/* WARNING: Removing unreachable block (ram,0x0001032f8d84) */
/* WARNING: Removing unreachable block (ram,0x0001032f8d74) */
/* WARNING: Removing unreachable block (ram,0x0001032f8d44) */
/* WARNING: Removing unreachable block (ram,0x0001032f8d1c) */
/* WARNING: Removing unreachable block (ram,0x0001032f8ce8) */
/* WARNING: Removing unreachable block (ram,0x0001032f8ca4) */
/* WARNING: Removing unreachable block (ram,0x0001032f8b10) */
/* WARNING: Removing unreachable block (ram,0x0001032f8b14) */
/* WARNING: Removing unreachable block (ram,0x0001032f8b18) */
/* WARNING: Removing unreachable block (ram,0x0001032f8b68) */
/* WARNING: Removing unreachable block (ram,0x0001032f8b1c) */
/* WARNING: Removing unreachable block (ram,0x0001032f8b70) */
/* WARNING: Removing unreachable block (ram,0x0001032f8bd4) */
/* WARNING: Removing unreachable block (ram,0x0001032f8bec) */
/* WARNING: Removing unreachable block (ram,0x0001032f8b44) */
/* WARNING: Removing unreachable block (ram,0x0001032f8e38) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032f8aa8(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112f578c8);
  if (lVar1 != 0) {
    func_0x000107c61174();
    func_0x000107c4b1dc();
    func_0x000107c61180();
    func_0x000107c5faec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1032f8e60; end: 1032f8f4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032f8e60(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  puVar2 = (undefined *)(param_2 + 0x10);
  func_0x000107c61618();
  lVar1 = _DAT_112f57b30;
  if (puVar2 != (undefined *)0x0) {
    lVar4 = *(long *)(puVar2 + _DAT_112f578c0);
    if ((lVar4 == 0) ||
       (func_0x000107c61428(lVar4 + _DAT_112f57b30,auStack_60,0,0), puVar3 = puVar2,
       (*(byte *)(lVar4 + lVar1) & 1) == 0)) {
      uVar5 = *(undefined8 *)(puVar2 + _DAT_112f57990);
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c61174(uVar5);
      func_0x000107c45a48(puVar3);
      func_0x000107c4d664(uVar5);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(uVar5);
    }
    func_0x000107c61170(puVar3);
    return;
  }
  return;
}



/* Entry: 1032f8f50; end: 1032f8f63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032f8f50(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f57970);
  func_0x000107c5e39c(uVar1);
  func_0x000107c61180();
  puVar2 = &UNK_11063b258;
  func_0x000107c613fc(&UNK_11063b258,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  uStack_50 = 0x1032fdd44;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_100c1de60;
  puStack_58 = &UNK_11063b4f0;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c61574(puStack_48);
  uVar4 = uVar1;
  func_0x000107c5c320(uVar1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c3e924(uVar4);
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 1032f8f64; end: 1032f9173;  */

/* WARNING: Possible PIC construction at 0x0001032f8fac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032f8fd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032f9050: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032f909c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032f90e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032f9148: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032f9130: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032f90ec) */
/* WARNING: Removing unreachable block (ram,0x0001032f9104) */
/* WARNING: Removing unreachable block (ram,0x0001032f9134) */
/* WARNING: Removing unreachable block (ram,0x0001032f9138) */
/* WARNING: Removing unreachable block (ram,0x0001032f90a0) */
/* WARNING: Removing unreachable block (ram,0x0001032f9108) */
/* WARNING: Removing unreachable block (ram,0x0001032f90a4) */
/* WARNING: Removing unreachable block (ram,0x0001032f90b4) */
/* WARNING: Removing unreachable block (ram,0x0001032f90bc) */
/* WARNING: Removing unreachable block (ram,0x0001032f9054) */
/* WARNING: Removing unreachable block (ram,0x0001032f8fdc) */
/* WARNING: Removing unreachable block (ram,0x0001032f8fb0) */
/* WARNING: Removing unreachable block (ram,0x0001032f8fc4) */
/* WARNING: Removing unreachable block (ram,0x0001032f914c) */

void FUN_1032f8f64(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    func_0x000107c61434(0xe000000000000000);
    puVar1 = PTR_PTR_1126ad080;
    func_0x000107c610f8(PTR_PTR_1126ad080);
    param_1 = 0;
    func_0x000107c5fadc(0,0xe000000000000000);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c5fadc(0,0xe000000000000000);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c48c88(puVar1);
  }
  else {
    func_0x000107c41184(param_1);
    func_0x000107c61180();
    func_0x000107c5faec();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1032f9174; end: 1032f9187;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032f9174(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f57970);
  func_0x000107c5e39c(uVar1);
  func_0x000107c61180();
  puVar2 = &UNK_11063b258;
  func_0x000107c613fc(&UNK_11063b258,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  pcStack_50 = FUN_1032fdd3c;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_100c1de60;
  puStack_58 = &UNK_11063b478;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c61574(puStack_48);
  uVar4 = uVar1;
  func_0x000107c5c320(uVar1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c3e924(uVar4);
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 1032f9188; end: 1032f927f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032f9188(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f57970);
  func_0x000107c5e39c(uVar1);
  func_0x000107c61180();
  puVar2 = &UNK_11063b258;
  func_0x000107c613fc(&UNK_11063b258,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_100c1de60;
  uStack_58 = param_2;
  uStack_50 = param_1;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c61574(puStack_48);
  uVar4 = uVar1;
  func_0x000107c5c320(uVar1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c3e924(uVar4);
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 1032f9280; end: 1032f92fb; -[_TtC28SCInLensCreationTrendingList29ILCTrendingListViewController initWithCoder:] */

void FUN_1032f9280(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_1032fcc60();
  return;
}



/* Entry: 1032f92fc; end: 1032f9613;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032f92fc(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c42810();
    func_0x000107c61170(lVar2);
    FUN_1032fa688(1);
    lVar2 = *(long *)(unaff_x20 + _DAT_112f578c8);
    if (lVar2 != 0) {
      uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f57918);
      func_0x000107c61174();
      func_0x000107c61174();
      lVar7 = lVar2;
      func_0x0001032fa904();
      lVar3 = lVar2;
      func_0x000107c4b1dc();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c5faec();
        func_0x000107c5fadc();
        func_0x000107c6142c(param_2);
      }
      puVar4 = PTR_PTR_1126a6170;
      func_0x000107c610f8(PTR_PTR_1126a6170);
      FUN_1032f631c();
      puVar5 = &UNK_11063b4b0;
      func_0x000107c613fc(&UNK_11063b4b0,0x18,7);
      *(undefined8 *)(puVar5 + 0x10) = uVar8;
      uStack_70 = 0x1032fe020;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_10101ccb4;
      puStack_78 = &UNK_11063b4c8;
      ppuVar6 = &puStack_90;
      puStack_68 = puVar5;
      func_0x000107c60bc4(ppuVar6);
      puVar5 = puStack_68;
      func_0x000107c61174(uVar8);
      func_0x000107c61574(puVar5);
      func_0x000107c472e4(puVar4);
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c61170(lVar3);
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c61174(puVar4);
      func_0x000107c46ecc(puVar5);
      func_0x000107c5a1f4(puVar4);
      func_0x000107c61170(puVar5);
      func_0x000107c553cc(puVar4);
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c45a48();
      func_0x000107c52670(puVar4);
      func_0x000107c61170(puVar5);
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c45a48();
      func_0x000107c57d00(puVar4);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar4);
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c45a48();
      func_0x000107c59784(puVar4);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar7);
      lVar3 = 0;
      if (*(long *)(unaff_x20 + _DAT_112f579e8) != 0) {
        FUN_103305e38();
        lVar3 = lVar7;
      }
      func_0x000107c53954(puVar4);
      func_0x000107c61170(lVar3);
      lVar7 = *(long *)(unaff_x20 + _DAT_112f578e8);
      if (lVar7 != 0) {
        puVar5 = puVar4;
        func_0x000107c61174(puVar4);
        func_0x000107c61174(lVar7);
        func_0x000107c5a588();
        func_0x000107c61170(lVar7);
        func_0x000107c61170(puVar5);
      }
      func_0x000107c61170(puVar4);
      func_0x000107c61170(lVar2);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032f9614);
  (*pcVar1)();
}



/* Entry: 1032f9614; end: 1032f965f;  */

void FUN_1032f9614(long param_1,undefined8 param_2)

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



/* Entry: 1032f9660; end: 1032f96ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032f9660(undefined8 param_1,long param_2)

{
  undefined8 uStack_40;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    if ((*(long *)(param_2 + _DAT_112f578c0) == 0) && (*(long *)(param_2 + _DAT_112f57978) != 0)) {
      func_0x0001000d224c(&uStack_40);
      func_0x000107c41810(0,uStack_40);
      func_0x000107c615e8(uStack_40);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1032f96f0; end: 1032f9873;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032f96f0(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar6 = *(long *)(param_1 + _DAT_112f578d0);
    func_0x000107c615f0(lVar6);
    func_0x000107c61170(param_1);
    uVar2 = 0;
    FUN_10330464c(0);
    lVar3 = lVar6;
    func_0x000107c61480(lVar6,uVar2);
    if (lVar3 == 0) {
      func_0x000107c615e8(lVar6);
    }
    else {
      uVar4 = lVar3 + _DAT_112f57cc8;
      func_0x000107c61618();
      func_0x000107c615e8(lVar6);
      if (uVar4 != 0) {
        uVar5 = uVar4;
        func_0x000107c4abf4();
        func_0x000107c61180();
        func_0x000107c61170(uVar4);
        uVar2 = 0;
        FUN_1032fdeec(0,0x112f55f38,&PTR__OBJC_CLASS___UILayoutGuide_1126af090);
        uVar4 = uVar5;
        func_0x000107c5fc54(uVar5,uVar2);
        func_0x000107c61170(uVar5);
        if (uVar4 >> 0x3e == 0) {
          uVar5 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar5 = uVar4 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar4) {
            uVar5 = uVar4;
          }
          func_0x000107c60480();
        }
        if (uVar5 == 0) {
          func_0x000107c6142c(uVar4);
        }
        else {
          if ((uVar4 & 0xc000000000000001) == 0) {
            if (*(long *)((uVar4 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1032f9874);
              (*pcVar1)();
            }
            func_0x000107c61174(*(undefined8 *)(uVar4 + 0x20));
          }
          else {
            FUN_1032fc730(0,uVar4,&PTR__OBJC_CLASS___UILayoutGuide_1126af090,0x112f55f38);
          }
          func_0x000107c6142c(uVar4);
        }
      }
    }
  }
  return;
}



/* Entry: 1032f9874; end: 1032f991f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032f9874(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar3 = *(long *)(param_1 + _DAT_112f578d0);
    func_0x000107c615f0(lVar3);
    func_0x000107c61170(param_1);
    uVar1 = 0;
    FUN_10330464c(0);
    lVar2 = lVar3;
    func_0x000107c61480(lVar3,uVar1);
    if (lVar2 == 0) {
      func_0x000107c615e8(lVar3);
    }
    else {
      func_0x000107c61618(lVar2 + _DAT_112f57cc8);
      func_0x000107c615e8(lVar3);
    }
  }
  return;
}



/* Entry: 1032f9920; end: 1032f9cef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1032f9920(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  
  if (param_1 != 0) {
    puVar1 = *(undefined **)(param_1 + _DAT_112f57aa0);
    func_0x000107c5cb24();
    func_0x000107c61180();
    if (puVar1 != (undefined *)0x0) goto LAB_1032f99a4;
  }
  puVar2 = PTR_PTR_1126ae6b8;
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  func_0x000107c42538();
  func_0x000107c61180();
  puVar1 = puVar2;
  func_0x000107c5cb24();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
LAB_1032f99a4:
  puVar2 = &UNK_11063b258;
  puVar3 = puVar2;
  func_0x000107c613fc(&UNK_11063b258,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar4 = puVar2;
  func_0x000107c613fc(&UNK_11063b258,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  func_0x000107c613fc(&UNK_11063b258,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar5 = PTR_PTR_1126ad088;
  func_0x000107c610f8(PTR_PTR_1126ad088);
  func_0x000107c6157c(puVar3);
  func_0x000107c6157c(puVar4);
  func_0x000107c6157c(puVar2);
  func_0x000107c5fadc(param_2,param_3);
  puVar9 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_88 = FUN_1032fddec;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_100288f10;
  puStack_90 = &UNK_11063b630;
  ppuVar6 = &puStack_a8;
  puStack_80 = puVar3;
  func_0x000107c60bc4(ppuVar6);
  uStack_b8 = 0x1032fddf4;
  puStack_d8 = puVar9;
  uStack_d0 = 0x42000000;
  puStack_c8 = &UNK_1000f6b44;
  puStack_c0 = &UNK_11063b658;
  ppuVar7 = &puStack_d8;
  puStack_b0 = puVar4;
  func_0x000107c60bc4(ppuVar7);
  uStack_e8 = 0x1032fddfc;
  puStack_108 = puVar9;
  uStack_100 = 0x42000000;
  puStack_f8 = &UNK_100c75f50;
  puStack_f0 = &UNK_11063b680;
  ppuVar8 = &puStack_108;
  puStack_e0 = puVar2;
  func_0x000107c60bc4(ppuVar8);
  func_0x000107c472d4(puVar5);
  func_0x000107c61170(puVar1);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61170(param_2);
  func_0x000107c61574(puStack_e0);
  func_0x000107c61574(puStack_b0);
  puVar1 = puStack_80;
  func_0x000107c61574(puVar3);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar1);
  puVar1 = &UNK_11063b258;
  puVar9 = puVar1;
  func_0x000107c613fc(&UNK_11063b258,0x18,7);
  func_0x000107c61614(puVar9 + 0x10);
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_88 = FUN_1032fde04;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_100f7177c;
  puStack_90 = &UNK_11063b6a8;
  ppuVar6 = &puStack_a8;
  puStack_80 = puVar9;
  func_0x000107c60bc4(ppuVar6);
  func_0x000107c61574(puStack_80);
  func_0x000107c56d98(puVar5);
  func_0x000107c60bd0(ppuVar6);
  puVar9 = puVar1;
  func_0x000107c613fc(&UNK_11063b258,0x18,7);
  func_0x000107c61614(puVar9 + 0x10);
  pcStack_88 = (code *)0x1032fde34;
  puStack_a8 = puVar2;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_100f7177c;
  puStack_90 = &UNK_11063b6d0;
  ppuVar6 = &puStack_a8;
  puStack_80 = puVar9;
  func_0x000107c60bc4(ppuVar6);
  func_0x000107c61574(puStack_80);
  func_0x000107c56f2c(puVar5);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c613fc(&UNK_11063b258,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  pcStack_88 = FUN_1032fde64;
  puStack_a8 = puVar2;
  uStack_a0 = 0x42000000;
  puStack_98 = (undefined *)0x1032fa638;
  puStack_90 = &UNK_11063b6f8;
  ppuVar6 = &puStack_a8;
  puStack_80 = puVar1;
  func_0x000107c60bc4(ppuVar6);
  func_0x000107c61574(puStack_80);
  func_0x000107c56f28(puVar5);
  func_0x000107c60bd0(ppuVar6);
  return puVar5;
}



/* Entry: 1032f9cf0; end: 1032f9e07;  */

void FUN_1032f9cf0(undefined1 param_1,long param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  pcVar1 = "makeActiveStateParams(from:lensId:)";
  func_0x0001000c10c0("makeActiveStateParams(from:lensId:)");
  func_0x000107c61180();
  puVar2 = &UNK_11063b258;
  func_0x000107c613fc(&UNK_11063b258,0x18,7);
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618(param_2);
  func_0x000107c61614(puVar2 + 0x10,param_2);
  func_0x000107c61170(param_2);
  puVar3 = &UNK_11063b898;
  func_0x000107c613fc(&UNK_11063b898,0x19,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  puVar3[0x18] = param_1;
  uStack_58 = 0x1032fded0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x42000000;
  puStack_68 = &UNK_1000f6b44;
  puStack_60 = &UNK_11063b8b0;
  ppuVar4 = &puStack_78;
  puStack_50 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  func_0x000107c61574(puStack_50);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 1032f9e08; end: 1032f9f37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032f9e08(long param_1,uint param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  lVar4 = _DAT_112f578c0;
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + _DAT_112f578c0);
    uVar3 = 0;
    if (lVar1 != 0) {
      func_0x000107c61174();
      FUN_1032ff800(param_2 & 1);
      func_0x000107c42194(*(undefined8 *)(lVar1 + _DAT_112f57a98));
      puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
      func_0x000107c61168(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
      func_0x000107c41570();
      func_0x000107c61180();
      func_0x000107c4ffa0();
      func_0x000107c61170(lVar1);
      func_0x000107c61170(puVar2);
      uVar3 = *(undefined8 *)(param_1 + lVar4);
    }
    *(undefined8 *)(param_1 + lVar4) = 0;
    func_0x000107c61170(uVar3);
    if ((param_2 & 1) != 0) {
      lVar4 = param_1 + _DAT_112f578b8;
      func_0x000107c61428(lVar4,auStack_70,0,0);
      lVar1 = lVar4;
      func_0x000107c61618();
      if (lVar1 != 0) {
        lVar5 = *(long *)(lVar4 + 8);
        lVar4 = lVar1;
        func_0x000107c614f0();
        (**(code **)(lVar5 + 8))(param_1,lVar4,lVar5);
        func_0x000107c615e8(lVar1);
      }
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1032f9f38; end: 1032f9f8b;  */

void FUN_1032f9f38(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_1032f9f8c();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1032f9f8c; end: 1032fa33b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032f9f8c(void)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  
  ppuVar2 = &puStack_70;
  if (*(long *)(unaff_x20 + _DAT_112f57998) != 0) {
    lVar1 = *(long *)(*(long *)(unaff_x20 + _DAT_112f57998) + _DAT_113074f60);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x000107c4193c();
      func_0x0001000dbbdc();
      pcStack_50 = FUN_1032fa684;
      uStack_48 = 0;
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0x42000000;
      puStack_60 = &UNK_1000f6b44;
      puStack_58 = &UNK_11063b860;
      func_0x000107c60bc4(&puStack_70);
      uVar3 = 0xd000000000000015;
      func_0x000107c5fadc(0xd000000000000015,0x800000010f13d430);
      func_0x000107c540a8(lVar1);
      func_0x000107c61170(uVar3);
      func_0x000107c60bd0(ppuVar2);
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 1032fa33c; end: 1032fa41b;  */

void FUN_1032fa33c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  char *pcVar2;
  undefined **ppuVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  ppuVar3 = &puStack_80;
  pcVar2 = "makeActiveStateParams(from:lensId:)";
  func_0x0001000c10c0("makeActiveStateParams(from:lensId:)");
  func_0x000107c61180();
  func_0x000107c613fc(param_3,0x20,7);
  *(undefined8 *)(param_3 + 0x10) = param_2;
  *(undefined8 *)(param_3 + 0x18) = param_1;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  uStack_68 = param_5;
  uStack_60 = param_4;
  lStack_58 = param_3;
  func_0x000107c60bc4(&puStack_80);
  lVar1 = lStack_58;
  func_0x000107c6157c(param_2);
  func_0x000107c61574(lVar1);
  func_0x000107c4e524(pcVar2);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar2);
  return;
}



/* Entry: 1032fa41c; end: 1032fa683;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032fa41c(undefined8 param_1,long param_2,code *param_3)

{
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    if (*(long *)(param_2 + _DAT_112f578c0) != 0) {
      func_0x000107c61174(*(long *)(param_2 + _DAT_112f578c0));
      func_0x000107c61170(param_2);
      (*param_3)(param_1);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1032fa684; end: 1032fa687;  */

void FUN_1032fa684(void)

{
  return;
}



/* Entry: 1032fa688; end: 1032faa0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032fa688(uint param_1,undefined1 *param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lVar8;
  undefined1 auStack_58 [24];
  
  lVar6 = _DAT_112f57b30;
  lVar8 = *(long *)(unaff_x20 + _DAT_112f578c0);
  if (lVar8 != 0) {
    param_2 = auStack_58;
    func_0x000107c61428(lVar8 + _DAT_112f57b30,param_2,0,0);
    if ((*(byte *)(lVar8 + lVar6) & 1) != 0) {
      return;
    }
  }
  lVar6 = _DAT_112f578c8;
  uVar2 = *(ulong *)(unaff_x20 + _DAT_112f578c8);
  if (uVar2 != 0) {
    func_0x000107c61174();
    uVar3 = uVar2;
    func_0x0001032fcda8();
    func_0x000107c61170(uVar2);
    if ((uVar3 & 1) != 0) goto LAB_1032fa70c;
  }
  param_1 = 1;
LAB_1032fa70c:
  lVar8 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1032fa8f8);
    (*pcVar1)();
  }
  func_0x000107c550d8();
  func_0x000107c61170(lVar8);
  if ((param_1 & 1) == 0) {
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112f578d0);
    lVar6 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1032fa900);
      (*pcVar1)();
    }
    func_0x000107c4ee3c(uVar7);
    func_0x000107c61170(lVar6);
    FUN_1032fc060();
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112f578d8);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c46ecc();
    func_0x000107c4d664(uVar7);
  }
  else {
    lVar8 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar8 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1032fa8fc);
      (*pcVar1)();
    }
    lVar4 = lVar8;
    func_0x000107c5c42c();
    func_0x000107c61180();
    func_0x000107c61170(lVar8);
    if (lVar4 != 0) {
      func_0x000107c61170(lVar4);
      lVar8 = unaff_x20;
      func_0x000107c4e360();
      func_0x000107c61180();
      if (lVar8 != 0) {
        func_0x000107c61170();
        func_0x000107c5e37c();
        func_0x000107c4ff2c();
      }
      lVar8 = unaff_x20;
      func_0x000107c5de64();
      func_0x000107c61180();
      if (lVar8 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1032fa904);
        (*pcVar1)();
      }
      func_0x000107c4ff34();
      func_0x000107c61170(lVar8);
    }
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112f578d8);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c46ecc();
    func_0x000107c4d664(uVar7);
    func_0x000107c61170(puVar5);
    puVar5 = *(undefined **)(unaff_x20 + lVar6);
    if (puVar5 == (undefined *)0x0) {
      return;
    }
    func_0x000107c4b1dc();
    func_0x000107c61180();
    if (puVar5 == (undefined *)0x0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(param_2);
    }
    lVar6 = *(long *)(unaff_x20 + _DAT_112f578e0);
    if (lVar6 != 0) {
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar6 != 0) {
        func_0x000107c5e374();
        func_0x000107c615e8(lVar6);
      }
    }
  }
  func_0x000107c61170(puVar5);
  return;
}



/* Entry: 1032faa10; end: 1032fb20b;  */

/* WARNING: Possible PIC construction at 0x0001032faacc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032faba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032fae0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032fac74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032fac38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032fac78) */
/* WARNING: Removing unreachable block (ram,0x0001032faba4) */
/* WARNING: Removing unreachable block (ram,0x0001032fabb0) */
/* WARNING: Removing unreachable block (ram,0x0001032faad0) */
/* WARNING: Removing unreachable block (ram,0x0001032faadc) */
/* WARNING: Removing unreachable block (ram,0x0001032fac3c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032faa10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined1 *param_6)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  long lVar10;
  undefined1 *puVar11;
  long unaff_x20;
  undefined8 uVar12;
  long lVar13;
  undefined1 auStack_c8 [24];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  
  puVar11 = param_6;
  if (param_5 != 0) {
    uVar3 = param_5;
    func_0x000107c4b1dc();
    func_0x000107c61180();
    uVar2 = uVar3;
    func_0x000107c5faec();
    puVar11 = param_6;
    func_0x000107c61170(uVar3);
    uVar3 = *(ulong *)(unaff_x20 + _DAT_112f578c8);
    if (uVar3 != 0) {
      func_0x000107c4b1dc();
      func_0x000107c61180();
      uVar4 = uVar3;
      func_0x000107c5faec();
      func_0x000107c61170(uVar3);
      if (uVar2 != uVar4 || param_6 != puVar11) {
        func_0x000107c605b8(uVar2,param_6,uVar4,puVar11,0);
      }
      goto code_r0x000107c6142c;
    }
    func_0x000107c6142c(param_6);
  }
  uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112f578c8);
  *(ulong *)(unaff_x20 + _DAT_112f578c8) = param_5;
  uVar3 = param_5;
  func_0x000107c61174();
  func_0x000107c61170(uVar12);
  puVar5 = *(undefined **)(unaff_x20 + _DAT_112f578c0);
  param_6 = puVar11;
  if (puVar5 != (undefined *)0x0) {
    uVar2 = *(ulong *)(*(long *)(puVar5 + _DAT_112f57b38) + _DAT_113082a18);
    param_6 = (undefined1 *)((ulong *)(*(long *)(puVar5 + _DAT_112f57b38) + _DAT_113082a18))[1];
    func_0x000107c61174();
    lVar7 = _DAT_112f57b30;
    if (param_5 != 0) {
      func_0x000107c61434(param_6);
      func_0x000107c4b1dc();
      func_0x000107c61180();
      uVar4 = uVar3;
      func_0x000107c5faec();
      func_0x000107c61170(uVar3);
      if (uVar2 == uVar4 && param_6 == puVar11) {
        func_0x000107c61170(puVar5);
      }
      else {
        func_0x000107c605b8(uVar2,param_6,uVar4,puVar11,0);
      }
      goto code_r0x000107c6142c;
    }
    param_6 = auStack_c8;
    func_0x000107c61428(puVar5 + _DAT_112f57b30,param_6,0,0);
    puVar6 = puVar5;
    if (puVar5[lVar7] == '\x01') {
      uVar12 = *(undefined8 *)(puVar5 + _DAT_112f57aa0);
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c45a48();
      func_0x000107c4d664(uVar12);
      func_0x000107c61170(puVar5);
    }
    func_0x000107c61170(puVar6);
  }
  if (param_5 != 0) {
    func_0x000107c61174();
    uVar2 = uVar3;
    func_0x0001032fcda8();
    if ((uVar2 & 1) != 0) {
      if (*(long *)(unaff_x20 + _DAT_112f57978) != 0) {
        func_0x0001000d224c(&puStack_b0);
        func_0x000107c5e388(puStack_b0);
        func_0x000107c615e8(puStack_b0);
      }
      lVar13 = *(long *)(unaff_x20 + _DAT_112f57918);
      lVar7 = lVar13;
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar7 != 0) {
        func_0x000107c3fb20();
        func_0x000107c615e8(lVar7);
      }
      uVar2 = uVar3;
      FUN_1032fb20c();
      uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112f57950);
      *(ulong *)(unaff_x20 + _DAT_112f57950) = uVar2;
      func_0x000107c61170(uVar12);
      uVar2 = uVar3;
      func_0x0001032fa904();
      uVar4 = uVar2;
      func_0x0001032f6474();
      if (((uVar4 & 1) == 0) && (*(char *)(unaff_x20 + _DAT_112f579c0) == '\x01')) {
        func_0x0001032f631c();
      }
      func_0x000107c61174();
      uVar4 = uVar3;
      func_0x000107c4b1dc();
      func_0x000107c61180();
      if (uVar4 != 0) {
        puVar6 = PTR_PTR_1126a6170;
        func_0x000107c610f8(PTR_PTR_1126a6170);
        func_0x0001032f631c();
        puVar5 = &UNK_11063b208;
        func_0x000107c613fc(&UNK_11063b208,0x18,7);
        *(long *)(puVar5 + 0x10) = lVar13;
        pcStack_90 = FUN_1032fcec4;
        puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a8 = 0x42000000;
        puStack_a0 = &UNK_10101ccb4;
        puStack_98 = &UNK_11063b220;
        ppuVar8 = &puStack_b0;
        puStack_88 = puVar5;
        func_0x000107c60bc4(ppuVar8);
        puVar5 = puStack_88;
        func_0x000107c61174(lVar13);
        func_0x000107c61574(puVar5);
        func_0x000107c472e4(puVar6);
        func_0x000107c60bd0(ppuVar8);
        func_0x000107c61170(uVar4);
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x000107c61174(puVar6);
        func_0x000107c46ecc(puVar5);
        func_0x000107c5a1f4(puVar6);
        func_0x000107c61170(puVar5);
        func_0x000107c553cc(puVar6);
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x000107c45a48();
        func_0x000107c52670(puVar6);
        func_0x000107c61170(puVar5);
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x000107c45a48();
        func_0x000107c57d00(puVar6);
        func_0x000107c61170(puVar5);
        func_0x000107c61170(puVar6);
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x000107c45a48();
        func_0x000107c555ec(puVar6);
        func_0x000107c61170(puVar5);
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x000107c45a48();
        func_0x000107c59784(puVar6);
        func_0x000107c61170(puVar5);
        func_0x000107c61170(uVar3);
        func_0x000107c61170(uVar2);
        uVar4 = 0;
        if (*(long *)(unaff_x20 + _DAT_112f579e8) != 0) {
          FUN_103305e38();
          uVar4 = uVar2;
        }
        func_0x000107c53954(puVar6);
        func_0x000107c61170(uVar4);
        lVar7 = _DAT_112f578e8;
        if (*(long *)(unaff_x20 + _DAT_112f578e8) == 0) {
          puVar5 = PTR_PTR_1126ad078;
          func_0x000107c610f8();
          func_0x000107c49520();
          uVar12 = *(undefined8 *)(unaff_x20 + lVar7);
          *(undefined **)(unaff_x20 + lVar7) = puVar5;
          func_0x000107c61174();
          func_0x000107c61170(uVar12);
          func_0x000107c5a568();
          func_0x000107c61170(puVar5);
          lVar7 = unaff_x20;
          func_0x000107c5de64();
          func_0x000107c61180();
          if (lVar7 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1032fb208);
            (*pcVar1)();
          }
          func_0x000107c5a050();
          func_0x000107c61170();
          func_0x0001008478a8();
          func_0x000107c613fc();
          uVar12 = 1;
          *(undefined8 *)(lVar7 + 0x18) = 3;
          *(undefined8 *)(lVar7 + 0x10) = 1;
          func_0x000107c5de64();
          func_0x000107c61180();
          if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1032fb20c);
            (*pcVar1)();
          }
          puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
          func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
          lVar13 = unaff_x20;
          func_0x000107c5e308();
          func_0x000107c61180();
          func_0x000107c61170(unaff_x20);
          puVar9 = PTR__OBJC_CLASS___UIScreen_1126aea10;
          func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
          func_0x000107c4c194();
          func_0x000107c61180();
          func_0x000107c3ec60();
          func_0x000107c61170(puVar9);
          func_0x000107c609cc(uVar12,param_2,param_3,param_4);
          lVar10 = lVar13;
          func_0x000107c40290();
          func_0x000107c61180();
          func_0x000107c61170(lVar13);
          *(long *)(lVar7 + 0x20) = lVar10;
          uVar12 = 0;
          FUN_1032fdeec(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
          lVar13 = lVar7;
          func_0x000107c5fc48(lVar7,uVar12);
          func_0x000107c61574(lVar7);
          func_0x000107c3d048(puVar5);
          func_0x000107c61170(lVar13);
        }
        else {
          func_0x000107c5a588();
        }
        func_0x0001032fa688(0);
        func_0x000107c61170(uVar3);
        func_0x000107c61170(puVar6);
        return;
      }
      func_0x000107c5faec();
      func_0x000107c5fadc();
code_r0x000107c6142c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_6);
      return;
    }
    func_0x000107c61170(uVar3);
  }
  lVar7 = *(long *)(unaff_x20 + _DAT_112f57918);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar7 != 0) {
    func_0x000107c3fb20();
    func_0x000107c615e8(lVar7);
  }
  func_0x0001032fa688(1);
  return;
}



/* Entry: 1032fb20c; end: 1032fb80b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032fb20c(ulong param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  
  uVar2 = param_1;
  func_0x000107c4b1dc();
  func_0x000107c61180();
  uVar1 = uVar2;
  func_0x000107c5faec();
  lVar7 = param_2;
  func_0x000107c61170(uVar2);
  uVar2 = *(ulong *)(unaff_x20 + _DAT_112f57930);
  if (uVar2 == 0) {
    func_0x000107c6142c(param_2);
  }
  else {
    func_0x000107c4b1dc();
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c5faec();
    func_0x000107c61170(uVar2);
    if (uVar1 == uVar3 && param_2 == lVar7) {
      func_0x000107c6142c(param_2);
      func_0x000107c6142c(lVar7);
      return;
    }
    lVar8 = param_2;
    func_0x000107c605b8(uVar1,param_2,uVar3,lVar7,0);
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(lVar7);
    lVar7 = lVar8;
    if ((uVar1 & 1) != 0) {
      return;
    }
  }
  func_0x000107c4119c();
  func_0x000107c61180();
  if (param_1 != 0) {
    uVar2 = param_1;
    func_0x000107c4ec4c();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    if (uVar2 != 0) {
      puVar4 = PTR_PTR_1126ae820;
      func_0x000107c610f8(PTR_PTR_1126ae820);
      func_0x000107c453e4();
      uVar1 = uVar2;
      func_0x000107c4f1b8();
      func_0x000107c61180();
      if (uVar1 == 0) {
        uVar1 = uVar2;
        func_0x000107c41184(uVar2);
        func_0x000107c61180();
      }
      uVar3 = uVar1;
      func_0x000107c5faec();
      lVar8 = lVar7;
      func_0x000107c61170(uVar1);
      uVar1 = uVar2;
      func_0x000107c41184();
      func_0x000107c61180();
      if (uVar1 == 0) {
        func_0x000107c5faec();
        func_0x000107c5fadc();
        func_0x000107c6142c(lVar8);
      }
      puVar5 = PTR_PTR_1126ad080;
      func_0x000107c610f8(PTR_PTR_1126ad080);
      lVar8 = lVar7;
      func_0x000107c5fadc(uVar3,lVar7);
      func_0x000107c6142c(lVar7);
      func_0x000107c48c88(puVar5);
      func_0x000107c61170(uVar3);
      func_0x000107c61170(uVar1);
      uVar1 = uVar2;
      func_0x000107c41198();
      func_0x000107c61180();
      lVar7 = lVar8;
      if (uVar1 == 0) {
        func_0x000107c5faec();
        lVar7 = lVar8;
        func_0x000107c5fadc();
        func_0x000107c6142c(lVar8);
      }
      func_0x000107c55210(puVar5);
      func_0x000107c61170(uVar1);
      puVar6 = PTR_PTR_1133d30b0;
      func_0x000107c5faec(PTR_PTR_1133d30b0);
      func_0x000107c5fadc();
      func_0x000107c6142c(lVar7);
      func_0x000107c57980(puVar5);
      func_0x000107c61170(puVar6);
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c46ecc();
      func_0x000107c5798c(puVar5);
      func_0x000107c61170(puVar6);
      func_0x000107c4d664(puVar4);
      func_0x000107c5cb24(puVar4);
      func_0x000107c61180();
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(uVar2);
    }
  }
  return;
}



/* Entry: 1032fb80c; end: 1032fbc17;  */

void FUN_1032fb80c(long *param_1,undefined8 *param_2,ulong *param_3)

{
  ulong *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  undefined *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong uStack_70;
  
  puVar15 = (ulong *)*param_2;
  func_0x00010193fb30();
  puVar10 = (ulong *)(((ulong)*(uint *)(param_2 + 6) + 7 & 0x1fffffff8) + 8);
  func_0x000107c613fc();
  param_2[3] = 3;
  param_2[2] = 1;
  param_2[4] = param_3;
  if ((ulong)puVar15 >> 0x3e == 0) {
    puVar13 = *(ulong **)(((ulong)puVar15 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar13 = (ulong *)((ulong)puVar15 & 0xffffffffffffff8);
    if ((ulong *)0x7fffffffffffffff < puVar15) {
      puVar13 = puVar15;
    }
    func_0x000107c60480();
  }
  uStack_70 = (ulong)puVar15 & 0xffffffffffffff8;
  func_0x000107c61174();
  puVar4 = PTR__swift_isaMask_11034f488;
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar13 != (ulong *)0x0) {
    puVar14 = (ulong *)0x0;
    do {
      while( true ) {
        if (((ulong)puVar15 & 0xc000000000000001) == 0) {
          if (*(ulong **)(uStack_70 + 0x10) <= puVar14) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1032fba88);
            (*pcVar5)();
          }
          puVar6 = (ulong *)puVar15[(long)puVar14 + 4];
          func_0x000107c61174();
          puVar12 = puVar10;
        }
        else {
          puVar6 = puVar14;
          puVar12 = puVar15;
          func_0x00010101b920();
        }
        puVar1 = (ulong *)((long)puVar14 + 1);
        if (SCARRY8((long)puVar14,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1032fba84);
          (*pcVar5)();
        }
        puVar7 = puVar6;
        (**(code **)((*(ulong *)puVar4 & *puVar6) + 0x78))();
        puVar8 = puVar7;
        puVar11 = puVar12;
        (**(code **)((*(ulong *)puVar4 & *param_3) + 0x78))();
        if (puVar7 != puVar8 || puVar12 != puVar11) break;
        puVar10 = puVar11;
        func_0x000107c61170(puVar6);
        func_0x000107c6142c(puVar12);
        func_0x000107c6142c(puVar11);
LAB_1032fb8d4:
        puVar14 = (ulong *)((long)puVar14 + 1);
        if (puVar1 == puVar13) goto LAB_1032fba44;
      }
      puVar10 = puVar12;
      func_0x000107c605b8(puVar7,puVar12,puVar8,puVar11,0);
      func_0x000107c6142c(puVar12);
      func_0x000107c6142c(puVar11);
      if (((ulong)puVar7 & 1) != 0) {
        func_0x000107c61170(puVar6);
        goto LAB_1032fb8d4;
      }
      puVar9 = puVar3;
      func_0x000107c61558();
      if (((ulong)puVar9 & 1) == 0) {
        puVar10 = (ulong *)(*(long *)(puVar3 + 0x10) + 1);
        func_0x000101940054(0,puVar10,1);
      }
      uVar2 = *(ulong *)(puVar3 + 0x10);
      puVar14 = (ulong *)(uVar2 + 1);
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar2) {
        puVar10 = puVar14;
        func_0x000101940054(1 < *(ulong *)(puVar3 + 0x18),puVar14,1);
      }
      *(ulong **)(puVar3 + 0x10) = puVar14;
      *(ulong **)(puVar3 + uVar2 * 8 + 0x20) = puVar6;
      puVar14 = puVar1;
    } while (puVar1 != puVar13);
  }
LAB_1032fba44:
  *param_1 = (long)param_2;
  FUN_1032f6ef4(puVar3,&UNK_10193fcc4,&UNK_1019402d8);
  return;
}



/* Entry: 1032fbc18; end: 1032fbc67;  */

void FUN_1032fbc18(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_2;
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000107c61174();
    lVar2 = lVar1;
    FUN_1032fcf0c();
    func_0x000107c61170(lVar1);
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 1032fbc68; end: 1032fbe57;  */

/* WARNING: Possible PIC construction at 0x0001032fbccc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032fbcf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032fbd6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032fbd98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032fbdd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032fbe30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032fbdd4) */
/* WARNING: Removing unreachable block (ram,0x0001032fbd9c) */
/* WARNING: Removing unreachable block (ram,0x0001032fbd70) */
/* WARNING: Removing unreachable block (ram,0x0001032fbda0) */
/* WARNING: Removing unreachable block (ram,0x0001032fbda8) */
/* WARNING: Removing unreachable block (ram,0x0001032fbdd8) */
/* WARNING: Removing unreachable block (ram,0x0001032fbde0) */
/* WARNING: Removing unreachable block (ram,0x0001032fbdbc) */
/* WARNING: Removing unreachable block (ram,0x0001032fbd84) */
/* WARNING: Removing unreachable block (ram,0x0001032fbcf8) */
/* WARNING: Removing unreachable block (ram,0x0001032fbcd0) */
/* WARNING: Removing unreachable block (ram,0x0001032fbd44) */
/* WARNING: Removing unreachable block (ram,0x0001032fbd48) */
/* WARNING: Removing unreachable block (ram,0x0001032fbce4) */
/* WARNING: Removing unreachable block (ram,0x0001032fbe34) */

void FUN_1032fbc68(long param_1,ulong param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_1 != 0) {
    func_0x0001000a8868();
    func_0x000107c61174();
    func_0x000107c5d984();
    func_0x000107c61180();
    func_0x000107c5faec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  if ((param_2 & 1) != 0) {
    uVar1 = *(undefined8 *)(param_3 + 0x18);
    lVar2 = *(long *)(param_3 + 0x20);
    func_0x0001000a8868(param_3,uVar1);
    (**(code **)(lVar2 + 0x48))(uVar1,lVar2);
  }
  return;
}



/* Entry: 1032fbe58; end: 1032fbea7;  */

void FUN_1032fbe58(long param_1,undefined8 param_2)

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



/* Entry: 1032fbea8; end: 1032fc05f;  */

bool FUN_1032fbea8(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong unaff_x20;
  ulong uVar6;
  ulong uVar7;
  bool bVar8;
  ulong uVar9;
  
  uVar9 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (uVar9 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1032fc05c);
    (*pcVar1)();
  }
  uVar2 = uVar9;
  func_0x000107c49eac();
  func_0x000107c61170(uVar9);
  if ((uVar2 & 1) == 0) {
    func_0x000107c5de64();
    func_0x000107c61180();
    if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1032fc060);
      (*pcVar1)();
    }
    uVar9 = unaff_x20;
    func_0x000107c5c3b0();
    func_0x000107c61180();
    func_0x000107c61170(unaff_x20);
    uVar3 = 0;
    FUN_1032fdeec(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
    uVar2 = uVar9;
    func_0x000107c5fc54(uVar9,uVar3);
    func_0x000107c61170(uVar9);
    uVar9 = uVar2 & 0xffffffffffffff8;
    if (uVar2 >> 0x3e == 0) {
      uVar6 = *(ulong *)(uVar9 + 0x10);
    }
    else {
      uVar6 = uVar9;
      if (0x7fffffffffffffff < uVar2) {
        uVar6 = uVar2;
      }
      func_0x000107c60480();
    }
    uVar7 = 0;
    do {
      bVar8 = uVar6 != uVar7;
      if (uVar6 == uVar7) break;
      if ((uVar2 & 0xc000000000000001) == 0) {
        if (*(ulong *)(uVar9 + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1032fc044);
          (*pcVar1)();
        }
        uVar4 = *(ulong *)(uVar2 + uVar7 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar4 = uVar7;
        FUN_1032fc730(uVar7,uVar2,&PTR__OBJC_CLASS___UIView_1126aec20,0x112d360b0);
      }
      if (SCARRY8(uVar7,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1032fc014);
        (*pcVar1)();
      }
      func_0x000107c4071c(param_1,param_2);
      uVar5 = uVar4;
      func_0x000107c4eadc();
      func_0x000107c61170(uVar4);
      uVar7 = uVar7 + 1;
    } while ((int)uVar5 == 0);
    func_0x000107c6142c(uVar2);
  }
  else {
    bVar8 = false;
  }
  return bVar8;
}



/* Entry: 1032fc060; end: 1032fc16f;  */

/* WARNING: Possible PIC construction at 0x0001032fc0b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032fc10c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032fc150: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032fc0bc) */
/* WARNING: Removing unreachable block (ram,0x0001032fc120) */
/* WARNING: Removing unreachable block (ram,0x0001032fc0c0) */
/* WARNING: Removing unreachable block (ram,0x0001032fc0d4) */
/* WARNING: Removing unreachable block (ram,0x0001032fc110) */
/* WARNING: Removing unreachable block (ram,0x0001032fc0dc) */
/* WARNING: Removing unreachable block (ram,0x0001032fc134) */
/* WARNING: Removing unreachable block (ram,0x0001032fc0f4) */
/* WARNING: Removing unreachable block (ram,0x0001032fc118) */

void FUN_1032fc060(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = unaff_x20;
  func_0x000107c4e360();
  func_0x000107c61180();
  if (lVar2 == 0) {
    func_0x000107c5de64();
    func_0x000107c61180();
    if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1032fc170);
      (*pcVar1)();
    }
    func_0x000107c5c42c();
    func_0x000107c61180();
    lVar2 = unaff_x20;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1032fc170; end: 1032fc2eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032fc170(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  lVar2 = unaff_x20;
  func_0x000107c4e360();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c61170();
    func_0x000107c5e37c();
    func_0x000107c4ff2c();
  }
  lVar2 = _DAT_112f578e8;
  lVar3 = *(long *)(unaff_x20 + _DAT_112f578e8);
  if (lVar3 != 0) {
    func_0x000107c5dbc0();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c41848();
      func_0x000107c615e8(lVar3);
    }
  }
  lVar3 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = lVar3;
    func_0x000107c5c42c();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar4 != 0) {
      func_0x000107c61170(lVar4);
      lVar3 = unaff_x20;
      func_0x000107c5de64();
      func_0x000107c61180();
      if (lVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1032fc2ec);
        (*pcVar1)();
      }
      func_0x000107c4ff34();
      func_0x000107c61170(lVar3);
    }
    uVar5 = *(undefined8 *)(unaff_x20 + lVar2);
    *(undefined8 *)(unaff_x20 + lVar2) = 0;
    func_0x000107c61170(uVar5);
    lVar2 = _DAT_112f578f0;
    uVar5 = 0;
    if (*(long *)(unaff_x20 + _DAT_112f578f0) != 0) {
      func_0x000107c4218c();
      uVar5 = *(undefined8 *)(unaff_x20 + lVar2);
    }
    *(undefined8 *)(unaff_x20 + lVar2) = 0;
    func_0x000107c61170(uVar5);
    lVar2 = _DAT_112f578f8;
    uVar5 = 0;
    if (*(long *)(unaff_x20 + _DAT_112f578f8) != 0) {
      func_0x000107c4218c();
      uVar5 = *(undefined8 *)(unaff_x20 + lVar2);
    }
    *(undefined8 *)(unaff_x20 + lVar2) = 0;
    func_0x000107c61170(uVar5);
    lVar2 = _DAT_112f57900;
    uVar5 = 0;
    if (*(long *)(unaff_x20 + _DAT_112f57900) != 0) {
      func_0x000107c4218c();
      uVar5 = *(undefined8 *)(unaff_x20 + lVar2);
    }
    *(undefined8 *)(unaff_x20 + lVar2) = 0;
    func_0x000107c61170(uVar5);
    lVar2 = _DAT_112f57908;
    uVar5 = 0;
    if (*(long *)(unaff_x20 + _DAT_112f57908) != 0) {
      func_0x000107c4218c();
      uVar5 = *(undefined8 *)(unaff_x20 + lVar2);
    }
    *(undefined8 *)(unaff_x20 + lVar2) = 0;
    func_0x000107c61170(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bf86d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(unaff_x20 + _DAT_112f57910),PTR_s_disposeAll_1125bf508);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032fc2e8);
  (*pcVar1)();
}



/* Entry: 1032fc2ec; end: 1032fc34b; -[_TtC28SCInLensCreationTrendingList29ILCTrendingListViewController initWithNibName:bundle:] */

void FUN_1032fc2ec(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCInLensCreationTrendingList.ILCTrendingListViewController",0x3a,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032fc318);
  (*pcVar1)();
}



/* Entry: 1032fc34c; end: 1032fc567; -[_TtC28SCInLensCreationTrendingList29ILCTrendingListViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1032fc34c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f578e8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f57918));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f57920));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f57928));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f57930));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f578d0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f57938));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f57940));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f578c8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f578f0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f578f8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f57900));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f57908));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f57948));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f57950));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f57970));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f57910));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f57978));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f57980));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f578e0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f57988));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f578c0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f57990));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f578d8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f57998));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f579a0));
  func_0x000107c61610(param_1 + _DAT_112f579a8);
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f579b0));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f579b8 + 8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f579c8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f579e8));
  param_1 = param_1 + _DAT_112f578b8;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1032fc568; end: 1032fc67b; -[SCCInLensCreationCustomizationPreviewView hitTest:withEvent:] */

void FUN_1032fc568(undefined8 param_1,undefined8 param_2,undefined8 ***param_3,undefined8 param_4,
                  undefined8 ***param_5)

{
  undefined *puVar1;
  undefined8 ***pppuVar2;
  undefined8 ***pppuVar3;
  undefined8 **ppuStack_50;
  undefined *puStack_48;
  
  puVar1 = PTR_s_hitTest_withEvent__1125d6850;
  puStack_48 = PTR_PTR_1126ad078;
  ppuStack_50 = param_3;
  func_0x000107c61174();
  func_0x000107c61174(param_5);
  pppuVar3 = &ppuStack_50;
  func_0x000107c61154(param_1,param_2,pppuVar3,puVar1,param_5);
  func_0x000107c61180();
  pppuVar2 = param_3;
  if (pppuVar3 == (undefined8 ***)0x0) {
LAB_1032fc60c:
    func_0x000107c61170(param_5);
    pppuVar3 = pppuVar2;
  }
  else {
    pppuVar2 = pppuVar3;
    func_0x000107c61494();
    if (pppuVar2 != (undefined8 ***)0x0) {
      func_0x000107c61170(param_5);
      pppuVar2 = pppuVar3;
      param_5 = param_3;
      goto LAB_1032fc60c;
    }
    FUN_1032fdeec();
    pppuVar2 = pppuVar3;
    func_0x000107c60118(pppuVar3,param_3);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_3);
    if (((ulong)pppuVar2 & 1) == 0) goto LAB_1032fc620;
  }
  func_0x000107c61170(pppuVar3);
  pppuVar3 = (undefined8 ***)0x0;
LAB_1032fc620:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppuVar3);
  return;
}



/* Entry: 1032fc67c; end: 1032fc72f;  */

void FUN_1032fc67c(long param_1,undefined8 param_2,code *param_3)

{
  ulong uVar1;
  ulong *unaff_x20;
  ulong uVar2;
  
  uVar2 = *unaff_x20;
  uVar1 = uVar2;
  func_0x000107c61550();
  *unaff_x20 = uVar2;
  if ((((int)uVar1 != 0) && (uVar1 = 0, -1 < (long)uVar2)) && ((uVar2 >> 0x3e & 1) == 0)) {
    if (param_1 <= (long)(*(ulong *)((uVar2 & 0xffffffffffffff8) + 0x18) >> 1)) {
      return;
    }
    uVar1 = 1;
  }
  if (uVar2 >> 0x3e != 0) {
    func_0x000107c60480();
  }
  (*param_3)();
  *unaff_x20 = uVar1;
  return;
}



/* Entry: 1032fc730; end: 1032fc8eb;  */

ulong FUN_1032fc730(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1032fc814);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1032fc818);
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
  FUN_1032fdeec(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1032fc8ec);
  (*pcVar2)();
}



/* Entry: 1032fc8ec; end: 1032fcc5f;  */

/* WARNING: Possible PIC construction at 0x0001032fca98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032fcadc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032fc9bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032fcbc8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032fc9c0) */
/* WARNING: Removing unreachable block (ram,0x0001032fcae0) */
/* WARNING: Removing unreachable block (ram,0x0001032fcb3c) */
/* WARNING: Removing unreachable block (ram,0x0001032fcb44) */
/* WARNING: Removing unreachable block (ram,0x0001032fcaf4) */
/* WARNING: Removing unreachable block (ram,0x0001032fcb08) */
/* WARNING: Removing unreachable block (ram,0x0001032fc9b0) */
/* WARNING: Removing unreachable block (ram,0x0001032fca9c) */
/* WARNING: Removing unreachable block (ram,0x0001032fcab4) */
/* WARNING: Removing unreachable block (ram,0x0001032fcacc) */
/* WARNING: Removing unreachable block (ram,0x0001032fcbcc) */

void FUN_1032fc8ec(undefined *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puStack_88;
  undefined1 auStack_80 [32];
  
  if (param_1 != (undefined *)0x0) {
    func_0x000107c4cd44();
    func_0x000107c61180();
    if (param_1 != (undefined *)0x0) {
      puVar6 = param_1;
      func_0x000107c40808();
      if (0 < (long)puVar6) {
        puVar6 = param_1;
        func_0x000107c40808();
        if ((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 >> 0x3e == 0) {
          puVar8 = *(undefined **)
                    (((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar8 = (undefined *)((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < PTR___swiftEmptyArrayStorage_11034f1c8) {
            puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
          }
          func_0x000107c60480();
        }
        if ((long)puVar8 <= (long)puVar6) {
          puVar8 = puVar6;
        }
        puVar2 = (undefined *)0x0;
        FUN_103303f10(0,puVar8,0,PTR___swiftEmptyArrayStorage_11034f1c8);
        puVar8 = param_1;
        func_0x000107c40808();
        puVar6 = PTR___sypN_11034f1a8;
        if ((long)puVar8 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1032fcc1c);
          (*pcVar1)();
        }
        if (puVar8 != (undefined *)0x0) {
          puVar9 = (undefined *)0x0;
          do {
            puVar3 = param_1;
            func_0x000107c4d9a0(param_1);
            func_0x000107c61180();
            func_0x000107c60234(auStack_80);
            func_0x000107c615e8(puVar3);
            uVar4 = 0;
            FUN_1032fdeec(0,0x112f57a18,&PTR_PTR_1126caca0);
            ppuVar5 = &puStack_88;
            puVar7 = auStack_80;
            func_0x000107c6147c(ppuVar5,puVar7,puVar6 + 8,uVar4,6);
            if ((int)ppuVar5 != 0) {
              puVar6 = PTR_PTR_1126a83c8;
              func_0x000107c610f8(PTR_PTR_1126a83c8);
              func_0x000107c453e4();
              func_0x000107c5d984();
              func_0x000107c61180();
              param_1 = puStack_88;
              if (puStack_88 == (undefined *)0x0) {
                func_0x000107c5faec();
                param_1 = puStack_88;
                func_0x000107c5fadc();
                func_0x000107c6142c(puVar7);
              }
              func_0x000107c5a344(puVar6);
              goto code_r0x000107c61170;
            }
            puVar9 = puVar9 + 1;
          } while (puVar8 != puVar9);
        }
        if ((ulong)puVar2 >> 0x3e == 0) {
          puVar6 = *(undefined **)(((ulong)puVar2 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar6 = (undefined *)((ulong)puVar2 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar2) {
            puVar6 = puVar2;
          }
          func_0x000107c60480();
        }
        if (puVar6 == (undefined *)0x0) {
          func_0x000107c6142c(puVar2);
          func_0x000107c61170(param_1);
          return;
        }
        uVar4 = 0;
        FUN_1032fdeec(0,0x112de7658,&PTR_PTR_1126a83c8);
        param_1 = puVar2;
        func_0x000107c5fc48(puVar2,uVar4);
        func_0x000107c56618(param_2);
        func_0x000107c6142c(puVar2);
      }
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 1032fcc60; end: 1032fcea3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032fcc60(void)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112f578e8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f578c8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f578f0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f578f8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f57900) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f57908) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f57948) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f57950) = 0;
  lVar1 = _DAT_112f57910;
  puVar3 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112f578c0) = 0;
  lVar1 = _DAT_112f57990;
  puVar3 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  lVar1 = _DAT_112f578d8;
  puVar3 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  func_0x000107c61614(unaff_x20 + _DAT_112f579a8,0);
  lVar1 = unaff_x20 + _DAT_112f578b8;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCInLensCreationTrendingList/ILCTrendingListViewController.swift",0x40,2,0xea
                      ,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1032fcda8);
  (*pcVar2)();
}



/* Entry: 1032fcea4; end: 1032fcec3;  */

void FUN_1032fcea4(void)

{
  func_0x000107c61168(&PTR_PTR_1128cc600);
  return;
}



/* Entry: 1032fcec4; end: 1032fcee7;  */

void FUN_1032fcec4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar6 = lVar4;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 == 0) {
    return;
  }
  if (param_1 == 0) {
    lVar5 = 0;
    lVar6 = -0x2000000000000000;
  }
  else {
    lVar8 = param_1;
    func_0x000107c41214(param_1);
    func_0x000107c61180();
    lVar5 = lVar8;
    func_0x000107c5faec();
    func_0x000107c61170(lVar8);
  }
  lVar8 = lVar6;
  func_0x000107c5fadc(lVar5,lVar6);
  func_0x000107c6142c(lVar6);
  if (param_1 == 0) {
    lVar9 = 0;
    lVar8 = 0;
    lVar7 = 0;
    lVar6 = 0;
    goto LAB_1032f66d4;
  }
  lVar6 = param_1;
  func_0x000107c44fcc(param_1);
  func_0x000107c61180();
  lVar7 = param_1;
  func_0x000107c5c82c();
  func_0x000107c61180();
  if (lVar7 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar8);
  }
  lVar8 = param_1;
  func_0x000107c4f4c4();
  func_0x000107c61180();
  if (lVar8 == 0) {
LAB_1032f6660:
    lVar8 = 0;
  }
  else {
    uVar1 = 0;
    lStack_78 = lVar8;
    func_0x000101018e74(0);
    uVar2 = 0;
    func_0x0001000e2834(0);
    func_0x000107c6147c(&uStack_68,&lStack_78,uVar1,uVar2,7);
    lStack_78 = 0;
    lStack_70 = 0;
    func_0x000107c5fae8(uStack_68,&lStack_78);
    func_0x000107c61170(uStack_68);
    lVar9 = lStack_70;
    if (lStack_70 == 0) goto LAB_1032f6660;
    lVar8 = lStack_78;
    func_0x000107c5fadc(lStack_78,lStack_70);
    func_0x000107c6142c(lVar9);
  }
  lVar9 = param_1;
  func_0x000107c5c674(param_1);
  func_0x000107c61180();
  lVar3 = param_1;
  func_0x000107c4f4cc();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c49820();
    func_0x000107c61170(lVar3);
  }
  func_0x000107c4cd44();
  func_0x000107c61180();
LAB_1032f66d4:
  func_0x000107c41190(lVar4);
  func_0x000107c615e8(lVar4);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1032fcee8; end: 1032fcf0b;  */

undefined8 FUN_1032fcee8(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1032fcf0c; end: 1032fd0eb;  */

undefined * FUN_1032fcf0c(ulong *param_1,long param_2)

{
  ulong *puVar1;
  undefined *puVar2;
  ulong *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong *puVar7;
  
  puVar2 = PTR__swift_isaMask_11034f488;
  puVar3 = param_1;
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *param_1) + 0x78))();
  puVar7 = puVar3;
  lVar5 = param_2;
  (**(code **)((*(ulong *)puVar2 & *param_1) + 0xa8))();
  lVar6 = lVar5;
  if (lVar5 == 0) {
    (**(code **)((*(ulong *)puVar2 & *param_1) + 0x90))();
    puVar1 = (ulong *)0x0;
    if (lVar5 != 0) {
      puVar1 = puVar7;
    }
    lVar6 = -0x2000000000000000;
    puVar7 = puVar1;
    if (lVar5 != 0) {
      lVar6 = lVar5;
    }
  }
  puVar4 = PTR_PTR_1126a6188;
  func_0x000107c610f8(PTR_PTR_1126a6188);
  func_0x000107c5fadc(puVar3,param_2);
  func_0x000107c6142c(param_2);
  lVar5 = lVar6;
  func_0x000107c5fadc(puVar7);
  func_0x000107c6142c(lVar6);
  func_0x000107c491fc(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar7);
  (**(code **)((*(ulong *)puVar2 & *param_1) + 0xc0))();
  if (lVar5 == 0) {
    puVar7 = (ulong *)0x0;
  }
  else {
    lVar6 = lVar5;
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar5);
    lVar5 = lVar6;
  }
  func_0x000107c52cc4(puVar4);
  func_0x000107c61170(puVar7);
  (**(code **)((*(ulong *)puVar2 & *param_1) + 0xd8))();
  if (lVar5 == 0) {
    puVar7 = (ulong *)0x0;
  }
  else {
    lVar6 = lVar5;
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar5);
    lVar5 = lVar6;
  }
  func_0x000107c52d30(puVar4);
  func_0x000107c61170(puVar7);
  (**(code **)((*(ulong *)puVar2 & *param_1) + 0x90))();
  if (lVar5 == 0) {
    puVar7 = (ulong *)0x0;
  }
  else {
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar5);
  }
  func_0x000107c5a42c(puVar4);
  func_0x000107c61170(puVar7);
  return puVar4;
}



/* Entry: 1032fd0ec; end: 1032fdcdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1032fd0ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,long param_7,long param_8,long param_9,
                    undefined8 param_10,undefined8 param_11,undefined8 param_12,uint param_13,
                    undefined4 param_14,undefined8 param_15,long param_16,undefined8 param_17,
                    undefined8 param_18,undefined8 param_19,undefined8 param_20,undefined8 param_21,
                    byte param_22,undefined4 param_23,undefined8 param_24,undefined4 param_25,
                    undefined4 param_26,undefined8 param_27,long param_28)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long *plVar11;
  undefined **ppuVar12;
  long lVar13;
  undefined *puVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  long lStack_80;
  
  lVar4 = param_28;
  func_0x000107c614f0();
  *(undefined8 *)(param_28 + _DAT_112f578e8) = 0;
  lVar13 = _DAT_112f578c8;
  *(undefined8 *)(param_28 + _DAT_112f578c8) = 0;
  *(undefined8 *)(param_28 + _DAT_112f578f0) = 0;
  *(undefined8 *)(param_28 + _DAT_112f578f8) = 0;
  *(undefined8 *)(param_28 + _DAT_112f57900) = 0;
  *(undefined8 *)(param_28 + _DAT_112f57908) = 0;
  *(undefined8 *)(param_28 + _DAT_112f57948) = 0;
  *(undefined8 *)(param_28 + _DAT_112f57950) = 0;
  lVar16 = _DAT_112f57910;
  puVar5 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_28 + lVar16) = puVar5;
  *(undefined8 *)(param_28 + _DAT_112f578c0) = 0;
  lVar3 = _DAT_112f57990;
  puVar5 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_28 + lVar3) = puVar5;
  lVar2 = _DAT_112f578d8;
  puVar5 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_28 + lVar2) = puVar5;
  lVar16 = param_28 + _DAT_112f579a8;
  func_0x000107c61614(lVar16,0);
  lVar10 = param_28 + _DAT_112f578b8;
  *(undefined8 *)(lVar10 + 8) = 0;
  func_0x000107c61614(lVar10,0);
  *(undefined8 *)(param_28 + _DAT_112f579a0) = param_2;
  *(undefined8 *)(param_28 + _DAT_112f579b0) = param_3;
  puVar1 = (undefined8 *)(param_28 + _DAT_112f579b8);
  *puVar1 = param_11;
  puVar1[1] = param_12;
  *(undefined8 *)(param_28 + _DAT_112f578d0) = param_10;
  *(undefined8 *)(param_28 + _DAT_112f57940) = param_1;
  *(undefined8 *)(param_28 + _DAT_112f57998) = param_20;
  puVar5 = PTR_PTR_1126afe50;
  func_0x000107c610f8();
  func_0x000107c61174(param_20);
  func_0x000107c615f0(param_2);
  func_0x000107c615f0(param_3);
  func_0x000107c61434(param_12);
  func_0x000107c615f0(param_10);
  func_0x000107c615f0(param_1);
  func_0x000107c4842c();
  if ((param_13 & 0x100) != 0) {
    func_0x0001032f6ed4(0);
    func_0x000107c614e8();
    func_0x000107c537e0(puVar5);
  }
  puVar6 = PTR_PTR_1126ae728;
  func_0x000107c61168();
  func_0x000107c3edf4();
  func_0x000107c61180();
  uVar7 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef1b1f0);
  puVar8 = puVar6;
  func_0x000107c545b8();
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar7);
  puVar9 = puVar8;
  func_0x000107c57f3c();
  func_0x000107c61180();
  func_0x000107c61170(puVar8);
  uVar7 = 0x646e657254434c49;
  func_0x000107c5fadc(0x646e657254434c49,0xef7473694c676e69);
  func_0x000107c4c1b4();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  puVar6 = PTR_PTR_1126a6178;
  func_0x000107c610f8();
  func_0x000107c615f0(param_2);
  func_0x000107c61174();
  func_0x000107c615f0(param_5);
  func_0x000107c5fadc(param_11,param_12);
  func_0x000107c6142c(param_12);
  func_0x000107c47a08();
  func_0x000107c61170(puVar5);
  func_0x000107c615e8(param_5);
  func_0x000107c615e8(param_2);
  func_0x000107c61170(param_11);
  lVar10 = _DAT_112f57938;
  *(undefined **)(param_28 + _DAT_112f57938) = puVar6;
  uVar7 = *(undefined8 *)(param_28 + lVar3);
  func_0x000107c61174(puVar6);
  func_0x000107c5cb24(uVar7);
  func_0x000107c61180();
  func_0x000107c52214(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar7);
  uVar7 = *(undefined8 *)(param_28 + lVar10);
  uVar15 = *(undefined8 *)(param_28 + lVar2);
  func_0x000107c61174(uVar7);
  func_0x000107c5cb24(uVar15);
  func_0x000107c61180();
  func_0x000107c58cb4(uVar7);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar15);
  *(undefined8 *)(param_28 + _DAT_112f57918) = param_6;
  *(long *)(param_28 + _DAT_112f57930) = param_9;
  uVar7 = *(undefined8 *)(param_28 + lVar13);
  *(undefined8 *)(param_28 + lVar13) = 0;
  func_0x000107c61174();
  lVar10 = param_9;
  func_0x000107c61174();
  func_0x000107c61170(uVar7);
  *(long *)(param_28 + _DAT_112f57920) = param_7;
  *(long *)(param_28 + _DAT_112f57928) = param_8;
  *(byte *)(param_28 + _DAT_112f57958) = (byte)param_13 & 1;
  *(byte *)(param_28 + _DAT_112f57960) = param_13._2_1_ & 1;
  *(byte *)(param_28 + _DAT_112f57968) = param_13._3_1_ & 1;
  *(long *)(param_28 + _DAT_112f57978) = param_16;
  *(undefined8 *)(param_28 + _DAT_112f57980) = param_17;
  *(undefined8 *)(param_28 + _DAT_112f578e0) = param_18;
  *(undefined8 *)(param_28 + _DAT_112f57988) = param_19;
  func_0x000107c61604(lVar16,param_21);
  *(byte *)(param_28 + _DAT_112f579c0) = param_22 & 1;
  *(undefined8 *)(param_28 + _DAT_112f579c8) = param_24;
  *(byte *)(param_28 + _DAT_112f579d0) = (byte)param_25 & 1;
  *(byte *)(param_28 + _DAT_112f579d8) = param_25._1_1_ & 1;
  *(byte *)(param_28 + _DAT_112f579e0) = param_25._2_1_ & 1;
  *(undefined8 *)(param_28 + _DAT_112f579e8) = param_27;
  *(undefined8 *)(param_28 + _DAT_112f57970) = param_15;
  puVar6 = PTR_s_initWithNibName_bundle__1125e9850;
  lStack_88 = param_28;
  lStack_80 = lVar4;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c615f0(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c61174(param_17);
  func_0x000107c61174(param_18);
  func_0x000107c61174(param_19);
  func_0x000107c61174(param_24);
  func_0x000107c61174(param_27);
  plVar11 = &lStack_88;
  func_0x000107c61154(plVar11,puVar6,0,0);
  uVar7 = *(undefined8 *)((long)plVar11 + _DAT_112f57938);
  puVar6 = &UNK_11063b258;
  func_0x000107c613fc(&UNK_11063b258,0x18,7);
  func_0x000107c61614(puVar6 + 0x10,plVar11);
  puVar8 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_98 = FUN_1032fdcdc;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0x42000000;
  pcStack_a8 = FUN_1032f7c54;
  puStack_a0 = &UNK_11063b270;
  ppuVar12 = &puStack_b8;
  puStack_90 = puVar6;
  func_0x000107c60bc4();
  puVar6 = puStack_90;
  func_0x000107c61174();
  func_0x000107c61574(puVar6);
  func_0x000107c533e0(uVar7);
  func_0x000107c60bd0(ppuVar12);
  func_0x000107c61170(uVar7);
  FUN_1032f7cb4();
  lVar16 = param_7;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar16 == 0) {
    lVar16 = 0;
  }
  else {
    lVar13 = lVar16;
    func_0x000107c5ae88();
    func_0x000107c61180();
    func_0x000107c615e8(lVar16);
    puVar6 = &UNK_11063b258;
    func_0x000107c613fc(&UNK_11063b258,0x18,7);
    func_0x000107c61614(puVar6 + 0x10,plVar11);
    pcStack_98 = FUN_1032fdd1c;
    puStack_b8 = puVar8;
    uStack_b0 = 0x42000000;
    pcStack_a8 = (code *)&UNK_10101bff4;
    puStack_a0 = &UNK_11063b360;
    ppuVar12 = &puStack_b8;
    puStack_90 = puVar6;
    func_0x000107c60bc4(ppuVar12);
    func_0x000107c61574(puStack_90);
    lVar16 = lVar13;
    func_0x000107c5c320();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar12);
    func_0x000107c61170(lVar13);
  }
  uVar7 = *(undefined8 *)((long)plVar11 + _DAT_112f578f0);
  *(long *)((long)plVar11 + _DAT_112f578f0) = lVar16;
  func_0x000107c61170(uVar7);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_8 == 0) {
    lVar16 = 0;
  }
  else {
    lVar13 = param_8;
    func_0x000107c40dec();
    func_0x000107c61180();
    func_0x000107c615e8(param_8);
    puVar6 = &UNK_11063b258;
    func_0x000107c613fc(&UNK_11063b258,0x18,7);
    func_0x000107c61614(puVar6 + 0x10,plVar11);
    pcStack_98 = FUN_1032fdd14;
    puStack_b8 = puVar8;
    uStack_b0 = 0x42000000;
    pcStack_a8 = (code *)0x1032fe008;
    puStack_a0 = &UNK_11063b338;
    ppuVar12 = &puStack_b8;
    puStack_90 = puVar6;
    func_0x000107c60bc4(ppuVar12);
    func_0x000107c61574(puStack_90);
    lVar16 = lVar13;
    func_0x000107c5c320();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar12);
    func_0x000107c61170(lVar13);
  }
  uVar7 = *(undefined8 *)((long)plVar11 + _DAT_112f578f8);
  *(long *)((long)plVar11 + _DAT_112f578f8) = lVar16;
  func_0x000107c61170(uVar7);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_7 == 0) {
    lVar16 = 0;
  }
  else {
    lVar13 = param_7;
    func_0x000107c5d014();
    func_0x000107c61180();
    func_0x000107c615e8(param_7);
    puVar6 = &UNK_11063b258;
    func_0x000107c613fc(&UNK_11063b258,0x18,7);
    func_0x000107c61614(puVar6 + 0x10,plVar11);
    pcStack_98 = FUN_1032fdcf4;
    puStack_b8 = puVar8;
    uStack_b0 = 0x42000000;
    pcStack_a8 = (code *)0x1032fe00c;
    puStack_a0 = &UNK_11063b310;
    ppuVar12 = &puStack_b8;
    puStack_90 = puVar6;
    func_0x000107c60bc4(ppuVar12);
    func_0x000107c61574(puStack_90);
    lVar16 = lVar13;
    func_0x000107c5c320();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar12);
    func_0x000107c61170(lVar13);
  }
  uVar7 = *(undefined8 *)((long)plVar11 + _DAT_112f57900);
  *(long *)((long)plVar11 + _DAT_112f57900) = lVar16;
  func_0x000107c61170(uVar7);
  if (param_16 != 0) {
    func_0x000107c6157c(param_16);
    func_0x0001000d224c(&uStack_c0);
    func_0x000107c61574(param_16);
    uVar7 = uStack_c0;
    func_0x000107c3d1ac(uStack_c0);
    func_0x000107c61180();
    func_0x000107c615e8(uStack_c0);
    puVar6 = &UNK_11063b258;
    func_0x000107c613fc(&UNK_11063b258,0x18,7);
    func_0x000107c61614(puVar6 + 0x10,plVar11);
    pcStack_98 = (code *)0x1032fdcec;
    puStack_b8 = puVar8;
    uStack_b0 = 0x42000000;
    pcStack_a8 = (code *)&UNK_100b5fdac;
    puStack_a0 = &UNK_11063b2e8;
    ppuVar12 = &puStack_b8;
    puStack_90 = puVar6;
    func_0x000107c60bc4(ppuVar12);
    func_0x000107c61574(puStack_90);
    uVar15 = uVar7;
    func_0x000107c5c320(uVar7);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar12);
    func_0x000107c61170(uVar7);
    func_0x000107c3e924(uVar15);
    func_0x000107c61170(uVar15);
  }
  FUN_1032f9188(0x1032fdd44,&UNK_11063b4f0);
  if (param_9 != 0) {
    func_0x000107c41198(lVar10);
    func_0x000107c61180();
    func_0x000107c61170();
    puVar14 = PTR_PTR_1126ae820;
    func_0x000107c610f8();
    func_0x000107c453e4();
    puVar6 = puVar14;
    func_0x000107c5cb24();
    func_0x000107c61180();
    uVar7 = *(undefined8 *)((long)plVar11 + _DAT_112f57948);
    *(undefined **)((long)plVar11 + _DAT_112f57948) = puVar6;
    func_0x000107c61170(uVar7);
    func_0x000107c41194(lVar10);
    func_0x000107c61180();
    puVar6 = &UNK_11063b2a8;
    func_0x000107c613fc(&UNK_11063b2a8,0x20,7);
    *(undefined **)(puVar6 + 0x10) = puVar14;
    *(long *)(puVar6 + 0x18) = lVar4;
    pcStack_98 = (code *)0x1032fdce4;
    puStack_b8 = puVar8;
    uStack_b0 = 0x42000000;
    pcStack_a8 = FUN_103305040;
    puStack_a0 = &UNK_11063b2c0;
    ppuVar12 = &puStack_b8;
    puStack_90 = puVar6;
    func_0x000107c60bc4(ppuVar12);
    puVar6 = puStack_90;
    func_0x000107c61174(puVar14);
    func_0x000107c61574(puVar6);
    func_0x000107c5dc64(lVar10);
    func_0x000107c60bd0(ppuVar12);
    func_0x000107c61170(lVar10);
    FUN_1032f9188(FUN_1032fdd3c,&UNK_11063b478);
    func_0x000107c61170(puVar14);
  }
  func_0x000107c561c0(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar9);
  func_0x000107c615e8(param_5);
  return plVar11;
}



/* Entry: 1032fdcdc; end: 1032fdcf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032fdcdc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = param_1;
    FUN_1032f70cc(param_1,param_2);
    if (((lVar2 == 0) && (lVar2 = param_1, func_0x0001032f76a8(param_1,param_2), lVar2 == 0)) &&
       (lVar2 = *(long *)(lVar1 + _DAT_112f578e0), lVar2 != 0)) {
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar2 != 0) {
        func_0x000107c5fadc(param_1,param_2);
        func_0x000107c5e36c(lVar2);
        func_0x000107c615e8(lVar2);
        func_0x000107c61170(param_1);
      }
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1032fdcf4; end: 1032fdd13;  */

void FUN_1032fdcf4(void)

{
  FUN_1032f8a04();
  return;
}



/* Entry: 1032fdd14; end: 1032fdd1b;  */

void FUN_1032fdd14(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  puVar4 = auStack_58;
  func_0x000107c61428(unaff_x20 + 0x10,puVar4,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = param_1;
    func_0x000107c4b1dc(param_1);
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c5faec();
    func_0x000107c61170(uVar2);
    func_0x000107c5ac14(param_1);
    FUN_1032f8658(uVar3,puVar4,param_1);
    func_0x000107c61170(lVar1);
    func_0x000107c6142c(puVar4);
  }
  return;
}



/* Entry: 1032fdd1c; end: 1032fdd3b;  */

void FUN_1032fdd1c(void)

{
  FUN_1032f8a04();
  return;
}



/* Entry: 1032fdd3c; end: 1032fdd5b;  */

void FUN_1032fdd3c(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_1032f92fc();
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1032fdd5c; end: 1032fdd9f;  */

long FUN_1032fdd5c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1032fdda0; end: 1032fddcb;  */

undefined8 * FUN_1032fdda0(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 1032fddcc; end: 1032fddeb;  */

void FUN_1032fddcc(void)

{
  FUN_1032feee0();
  return;
}



/* Entry: 1032fddec; end: 1032fde03;  */

void FUN_1032fddec(undefined1 param_1)

{
  char *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  pcVar1 = "makeActiveStateParams(from:lensId:)";
  func_0x0001000c10c0("makeActiveStateParams(from:lensId:)");
  func_0x000107c61180();
  puVar2 = &UNK_11063b258;
  func_0x000107c613fc(&UNK_11063b258,0x18,7);
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61618(lVar3);
  func_0x000107c61614(puVar2 + 0x10,lVar3);
  func_0x000107c61170(lVar3);
  puVar4 = &UNK_11063b898;
  func_0x000107c613fc(&UNK_11063b898,0x19,7);
  *(undefined **)(puVar4 + 0x10) = puVar2;
  puVar4[0x18] = param_1;
  uStack_58 = 0x1032fded0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x42000000;
  puStack_68 = &UNK_1000f6b44;
  puStack_60 = &UNK_11063b8b0;
  ppuVar5 = &puStack_78;
  puStack_50 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  func_0x000107c61574(puStack_50);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 1032fde04; end: 1032fde63;  */

void FUN_1032fde04(void)

{
  FUN_1032fa33c();
  return;
}



/* Entry: 1032fde64; end: 1032fde7b;  */

void FUN_1032fde64(undefined8 param_1,undefined1 param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  pcVar1 = "makeActiveStateParams(from:lensId:)";
  func_0x0001000c10c0("makeActiveStateParams(from:lensId:)");
  func_0x000107c61180();
  puVar2 = &UNK_11063b730;
  func_0x000107c613fc(&UNK_11063b730,0x21,7);
  *(undefined8 *)(puVar2 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  puVar2[0x20] = param_2;
  uStack_50 = 0x1032fde6c;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_11063b748;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c6157c();
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 1032fde7c; end: 1032fdec3;  */

void FUN_1032fde7c(void)

{
  long unaff_x20;
  
  FUN_1032fa41c(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x10),0x1032ff1cc);
  return;
}



/* Entry: 1032fdec4; end: 1032fdeeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032fdec4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lVar7;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar7 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar7 + 0x10,auStack_58,0,0);
  puVar1 = (undefined *)(lVar7 + 0x10);
  func_0x000107c61618();
  if (puVar1 != (undefined *)0x0) {
    puVar3 = puVar1 + _DAT_112f578b8;
    func_0x000107c61428(puVar3,auStack_70,0,0);
    puVar2 = puVar3;
    func_0x000107c61618();
    if (puVar2 == (undefined *)0x0) {
      puVar3 = PTR_PTR_1126c4310;
      func_0x000107c61168(PTR_PTR_1126c4310);
      func_0x000107c43d84();
      func_0x000107c61180();
      puVar2 = PTR_PTR_1126c4308;
      func_0x000107c610f8(PTR_PTR_1126c4308);
      func_0x000107c5fadc(uVar4,uVar6);
      func_0x000107c472dc(puVar2);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(uVar4);
      puVar3 = puVar1 + _DAT_112f579a8;
      func_0x000107c61618();
      if (puVar3 != (undefined *)0x0) {
        puVar5 = puVar3;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(puVar3);
        if (puVar5 != (undefined *)0x0) {
          func_0x000107c424cc(puVar5);
          func_0x000107c615e8(puVar5);
        }
      }
      func_0x000107c61170(puVar1);
    }
    else {
      lVar7 = *(long *)(puVar3 + 8);
      puVar3 = puVar2;
      func_0x000107c614f0();
      (**(code **)(lVar7 + 0x10))(puVar1,puVar3,lVar7);
      func_0x000107c615e8(puVar2);
      puVar2 = puVar1;
    }
    func_0x000107c61170(puVar2);
  }
  return;
}



/* Entry: 1032fdeec; end: 1032fdf2b;  */

void FUN_1032fdeec(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1032fdf2c; end: 1032fe023;  */

void FUN_1032fdf2c(long param_1,long param_2)

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



/* Entry: 1032fe024; end: 1032fe64b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032fe024(long *param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                  long param_7,long param_8,undefined8 param_9,undefined8 param_10,long param_11,
                  undefined8 param_12,undefined8 param_13,undefined8 param_14,undefined8 param_15,
                  undefined8 param_16,undefined8 param_17)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  
  lVar2 = *(long *)(param_2 + _DAT_113083898);
  lVar15 = param_3;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = *(long *)(param_3 + _DAT_113083868);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c44588();
      func_0x000107c61180();
      lVar4 = param_4;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(param_4);
      if (lVar4 == 0) {
        func_0x000107c615e8(lVar2);
        lVar2 = lVar3;
      }
      else {
        func_0x000107c5dbd4();
        func_0x000107c61180();
        lVar5 = param_5;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(param_5);
        if (lVar5 != 0) {
          lVar6 = lVar5;
          func_0x000107c509b4();
          func_0x000107c61180();
          func_0x000107c615e8(lVar5);
          if (lVar6 != 0) {
            func_0x000107c4af30();
            func_0x000107c61180();
            lVar5 = param_6;
            func_0x000107c5c734();
            func_0x000107c61180();
            func_0x000107c61170(param_6);
            if (lVar5 != 0) {
              lVar7 = lVar5;
              func_0x000107c4b3f8();
              func_0x000107c61180();
              func_0x000107c615e8(lVar5);
              if (lVar7 != 0) {
                lVar5 = lVar7;
                func_0x000107c5faec();
                func_0x000107c61170(lVar7);
                lVar7 = *(long *)(param_7 + _DAT_113093a98);
                func_0x000107c5c734();
                func_0x000107c61180();
                if (lVar7 == 0) {
                  func_0x000107c615e8(lVar2);
                  func_0x000107c615e8(lVar3);
                  func_0x000107c615e8(lVar4);
                  func_0x000107c615e8(lVar6);
                }
                else {
                  uVar8 = 0xd000000000000021;
                  func_0x000107c5fadc(0xd000000000000021,0x800000010f13d4d0);
                  lVar9 = lVar7;
                  func_0x000107c4e60c();
                  func_0x000107c61180();
                  func_0x000107c615e8(lVar7);
                  func_0x000107c61170(uVar8);
                  func_0x000107c5c734();
                  func_0x000107c61180();
                  if (param_8 != 0) {
                    uVar8 = 0xd000000000000032;
                    func_0x000107c5fadc(0xd000000000000032,0x800000010f13d500);
                    lVar7 = param_8;
                    func_0x000107c3ebd4();
                    func_0x000107c61170(uVar8);
                    iVar1 = 2;
                    func_0x000100029b9c(2,0x1a,0,0);
                    if (iVar1 != 0) {
                      uVar8 = 0xd000000000000027;
                      func_0x000107c5fadc(0xd000000000000027,0x800000010f13d570);
                      func_0x000107c3ebd4();
                      func_0x000107c61170(uVar8);
                    }
                    uVar8 = 0xd000000000000025;
                    func_0x000107c5fadc(0xd000000000000025,0x800000010f13d540);
                    func_0x000107c3ebd4();
                    func_0x000107c61170(uVar8);
                    uVar8 = param_9;
                    func_0x000107c5c848();
                    func_0x000107c61180();
                    uVar10 = param_9;
                    func_0x000107c5c884();
                    func_0x000107c61180();
                    uVar11 = param_9;
                    func_0x000107c5dfc0();
                    func_0x000107c61180();
                    uVar12 = *(undefined8 *)(param_11 + _DAT_1130720a0);
                    func_0x000107c44dd0();
                    func_0x000107c61180();
                    uVar13 = param_9;
                    func_0x000107c3d19c();
                    func_0x000107c61180();
                    func_0x000107c3fb74();
                    func_0x000107c61180();
                    FUN_1032fcea4();
                    func_0x000107c610f8();
                    func_0x000107c614f0();
                    func_0x000107c61174();
                    func_0x000107c61174();
                    func_0x000107c61174();
                    func_0x000107c61174();
                    func_0x000107c6157c(param_13);
                    uVar14 = param_10;
                    func_0x000107c61174();
                    func_0x000107c615f0(param_12);
                    lVar16 = lVar6;
                    FUN_1032fd0ec(lVar6,lVar2,lVar3,lVar9,lVar4,uVar8,uVar10,uVar11,param_10,uVar12,
                                  lVar5,lVar15,(char)lVar7);
                    func_0x000107c615e8(param_8);
                    func_0x000107c615e8(lVar6);
                    func_0x000107c615e8(lVar2);
                    func_0x000107c615e8(lVar3);
                    func_0x000107c615e8(lVar9);
                    func_0x000107c615e8(lVar4);
                    func_0x000107c61170(uVar8);
                    func_0x000107c61170(uVar10);
                    func_0x000107c61170(uVar11);
                    func_0x000107c61170(uVar14);
                    func_0x000107c615e8(uVar12);
                    func_0x000107c615e8(param_12);
                    func_0x000107c61574(param_13);
                    func_0x000107c61170(param_14);
                    func_0x000107c61170(uVar13);
                    func_0x000107c61170(param_15);
                    func_0x000107c61170(param_16);
                    func_0x000107c61170(param_9);
                    func_0x000107c61170(param_17);
                    goto LAB_1032fe340;
                  }
                  func_0x000107c615e8(lVar2);
                  func_0x000107c615e8(lVar3);
                  func_0x000107c615e8(lVar4);
                  func_0x000107c615e8(lVar6);
                  func_0x000107c615e8(lVar9);
                }
                func_0x000107c6142c(lVar15);
                goto LAB_1032fe33c;
              }
            }
            func_0x000107c615e8(lVar6);
          }
        }
        func_0x000107c615e8(lVar4);
        func_0x000107c615e8(lVar3);
      }
    }
    func_0x000107c615e8(lVar2);
  }
LAB_1032fe33c:
  lVar16 = 0;
LAB_1032fe340:
  *param_1 = lVar16;
  return;
}



/* Entry: 1032fe64c; end: 1032fe6a7;  */

void FUN_1032fe64c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_1032fe794(uVar1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1032fe6a8; end: 1032fe793;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032fe6a8(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long lVar5;
  code *pcVar6;
  ulong uStack_48;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f57a20);
  func_0x000107c6157c(uVar4);
  func_0x000104875e28(&uStack_48);
  func_0x000107c61574(uVar4);
  if (1 < uStack_48) {
    FUN_1032fc170();
    FUN_1032feb90(uStack_48);
  }
  func_0x000107c5d34c(*(undefined8 *)(*(long *)(unaff_x20 + _DAT_112f57a30) + _DAT_1130720a8));
  plVar1 = (long *)(unaff_x20 + _DAT_112f57a38);
  lVar5 = *plVar1;
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    lVar3 = plVar1[1];
    lVar2 = lVar5;
    func_0x000107c614f0(lVar5);
    pcVar6 = *(code **)(lVar3 + 8);
    func_0x000107c615f0(lVar5);
    (*pcVar6)(lVar2,lVar3);
    func_0x000107c615e8(lVar5);
    lVar5 = *plVar1;
  }
  *plVar1 = 0;
  plVar1[1] = 0;
  func_0x000107c615e8(lVar5);
  return;
}



/* Entry: 1032fe794; end: 1032fe937;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032fe794(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_58;
  
  lVar1 = _DAT_112f57a20;
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f57a20);
  func_0x000107c6157c(uVar6);
  func_0x000104875e28(&lStack_58);
  func_0x000107c61574(uVar6);
  if (lStack_58 != 1) {
    FUN_1032feb90();
    goto LAB_1032fe838;
  }
  if (param_1 == 0) {
    return;
  }
  uVar2 = param_1;
  func_0x000107c61174();
  uVar3 = uVar2;
  func_0x000107c4119c();
  func_0x000107c61180();
  if (uVar3 == 0) {
LAB_1032fe890:
    uVar3 = uVar2;
    func_0x000107c4fe18();
    func_0x000107c61180();
    if (uVar3 != 0) {
      uVar4 = uVar3;
      func_0x000107c4fe2c();
      func_0x000107c61180();
      func_0x000107c61170();
      if (uVar4 != 0) {
        uVar3 = uVar4;
        puVar5 = PTR___sSSN_11034da80;
        func_0x000107c5fe10(uVar4,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
        func_0x000107c61170(uVar4);
        uVar4 = 1;
        func_0x0001044e388c();
        func_0x0001000f66f0();
        func_0x000107c6142c(puVar5);
        func_0x000107c6142c();
        if ((uVar4 & 1) != 0) goto LAB_1032fe914;
      }
    }
    func_0x0001032f6474();
    func_0x000107c61170(uVar2);
    if ((uVar3 & 1) == 0) {
      return;
    }
  }
  else {
    uVar4 = uVar3;
    func_0x000107c5d0f0();
    if (uVar4 == 0) {
      func_0x000107c61170(uVar3);
      goto LAB_1032fe890;
    }
    uVar4 = uVar3;
    func_0x000107c5d0f0();
    func_0x000107c61170(uVar3);
    if (uVar4 == 3) goto LAB_1032fe890;
LAB_1032fe914:
    func_0x000107c61170(uVar2);
  }
LAB_1032fe838:
  uVar6 = *(undefined8 *)(unaff_x20 + lVar1);
  func_0x000107c6157c(uVar6);
  func_0x0001000d224c(&lStack_58);
  func_0x000107c61574(uVar6);
  if (lStack_58 != 0) {
    FUN_1032faa10(param_1);
    func_0x000107c61170(lStack_58);
  }
  return;
}



/* Entry: 1032fe938; end: 1032fe993; -[_TtC28SCInLensCreationTrendingList23ILCTrendingListWorkflow init] */

void FUN_1032fe938(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCInLensCreationTrendingList.ILCTrendingListWorkflow",0x34,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032fe964);
  (*pcVar1)();
}



/* Entry: 1032fe994; end: 1032fea3b; -[_TtC28SCInLensCreationTrendingList23ILCTrendingListWorkflow .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001032fe9c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032fe9f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032fea10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032fe9f4) */
/* WARNING: Removing unreachable block (ram,0x0001032fe9c4) */
/* WARNING: Removing unreachable block (ram,0x0001032fea14) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032fe994(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f57a20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f57a28));
  return;
}



/* Entry: 1032fea3c; end: 1032fea5b;  */

void FUN_1032fea3c(void)

{
  func_0x000107c61168(&PTR_PTR_1128cc7f0);
  return;
}



/* Entry: 1032fea5c; end: 1032feb03; -[_TtC28SCInLensCreationTrendingList23ILCTrendingListWorkflow isPointInsideView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1032fea5c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  uint uVar2;
  long lStack_48;
  
  uVar1 = *(undefined8 *)(param_3 + _DAT_112f57a20);
  func_0x000107c61174();
  func_0x000107c6157c(uVar1);
  func_0x000104875e28(&lStack_48);
  func_0x000107c61574(uVar1);
  uVar2 = (uint)uVar1;
  if ((lStack_48 == 0) || (lStack_48 == 1)) {
    func_0x000107c61170(param_3);
    uVar2 = 0;
  }
  else {
    FUN_1032fbea8(param_1,param_2);
    func_0x000107c61170(param_3);
    FUN_1032feb90(lStack_48);
  }
  return uVar2 & 1;
}



/* Entry: 1032feb04; end: 1032feb8f; -[_TtC28SCInLensCreationTrendingList23ILCTrendingListWorkflow setUIHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032feb04(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112f57a20);
  func_0x000107c61174();
  func_0x000107c6157c(uVar1);
  func_0x000104875e28(&lStack_38);
  func_0x000107c61574(uVar1);
  if ((lStack_38 == 0) || (lStack_38 == 1)) {
    func_0x000107c61170(param_1);
  }
  else {
    FUN_1032fa688(param_3);
    func_0x000107c61170(param_1);
    FUN_1032feb90(lStack_38);
  }
  return;
}



/* Entry: 1032feb90; end: 1032feb9f;  */

void FUN_1032feb90(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1032feba0; end: 1032feedf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1032feba0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112f57a90;
  func_0x000107c61614(unaff_x20 + _DAT_112f57a90,0);
  lVar3 = _DAT_112f57a98;
  puVar4 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar3) = puVar4;
  lVar3 = _DAT_112f57aa0;
  puVar4 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar3) = puVar4;
  *(undefined8 *)(unaff_x20 + _DAT_112f57aa8) = 0x4048000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_112f57ab0) = 0x404d000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_112f57ab8) = 0x4038000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_112f57ac0) = 0x4038000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_112f57ac8) = 0x4030000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_112f57ad0) = 0x403c000000000000;
  *(undefined1 *)(unaff_x20 + _DAT_112f57ad8) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f57ae0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112f57ae8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f57af0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f57af8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f57b00) = 0x4020000000000000;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f57b08);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f57b10);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 4) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112f57b18) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f57b20) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f57b28) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f57b30) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f57b38) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f57b40) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f57b48) = param_3;
  func_0x000107c61604(unaff_x20 + lVar2,param_4);
  *(undefined8 *)(unaff_x20 + _DAT_112f57b50) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112f57b58) = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f57b60);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  puVar4 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_1);
  func_0x000107c615f0(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_5);
  func_0x000107c615f0(param_6);
  puVar5 = auStack_70;
  func_0x000107c61154(puVar5,puVar4);
  func_0x000107c61180();
  FUN_1032ff4a4();
  puVar4 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x000107c61168(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  puVar6 = puVar4;
  func_0x000107c41570();
  func_0x000107c61180();
  func_0x000107c3d7bc();
  func_0x000107c61170(puVar6);
  func_0x000107c41570(puVar4);
  func_0x000107c61180();
  func_0x000107c3d7bc();
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61574(param_5);
  func_0x000107c615e8(param_6);
  func_0x000107c61170(puVar4);
  return puVar5;
}



/* Entry: 1032feee0; end: 1032ff0cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032feee0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  long unaff_x20;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar2 = _DAT_112f57b30;
  lVar4 = unaff_x20 + _DAT_112f57b30;
  func_0x000107c61428(lVar4,auStack_78,1,0);
  *(undefined1 *)(unaff_x20 + lVar2) = 1;
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & **(ulong **)(unaff_x20 + _DAT_112f57b38)) +
              0x98))();
  if (lVar4 != 0) {
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f57b10);
    if (*(char *)(puVar1 + 4) == '\x01') {
      func_0x000107c438d4();
      func_0x000107c61170(lVar4);
      *puVar1 = param_1;
      puVar1[1] = param_2;
      puVar1[2] = param_3;
      puVar1[3] = param_4;
      *(undefined1 *)(puVar1 + 4) = 0;
    }
    else {
      func_0x000107c61170();
    }
  }
  puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar6 = &UNK_11063b938;
  func_0x000107c613fc(&UNK_11063b938,0x18,7);
  *(long *)(puVar6 + 0x10) = unaff_x20;
  puVar7 = &UNK_11063b960;
  func_0x000107c613fc(&UNK_11063b960,0x20,7);
  *(code **)(puVar7 + 0x10) = FUN_1032ff600;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  pcStack_88 = FUN_1032ff608;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_10006eb60;
  puStack_90 = &UNK_11063b978;
  ppuVar8 = &puStack_a8;
  puStack_80 = puVar7;
  func_0x000107c60bc4(ppuVar8);
  puVar9 = puStack_80;
  func_0x000107c61174();
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar9);
  func_0x000107c4e5fc(puVar5);
  func_0x000107c60bd0(ppuVar8);
  puVar9 = puVar7;
  func_0x000107c61544(puVar7,"",0x70,0xa3,0x28,1);
  func_0x000107c61574(puVar7);
  if (((ulong)puVar9 & 1) == 0) {
    FUN_1032ff644();
    func_0x000107c61574(puVar6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1032ff0cc);
  (*pcVar3)();
}



/* Entry: 1032ff0cc; end: 1032ff2b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032ff0cc(double param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  double dVar3;
  undefined1 auStack_48 [24];
  
  lVar2 = _DAT_112f57b30;
  func_0x000107c61428(unaff_x20 + _DAT_112f57b30,auStack_48,0,0);
  lVar1 = _DAT_112f57af0;
  if ((*(char *)(unaff_x20 + lVar2) == '\x01') &&
     (*(char *)(*(long *)(unaff_x20 + _DAT_112f57b38) + _DAT_113082a30) == '\x01')) {
    if (param_1 < 0.0) {
      param_1 = 0.0;
    }
    if (param_1 != *(double *)(unaff_x20 + _DAT_112f57af0)) {
      if ((0.0 < param_1) && (*(double *)(unaff_x20 + _DAT_112f57af8) == 0.0)) {
        dVar3 = 28.0;
        if (param_1 <= 28.0) {
          dVar3 = param_1;
        }
        *(double *)(unaff_x20 + _DAT_112f57af8) = dVar3;
      }
      *(double *)(unaff_x20 + lVar1) = param_1;
      if ((*(char *)(unaff_x20 + _DAT_112f57ad8) == '\x01') &&
         (0.0 < *(double *)(unaff_x20 + _DAT_112f57ae8))) {
        FUN_1032fffbc();
        FUN_103300280(0);
      }
    }
  }
  return;
}



/* Entry: 1032ff2b4; end: 1032ff3af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032ff2b4(double param_1)

{
  double *pdVar1;
  long lVar2;
  long unaff_x20;
  double dVar3;
  undefined1 auStack_58 [24];
  
  lVar2 = _DAT_112f57b30;
  dVar3 = param_1;
  func_0x000107c61428(unaff_x20 + _DAT_112f57b30,auStack_58,0,0);
  if (((*(char *)(unaff_x20 + lVar2) == '\x01') &&
      (*(char *)(*(long *)(unaff_x20 + _DAT_112f57b38) + _DAT_113082a30) == '\x01')) &&
     (*(char *)(*(long *)(unaff_x20 + _DAT_112f57b38) + _DAT_113082a38) == '\x01')) {
    if (param_1 < 0.0) {
      param_1 = 0.0;
    }
    FUN_1032ff3b0();
    if (param_1 <= dVar3) {
      dVar3 = param_1;
    }
    pdVar1 = (double *)(unaff_x20 + _DAT_112f57b08);
    if ((*(char *)(pdVar1 + 1) == '\x01') || (dVar3 != *pdVar1)) {
      *pdVar1 = dVar3;
      *(undefined1 *)(pdVar1 + 1) = 0;
      FUN_10330095c();
      FUN_103300280(0);
    }
  }
  return;
}



/* Entry: 1032ff3b0; end: 1032ff4a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1032ff3b0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  double dVar3;
  double dVar4;
  
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & **(ulong **)(unaff_x20 + _DAT_112f57b38)) +
              0x98))();
  dVar3 = param_1;
  dVar4 = 0.0;
  if (param_5 != 0) {
    lVar1 = param_5;
    func_0x000107c5e3f8();
    func_0x000107c61180();
    func_0x000107c61170(param_5);
    dVar3 = param_1;
    if (lVar1 != 0) {
      func_0x000107c515a0(lVar1);
      dVar3 = param_1;
      func_0x000107c61170(lVar1);
      dVar4 = param_1;
    }
  }
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x000107c4c194();
  func_0x000107c61180();
  func_0x000107c3ec60();
  func_0x000107c61170(puVar2);
  func_0x000107c609b0(dVar3,param_2,param_3,param_4);
  return (long)((dVar3 - dVar4) * 0.68);
}



/* Entry: 1032ff4a4; end: 1032ff59b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032ff4a4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f57b40);
  func_0x000107c5e39c(uVar1);
  func_0x000107c61180();
  puVar2 = &UNK_11063bb18;
  func_0x000107c613fc(&UNK_11063bb18,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  pcStack_40 = FUN_1033011a8;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_100c1de60;
  puStack_48 = &UNK_11063bb58;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  uVar4 = uVar1;
  func_0x000107c5c320(uVar1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c3e924(uVar4);
  func_0x000107c61170(uVar4);
  return;
}


