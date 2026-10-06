/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100e43eb0; end: 100e43eb3; -[_TtC36SponsoredLensPlayablesImplementation25PlayableComposerNavigator initWithRuntime:] */

void FUN_100e43eb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_initWithRuntime__1125edce0,param_3);
  return;
}



/* Entry: 100e43eb4; end: 100e43ebf; -[_TtC36SponsoredLensPlayablesImplementation29LensPlayableComposerNavigator initWithRuntime:] */

void FUN_100e43eb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_initWithRuntime__1125edce0,param_3);
  return;
}



/* Entry: 100e43ec0; end: 100e43f73; -[SCSponsoredLensPlayablesEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e43ec0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long *plVar4;
  undefined1 *puVar5;
  long lStack_50;
  long lStack_48;
  
  plVar4 = &lStack_50;
  lVar1 = param_1;
  func_0x000107c614f0();
  puVar5 = *(undefined1 **)(param_1 + _DAT_112d3bc90);
  if (puVar5 == (undefined1 *)0x0) {
    func_0x000107c61174(param_1);
  }
  else {
    lVar2 = param_1;
    func_0x000107c61174(param_1);
    puVar3 = puVar5;
    func_0x000107c6157c();
    FUN_100e41898();
    func_0x000107c61574(puVar5);
    if (puVar3 != (undefined1 *)0x0) goto LAB_100e43f54;
  }
  lStack_50 = param_1;
  lStack_48 = lVar1;
  func_0x000107c61154(&lStack_50,PTR_s_end_1125c29d0);
  func_0x000107c61180();
  lVar2 = param_1;
  puVar3 = (undefined1 *)plVar4;
LAB_100e43f54:
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100e43f74; end: 100e43fa7;  */

void FUN_100e43f74(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100e43fa8; end: 100e4409f; -[SCSponsoredLensPlayablesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e43fa8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d3bc28);
  func_0x000107c61610(param_1 + _DAT_112d3bc30);
  func_0x000107c61610(param_1 + _DAT_112d3bc38);
  func_0x000107c61610(param_1 + _DAT_112d3bc40);
  func_0x000107c61610(param_1 + _DAT_112d3bc48);
  func_0x000107c61610(param_1 + _DAT_112d3bc50);
  func_0x000107c61610(param_1 + _DAT_112d3bc58);
  func_0x000107c61610(param_1 + _DAT_112d3bc60);
  func_0x000107c61610(param_1 + _DAT_112d3bc68);
  func_0x000107c61610(param_1 + _DAT_112d3bc70);
  func_0x000107c61610(param_1 + _DAT_112d3bc78);
  func_0x000107c61610(param_1 + _DAT_112d3bc80);
  func_0x000107c61610(param_1 + _DAT_112d3bc88);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d3bc90));
  return;
}



/* Entry: 100e440a0; end: 100e440bf;  */

void FUN_100e440a0(void)

{
  func_0x000107c61168(&PTR_PTR_11279b708);
  return;
}



/* Entry: 100e440c0; end: 100e44a13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100e440c0(undefined8 param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                  long param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  long lVar8;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  lVar1 = _DAT_112f95ee8;
  lVar8 = *(long *)(param_2 + _DAT_112f95f38);
  func_0x000107c61428(lVar8 + _DAT_112f95ee8,auStack_78,0,0);
  lVar1 = *(long *)(lVar8 + lVar1);
  if (lVar1 == 0) {
    func_0x000107c61170(param_2);
  }
  else {
    lVar8 = *(long *)(param_3 + _DAT_1130385c0);
    func_0x000107c61174();
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar8 != 0) {
      lVar2 = param_4;
      func_0x000107c4af30();
      func_0x000107c61180();
      lVar3 = lVar2;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      if (lVar3 != 0) {
        lVar2 = param_6;
        func_0x000107c5dbd4();
        func_0x000107c61180();
        lVar4 = lVar2;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(lVar2);
        if (lVar4 == 0) {
          func_0x000107c61170(param_2);
          func_0x000107c61170(param_3);
          func_0x000107c615e8(lVar8);
          func_0x000107c61170(lVar1);
          func_0x000107c61170(param_1);
          func_0x000107c61170(param_4);
          func_0x000107c61170(param_5);
          func_0x000107c61170(param_6);
        }
        else {
          lVar2 = lVar8;
          func_0x000107c403cc(lVar8);
          func_0x000107c61180();
          lVar5 = 0;
          FUN_100e45628();
          func_0x000107c613fc();
          *(undefined8 *)(lVar5 + 0x10) = 0x4049000000000000;
          func_0x000107c61614(lVar5 + 0x20,0);
          *(undefined8 *)(lVar5 + 0x30) = 0;
          *(undefined8 *)(lVar5 + 0x38) = 0;
          *(undefined8 *)(lVar5 + 0x40) = 0;
          *(long *)(lVar5 + 0x18) = lVar1;
          func_0x000107c61604(lVar5 + 0x20,lVar2);
          *(long *)(lVar5 + 0x28) = lVar4;
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000107c615f0(lVar4);
          FUN_100e44dc4();
          func_0x000100e4510c();
          func_0x000107c61170(lVar1);
          func_0x000107c61170(lVar2);
          *(long *)(unaff_x20 + 0x10) = lVar5;
          lVar2 = param_4;
          func_0x000107c4af30();
          func_0x000107c61180();
          lVar5 = lVar2;
          func_0x000107c5c734();
          func_0x000107c61180();
          func_0x000107c61170(lVar2);
          if (lVar5 == 0) {
            func_0x000107c61170(param_2);
            func_0x000107c61170(param_3);
            func_0x000107c615e8(lVar8);
            func_0x000107c61170(lVar1);
            func_0x000107c61170(param_1);
            func_0x000107c61170(param_4);
            func_0x000107c61170(param_5);
            func_0x000107c61170(param_6);
          }
          else {
            lVar6 = lVar5;
            func_0x000107c4b3f8();
            func_0x000107c61180();
            lVar2 = _DAT_112f96048;
            if (lVar6 == 0) {
              func_0x000107c615e8(lVar5);
              func_0x000107c61170(param_2);
              func_0x000107c61170(param_3);
              func_0x000107c615e8(lVar8);
              func_0x000107c61170(lVar1);
              func_0x000107c61170(param_1);
              func_0x000107c61170(param_4);
              func_0x000107c61170(param_5);
            }
            else {
              func_0x000107c61428(lVar1 + _DAT_112f96048,auStack_90,0,0);
              lVar7 = lVar1 + lVar2;
              func_0x000107c61618();
              if (lVar7 != 0) {
                func_0x000107c5b7cc();
                func_0x000107c615e8(lVar7);
              }
              lVar2 = lVar1 + lVar2;
              func_0x000107c61618();
              if (lVar2 == 0) {
                func_0x000107c61170(lVar1);
                func_0x000107c61170(param_2);
                func_0x000107c61170(param_3);
                func_0x000107c615e8(lVar8);
                func_0x000107c615e8(lVar5);
                func_0x000107c61170(param_1);
                func_0x000107c61170(param_4);
                func_0x000107c61170(param_5);
                func_0x000107c61170(param_6);
                func_0x000107c615e8(lVar4);
                func_0x000107c615e8(lVar3);
                func_0x000107c61170(lVar6);
                return unaff_x20;
              }
              func_0x000107c5b7d0();
              func_0x000107c615e8(lVar2);
              func_0x000107c61170(lVar6);
              func_0x000107c61170(param_2);
              func_0x000107c61170(param_3);
              func_0x000107c615e8(lVar8);
              func_0x000107c615e8(lVar5);
              func_0x000107c61170(lVar1);
              func_0x000107c61170(param_1);
              func_0x000107c61170(param_4);
              func_0x000107c61170(param_5);
            }
            func_0x000107c61170(param_6);
          }
          func_0x000107c615e8(lVar4);
        }
        func_0x000107c615e8(lVar3);
        return unaff_x20;
      }
      func_0x000107c61170(param_2);
      func_0x000107c61170(param_3);
      func_0x000107c615e8(lVar8);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(param_1);
      func_0x000107c61170(param_4);
      goto LAB_100e443b8;
    }
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    param_3 = lVar1;
  }
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_4);
LAB_100e443b8:
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  return unaff_x20;
}



/* Entry: 100e44a14; end: 100e44a37;  */

void FUN_100e44a14(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100e44a38; end: 100e44a43;  */

void FUN_100e44a38(void)

{
  return;
}



/* Entry: 100e44a44; end: 100e44a63;  */

void FUN_100e44a44(void)

{
  func_0x000107c61168(&PTR_PTR_112d3bd00);
  return;
}



/* Entry: 100e44a64; end: 100e44dc3;  */

long FUN_100e44a64(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x38);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    lVar2 = unaff_x20;
    func_0x000100e44ac0();
    uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
    *(long *)(unaff_x20 + 0x38) = lVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar3);
    lVar1 = 0;
  }
  func_0x000107c61174(lVar1);
  return lVar2;
}



/* Entry: 100e44dc4; end: 100e4554f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e44dc4(void)

{
  long lVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong *puVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x20;
  long lVar8;
  ulong *puVar9;
  code *pcVar10;
  long lVar11;
  undefined1 auStack_68 [24];
  
  lVar8 = _DAT_112f96050;
  lVar7 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar7 + _DAT_112f96050,auStack_68,0,0);
  lVar8 = *(long *)(lVar7 + lVar8);
  if (lVar8 != 0) {
    lVar7 = unaff_x20 + 0x20;
    func_0x000107c61618();
    if (lVar7 != 0) {
      puVar9 = *(ulong **)(unaff_x20 + 0x28);
      func_0x000102a70d68(0);
      func_0x000107c610f8();
      func_0x000107c61174(lVar8);
      func_0x000107c61174();
      func_0x000107c615f0();
      func_0x000102a70c8c();
      pcVar10 = *(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar9) + 0x68);
      func_0x000107c61174();
      func_0x000107c6157c();
      (*pcVar10)();
      func_0x000107c61170(puVar9);
      lVar1 = lVar7;
      func_0x000107c44dd8();
      func_0x000107c61180();
      if (lVar1 == 0) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x100e45108);
        (*pcVar10)();
      }
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c3d89c(lVar1);
      func_0x000107c61170(lVar1);
      func_0x000107c5a050(puVar9);
      func_0x000107c61170(puVar9);
      lVar11 = *(long *)(unaff_x20 + 0x30);
      *(ulong **)(unaff_x20 + 0x30) = puVar9;
      func_0x000107c61174();
      func_0x000107c61170();
      func_0x0001008478a8();
      func_0x000107c613fc();
      *(undefined8 *)(lVar11 + 0x18) = 7;
      *(undefined8 *)(lVar11 + 0x10) = 3;
      puVar2 = puVar9;
      func_0x000107c3ec1c();
      func_0x000107c61180();
      func_0x000107c61170(puVar9);
      lVar1 = lVar7;
      func_0x000107c44dd0();
      func_0x000107c61180();
      if (lVar1 == 0) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x100e4510c);
        (*pcVar10)();
      }
      puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      lVar4 = lVar1;
      func_0x000107c403bc(lVar1);
      func_0x000107c61180();
      func_0x000107c615e8(lVar1);
      lVar1 = lVar4;
      func_0x000107c5cbe4(lVar4);
      func_0x000107c61180();
      func_0x000107c61170(lVar4);
      puVar5 = puVar2;
      func_0x000107c40284(0x4028000000000000);
      func_0x000107c61180();
      func_0x000107c61170(puVar2);
      func_0x000107c61170(lVar1);
      *(ulong **)(lVar11 + 0x20) = puVar5;
      puVar2 = puVar9;
      func_0x000107c4ace0();
      func_0x000107c61180();
      func_0x000107c61170(puVar9);
      lVar1 = lVar7;
      func_0x000107c4ace0(lVar7);
      func_0x000107c61180();
      puVar5 = puVar2;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(puVar2);
      func_0x000107c61170(lVar1);
      *(ulong **)(lVar11 + 0x28) = puVar5;
      puVar2 = puVar9;
      func_0x000107c50890();
      func_0x000107c61180();
      func_0x000107c61170(puVar9);
      lVar1 = lVar7;
      func_0x000107c50890(lVar7);
      func_0x000107c61180();
      puVar5 = puVar2;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(puVar2);
      func_0x000107c61170(lVar1);
      *(ulong **)(lVar11 + 0x30) = puVar5;
      uVar6 = 0;
      func_0x000100847984(0);
      lVar1 = lVar11;
      func_0x000107c5fc48(lVar11,uVar6);
      func_0x000107c61574(lVar11);
      func_0x000107c3d048(puVar3);
      func_0x000107c61170(lVar8);
      func_0x000107c61170(lVar7);
      func_0x000107c61170(puVar9);
      func_0x000107c61170(lVar1);
    }
  }
  return;
}



/* Entry: 100e45550; end: 100e455a7;  */

void FUN_100e45550(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    func_0x000107c4ff34();
  }
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100e456b4(unaff_x20 + 0x20);
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100e455a8; end: 100e45627; -[_TtC26SponsoredLensVideoToArImpl24SponsoredLensCTAWorkflow ctaButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e455a8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f96048;
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x000107c61428(lVar2 + _DAT_112f96048,auStack_48,0,0);
  lVar2 = lVar2 + lVar1;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c6157c(param_1);
    func_0x000107c5b7bc(lVar2);
    func_0x000107c61574(param_1);
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 100e45628; end: 100e45647;  */

void FUN_100e45628(void)

{
  func_0x000107c61168(&PTR_PTR_112d3bda0);
  return;
}



/* Entry: 100e45648; end: 100e4564b;  */

void FUN_100e45648(void)

{
  return;
}



/* Entry: 100e4564c; end: 100e456ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e4564c(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f96048;
  lVar2 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + _DAT_112f96048,auStack_38,0,0);
  lVar2 = lVar2 + lVar1;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c5b7bc();
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 100e456ac; end: 100e456b3;  */

void FUN_100e456ac(void)

{
  return;
}



/* Entry: 100e456b4; end: 100e456d7;  */

undefined8 FUN_100e456b4(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 100e456d8; end: 100e456e3; -[SCSponsoredLensVideoToArImplEntryPoint conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e456d8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d3be30;
  func_0x000107c61428(param_1 + _DAT_112d3be30,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e456e4; end: 100e456ef; -[SCSponsoredLensVideoToArImplEntryPoint setConditionalBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e456e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d3be30;
  func_0x000107c61428(param_1 + _DAT_112d3be30,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e456f0; end: 100e456fb; -[SCSponsoredLensVideoToArImplEntryPoint sponsoredLensLaunchScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e456f0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d3be38;
  func_0x000107c61428(param_1 + _DAT_112d3be38,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e456fc; end: 100e45707; -[SCSponsoredLensVideoToArImplEntryPoint setSponsoredLensLaunchScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e456fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d3be38;
  func_0x000107c61428(param_1 + _DAT_112d3be38,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e45708; end: 100e45713; -[SCSponsoredLensVideoToArImplEntryPoint cameraUIServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e45708(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d3be40;
  func_0x000107c61428(param_1 + _DAT_112d3be40,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e45714; end: 100e4571f; -[SCSponsoredLensVideoToArImplEntryPoint setCameraUIServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e45714(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d3be40;
  func_0x000107c61428(param_1 + _DAT_112d3be40,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e45720; end: 100e4572b; -[SCSponsoredLensVideoToArImplEntryPoint lensLoggerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e45720(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d3be48;
  func_0x000107c61428(param_1 + _DAT_112d3be48,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e4572c; end: 100e45737; -[SCSponsoredLensVideoToArImplEntryPoint setLensLoggerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e4572c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d3be48;
  func_0x000107c61428(param_1 + _DAT_112d3be48,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e45738; end: 100e45743; -[SCSponsoredLensVideoToArImplEntryPoint lensStudyConfigurationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e45738(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d3be50;
  func_0x000107c61428(param_1 + _DAT_112d3be50,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e45744; end: 100e4574f; -[SCSponsoredLensVideoToArImplEntryPoint setLensStudyConfigurationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e45744(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d3be50;
  func_0x000107c61428(param_1 + _DAT_112d3be50,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e45750; end: 100e4575b; -[SCSponsoredLensVideoToArImplEntryPoint composerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e45750(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d3be58;
  func_0x000107c61428(param_1 + _DAT_112d3be58,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e4575c; end: 100e4579f;  */

void FUN_100e4575c(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e457a0; end: 100e457ab; -[SCSponsoredLensVideoToArImplEntryPoint setComposerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e457a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d3be58;
  func_0x000107c61428(param_1 + _DAT_112d3be58,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e457ac; end: 100e457ff;  */

void FUN_100e457ac(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e45800; end: 100e459b3;  */

/* WARNING: Possible PIC construction at 0x000100e4597c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e4598c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e4595c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e4596c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e4594c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e45970) */
/* WARNING: Removing unreachable block (ram,0x000100e45960) */
/* WARNING: Removing unreachable block (ram,0x000100e45990) */
/* WARNING: Removing unreachable block (ram,0x000100e45980) */
/* WARNING: Removing unreachable block (ram,0x000100e45950) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e45800(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c40080();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = unaff_x20;
  func_0x000107c5b7e0();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c3f2a4();
    func_0x000107c61180();
    if (lVar3 == 0) {
      func_0x000107c61170(lVar1);
      lVar1 = lVar2;
    }
    else {
      lVar4 = unaff_x20;
      func_0x000107c4b258();
      func_0x000107c61180();
      if (lVar4 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        lVar5 = unaff_x20;
        func_0x000107c4b470();
        func_0x000107c61180();
        if (lVar5 != 0) {
          lVar6 = unaff_x20;
          func_0x000107c40014();
          func_0x000107c61180();
          if (lVar6 != 0) {
            uVar7 = 0;
            FUN_100e44a44(0);
            func_0x000107c613fc();
            func_0x000100e44570(lVar1,lVar2,lVar3,lVar4,lVar5,lVar6,uVar7);
            uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d3be60);
            *(long *)(unaff_x20 + _DAT_112d3be60) = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__swift_release_11034f4c0)(uVar7);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 100e459b4; end: 100e459db; -[SCSponsoredLensVideoToArImplEntryPoint begin] */

void FUN_100e459b4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100e45800();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100e459dc; end: 100e45a1f; -[SCSponsoredLensVideoToArImplEntryPoint end] */

void FUN_100e459dc(undefined8 param_1)

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



/* Entry: 100e45a20; end: 100e45d5f;  */

void FUN_100e45a20(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  if (param_2 != -0x2fffffffffffffee || param_3 != -0x7ffffffef10ef650) {
    uVar2 = 0;
    func_0x000107c605b8(0xd000000000000012,0x800000010ef109b0,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = 0;
      if (((param_2 == -0x2fffffffffffffe8) && (param_3 == -0x7ffffffef10ecfb0)) ||
         (func_0x000107c605b8(0xd000000000000018,0x800000010ef13050,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c5965c();
      }
      else {
        if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10ecf90)) {
          uVar2 = 0;
          func_0x000107c605b8(0xd000000000000010,0x800000010ef13070,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10ecf70)) {
              uVar2 = 0;
              func_0x000107c605b8(0xd000000000000012,0x800000010ef13090,param_2,param_3,0);
              if ((uVar2 & 1) == 0) {
                uVar2 = 0;
                if (((param_2 == -0x2fffffffffffffe2) && (param_3 == -0x7ffffffef10ecf50)) ||
                   (func_0x000107c605b8(0xd00000000000001e,0x800000010ef130b0,param_2,param_3,0),
                   (uVar2 & 1) != 0)) {
                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c55e90();
                }
                else {
                  if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10ed9b0)) {
                    uVar2 = 0;
                    func_0x000107c605b8(0xd000000000000010,0x800000010ef12650,param_2,param_3,0);
                    if ((uVar2 & 1) == 0) {
                      func_0x000107c602fc(0x15);
                      func_0x000107c6142c(0xe000000000000000);
                      func_0x000107c5fb78(param_2,param_3);
                      func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                          "SponsoredLensVideoToArImpl/SCSponsoredLensVideoToArImplEntryPoint.swift"
                                          ,0x47,2,0x3e,0);
                    /* WARNING: Does not return */
                      pcVar1 = (code *)SoftwareBreakpoint(1,0x100e45d60);
                      (*pcVar1)();
                    }
                  }
                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c536e0();
                }
                goto LAB_100e45ab0;
              }
            }
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c55db4();
            goto LAB_100e45ab0;
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c53104();
      }
      goto LAB_100e45ab0;
    }
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c53720();
LAB_100e45ab0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100e45d60; end: 100e45e0b; -[SCSponsoredLensVideoToArImplEntryPoint setValue:forIvarName:] */

void FUN_100e45d60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100e45a20(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100e45e0c; end: 100e45ecf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e45e0c(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d3be30,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d3be38,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d3be40,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d3be48,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d3be50,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d3be58,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d3be60) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100e45ed0; end: 100e45eef; -[SCSponsoredLensVideoToArImplEntryPoint init] */

void FUN_100e45ed0(void)

{
  FUN_100e45e0c();
  return;
}



/* Entry: 100e45ef0; end: 100e45f23;  */

void FUN_100e45ef0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100e45f24; end: 100e45fab; -[SCSponsoredLensVideoToArImplEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e45f24(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d3be30);
  func_0x000107c61610(param_1 + _DAT_112d3be38);
  func_0x000107c61610(param_1 + _DAT_112d3be40);
  func_0x000107c61610(param_1 + _DAT_112d3be48);
  func_0x000107c61610(param_1 + _DAT_112d3be50);
  func_0x000107c61610(param_1 + _DAT_112d3be58);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d3be60));
  return;
}



/* Entry: 100e45fac; end: 100e45fcb;  */

void FUN_100e45fac(void)

{
  func_0x000107c61168(&PTR_PTR_11279b828);
  return;
}



/* Entry: 100e45fcc; end: 100e46013; -[_TtC28ReportAdChatActionMenuPlugin28ReportAdChatActionMenuPlugin uiContainerProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e45fcc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d3be90;
  func_0x000107c61428(param_1 + _DAT_112d3be90,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e46014; end: 100e4606b; -[_TtC28ReportAdChatActionMenuPlugin28ReportAdChatActionMenuPlugin setUiContainerProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e46014(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d3be90;
  func_0x000107c61428(param_1 + _DAT_112d3be90,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e4606c; end: 100e46147;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e4606c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  func_0x000107c61614(unaff_x20 + _DAT_112d3be90,0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d3be98);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112d3bea0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112d3bea8) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112d3beb0) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112d3beb8) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112d3bec0) = param_6;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100e46148; end: 100e4614f; -[_TtC28ReportAdChatActionMenuPlugin28ReportAdChatActionMenuPlugin itemType] */

undefined8 FUN_100e46148(void)

{
  return 0x18;
}



/* Entry: 100e46150; end: 100e46157; -[_TtC28ReportAdChatActionMenuPlugin28ReportAdChatActionMenuPlugin lockedConversationPolicy] */

undefined8 FUN_100e46150(void)

{
  return 0;
}



/* Entry: 100e46158; end: 100e4625b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100e46158(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  long unaff_x20;
  long lVar5;
  
  lVar5 = *(long *)(param_2 + _DAT_112f14ba0);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112d3be98);
  uVar2 = ((undefined8 *)(unaff_x20 + _DAT_112d3be98))[1];
  func_0x000107c5fadc(uVar1,uVar2);
  func_0x000107c4cde0();
  func_0x000107c61180();
  if (param_1 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar2);
  }
  uVar2 = uVar1;
  func_0x000107c49cec(uVar1);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
  puVar3 = PTR_PTR_1126ae558;
  func_0x000107c61168(PTR_PTR_1126ae558);
  FUN_100e471a4(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar4 = (ulong)((uint)(lVar5 == 6) & ((uint)uVar2 ^ 1));
  func_0x000107c6010c(uVar4);
  func_0x000107c451b0(puVar3);
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  return puVar3;
}



/* Entry: 100e4625c; end: 100e462d3; -[_TtC28ReportAdChatActionMenuPlugin28ReportAdChatActionMenuPlugin isActionApplicableTo:actionMenuContext:] */

void FUN_100e4625c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_100e46158(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100e462d4; end: 100e4646f;  */

void FUN_100e462d4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  uVar6 = *param_2;
  puVar1 = PTR_PTR_1126a5e70;
  uVar5 = param_3;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar2 = puVar1;
  func_0x000107c309e0();
  func_0x000107c61180();
  func_0x000107c59e18(puVar1);
  func_0x000107c61170(puVar2);
  puVar2 = PTR_PTR_1126c2cb0;
  func_0x000107c61168();
  func_0x000107c44f9c();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar5);
  }
  func_0x000107c592b0(puVar1);
  func_0x000107c61170(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ecc();
  func_0x000107c59a2c(puVar1);
  func_0x000107c61170(puVar2);
  puVar2 = &UNK_110359228;
  func_0x000107c613fc(&UNK_110359228,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_3);
  puVar3 = &UNK_110359250;
  func_0x000107c613fc(&UNK_110359250,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = uVar6;
  pcStack_50 = FUN_100e47478;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_100e46924;
  puStack_58 = &UNK_110359268;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c61174(uVar6);
  func_0x000107c61574(puVar2);
  func_0x000107c56ea4(puVar1);
  func_0x000107c60bd0(ppuVar4);
  *param_1 = puVar1;
  return;
}



/* Entry: 100e46470; end: 100e4656b;  */

undefined * FUN_100e46470(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined1 *puVar3;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar2 = &puStack_50;
  puVar3 = auStack_48;
  func_0x000107c61428(param_1 + 0x10,puVar3,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    func_0x0001000285a8(0x112d3bf00,&UNK_10d905070);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c45a48();
    puStack_50 = puVar1;
    func_0x000104888f7c(&puStack_50);
    func_0x000107c61170(puVar1);
    func_0x000103edf0bc();
    func_0x000107c61574(ppuVar2);
  }
  else {
    func_0x000107c40674(param_2);
    func_0x000107c61180();
    puVar1 = param_2;
    func_0x000107c5faec();
    func_0x000107c61170(param_2);
    FUN_100e4656c(puVar1,puVar3);
    func_0x000107c61170(param_1);
    func_0x000107c6142c(puVar3);
  }
  return puVar1;
}



/* Entry: 100e4656c; end: 100e46923;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 **** FUN_100e4656c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  char *pcVar10;
  undefined8 ****ppppuVar11;
  long unaff_x20;
  undefined8 ****ppppuVar12;
  undefined8 ***pppuStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  
  lVar4 = _DAT_112d3be90;
  func_0x000107c61428(unaff_x20 + _DAT_112d3be90,auStack_88,0,0);
  lVar4 = unaff_x20 + lVar4;
  func_0x000107c61618();
  if (lVar4 != 0) {
    lVar1 = lVar4;
    func_0x000107c5d184();
    func_0x000107c61180();
    func_0x000107c615e8(lVar4);
    lVar2 = *(long *)(unaff_x20 + _DAT_112d3beb0);
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar4 = lVar1;
    if (lVar2 != 0) {
      lVar3 = *(long *)(unaff_x20 + _DAT_112d3bea0);
      func_0x000107c5c734();
      func_0x000107c61180();
      lVar4 = lVar2;
      if (lVar3 != 0) {
        lVar4 = *(long *)(unaff_x20 + _DAT_112d3bea8);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar4 != 0) {
          FUN_100e46a74();
          puVar5 = PTR_PTR_1126ae560;
          func_0x000107c610f8();
          func_0x000107c453e4();
          func_0x000107c5fadc(param_1,param_2);
          puVar6 = &UNK_1103592a0;
          func_0x000107c613fc(&UNK_1103592a0,0x18,7);
          *(undefined **)(puVar6 + 0x10) = puVar5;
          uStack_98 = 0x100e4749c;
          pppuStack_b8 = (undefined8 ***)PTR___NSConcreteStackBlock_11034bd00;
          uStack_b0 = 0x42000000;
          pcStack_a8 = (code *)0x100e46b24;
          puStack_a0 = &UNK_1103592b8;
          ppppuVar12 = &pppuStack_b8;
          puStack_90 = puVar6;
          func_0x000107c60bc4(ppppuVar12);
          puVar6 = puStack_90;
          func_0x000107c61174(puVar5);
          func_0x000107c61574(puVar6);
          func_0x000107c43050(lVar3);
          func_0x000107c60bd0(ppppuVar12);
          func_0x000107c61170(param_1);
          func_0x0001000285a8(0x112d3bf08,&UNK_10d913340);
          func_0x000107c613fc();
          lVar7 = 0;
          func_0x00010095c380();
          puVar8 = puVar5;
          func_0x000107c43bf4(puVar5);
          func_0x000107c61180();
          puVar6 = &UNK_110359228;
          func_0x000107c613fc(&UNK_110359228,0x18,7);
          func_0x000107c61614(puVar6 + 0x10);
          puVar9 = &UNK_1103592f0;
          func_0x000107c613fc(&UNK_1103592f0,0x38,7);
          *(undefined **)(puVar9 + 0x10) = puVar6;
          *(long *)(puVar9 + 0x18) = lVar7;
          *(long *)(puVar9 + 0x20) = lVar4;
          *(long *)(puVar9 + 0x28) = lVar2;
          *(long *)(puVar9 + 0x30) = lVar1;
          uStack_98 = 0x100e474a8;
          pppuStack_b8 = (undefined8 ***)PTR___NSConcreteStackBlock_11034bd00;
          uStack_b0 = 0x42000000;
          pcStack_a8 = FUN_100e46fc0;
          puStack_a0 = &UNK_110359308;
          ppppuVar12 = &pppuStack_b8;
          puStack_90 = puVar9;
          func_0x000107c60bc4(ppppuVar12);
          puVar6 = puStack_90;
          func_0x000107c6157c(lVar7);
          func_0x000107c615f0(lVar4);
          func_0x000107c615f0(lVar2);
          func_0x000107c615f0(lVar1);
          func_0x000107c61574(puVar6);
          pcVar10 = "handleTap(conversationId:)";
          func_0x0001000c10c0("handleTap(conversationId:)");
          func_0x000107c61180();
          func_0x000107c5dc68(puVar8);
          func_0x000107c615e8(pcVar10);
          func_0x000107c60bd0(ppppuVar12);
          func_0x000107c61170(puVar8);
          ppppuVar12 = *(undefined8 *****)(lVar7 + 0x10);
          ppppuVar11 = ppppuVar12;
          func_0x000107c6157c(ppppuVar12);
          func_0x000103edf0bc();
          func_0x000107c615e8(lVar1);
          func_0x000107c615e8(lVar2);
          func_0x000107c615e8(lVar3);
          func_0x000107c615e8(lVar4);
          func_0x000107c61170(puVar5);
          func_0x000107c61574(lVar7);
          goto LAB_100e468f4;
        }
        func_0x000107c615e8(lVar1);
        lVar1 = lVar2;
        lVar4 = lVar3;
      }
      func_0x000107c615e8(lVar1);
    }
    func_0x000107c615e8(lVar4);
  }
  func_0x0001000285a8(0x112d3bf00,&UNK_10d905070);
  ppppuVar11 = (undefined8 ****)PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c45a48();
  ppppuVar12 = &pppuStack_b8;
  pppuStack_b8 = ppppuVar11;
  func_0x000104888f7c(ppppuVar12);
  func_0x000107c61170(ppppuVar11);
  func_0x000103edf0bc();
LAB_100e468f4:
  func_0x000107c61574(ppppuVar12);
  return ppppuVar11;
}



/* Entry: 100e46924; end: 100e4695b;  */

void FUN_100e46924(long param_1)

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



/* Entry: 100e4695c; end: 100e46a73; -[_TtC28ReportAdChatActionMenuPlugin28ReportAdChatActionMenuPlugin messageActionMenuItemViewModelFor:actionMenuContext:] */

void FUN_100e4695c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  func_0x0001000285a8(0x112d3bec8,&UNK_10d905040);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar1 = param_3;
  func_0x0001000b637c(param_3);
  uVar2 = 1;
  func_0x00010061b458(1);
  func_0x000107c61574(uVar1);
  puVar3 = &UNK_110359200;
  func_0x000107c613fc(&UNK_110359200,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  uVar4 = 0;
  FUN_100e471a4(0,0x112d3bed0,&PTR_PTR_1126a5e70);
  func_0x000107c61174(param_1);
  uVar1 = 0x100e474c0;
  func_0x0001000d5158(0x100e474c0,puVar3,uVar4);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(puVar3);
  func_0x0001004575f0();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100e46a74; end: 100e46b73;  */

/* WARNING: Possible PIC construction at 0x000100e46af0: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e46a74(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112d3beb8);
  lVar1 = lVar2;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170();
    lVar1 = lVar2;
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar1 == 0) {
      func_0x000107c4ffe8(lVar2);
      func_0x000107c61180();
    }
    else {
      uVar3 = *(undefined8 *)(lVar1 + _DAT_112fee280);
      func_0x000107c615f0(uVar3);
      func_0x000107c61170(lVar1);
      func_0x000107c41864(uVar3,param_2,0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
    return;
  }
  return;
}



/* Entry: 100e46b74; end: 100e46fbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e46b74(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  uint uVar5;
  code *pcVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined1 *puVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_80 [24];
  undefined *puStack_68;
  
  if (param_1 != 0) {
    puVar14 = auStack_80;
    func_0x000107c61428(param_3 + 0x10,puVar14,0,0);
    puVar7 = (undefined *)(param_3 + 0x10);
    func_0x000107c61618();
    if (puVar7 != (undefined *)0x0) {
      func_0x000107c61174();
      lVar13 = param_1;
      func_0x000107c3d45c();
      func_0x000107c61180();
      lVar8 = lVar13;
      func_0x000107c5ee30();
      func_0x000107c61170(lVar13);
      uVar5 = (uint)((ulong)puVar14 >> 0x20);
      uVar15 = uVar5 >> 0x1e;
      if (uVar5 >> 0x1e < 2) {
        if (uVar15 == 0) {
          if (((ulong)puVar14 >> 0x30 & 0xff) == 0) goto LAB_100e46d64;
        }
        else {
          iVar16 = (int)((ulong)lVar8 >> 0x20);
          if (SBORROW4(iVar16,(int)lVar8)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e46df4);
            (*pcVar6)();
          }
          if (iVar16 == (int)lVar8) goto LAB_100e46d64;
        }
LAB_100e46c64:
        lVar13 = lVar8;
        func_0x000107c5ee20(lVar8,puVar14);
        func_0x000107c4e36c();
        func_0x000107c61180();
        func_0x000107c61170(lVar13);
        if (param_5 == 0) {
          puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x000107c610f8();
          func_0x000107c45a48();
          puStack_68 = puVar10;
          func_0x000100b60084(&puStack_68);
          func_0x000107c61170(param_1);
          func_0x00010006c090(lVar8,puVar14);
        }
        else {
          func_0x000107c3d428();
          func_0x000107c61180();
          func_0x0001084c6bf4(param_5,0);
          uVar11 = *(undefined8 *)(param_5 + _DAT_11308f138);
          uVar12 = ((undefined8 *)(param_5 + _DAT_11308f138))[1];
          uVar18 = *(ulong *)(param_5 + _DAT_113815208);
          if (uVar18 == 0) {
LAB_100e46e08:
            func_0x000107c61434(uVar12);
            uStack_c0 = 0;
            uStack_b8 = 0;
          }
          else {
            uVar17 = uVar18 & 0xffffffffffffff8;
            if (uVar18 >> 0x3e == 0) {
              uVar9 = *(ulong *)(uVar17 + 0x10);
            }
            else {
              uVar9 = uVar18;
              if (-1 < (long)uVar18) {
                uVar9 = uVar17;
              }
              func_0x000107c60480();
            }
            if (uVar9 == 0) goto LAB_100e46e08;
            if ((uVar18 & 0xc000000000000001) == 0) {
              if (*(long *)(uVar17 + 0x10) == 0) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e46fc0);
                (*pcVar6)();
              }
              puVar1 = (undefined8 *)(*(long *)(uVar18 + 0x20) + _DAT_11308f1f8);
              uStack_b8 = *puVar1;
              uStack_c0 = puVar1[1];
              func_0x000107c61434();
              func_0x000107c61434(uVar12);
            }
            else {
              func_0x000107c61434(uVar12);
              func_0x000107c61434(uVar18);
              lVar13 = 0;
              func_0x000100e471e4(0,uVar18);
              func_0x000107c6142c(uVar18);
              uStack_b8 = *(undefined8 *)(lVar13 + _DAT_11308f1f8);
              uStack_c0 = ((undefined8 *)(lVar13 + _DAT_11308f1f8))[1];
              func_0x000107c61434();
              func_0x000107c615e8(lVar13);
            }
          }
          uVar19 = *(undefined8 *)(param_5 + _DAT_11308f128);
          uVar2 = *(undefined8 *)(param_5 + _DAT_11308f140);
          uVar3 = ((undefined8 *)(param_5 + _DAT_11308f140))[1];
          uVar4 = *(undefined1 *)(param_5 + _DAT_113815290);
          func_0x000103b48d70(0);
          func_0x000107c610f8();
          func_0x000107c61434(uVar3);
          func_0x000103b4868c(uVar11,uVar12,uStack_b8,uStack_c0,uVar2,uVar3,uVar19,0,uVar4);
          uVar12 = *(undefined8 *)(puVar7 + _DAT_112d3bec0);
          func_0x000107c3ed3c(uVar12);
          func_0x000107c61180();
          func_0x000107c42c1c(*(undefined8 *)(puVar7 + _DAT_112d3beb8));
          puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x000107c610f8();
          func_0x000107c45a48();
          puStack_68 = puVar10;
          func_0x000100b60084(&puStack_68);
          func_0x000107c61170(param_5);
          func_0x000107c615e8(param_6);
          func_0x000107c61170(uVar11);
          func_0x000107c61170(uVar12);
          func_0x000107c61170(param_1);
          func_0x00010006c090(lVar8,puVar14);
        }
      }
      else {
        if (uVar15 == 2) {
          if (SBORROW8(*(long *)(lVar8 + 0x18),*(long *)(lVar8 + 0x10))) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e46df0);
            (*pcVar6)();
          }
          if (*(long *)(lVar8 + 0x18) != *(long *)(lVar8 + 0x10)) goto LAB_100e46c64;
        }
LAB_100e46d64:
        puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8();
        func_0x000107c45a48();
        puStack_68 = puVar10;
        func_0x000100b60084(&puStack_68);
        func_0x000107c61170(param_1);
        func_0x00010006c090(lVar8,puVar14);
      }
      func_0x000107c61170(puVar10);
      goto LAB_100e46f44;
    }
  }
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c45a48();
  puStack_68 = puVar7;
  func_0x000100b60084(&puStack_68);
LAB_100e46f44:
  func_0x000107c61170(puVar7);
  return;
}



/* Entry: 100e46fc0; end: 100e47037;  */

/* WARNING: Possible PIC construction at 0x000100e4701c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e47020) */

void FUN_100e46fc0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 100e47038; end: 100e47097; -[_TtC28ReportAdChatActionMenuPlugin28ReportAdChatActionMenuPlugin init] */

void FUN_100e47038(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ReportAdChatActionMenuPlugin.ReportAdChatActionMenuPlugin",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100e47064);
  (*pcVar1)();
}



/* Entry: 100e47098; end: 100e47123; -[_TtC28ReportAdChatActionMenuPlugin28ReportAdChatActionMenuPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100e47098(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d3be98 + 8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d3bea0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d3bea8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d3beb8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d3bec0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d3beb0));
  param_1 = param_1 + _DAT_112d3be90;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 100e47124; end: 100e4714b; -[_TtC28ReportAdChatActionMenuPlugin28ReportAdChatActionMenuPlugin dismissPresentedView] */

void FUN_100e47124(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100e46a74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100e4714c; end: 100e4714f; -[_TtC28ReportAdChatActionMenuPlugin28ReportAdChatActionMenuPlugin reportAdScopeDidSubmitWithReasonId:comment:] */

void FUN_100e4714c(void)

{
  return;
}



/* Entry: 100e47150; end: 100e4719b; -[_TtC28ReportAdChatActionMenuPlugin28ReportAdChatActionMenuPlugin reportAdScopeDidComplete:didSubmit:] */

/* WARNING: Possible PIC construction at 0x000100e47184: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e47188) */

void FUN_100e47150(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_100e47384();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100e4719c; end: 100e471a3;  */

void FUN_100e4719c(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  ppuVar4 = &puStack_70;
  uVar7 = *param_2;
  puVar1 = PTR_PTR_1126a5e70;
  uVar5 = uVar6;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar2 = puVar1;
  func_0x000107c309e0();
  func_0x000107c61180();
  func_0x000107c59e18(puVar1);
  func_0x000107c61170(puVar2);
  puVar2 = PTR_PTR_1126c2cb0;
  func_0x000107c61168();
  func_0x000107c44f9c();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar5);
  }
  func_0x000107c592b0(puVar1);
  func_0x000107c61170(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ecc();
  func_0x000107c59a2c(puVar1);
  func_0x000107c61170(puVar2);
  puVar2 = &UNK_110359228;
  func_0x000107c613fc(&UNK_110359228,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,uVar6);
  puVar3 = &UNK_110359250;
  func_0x000107c613fc(&UNK_110359250,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = uVar7;
  pcStack_50 = FUN_100e47478;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_100e46924;
  puStack_58 = &UNK_110359268;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c61174(uVar7);
  func_0x000107c61574(puVar2);
  func_0x000107c56ea4(puVar1);
  func_0x000107c60bd0(ppuVar4);
  *param_1 = puVar1;
  return;
}



/* Entry: 100e471a4; end: 100e47383;  */

void FUN_100e471a4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 100e47384; end: 100e47433;  */

/* WARNING: Possible PIC construction at 0x000100e47400: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e47384(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112d3beb8);
  lVar1 = lVar2;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170();
    lVar1 = lVar2;
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar1 == 0) {
      func_0x000107c4ffe8(lVar2);
      func_0x000107c61180();
    }
    else {
      uVar3 = *(undefined8 *)(lVar1 + _DAT_112fee280);
      func_0x000107c615f0(uVar3);
      func_0x000107c61170(lVar1);
      func_0x000107c41864(uVar3,param_2,0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
    return;
  }
  return;
}



/* Entry: 100e47434; end: 100e47453;  */

void FUN_100e47434(void)

{
  func_0x000107c61168(&PTR_PTR_11279b910);
  return;
}



/* Entry: 100e47454; end: 100e47477;  */

undefined8 FUN_100e47454(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 100e47478; end: 100e474cb;  */

undefined * FUN_100e47478(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined1 *puVar5;
  long unaff_x20;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  puVar2 = *(undefined **)(unaff_x20 + 0x18);
  ppuVar4 = &puStack_50;
  puVar5 = auStack_48;
  func_0x000107c61428(lVar1 + 0x10,puVar5,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    func_0x0001000285a8(0x112d3bf00,&UNK_10d905070);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c45a48();
    puStack_50 = puVar3;
    func_0x000104888f7c(&puStack_50);
    func_0x000107c61170(puVar3);
    func_0x000103edf0bc();
    func_0x000107c61574(ppuVar4);
  }
  else {
    func_0x000107c40674(puVar2);
    func_0x000107c61180();
    puVar3 = puVar2;
    func_0x000107c5faec();
    func_0x000107c61170(puVar2);
    FUN_100e4656c(puVar3,puVar5);
    func_0x000107c61170(lVar1);
    func_0x000107c6142c(puVar5);
  }
  return puVar3;
}



/* Entry: 100e474cc; end: 100e476b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_100e474cc(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
             undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 unaff_x20;
  undefined8 uVar10;
  long lStack_70;
  long lStack_68;
  
  uVar9 = 0x10;
  func_0x000107c613fc();
  uVar3 = *(undefined8 *)(param_2 + _DAT_113083f78);
  func_0x000107c5d984();
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c5faec();
  func_0x000107c61170(uVar3);
  uVar3 = param_3;
  func_0x000107c40664();
  func_0x000107c61180();
  uVar5 = uVar3;
  func_0x000100461698();
  uVar10 = *(undefined8 *)(param_5 + _DAT_112fee3d8);
  lVar6 = 0;
  FUN_100e47434();
  lVar7 = lVar6;
  func_0x000107c610f8();
  func_0x000107c61614(lVar7 + _DAT_112d3be90,0);
  puVar1 = (undefined8 *)(lVar7 + _DAT_112d3be98);
  *puVar1 = uVar4;
  puVar1[1] = uVar9;
  *(undefined8 *)(lVar7 + _DAT_112d3bea0) = uVar3;
  *(undefined8 *)(lVar7 + _DAT_112d3bea8) = uVar5;
  *(undefined8 *)(lVar7 + _DAT_112d3beb0) = uVar10;
  *(undefined8 *)(lVar7 + _DAT_112d3beb8) = param_7;
  *(undefined8 *)(lVar7 + _DAT_112d3bec0) = param_6;
  puVar2 = PTR_s_init_1125d9248;
  lStack_70 = lVar7;
  lStack_68 = lVar6;
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_6);
  func_0x000107c61174(uVar10);
  plVar8 = &lStack_70;
  func_0x000107c61154(plVar8,puVar2);
  func_0x000107c4fba8(*(undefined8 *)(param_1 + _DAT_112f14b58));
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(plVar8);
  return unaff_x20;
}



/* Entry: 100e476b8; end: 100e476d3;  */

void FUN_100e476b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100e476d4; end: 100e476f3;  */

void FUN_100e476d4(void)

{
  func_0x000107c61168(&PTR_PTR_112d3bf50);
  return;
}



/* Entry: 100e476f4; end: 100e476ff; -[SCReportAdChatActionMenuPluginEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e476f4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d3bfa8;
  func_0x000107c61428(param_1 + _DAT_112d3bfa8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e47700; end: 100e4770b; -[SCReportAdChatActionMenuPluginEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e47700(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d3bfa8;
  func_0x000107c61428(param_1 + _DAT_112d3bfa8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e4770c; end: 100e47717; -[SCReportAdChatActionMenuPluginEntryPoint userSessionScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e4770c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d3bfb0;
  func_0x000107c61428(param_1 + _DAT_112d3bfb0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e47718; end: 100e47723; -[SCReportAdChatActionMenuPluginEntryPoint setUserSessionScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e47718(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d3bfb0;
  func_0x000107c61428(param_1 + _DAT_112d3bfb0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e47724; end: 100e4772f; -[SCReportAdChatActionMenuPluginEntryPoint nativeMessagingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e47724(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d3bfb8;
  func_0x000107c61428(param_1 + _DAT_112d3bfb8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e47730; end: 100e4773b; -[SCReportAdChatActionMenuPluginEntryPoint setNativeMessagingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e47730(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d3bfb8;
  func_0x000107c61428(param_1 + _DAT_112d3bfb8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e4773c; end: 100e47747; -[SCReportAdChatActionMenuPluginEntryPoint sponsoredSnapAdResponseServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e4773c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d3bfc0;
  func_0x000107c61428(param_1 + _DAT_112d3bfc0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e47748; end: 100e47753; -[SCReportAdChatActionMenuPluginEntryPoint setSponsoredSnapAdResponseServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e47748(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d3bfc0;
  func_0x000107c61428(param_1 + _DAT_112d3bfc0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e47754; end: 100e4775f; -[SCReportAdChatActionMenuPluginEntryPoint adReportServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e47754(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d3bfc8;
  func_0x000107c61428(param_1 + _DAT_112d3bfc8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e47760; end: 100e4776b; -[SCReportAdChatActionMenuPluginEntryPoint setAdReportServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e47760(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d3bfc8;
  func_0x000107c61428(param_1 + _DAT_112d3bfc8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e4776c; end: 100e47777; -[SCReportAdChatActionMenuPluginEntryPoint adReportScopeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e4776c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d3bfd0;
  func_0x000107c61428(param_1 + _DAT_112d3bfd0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e47778; end: 100e477bb;  */

void FUN_100e47778(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e477bc; end: 100e477c7; -[SCReportAdChatActionMenuPluginEntryPoint setAdReportScopeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e477bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d3bfd0;
  func_0x000107c61428(param_1 + _DAT_112d3bfd0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e477c8; end: 100e4781b;  */

void FUN_100e477c8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e4781c; end: 100e47863; -[SCReportAdChatActionMenuPluginEntryPoint adReportScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e4781c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d3bfd8;
  func_0x000107c61428(param_1 + _DAT_112d3bfd8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100e47864; end: 100e478c7; -[SCReportAdChatActionMenuPluginEntryPoint setAdReportScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e47864(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d3bfd8;
  func_0x000107c61428(param_1 + _DAT_112d3bfd8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100e478c8; end: 100e47c17;  */

/* WARNING: Possible PIC construction at 0x000100e479d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e47ae0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e47af0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e47b00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e47b10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e47bd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e47be0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e47bf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e47bb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e47bc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e47b90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e47b70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e47b60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e47b74) */
/* WARNING: Removing unreachable block (ram,0x000100e47b94) */
/* WARNING: Removing unreachable block (ram,0x000100e47bc4) */
/* WARNING: Removing unreachable block (ram,0x000100e47bb4) */
/* WARNING: Removing unreachable block (ram,0x000100e47bf4) */
/* WARNING: Removing unreachable block (ram,0x000100e47be4) */
/* WARNING: Removing unreachable block (ram,0x000100e47bd4) */
/* WARNING: Removing unreachable block (ram,0x000100e47b14) */
/* WARNING: Removing unreachable block (ram,0x000100e47b04) */
/* WARNING: Removing unreachable block (ram,0x000100e47af4) */
/* WARNING: Removing unreachable block (ram,0x000100e47ae4) */
/* WARNING: Removing unreachable block (ram,0x000100e479dc) */
/* WARNING: Removing unreachable block (ram,0x000100e47b64) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e478c8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 == 0) {
    return;
  }
  lVar1 = unaff_x20;
  func_0x000107c5da74();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c4d478();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar2 = unaff_x20;
      func_0x000107c5b814();
      func_0x000107c61180();
      if (lVar2 != 0) {
        lVar2 = unaff_x20;
        func_0x000107c3d44c();
        func_0x000107c61180();
        if (lVar2 == 0) {
          func_0x000107c61170(lVar3);
          lVar3 = lVar1;
        }
        else {
          lVar2 = unaff_x20;
          func_0x000107c3d448();
          func_0x000107c61180();
          if (lVar2 == 0) {
            func_0x000107c61170(lVar3);
            lVar3 = lVar1;
          }
          else {
            func_0x000107c3d440();
            func_0x000107c61180();
            if (unaff_x20 != 0) {
              FUN_100e476d4();
              func_0x000107c613fc();
              lVar3 = *(long *)(lVar1 + _DAT_113083f78);
              func_0x000107c5d984();
              func_0x000107c61180();
              func_0x000107c5faec();
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 100e47c18; end: 100e47c3f; -[SCReportAdChatActionMenuPluginEntryPoint begin] */

void FUN_100e47c18(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100e478c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100e47c40; end: 100e47c83; -[SCReportAdChatActionMenuPluginEntryPoint end] */

void FUN_100e47c40(undefined8 param_1)

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



/* Entry: 100e47c84; end: 100e48037;  */

void FUN_100e47c84(long param_1,long param_2,long param_3)

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
    goto LAB_100e47d10;
  }
  if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10ef630)) {
    uVar2 = 0;
    func_0x000107c605b8(0xd000000000000010,0x800000010ef109d0,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = 0xd000000000000017;
      if (((param_2 == -0x2fffffffffffffe9) && (param_3 == -0x7ffffffef10ecb20)) ||
         (func_0x000107c605b8(0xd000000000000017,0x800000010ef134e0,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c5698c();
      }
      else {
        uVar2 = 0xd00000000000001f;
        if (((param_2 == -0x2fffffffffffffe1) && (param_3 == -0x7ffffffef10ecb00)) ||
           (func_0x000107c605b8(0xd00000000000001f,0x800000010ef13500,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c59678();
        }
        else {
          if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10ecae0)) {
            uVar2 = 0;
            func_0x000107c605b8(0xd000000000000010,0x800000010ef13520,param_2,param_3,0);
            if ((uVar2 & 1) == 0) {
              uVar2 = 0xd000000000000015;
              if (((param_2 == -0x2fffffffffffffeb) && (param_3 == -0x7ffffffef10ecac0)) ||
                 (func_0x000107c605b8(0xd000000000000015,0x800000010ef13540,param_2,param_3,0),
                 (uVar2 & 1) != 0)) {
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c523bc();
              }
              else {
                uVar2 = 0;
                if (((param_2 != -0x2fffffffffffffec) || (param_3 != -0x7ffffffef10ecaa0)) &&
                   (func_0x000107c605b8(0xd000000000000014,0x800000010ef13560,param_2,param_3,0),
                   (uVar2 & 1) == 0)) {
                  func_0x000107c602fc(0x15);
                  func_0x000107c6142c(0xe000000000000000);
                  func_0x000107c5fb78(param_2,param_3);
                  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                      "ReportAdChatActionMenuPlugin/SCReportAdChatActionMenuPluginEntryPoint.swift"
                                      ,0x4b,2,0x3e,0);
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x100e48038);
                  (*pcVar1)();
                }
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c523b4();
              }
              goto LAB_100e47d10;
            }
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c523c0();
        }
      }
      goto LAB_100e47d10;
    }
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c5a3f8();
LAB_100e47d10:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100e48038; end: 100e480e3; -[SCReportAdChatActionMenuPluginEntryPoint setValue:forIvarName:] */

void FUN_100e48038(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100e47c84(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100e480e4; end: 100e481b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e480e4(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d3bfa8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d3bfb0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d3bfb8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d3bfc0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d3bfc8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d3bfd0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d3bfd8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d3bfe0) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100e481b4; end: 100e481d3; -[SCReportAdChatActionMenuPluginEntryPoint init] */

void FUN_100e481b4(void)

{
  FUN_100e480e4();
  return;
}



/* Entry: 100e481d4; end: 100e48207;  */

void FUN_100e481d4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100e48208; end: 100e4829f; -[SCReportAdChatActionMenuPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e48208(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d3bfa8);
  func_0x000107c61610(param_1 + _DAT_112d3bfb0);
  func_0x000107c61610(param_1 + _DAT_112d3bfb8);
  func_0x000107c61610(param_1 + _DAT_112d3bfc0);
  func_0x000107c61610(param_1 + _DAT_112d3bfc8);
  func_0x000107c61610(param_1 + _DAT_112d3bfd0);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d3bfd8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d3bfe0));
  return;
}



/* Entry: 100e482a0; end: 100e482bf;  */

void FUN_100e482a0(void)

{
  func_0x000107c61168(&PTR_PTR_11279ba00);
  return;
}



/* Entry: 100e482c0; end: 100e483df;  */

void FUN_100e482c0(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 auStack_e8 [7];
  undefined8 auStack_b0 [7];
  undefined8 auStack_78 [7];
  
  func_0x000104041fe0(auStack_e8);
  func_0x000107c6157c(auStack_e8[0]);
  puVar1 = auStack_e8;
  FUN_100e48594(puVar1,0x112d3c0c0,&UNK_10d905180);
  func_0x000102797b10();
  func_0x000107c61574(auStack_e8[0]);
  *(undefined8 **)(unaff_x20 + 0x10) = puVar1;
  func_0x00010404200c(auStack_b0);
  func_0x000107c6157c(auStack_b0[0]);
  puVar1 = auStack_b0;
  FUN_100e48594(puVar1,0x112d3c0c0,&UNK_10d905180);
  func_0x000102797b10();
  func_0x000107c61574(auStack_b0[0]);
  *(undefined8 **)(unaff_x20 + 0x18) = puVar1;
  func_0x000104042028(auStack_78);
  func_0x000107c6157c(auStack_78[0]);
  FUN_100e48594(auStack_78,0x112d3c0c8,&UNK_10d905188);
  pcVar2 = FUN_100e483e0;
  func_0x0001000bfde0(FUN_100e483e0,0,PTR___sSSN_11034da80);
  func_0x000107c61574();
  uVar3 = auStack_78[0];
  func_0x000102797b10();
  func_0x000107c61574(pcVar2);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar3;
  return;
}



/* Entry: 100e483e0; end: 100e484db;  */

void FUN_100e483e0(undefined8 *param_1,long *param_2)

{
  code *pcVar1;
  char *pcVar2;
  long lStack_18;
  
  lStack_18 = *param_2;
  if (lStack_18 < 2) {
    if (lStack_18 == 0) {
      *param_1 = 0x5445534e55;
      param_1[1] = 0xe500000000000000;
      return;
    }
    if (lStack_18 != 1) {
LAB_100e48478:
      func_0x000107c60614(&UNK_110739820,&lStack_18,&UNK_110739820,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100e484a8);
      (*pcVar1)();
    }
    pcVar2 = "MSEC_V2_ANIMATION_TREATMENT";
  }
  else {
    if (lStack_18 != 2) {
      if (lStack_18 == 3) {
        *param_1 = 0xd00000000000001c;
        param_1[1] = 0x800000010ef135d0;
        return;
      }
      goto LAB_100e48478;
    }
    pcVar2 = "MSEC_V2_MINIMEZED_TREATMENT";
  }
  *param_1 = 0xd00000000000001b;
  param_1[1] = (ulong)(pcVar2 + -0x20) | 0x8000000000000000;
  return;
}


