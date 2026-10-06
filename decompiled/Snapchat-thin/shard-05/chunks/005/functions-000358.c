/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103ebc3c4; end: 103ebc4a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ebc3c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  uVar4 = *(ulong *)(unaff_x20 + _DAT_11302b050);
  uVar1 = uVar4;
  func_0x000107c5c82c();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(uVar1);
    _swift_bridgeObjectRelease(param_5);
    uVar1 = uVar2 & 0xffffffffffff;
    if ((param_5 & 0x2000000000000000) != 0) {
      uVar1 = param_5 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      func_0x000107c3ec60(uVar4);
      uVar5 = 0x7fefffffffffffff;
      func_0x000107c5b098(param_3,0x7fefffffffffffff,uVar4);
      lVar3 = *(long *)(unaff_x20 + _DAT_11302b038);
      if (lVar3 == 0) {
        return;
      }
      uVar5 = NEON_fminnm(uVar5,0x4059000000000000);
      goto LAB_103ebc47c;
    }
  }
  lVar3 = *(long *)(unaff_x20 + _DAT_11302b038);
  if (lVar3 == 0) {
    return;
  }
  uVar5 = 0;
LAB_103ebc47c:
                    /* WARNING: Could not recover jumptable at 0x00010c181150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar5,lVar3,PTR_s_setConstant__11263de70);
  return;
}



/* Entry: 103ebc4a4; end: 103ebc4ff; -[_TtC25LensInfoControllerFeature21LensProfilingInfoView initWithFrame:] */

void FUN_103ebc4a4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensInfoControllerFeature.LensProfilingInfoView",0x2f,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ebc4d0);
  (*pcVar1)();
}



/* Entry: 103ebc500; end: 103ebc567; -[_TtC25LensInfoControllerFeature21LensProfilingInfoView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ebc500(long param_1)

{
  FUN_103ebc784(param_1 + _DAT_11302b028);
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302b038));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302b040));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302b048));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11302b050));
  return;
}



/* Entry: 103ebc568; end: 103ebc587;  */

void FUN_103ebc568(void)

{
  _objc_opt_self(&PTR_PTR_11295f348);
  return;
}



/* Entry: 103ebc588; end: 103ebc607;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ebc588(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_11302b028;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    func_0x000107c4a118(param_1);
    lVar2 = lVar1 + 0x10;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar2 != 0) {
      FUN_103eb6534(param_1);
      _swift_unknownObjectRelease(lVar2);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 103ebc608; end: 103ebc783; -[_TtC25LensInfoControllerFeature21LensProfilingInfoView profileToggleSwitchedWithSender:] */

void FUN_103ebc608(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_103ebc588(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103ebc784; end: 103ebc7a7;  */

undefined8 FUN_103ebc784(undefined8 param_1)

{
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 103ebc7a8; end: 103ebc7b7;  */

undefined1  [16] FUN_103ebc7a8(void)

{
  return ZEXT816(0x11071cdd8);
}



/* Entry: 103ebc7b8; end: 103ebc91b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_103ebc7b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar4 = *(ulong *)(unaff_x20 + 0x48);
  uVar1 = uVar4;
  func_0x000107c49eac();
  if ((uVar1 & 1) == 0) {
    uVar1 = uVar4;
    func_0x000107c5c42c();
    _objc_retainAutoreleasedReturnValue();
    if (uVar1 != 0) {
      func_0x000107c40718(param_1,param_2);
      _objc_release(uVar1);
      uVar1 = *(ulong *)(unaff_x20 + 0x58);
      func_0x000107c438d4();
      _CGRectContainsPoint();
      if ((uVar1 & 1) != 0) {
        return 1;
      }
    }
    func_0x000107c40724(param_1,param_2,uVar4,param_6,0);
    uVar1 = *(ulong *)(unaff_x20 + 0x50);
    uVar5 = param_1;
    uVar6 = param_2;
    func_0x000107c49eac();
    if (((uVar1 & 1) == 0) && (lVar2 = *(long *)(unaff_x20 + 0x38), lVar2 != 0)) {
      _objc_retain();
      lVar3 = lVar2;
      func_0x000107c49eac();
      if ((int)lVar3 == 0) {
        FUN_103ec097c();
        func_0x000107c3ec60();
        _objc_release(lVar3);
        uVar1 = *(ulong *)(lVar2 + _DAT_11302b398);
        func_0x000107c4071c(param_1,param_2,uVar1,param_6,0);
        _CGRectContainsPoint(uVar5,uVar6,param_3,param_4,param_1,param_2);
        _objc_release(lVar2);
        if ((uVar1 & 1) != 0) {
          return 1;
        }
      }
      else {
        _objc_release(lVar2);
      }
    }
  }
  return 0;
}



/* Entry: 103ebc91c; end: 103ebca0f;  */

undefined * FUN_103ebc91c(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
  _objc_allocWithZone(PTR__OBJC_CLASS___UIButton_1126aec48);
  func_0x000107c453e4();
  uVar2 = 0x6e692d6775626564;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6e692d6775626564,0xee00657669746361);
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  _objc_opt_self(PTR__OBJC_CLASS___UIImage_1126aea68);
  func_0x000107c450cc();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x000107c55260(puVar1);
  _objc_retain(puVar1);
  uVar2 = 0xd000000000000016;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f1cbcd0);
  func_0x000107c520f4(puVar1);
  _objc_release(uVar2);
  func_0x000107c5a050(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar1);
  return puVar1;
}



/* Entry: 103ebca10; end: 103ebcdc7;  */

void FUN_103ebca10(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  long unaff_x20;
  
  uVar9 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x50);
  func_0x000107c3d89c(uVar9,param_4,uVar7);
  lVar11 = *(long *)(unaff_x20 + 0x58);
  func_0x000107c3d89c(uVar9);
  func_0x000107c3d8b8(lVar11);
  lVar1 = lVar11;
  func_0x000107c40f50();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    param_1 = 0.0;
    param_2 = 0;
  }
  else {
    func_0x000107c5b078();
    _objc_release(lVar1);
  }
  func_0x000107c5a050(uVar7);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  _objc_opt_self();
  puVar3 = puVar2;
  func_0x0001008478a8();
  _swift_allocObject();
  *(undefined8 *)(puVar3 + 0x18) = 0x11;
  *(undefined8 *)(puVar3 + 0x10) = 8;
  uVar4 = uVar7;
  func_0x000107c4acb0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar9;
  func_0x000107c4acb0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x000107c40284(0x4024000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar5);
  *(undefined8 *)(puVar3 + 0x20) = uVar6;
  uVar4 = uVar7;
  func_0x000107c5ce8c();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar9;
  func_0x000107c5ce8c(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x000107c40284(0xc024000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar5);
  *(undefined8 *)(puVar3 + 0x28) = uVar6;
  uVar4 = uVar7;
  func_0x000107c5cbe4();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar9;
  func_0x000107c5cbe4(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x000107c40280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar5);
  *(undefined8 *)(puVar3 + 0x30) = uVar6;
  func_0x000107c3ec1c();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar9;
  func_0x000107c3ec1c(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar7;
  func_0x000107c40280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(uVar4);
  *(undefined8 *)(puVar3 + 0x38) = uVar5;
  lVar1 = lVar11;
  func_0x000107c4acb0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar9;
  func_0x000107c4acb0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar1;
  func_0x000107c40284((50.0 - param_1) * 0.5 + 10.0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(uVar7);
  *(long *)(puVar3 + 0x40) = lVar8;
  lVar1 = lVar11;
  func_0x000107c5cbe4();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c5cbe4(uVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar1;
  func_0x000107c40284(0x4024000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(uVar9);
  *(long *)(puVar3 + 0x48) = lVar8;
  lVar1 = lVar11;
  func_0x000107c5e308();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar1;
  func_0x000107c40290(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  *(long *)(puVar3 + 0x50) = lVar8;
  func_0x000107c44d9c();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar11;
  func_0x000107c40290(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar11);
  *(long *)(puVar3 + 0x58) = lVar1;
  uVar9 = 0;
  func_0x000100847984(0);
  puVar10 = puVar3;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(puVar3,uVar9);
  _swift_release(puVar3);
  func_0x000107c3d048(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar10);
  return;
}



/* Entry: 103ebcdc8; end: 103ebcf1f;  */

void FUN_103ebcdc8(void)

{
  long *plVar1;
  undefined *puVar2;
  code *pcVar3;
  code *pcVar4;
  long *plVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long unaff_x20;
  undefined8 uVar10;
  
  plVar5 = (long *)PTR___sSbSQsWP_11034dd50;
  plVar1 = (long *)PTR___sSbSQsWP_11034dd50;
  func_0x0001000c2068();
  puVar6 = &UNK_11071ce08;
  puVar2 = puVar6;
  _swift_allocObject(&UNK_11071ce08,0x18,7);
  _swift_weakInit(puVar2 + 0x10);
  pcVar3 = FUN_103ebd9e4;
  puVar9 = puVar2;
  (**(code **)(*plVar1 + 0x60))(FUN_103ebd9e4);
  _swift_release(plVar1);
  _swift_release(puVar2);
  pcVar4 = pcVar3;
  _swift_getObjectType(pcVar3);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x20);
  (**(code **)(puVar9 + 0x10))(uVar10,pcVar4,puVar9);
  _swift_unknownObjectRelease(pcVar3);
  func_0x0001000c2068();
  _swift_allocObject(&UNK_11071ce08,0x18,7);
  _swift_weakInit(puVar6 + 0x10);
  uVar7 = 0x103ebd9ec;
  puVar2 = puVar6;
  (**(code **)(*plVar5 + 0x60))(0x103ebd9ec);
  _swift_release(plVar5);
  _swift_release(puVar6);
  uVar8 = uVar7;
  _swift_getObjectType(uVar7);
  (**(code **)(puVar2 + 0x10))(uVar10,uVar8,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar7);
  return;
}



/* Entry: 103ebcf20; end: 103ebcfb3;  */

void FUN_103ebcf20(void)

{
  long unaff_x20;
  
  FUN_103ebd03c(unaff_x20 + 0x10);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _objc_release(*(undefined8 *)(unaff_x20 + 0x30));
  _objc_release(*(undefined8 *)(unaff_x20 + 0x38));
  _objc_release(*(undefined8 *)(unaff_x20 + 0x48));
  _objc_release(*(undefined8 *)(unaff_x20 + 0x50));
  _objc_release(*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 103ebcfb4; end: 103ebd03b; -[_TtC25LensInfoControllerFeature17LensInfoPresenter lensInfoButtonPressesWithSender:] */

void FUN_103ebcfb4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    uVar2 = 0;
    FUN_103eb6664(0);
    _swift_retain(param_1);
    FUN_103eb6614(uVar2,&PTR_DAT_11071c9b8);
    _swift_unknownObjectRelease(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_1);
    return;
  }
  return;
}



/* Entry: 103ebd03c; end: 103ebd05f;  */

undefined8 FUN_103ebd03c(undefined8 param_1)

{
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 103ebd060; end: 103ebd2c3;  */

void FUN_103ebd060(char *param_1,long param_2)

{
  char cVar1;
  undefined1 auStack_48 [24];
  
  cVar1 = *param_1;
  _swift_beginAccess(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 != 0) {
    if (cVar1 != '\0') {
      func_0x000103ebd220();
    }
    func_0x000107c550d8(*(undefined8 *)(param_2 + 0x48));
    _swift_release(param_2);
  }
  return;
}



/* Entry: 103ebd2c4; end: 103ebd7c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ebd2c4(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (*(long *)(unaff_x20 + 0x30) == 0) {
    lVar1 = 0;
    FUN_103eba830();
    _objc_allocWithZone();
    func_0x000107c453e4();
    uVar7 = *(undefined8 *)(lVar1 + _DAT_11302afb8);
    *(undefined8 *)(lVar1 + _DAT_11302afb8) = param_1;
    _objc_retain();
    _swift_retain(param_1);
    _swift_release(uVar7);
    FUN_103eba484(param_1);
    _objc_release(lVar1);
    _objc_retain();
    uVar7 = 0xd000000000000023;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000023,0x800000010f1cbcf0);
    func_0x000107c520fc(lVar1);
    _objc_release(lVar1);
    _objc_release(uVar7);
    uVar8 = *(undefined8 *)(unaff_x20 + 0x50);
    _objc_retain();
    _objc_retain();
    func_0x000107c3d89c(uVar8);
    func_0x000107c5a050(lVar1);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    _objc_opt_self();
    puVar3 = puVar2;
    func_0x0001008478a8();
    _swift_allocObject();
    *(undefined8 *)(puVar3 + 0x18) = 7;
    *(undefined8 *)(puVar3 + 0x10) = 3;
    lVar4 = lVar1;
    func_0x000107c4acb0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar8;
    func_0x000107c4acb0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x000107c40280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(uVar7);
    *(long *)(puVar3 + 0x20) = lVar5;
    lVar4 = lVar1;
    func_0x000107c5ce8c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    uVar7 = uVar8;
    func_0x000107c5ce8c(uVar8);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x000107c40280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(uVar7);
    *(long *)(puVar3 + 0x28) = lVar5;
    lVar4 = lVar1;
    func_0x000107c5cbe4();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    func_0x000107c5cbe4(uVar8);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x000107c40280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(uVar8);
    *(long *)(puVar3 + 0x30) = lVar5;
    uVar7 = 0;
    func_0x000100847984(0);
    puVar6 = puVar3;
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(puVar3,uVar7);
    _swift_release(puVar3);
    func_0x000107c3d048(puVar2);
    _objc_release(puVar6);
    uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
    *(long *)(unaff_x20 + 0x30) = lVar1;
    _objc_release(uVar7);
    if (*(long *)(unaff_x20 + 0x30) != 0) {
      *(undefined ***)(*(long *)(*(long *)(unaff_x20 + 0x30) + _DAT_11302afc0) + _DAT_11302b028 + 8)
           = &PTR_DAT_11071cde8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)();
      return;
    }
  }
  return;
}



/* Entry: 103ebd7c4; end: 103ebd907;  */

void FUN_103ebd7c4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x30);
  if (lVar1 != 0) {
    lVar6 = *(long *)(unaff_x20 + 0x38);
    if (lVar6 == 0) {
      _objc_retain();
      lVar6 = lVar1;
      func_0x000107c3ec1c();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(unaff_x20 + 0x50);
      func_0x000107c3ec1c(uVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar6;
      func_0x000107c40280(lVar6,param_2,uVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar6);
      _objc_release(uVar4);
      func_0x000107c521e8(lVar5,param_2,1);
    }
    else {
      _objc_retain();
      _objc_retain(lVar6);
      lVar2 = lVar6;
      func_0x000107c5cbe4();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x000107c3ec1c(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar2;
      func_0x000107c40298(0x4024000000000000,lVar2,param_2,lVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      _objc_release(lVar3);
      func_0x000107c5784c(0x447a0000,lVar5);
      func_0x000107c521e8(lVar5,param_2,1);
      _objc_release(lVar1);
      lVar1 = lVar6;
    }
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar5);
    return;
  }
  return;
}



/* Entry: 103ebd908; end: 103ebd9e3;  */

void FUN_103ebd908(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  _swift_unknownObjectWeakInit(unaff_x20 + 0x10,0);
  uVar1 = 0;
  func_0x0001000c6560();
  _swift_allocObject();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
  uVar2 = 0;
  func_0x000103ec1930();
  _swift_getObjCClassFromMetadata();
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined1 *)(unaff_x20 + 0x40) = 0;
  uVar1 = uVar2;
  _objc_allocWithZone();
  func_0x000107c453e4();
  func_0x000107c550d8();
  *(undefined8 *)(unaff_x20 + 0x48) = uVar1;
  _objc_allocWithZone();
  func_0x000107c453e4();
  uVar1 = uVar2;
  func_0x000107c550d8();
  *(undefined8 *)(unaff_x20 + 0x50) = uVar2;
  FUN_103ebc91c();
  *(undefined8 *)(unaff_x20 + 0x58) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_1;
  _swift_retain(param_1);
  FUN_103ebca10();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  _swift_retain(uVar1);
  FUN_103ebcdc8();
  _swift_release(uVar1);
  return;
}



/* Entry: 103ebd9e4; end: 103ebd9f3;  */

void FUN_103ebd9e4(char *param_1)

{
  char cVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  cVar1 = *param_1;
  _swift_beginAccess(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  _swift_weakLoadStrong();
  if (lVar2 != 0) {
    if (cVar1 != '\0') {
      func_0x000103ebd220();
    }
    func_0x000107c550d8(*(undefined8 *)(lVar2 + 0x48));
    _swift_release(lVar2);
  }
  return;
}



/* Entry: 103ebd9f4; end: 103ebda4f;  */

void FUN_103ebd9f4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103ebda50; end: 103ebdaff;  */

void FUN_103ebda50(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  _objc_opt_self();
  puVar2 = puVar1;
  func_0x000107c3eb8c(0x402c000000000000);
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    func_0x000107c5c5fc(0x402c000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
  }
  puRam0000000113812248 = puVar2;
  return;
}



/* Entry: 103ebdb00; end: 103ebdb2f;  */

void FUN_103ebdb00(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _objc_opt_self();
  func_0x000107c5e2ac();
  _objc_retainAutoreleasedReturnValue();
  puRam0000000113812238 = puVar1;
  return;
}



/* Entry: 103ebdb30; end: 103ebdc03;  */

void FUN_103ebdb30(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (lRam000000011302b218 != -1) {
    _swift_once(0x11302b218,FUN_103ebdb00);
  }
  uVar1 = uRam0000000113812238;
  _objc_retain();
  uVar2 = uVar1;
  func_0x000107c3fdd0(0x3fe999999999999a);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uRam0000000113812230 = uVar2;
  return;
}



/* Entry: 103ebdc04; end: 103ebdcbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103ebdc04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_60 [8];
  
  puVar4 = auStack_60;
  _objc_allocWithZone();
  lVar2 = _DAT_113812250;
  lVar3 = 0;
  __s10Foundation4DateVMa();
  lVar5 = *(long *)(lVar3 + -8);
  (**(code **)(lVar5 + 0x10))(unaff_x20 + lVar2,param_1,lVar3);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113812258);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  (**(code **)(lVar5 + 8))(param_1,lVar3);
  return puVar4;
}



/* Entry: 103ebdcbc; end: 103ebddb3; -[SCLensLogEntry initWithTimestamp:contents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_103ebdcbc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long extraout_x8;
  long lVar5;
  long lVar6;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_1;
  _swift_getObjectType();
  lVar3 = 0;
  __s10Foundation4DateVMa();
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar5 = (long)&lStack_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(lVar5,param_3);
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  (**(code **)(lVar6 + 0x10))(param_1 + _DAT_113812250,lVar5,lVar3);
  puVar1 = (undefined8 *)(param_1 + _DAT_113812258);
  *puVar1 = param_4;
  puVar1[1] = param_2;
  plVar4 = &lStack_60;
  lStack_60 = param_1;
  lStack_58 = lVar2;
  _objc_msgSendSuper2(plVar4,PTR_s_init_1125d9248);
  (**(code **)(lVar6 + 8))(lVar5,lVar3);
  return plVar4;
}



/* Entry: 103ebddb4; end: 103ebde13; -[SCLensLogEntry init] */

void FUN_103ebddb4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensInfoControllerFeature.LensLogEntry",0x26,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ebdde0);
  (*pcVar1)();
}



/* Entry: 103ebde14; end: 103ebde63; -[SCLensLogEntry .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ebde14(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = _DAT_113812250;
  lVar2 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113812258 + 8))
  ;
  return;
}



/* Entry: 103ebde64; end: 103ebde6b;  */

void FUN_103ebde64(void)

{
  if (lRam000000011302b268 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_10e7d2110);
  return;
}



/* Entry: 103ebde6c; end: 103ebdea3;  */

void FUN_103ebde6c(undefined8 param_1)

{
  if (lRam000000011302b268 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e7d2110);
  return;
}



/* Entry: 103ebdea4; end: 103ebdf17;  */

void FUN_103ebdea4(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  __s10Foundation4DateVMa();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &UNK_10dca6448;
    _swift_updateClassMetadata2(param_1,0x100,2,&lStack_30,param_1 + 0x50);
  }
  return;
}



/* Entry: 103ebdf18; end: 103ebe023;  */

void FUN_103ebdf18(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  puVar2 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
  _objc_allocWithZone();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  _objc_retain();
  uVar3 = 0x73733a6d6d3a4848;
  uVar6 = 0xe800000000000000;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x73733a6d6d3a4848,0xe800000000000000);
  func_0x000107c53e28(puVar2);
  _objc_release(puVar2);
  _objc_release(uVar3);
  lVar4 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c41338();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103ebe024);
    (*pcVar1)();
  }
  lVar5 = lVar4;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  _objc_release(lVar4);
  __sSS5countSivg(lVar5,uVar6);
  _swift_bridgeObjectRelease(uVar6);
  if (!SCARRY8(lVar5,1)) {
    if (-1 < lVar5 + 1) {
      if (lRam000000011302b228 != -1) {
        _swift_once(0x11302b228,0x103ebdaa8);
      }
      uVar3 = uRam0000000113812240;
      *(long *)(unaff_x20 + 0x18) = lVar5 + 1;
      *(undefined8 *)(unaff_x20 + 0x20) = uVar3;
      _objc_retain();
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103ebe008);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ebe004);
  (*pcVar1)();
}



/* Entry: 103ebe024; end: 103ebe7bb;  */

undefined1  [16] FUN_103ebe024(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  undefined8 uStack_88;
  
  if (param_2 >> 0x3e == 0) {
    uVar7 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar7 = param_2 & 0xffffffffffffff8;
    if ((param_2 & 0x8000000000000000) != 0) {
      uVar7 = param_2;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar7 == 0) {
    uVar7 = 0;
    puVar8 = (undefined *)0x0;
  }
  else {
    uStack_88 = uVar7 - 1;
    if (SBORROW8(uVar7,1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103ebe1d0);
      (*pcVar3)();
    }
    if ((param_2 & 0xc000000000000001) == 0) {
      if ((long)uStack_88 < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103ebe1e8);
        (*pcVar3)();
      }
      if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= uStack_88) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103ebe1ec);
        (*pcVar3)();
      }
      uStack_88 = *(ulong *)(param_2 + uStack_88 * 8 + 0x20);
      _objc_retain();
    }
    else {
      FUN_103ebfb48(uStack_88,param_2);
    }
    uVar10 = param_2 & 0xffffffffffffff8;
    puVar8 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
    _objc_allocWithZone(PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
    func_0x000107c453e4();
    uVar9 = 0;
    uVar2 = uVar10;
    if ((param_2 & 0x8000000000000000) != 0) {
      uVar2 = param_2;
    }
    do {
      if ((param_2 & 0xc000000000000001) == 0) {
        if (*(ulong *)(uVar10 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103ebe180);
          (*pcVar3)();
        }
        uVar4 = *(ulong *)(param_2 + uVar9 * 8 + 0x20);
        _objc_retain(uVar4);
      }
      else {
        uVar4 = uVar9;
        FUN_103ebfb48(uVar9,param_2);
      }
      uVar1 = uVar9 + 1;
      if (SCARRY8(uVar9,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103ebe178);
        (*pcVar3)();
      }
      if (param_2 >> 0x3e == 0) {
        uVar5 = *(ulong *)(uVar10 + 0x10);
      }
      else {
        uVar5 = uVar2;
        __ss18_CocoaArrayWrapperV8endIndexSivg();
      }
      if (SBORROW8(uVar5,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103ebe17c);
        (*pcVar3)();
      }
      uVar6 = uVar4;
      func_0x000103ebe1ec(param_1,uVar4,uVar9 == uVar5 - 1);
      func_0x000107c3dee8(puVar8);
      _objc_release(uVar4);
      _objc_release(uVar6);
      uVar9 = uVar9 + 1;
    } while (uVar1 != uVar7);
    uVar7 = uStack_88;
    FUN_103ebed08(uStack_88);
    _objc_release(uStack_88);
  }
  auVar11._8_8_ = puVar8;
  auVar11._0_8_ = uVar7;
  return auVar11;
}



/* Entry: 103ebe7bc; end: 103ebed07;  */

undefined *
FUN_103ebe7bc(double param_1,undefined8 param_2,double param_3,long param_4,long param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 uVar18;
  long extraout_x8;
  double dVar19;
  double dVar20;
  double dVar21;
  ulong uStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  long lStack_c0;
  
  lVar4 = 0;
  __s10Foundation12CharacterSetVMa();
  lStack_f8 = *(long *)(lVar4 + -8);
  lStack_f0 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_f8 + 0x40));
  uVar8 = (long)&uStack_100 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0x11302b348;
  func_0x0001000285a8(0x11302b348,&UNK_10dca64b0);
  _swift_initStackObject();
  puVar17 = PTR__NSFontAttributeName_1103457f0;
  *(undefined8 *)(lVar4 + 0x18) = 2;
  *(undefined8 *)(lVar4 + 0x10) = 1;
  *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)puVar17;
  *(undefined8 *)(lVar4 + 0x28) = param_9;
  _objc_retain();
  _objc_retain(param_9);
  lVar5 = lVar4;
  FUN_103ebfcec();
  _swift_setDeallocating(lVar4);
  FUN_103ebfde4((undefined8 *)(lVar4 + 0x20),0x11302b350,&UNK_10dca64b8);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_6,param_7);
  lVar4 = lVar5;
  FUN_103ebf3e0(lVar5);
  uVar6 = 0;
  func_0x000100eca28c();
  uVar14 = uVar6;
  func_0x000100ecbdec();
  lVar7 = lVar4;
  uStack_e0 = uVar14;
  uStack_d8 = uVar6;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF(lVar4,uVar6,PTR___sypN_11034f1a8 + 8);
  _swift_bridgeObjectRelease(lVar4);
  func_0x000107c3ec5c(param_1,0x7ff0000000000000,param_6);
  dVar19 = param_3;
  _objc_release(param_6);
  _objc_release(lVar7);
  __s10Foundation12CharacterSetV11whitespacesACvgZ(uVar8);
  lStack_c8 = param_4;
  lStack_c0 = param_5;
  func_0x000100e8b654();
  uStack_100 = uVar8;
  __sSy10FoundationE10components11separatedBySaySSGAA12CharacterSetV_tF
            (uVar8,PTR___sSSN_11034da80,lVar7);
  func_0x000103ebf6f4();
  puStack_d0 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar4 = *(long *)(uVar8 + 0x10);
  puVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar4 != 0) {
    dVar21 = 0.0;
    lStack_e8 = lVar5;
    do {
      plVar1 = (long *)(uVar8 + 0x10) + lVar4 * 2;
      lVar7 = *plVar1;
      lVar2 = plVar1[1];
      if (lVar4 == 1) {
        _swift_bridgeObjectRetain_n(lVar2,2);
        lVar4 = lVar7;
        lVar9 = lVar2;
      }
      else {
        lStack_c8 = lVar7;
        lStack_c0 = lVar2;
        _swift_bridgeObjectRetain_n(lVar2,2);
        __sSS6appendyySSF(0x20,0xe100000000000000);
        lVar4 = lStack_c8;
        lVar9 = lStack_c0;
      }
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lVar4,lVar9);
      _swift_bridgeObjectRelease(lVar9);
      lVar9 = lVar5;
      FUN_103ebf3e0(lVar5);
      lVar10 = lVar9;
      __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF();
      _swift_bridgeObjectRelease(lVar9);
      func_0x000107c3ec5c(param_1 - param_3,0x7ff0000000000000,lVar4);
      dVar20 = dVar19;
      _objc_release(lVar4);
      _objc_release(lVar10);
      dVar21 = dVar21 + dVar19;
      if ((param_1 - param_3 < dVar21) && (dVar21 = dVar19, *(long *)(puVar15 + 0x10) != 0)) {
        uVar14 = 0x112d38270;
        func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
        uVar6 = uVar14;
        func_0x00010011d734();
        uVar11 = 0x20;
        uVar18 = 0xe100000000000000;
        __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x20,0xe100000000000000,uVar14,uVar6);
        puVar12 = puVar17;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar16 = puVar17;
        if (((ulong)puVar12 & 1) == 0) {
          puVar16 = (undefined *)0x0;
          func_0x0001000d182c(0,*(long *)(puVar17 + 0x10) + 1,1,puVar17);
        }
        uVar13 = *(ulong *)(puVar16 + 0x10);
        puVar17 = puVar16;
        if (*(ulong *)(puVar16 + 0x18) >> 1 <= uVar13) {
          puVar17 = (undefined *)(ulong)(1 < *(ulong *)(puVar16 + 0x18));
          func_0x0001000d182c(puVar17,uVar13 + 1,1,puVar16);
        }
        *(ulong *)(puVar17 + 0x10) = uVar13 + 1;
        *(undefined8 *)(puVar17 + uVar13 * 0x10 + 0x20) = uVar11;
        *(undefined8 *)(puVar17 + uVar13 * 0x10 + 0x28) = uVar18;
        _swift_bridgeObjectRelease(puVar15);
        puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
        lVar5 = lStack_e8;
      }
      puVar12 = puVar15;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar16 = puVar15;
      if (((ulong)puVar12 & 1) == 0) {
        puVar16 = (undefined *)0x0;
        func_0x0001000d182c(0,*(long *)(puVar15 + 0x10) + 1,1,puVar15);
      }
      uVar13 = *(ulong *)(puVar16 + 0x10);
      puVar15 = puVar16;
      if (*(ulong *)(puVar16 + 0x18) >> 1 <= uVar13) {
        puVar15 = (undefined *)(ulong)(1 < *(ulong *)(puVar16 + 0x18));
        func_0x0001000d182c(puVar15,uVar13 + 1,1,puVar16);
      }
      *(ulong *)(puVar15 + 0x10) = uVar13 + 1;
      *(long *)(puVar15 + uVar13 * 0x10 + 0x20) = lVar7;
      *(long *)(puVar15 + uVar13 * 0x10 + 0x28) = lVar2;
      puStack_d0 = puVar15;
      if (*(long *)(uVar8 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103ebecc4);
        (*pcVar3)();
      }
      uVar13 = uVar8;
      _swift_isUniquelyReferenced_nonNull_native();
      if ((uVar13 & 1) == 0) {
        func_0x0001014c4f24();
        lVar4 = *(long *)(uVar8 + 0x10);
        dVar19 = dVar20;
      }
      else {
        lVar4 = *(long *)(uVar8 + 0x10);
        dVar19 = dVar20;
      }
      if (lVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103ebecc8);
        (*pcVar3)();
      }
      uVar14 = *(undefined8 *)(uVar8 + (lVar4 + -1) * 0x10 + 0x28);
      *(long *)(uVar8 + 0x10) = lVar4 + -1;
      _swift_bridgeObjectRelease(uVar14);
      lVar4 = *(long *)(uVar8 + 0x10);
    } while (lVar4 != 0);
  }
  _swift_bridgeObjectRelease(lVar5);
  if (*(long *)(puVar15 + 0x10) != 0) {
    uVar14 = 0x112d38270;
    func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
    uVar6 = uVar14;
    func_0x00010011d734();
    uVar11 = 0x20;
    uVar18 = 0xe100000000000000;
    __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x20,0xe100000000000000,uVar14,uVar6);
    puVar12 = puVar17;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar16 = puVar17;
    if (((ulong)puVar12 & 1) == 0) {
      puVar16 = (undefined *)0x0;
      func_0x0001000d182c(0,*(long *)(puVar17 + 0x10) + 1,1,puVar17);
    }
    uVar13 = *(ulong *)(puVar16 + 0x10);
    puVar17 = puVar16;
    if (*(ulong *)(puVar16 + 0x18) >> 1 <= uVar13) {
      puVar17 = (undefined *)(ulong)(1 < *(ulong *)(puVar16 + 0x18));
      func_0x0001000d182c(puVar17,uVar13 + 1,1,puVar16);
    }
    *(ulong *)(puVar17 + 0x10) = uVar13 + 1;
    *(undefined8 *)(puVar17 + uVar13 * 0x10 + 0x20) = uVar11;
    *(undefined8 *)(puVar17 + uVar13 * 0x10 + 0x28) = uVar18;
  }
  (**(code **)(lStack_f8 + 8))(uStack_100,lStack_f0);
  _swift_bridgeObjectRelease(uVar8);
  _swift_bridgeObjectRelease(puVar15);
  return puVar17;
}



/* Entry: 103ebed08; end: 103ebeea7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103ebed08(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00;
  _objc_allocWithZone(PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00);
  func_0x000107c453e4();
  puVar2 = puVar1;
  func_0x000107c55f80();
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF(_DAT_113812250);
  func_0x000107c5c1b8(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar3 = uVar4;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(uVar4);
  _objc_release(uVar4);
  FUN_103ebeea8(uVar3,param_2,0);
  _swift_bridgeObjectRelease(param_2);
  __sSS6appendyySSF(*(undefined8 *)(param_1 + _DAT_113812258),
                    ((undefined8 *)(param_1 + _DAT_113812258))[1]);
  uVar4 = 0x20;
  FUN_103ebf0b4(0x20,0xe100000000000000);
  _swift_bridgeObjectRelease(0xe100000000000000);
  puVar2 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
  _objc_allocWithZone(PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
  func_0x000107c453e4();
  func_0x000107c3dee8();
  func_0x000107c3dee8(puVar2);
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  func_0x000107c4adac();
  func_0x000107c3d5c4(puVar2);
  _objc_release(puVar2);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(puVar1);
  _objc_release(puVar1);
  return puVar2;
}



/* Entry: 103ebeea8; end: 103ebf0b3;  */

undefined * FUN_103ebeea8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar1 = param_3;
  if (param_3 == 0) {
    if (lRam000000011302b230 != -1) {
      _swift_once(0x11302b230,FUN_103ebdb30);
    }
    lVar1 = lRam0000000113812230;
    _objc_retain();
  }
  lVar2 = 0x112d48380;
  func_0x0001000285a8(0x112d48380,&UNK_10d910f10);
  _swift_initStackObject();
  *(undefined8 *)(lVar2 + 0x18) = 4;
  *(undefined8 *)(lVar2 + 0x10) = 2;
  uVar7 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  *(undefined8 *)(lVar2 + 0x20) = uVar7;
  uVar3 = 0;
  func_0x000103ebfe24(0,0x112d48390,&PTR__OBJC_CLASS___UIColor_1126aea70);
  *(long *)(lVar2 + 0x28) = lVar1;
  uVar8 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  *(undefined8 *)(lVar2 + 0x40) = uVar3;
  *(undefined8 *)(lVar2 + 0x48) = uVar8;
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = 0;
  func_0x000103ebfe24(0,0x112d48388,&PTR__OBJC_CLASS___UIFont_1126aec38);
  *(undefined8 *)(lVar2 + 0x68) = uVar3;
  *(undefined8 *)(lVar2 + 0x50) = uVar6;
  _objc_retain(param_3);
  _objc_retain(uVar7);
  _objc_retain(lVar1);
  _objc_retain(uVar8);
  _objc_retain(uVar6);
  lVar4 = lVar2;
  func_0x000100ecbca8(lVar2);
  _swift_setDeallocating(lVar2);
  uVar3 = 0x112d48398;
  func_0x0001000285a8(0x112d48398,&UNK_10d90f130);
  _swift_arrayDestroy((undefined8 *)(lVar2 + 0x20),2,uVar3);
  puVar5 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_allocWithZone(PTR__OBJC_CLASS___NSAttributedString_1126af068);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
  uVar6 = 0;
  func_0x000100eca28c(0);
  uVar3 = uVar6;
  func_0x000100ecbdec();
  lVar2 = lVar4;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (lVar4,uVar6,PTR___sypN_11034f1a8 + 8,uVar3);
  _swift_bridgeObjectRelease(lVar4);
  func_0x000107c48af8(puVar5);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(lVar2);
  return puVar5;
}



/* Entry: 103ebf0b4; end: 103ebf287;  */

undefined * FUN_103ebf0b4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar1 = 0x112d48380;
  func_0x0001000285a8(0x112d48380,&UNK_10d910f10);
  _swift_initStackObject();
  *(undefined8 *)(lVar1 + 0x18) = 4;
  *(undefined8 *)(lVar1 + 0x10) = 2;
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  lVar3 = lRam000000011302b230;
  _objc_retain();
  if (lVar3 != -1) {
    _swift_once(0x11302b230,FUN_103ebdb30);
  }
  uVar4 = uRam0000000113812230;
  uVar2 = 0;
  func_0x000103ebfe24(0,0x112d48390,&PTR__OBJC_CLASS___UIColor_1126aea70);
  *(undefined8 *)(lVar1 + 0x28) = uVar4;
  uVar7 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  *(undefined8 *)(lVar1 + 0x40) = uVar2;
  *(undefined8 *)(lVar1 + 0x48) = uVar7;
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = 0;
  func_0x000103ebfe24(0,0x112d48388,&PTR__OBJC_CLASS___UIFont_1126aec38);
  *(undefined8 *)(lVar1 + 0x68) = uVar2;
  *(undefined8 *)(lVar1 + 0x50) = uVar6;
  _objc_retain(uVar4);
  _objc_retain(uVar7);
  _objc_retain(uVar6);
  lVar3 = lVar1;
  func_0x000100ecbca8(lVar1);
  _swift_setDeallocating(lVar1);
  uVar4 = 0x112d48398;
  func_0x0001000285a8(0x112d48398,&UNK_10d90f130);
  _swift_arrayDestroy((undefined8 *)(lVar1 + 0x20),2,uVar4);
  puVar5 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_allocWithZone(PTR__OBJC_CLASS___NSAttributedString_1126af068);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
  uVar2 = 0;
  func_0x000100eca28c(0);
  uVar4 = uVar2;
  func_0x000100ecbdec();
  lVar1 = lVar3;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (lVar3,uVar2,PTR___sypN_11034f1a8 + 8,uVar4);
  _swift_bridgeObjectRelease(lVar3);
  func_0x000107c48af8(puVar5);
  _objc_release(param_1);
  _objc_release(lVar1);
  return puVar5;
}



/* Entry: 103ebf288; end: 103ebf2d3;  */

void FUN_103ebf288(void)

{
  long unaff_x20;
  
  _objc_release(*(undefined8 *)(unaff_x20 + 0x10));
  _objc_release(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103ebf2d4; end: 103ebf2db;  */

void FUN_103ebf2d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 103ebf2dc; end: 103ebf34b;  */

undefined8 * FUN_103ebf2dc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _objc_retain();
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 103ebf34c; end: 103ebf3df;  */

int FUN_103ebf34c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103ebf3e0; end: 103ebf807;  */

undefined * FUN_103ebf3e0(long param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  undefined *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  long lStack_100;
  undefined1 auStack_f8 [64];
  undefined8 uStack_b8;
  long lStack_b0;
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [40];
  
  puVar13 = *(undefined **)(param_1 + 0x10);
  puVar15 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar13 != (undefined *)0x0) {
    uVar3 = 0x112d48640;
    func_0x0001000285a8(0x112d48640,&UNK_10d910200);
    __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ(puVar13,uVar3);
    puVar15 = puVar13;
  }
  uVar9 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar16 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar16 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar16 = uVar16 & *(ulong *)(param_1 + 0x40);
  _swift_bridgeObjectRetain();
  lVar12 = 0;
  while( true ) {
    for (; uVar16 != 0; uVar16 = uVar16 - 1 & uVar16) {
      uVar7 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = lVar12 << 9 | LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) << 3;
      lVar14 = *(long *)(*(long *)(param_1 + 0x30) + uVar7);
      uVar17 = *(undefined8 *)(*(long *)(param_1 + 0x38) + uVar7);
      uVar3 = 0;
      uStack_b8 = uVar17;
      lStack_b0 = lVar14;
      func_0x000103ebfe24(0,0x112d48388,&PTR__OBJC_CLASS___UIFont_1126aec38);
      _objc_retain(lVar14);
      _objc_retain(uVar17);
      _objc_retain(lVar14);
      _objc_retain(uVar17);
      _swift_dynamicCast(auStack_a8,&uStack_b8,uVar3,PTR___sypN_11034f1a8 + 8,7);
      _objc_release(uVar17);
      _objc_release(lVar14);
      if (lStack_b0 == 0) {
        _swift_release(param_1);
        func_0x000103ebfde4(&lStack_b0,0x112ea49f8,&UNK_10dab7b90);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103ebf6f4);
        (*pcVar1)();
      }
      lStack_100 = lStack_b0;
      func_0x000100102924(auStack_a8,auStack_f8);
      lVar14 = lStack_100;
      puVar6 = auStack_88;
      func_0x000100102924(auStack_f8,puVar6);
      uVar3 = *(undefined8 *)(puVar15 + 0x28);
      lVar4 = lVar14;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(lVar14);
      __ss6HasherV5_seedABSi_tcfC(&lStack_100,uVar3);
      plVar5 = &lStack_100;
      __sSS4hash4intoys6HasherVz_tF(plVar5,lVar4,puVar6);
      __ss6HasherV9_finalizeSiyF();
      _swift_bridgeObjectRelease(puVar6);
      uVar11 = -1L << ((ulong)(byte)puVar15[0x20] & 0x3f);
      uVar10 = (ulong)plVar5 & (uVar11 ^ 0xffffffffffffffff);
      uVar8 = uVar10 >> 6;
      uVar7 = -1L << (uVar10 & 0x3f) & (*(ulong *)(puVar15 + uVar8 * 8 + 0x40) ^ 0xffffffffffffffff)
      ;
      if (uVar7 == 0) {
        bVar2 = false;
        uVar7 = 0x3f - uVar11 >> 6;
        do {
          uVar10 = uVar8 + 1;
          if ((uVar10 == uVar7) && (bVar2)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x103ebf6d0);
            (*pcVar1)();
          }
          uVar8 = 0;
          if (uVar10 != uVar7) {
            uVar8 = uVar10;
          }
          bVar2 = (bool)(uVar10 == uVar7 | bVar2);
        } while (*(ulong *)(puVar15 + uVar8 * 8 + 0x40) == 0xffffffffffffffff);
        uVar7 = ~*(ulong *)(puVar15 + uVar8 * 8 + 0x40);
        uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | uVar8 << 6;
      }
      else {
        uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | uVar10 & 0x7fffffffffffffc0;
      }
      uVar8 = uVar7 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar15 + uVar8 + 0x40) = 1L << (uVar7 & 0x3f) | *(ulong *)(puVar15 + uVar8 + 0x40)
      ;
      *(long *)(*(long *)(puVar15 + 0x30) + uVar7 * 8) = lVar14;
      func_0x000100102924(auStack_88,*(long *)(puVar15 + 0x38) + uVar7 * 0x20);
      *(long *)(puVar15 + 0x10) = *(long *)(puVar15 + 0x10) + 1;
    }
    bVar2 = SCARRY8(lVar12,1);
    lVar12 = lVar12 + 1;
    if (bVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103ebf6cc);
      (*pcVar1)();
    }
    if ((long)(uVar9 + 0x3f >> 6) <= lVar12) break;
    uVar16 = ((ulong *)(param_1 + 0x40))[lVar12];
  }
  _swift_release(param_1);
  return puVar15;
}



/* Entry: 103ebf808; end: 103ebf983;  */

undefined * FUN_103ebf808(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  uVar7 = param_2;
  if ((param_3 & 1) != 0) {
    uVar7 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar7 < (long)param_2) {
      if ((long)(uVar7 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103ebf984);
        (*pcVar3)();
      }
      uVar7 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar7 <= (long)param_2) {
        uVar7 = param_2;
      }
    }
  }
  uVar9 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar7 <= (long)uVar9) {
    uVar7 = uVar9;
  }
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar7 != 0) {
    puVar4 = (undefined *)0x11302b360;
    func_0x0001000285a8(0x11302b360,&UNK_10dca64d0);
    lVar5 = 0;
    FUN_103eb6e88();
    lVar10 = *(long *)(*(long *)(lVar5 + -8) + 0x48);
    uVar8 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
    uVar11 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
    _swift_allocObject(puVar4,uVar11 + lVar10 * uVar7,uVar8 | 7);
    puVar6 = puVar4;
    _malloc_size();
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103ebf97c);
      (*pcVar3)();
    }
    lVar5 = (long)puVar6 - uVar11;
    if (lVar5 == -0x8000000000000000 && lVar10 == -1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103ebf980);
      (*pcVar3)();
    }
    lVar2 = 0;
    if (lVar10 != 0) {
      lVar2 = lVar5 / lVar10;
    }
    *(ulong *)(puVar4 + 0x10) = uVar9;
    *(long *)(puVar4 + 0x18) = lVar2 << 1;
  }
  lVar5 = 0;
  FUN_103eb6e88();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar7 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
  puVar6 = puVar4 + uVar7;
  puVar1 = param_4 + uVar7;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar6,puVar1,uVar9,lVar5);
  }
  else {
    if ((puVar4 < param_4) || (puVar1 + *(long *)(*(long *)(lVar5 + -8) + 0x48) * uVar9 <= puVar6))
    {
      _swift_arrayInitWithTakeFrontToBack(puVar6,puVar1,uVar9);
    }
    else if (puVar4 != param_4) {
      _swift_arrayInitWithTakeBackToFront(puVar6,puVar1,uVar9);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar4;
}



/* Entry: 103ebf984; end: 103ebfb47;  */

ulong FUN_103ebf984(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103ebfa68);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103ebfa6c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    _swift_unknownObjectRetain(param_1);
    puVar4 = PTR_PTR_1126dd048;
    _objc_opt_self(PTR_PTR_1126dd048);
    uVar5 = param_1;
    _swift_dynamicCastObjCClass(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    __ss18_CocoaArrayWrapperVyyXlSicig(param_1,uVar5);
    puVar4 = PTR_PTR_1126dd048;
    _objc_opt_self(PTR_PTR_1126dd048);
    uVar5 = param_1;
    _swift_dynamicCastObjCClass(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  __sSS6appendyySSF(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000103ebfe24(0,0x11302acd0,&PTR_PTR_1126dd048);
  uVar3 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar3);
  __sSS6appendyySSF(0x756f662074756220,0xeb0000000020646e);
  _swift_getObjectType(param_1);
  uVar3 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar3);
  __ss17_assertionFailure__5flagss5NeverOs12StaticStringV_SSs6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103ebfb48);
  (*pcVar2)();
}



/* Entry: 103ebfb48; end: 103ebfceb;  */

ulong FUN_103ebfb48(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103ebfc1c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103ebfc20);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    FUN_103ebde6c(0);
    uVar4 = param_1;
    _swift_unknownObjectRetain();
    _swift_dynamicCastClass();
    if (uVar4 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    __ss18_CocoaArrayWrapperVyyXlSicig(param_1,uVar4);
    uVar3 = 0;
    FUN_103ebde6c(0);
    uVar4 = param_1;
    _swift_dynamicCastClass(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  __sSS6appendyySSF(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  __sSS6appendyySSF(0x45676f4c736e654c,0xec0000007972746e);
  __sSS6appendyySSF(0x756f662074756220,0xeb0000000020646e);
  _swift_getObjectType(param_1);
  uVar3 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar3);
  __ss17_assertionFailure__5flagss5NeverOs12StaticStringV_SSs6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103ebfcec);
  (*pcVar2)();
}



/* Entry: 103ebfcec; end: 103ebfde3;  */

undefined * FUN_103ebfcec(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar2 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    uVar6 = 0;
    func_0x0001000285a8(0x11302b358);
    puVar2 = puVar8;
    __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
    _swift_retain();
    puVar9 = (undefined8 *)(param_1 + 0x28);
    do {
      uVar3 = puVar9[-1];
      uVar4 = *puVar9;
      _objc_retain();
      _objc_retain();
      uVar5 = uVar3;
      func_0x000100ecbb30();
      if ((uVar6 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103ebfde0);
        (*pcVar1)();
      }
      uVar7 = uVar5 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar2 + uVar7 + 0x40) = *(ulong *)(puVar2 + uVar7 + 0x40) | 1L << (uVar5 & 0x3f);
      *(ulong *)(*(long *)(puVar2 + 0x30) + uVar5 * 8) = uVar3;
      *(undefined8 *)(*(long *)(puVar2 + 0x38) + uVar5 * 8) = uVar4;
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103ebfde4);
        (*pcVar1)();
      }
      puVar9 = puVar9 + 2;
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
      puVar8 = puVar8 + -1;
    } while (puVar8 != (undefined *)0x0);
    _swift_release(puVar2);
  }
  return puVar2;
}



/* Entry: 103ebfde4; end: 103ebfe63;  */

undefined8 FUN_103ebfde4(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 103ebfe64; end: 103ebfe6b;  */

undefined8 * FUN_103ebfe64(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c61174();
  return param_1;
}



/* Entry: 103ebfe6c; end: 103ec002f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103ebfe6c(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  code *pcVar5;
  code *pcVar6;
  undefined *puVar7;
  long unaff_x20;
  
  lVar1 = _DAT_11302b368;
  puVar4 = &stack0xffffffffffffffb0;
  uVar2 = 0;
  func_0x0001000c6560();
  _swift_allocObject();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  *(undefined8 *)(unaff_x20 + _DAT_11302b370) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11302b378) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_11302b380) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11302b390) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11302b398) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11302b3a0) = 0;
  lVar1 = _DAT_11302b3a8;
  puVar3 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_allocWithZone();
  func_0x000107c453e4();
  func_0x000107c56ba8();
  func_0x000107c5a050();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  *(long **)(unaff_x20 + _DAT_11302b388) = param_1;
  FUN_103ec0f68();
  puVar3 = PTR_s_initWithFrame__1125e2948;
  _swift_retain(param_1);
  _objc_msgSendSuper2(0,0,0,0,&stack0xffffffffffffffb0,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c550d8();
  FUN_103ec0030();
  puVar3 = &UNK_11071cf58;
  _swift_allocObject(&UNK_11071cf58,0x18,7);
  _swift_unknownObjectWeakInit(puVar3 + 0x10,puVar4);
  pcVar5 = FUN_103ec16bc;
  puVar7 = puVar3;
  (**(code **)(*param_1 + 0x60))(FUN_103ec16bc);
  _swift_release(puVar3);
  pcVar6 = pcVar5;
  _swift_getObjectType(pcVar5);
  (**(code **)(puVar7 + 0x10))(*(undefined8 *)(puVar4 + _DAT_11302b368),pcVar6,puVar7);
  _objc_release(puVar4);
  _swift_release(param_1);
  _swift_unknownObjectRelease(pcVar5);
  return puVar4;
}



/* Entry: 103ec0030; end: 103ec06ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec0030(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long unaff_x20;
  undefined8 uVar10;
  
  lVar2 = unaff_x20;
  func_0x000107c5a050();
  FUN_103ec07fc();
  func_0x000107c3d89c();
  _objc_release(lVar2);
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_11302b3a8);
  uVar4 = uVar10;
  func_0x000107c3ec1c();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = _DAT_11302b390;
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11302b390);
  func_0x000107c3ec1c(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x000107c40284(0xc024000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  lVar9 = _DAT_11302b378;
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_11302b378);
  *(undefined8 *)(unaff_x20 + _DAT_11302b378) = uVar6;
  _objc_release(uVar4);
  puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  _objc_opt_self();
  lVar2 = 0x112d360b8;
  FUN_103ec12ac(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                &UNK_10d9011a0);
  _swift_allocObject();
  *(undefined8 *)(lVar2 + 0x18) = 0x19;
  *(undefined8 *)(lVar2 + 0x10) = 0xc;
  uVar6 = *(undefined8 *)(unaff_x20 + lVar1);
  func_0x000107c5cbe4();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = unaff_x20;
  func_0x000107c5cbe4();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  func_0x000107c40280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(lVar7);
  *(undefined8 *)(lVar2 + 0x20) = uVar4;
  uVar6 = *(undefined8 *)(unaff_x20 + lVar1);
  func_0x000107c4acb0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = unaff_x20;
  func_0x000107c4acb0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  func_0x000107c40280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(lVar7);
  *(undefined8 *)(lVar2 + 0x28) = uVar4;
  uVar6 = *(undefined8 *)(unaff_x20 + lVar1);
  func_0x000107c5ce8c();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = unaff_x20;
  func_0x000107c5ce8c();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  func_0x000107c40280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(lVar7);
  *(undefined8 *)(lVar2 + 0x30) = uVar4;
  uVar6 = *(undefined8 *)(unaff_x20 + lVar1);
  func_0x000107c3ec1c();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = unaff_x20;
  func_0x000107c3ec1c();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  func_0x000107c40280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release();
  *(undefined8 *)(lVar2 + 0x38) = uVar4;
  FUN_103ec097c();
  lVar8 = lVar7;
  func_0x000107c5cbe4();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
  func_0x000107c5cbe4(uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar8;
  func_0x000107c40284(0x4024000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(uVar4);
  *(long *)(lVar2 + 0x40) = lVar7;
  lVar7 = _DAT_11302b398;
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_11302b398);
  func_0x000107c5ce8c();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
  func_0x000107c5ce8c(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  func_0x000107c40284(0xc024000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar3);
  *(undefined8 *)(lVar2 + 0x48) = uVar4;
  uVar4 = uVar10;
  func_0x000107c4acb0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
  func_0x000107c4acb0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x000107c40284(0x4024000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  *(undefined8 *)(lVar2 + 0x50) = uVar6;
  uVar4 = uVar10;
  func_0x000107c5ce8c();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(unaff_x20 + lVar7);
  func_0x000107c4acb0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x000107c40284(0xc024000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  *(undefined8 *)(lVar2 + 0x58) = uVar6;
  func_0x000107c5cbe4();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(unaff_x20 + lVar1);
  func_0x000107c5cbe4();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar10;
  func_0x000107c40284(0x4024000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  _objc_release();
  *(undefined8 *)(lVar2 + 0x60) = uVar4;
  FUN_103ec0c6c();
  uVar4 = uVar6;
  func_0x000107c4acb0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
  func_0x000107c4acb0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x000107c40284(0x4024000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  *(undefined8 *)(lVar2 + 0x68) = uVar6;
  lVar8 = _DAT_11302b3a0;
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_11302b3a0);
  func_0x000107c5ce8c();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(unaff_x20 + lVar7);
  func_0x000107c4acb0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  func_0x000107c40284(0xc024000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar3);
  *(undefined8 *)(lVar2 + 0x70) = uVar4;
  uVar6 = *(undefined8 *)(unaff_x20 + lVar8);
  func_0x000107c3ec1c();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
  func_0x000107c3ec1c(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  func_0x000107c40284(0xc024000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar3);
  *(undefined8 *)(lVar2 + 0x78) = uVar4;
  uVar4 = 0;
  FUN_103ec167c(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  lVar7 = lVar2;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar2,uVar4);
  _swift_release(lVar2);
  func_0x000107c3d048(puVar5);
  _objc_release(lVar7);
  if (*(long *)(unaff_x20 + lVar9) != 0) {
    func_0x000107c521e8();
  }
  lVar9 = *(long *)(unaff_x20 + lVar8);
  func_0x000107c5cbe4();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
  func_0x000107c5cbe4(uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar9;
  func_0x000107c40284(0x4024000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_11302b370);
  *(long *)(unaff_x20 + _DAT_11302b370) = lVar2;
  _objc_retain();
  _objc_release(uVar4);
  if (lVar2 != 0) {
    func_0x000107c5784c(0x447a0000,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 103ec06ac; end: 103ec06d3; -[_TtC25LensInfoControllerFeature11LensLogView initWithCoder:] */

void FUN_103ec06ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x000103ec1324();
  return;
}



/* Entry: 103ec06d4; end: 103ec07fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec06d4(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_58 [24];
  
  lVar4 = *param_1;
  _swift_beginAccess(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    if (lVar4 == 0) {
      func_0x000107c550d8(param_2);
      uVar3 = *(undefined8 *)(param_2 + _DAT_11302b3a8);
      func_0x000107c529c4(uVar3);
      FUN_103ec0c6c();
      func_0x000107c529c4();
      _objc_release(uVar3);
      func_0x000107c4ac20(param_2);
    }
    else {
      uVar3 = *(undefined8 *)(lVar4 + 0x10);
      lVar1 = *(long *)(lVar4 + 0x18);
      _objc_retain(lVar1);
      _swift_retain(lVar4);
      _objc_retain(uVar3);
      func_0x000107c550d8(param_2);
      uVar2 = *(undefined8 *)(param_2 + _DAT_11302b3a8);
      func_0x000107c529c4(uVar2);
      FUN_103ec0c6c();
      func_0x000107c529c4();
      _objc_release(uVar2);
      func_0x000107c4ac20(param_2);
      _objc_release(param_2);
      _swift_release(lVar4);
      _objc_release(uVar3);
      param_2 = lVar1;
    }
    _objc_release(param_2);
  }
  return;
}



/* Entry: 103ec07fc; end: 103ec080f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103ec07fc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_11302b390;
  lVar2 = *(long *)(unaff_x20 + _DAT_11302b390);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    FUN_103ec0810();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    _objc_retain();
    _objc_release(uVar4);
    lVar2 = 0;
  }
  _objc_retain(lVar2);
  return lVar3;
}



/* Entry: 103ec0810; end: 103ec097b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103ec0810(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar1 = 0;
  func_0x000103ec1930(0);
  _swift_getObjCClassFromMetadata();
  _objc_allocWithZone();
  func_0x000107c453e4();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _objc_opt_self(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retain(uVar1);
  func_0x000107c3ea80(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x000107c3fdd0(0x3fd999999999999a);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x000107c52b50(uVar1);
  _objc_release(puVar3);
  func_0x000107c5a050(uVar1);
  uVar4 = uVar1;
  func_0x000107c4aba4(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c539d4(0x4024000000000000);
  _objc_release(uVar4);
  uVar4 = uVar1;
  func_0x000107c534b0(uVar1);
  FUN_103ec097c();
  func_0x000107c3d89c(uVar1);
  _objc_release(uVar4);
  FUN_103ec0c6c();
  func_0x000107c3d89c(uVar1);
  _objc_release(uVar4);
  func_0x000107c3d89c(uVar1);
  if (lRam000000011302b238 != -1) {
    _swift_once(0x11302b238,0x103ebdba8);
  }
  func_0x000107c52b50(uVar1);
  _objc_release(uVar1);
  return uVar1;
}



/* Entry: 103ec097c; end: 103ec098f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103ec097c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_11302b398;
  lVar2 = *(long *)(unaff_x20 + _DAT_11302b398);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    FUN_103ec09f0();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    _objc_retain();
    _objc_release(uVar4);
    lVar2 = 0;
  }
  _objc_retain(lVar2);
  return lVar3;
}



/* Entry: 103ec0990; end: 103ec09ef;  */

long FUN_103ec0990(long *param_1,code *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *param_1;
  lVar1 = *(long *)(unaff_x20 + lVar3);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    lVar2 = unaff_x20;
    (*param_2)();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar3);
    *(long *)(unaff_x20 + lVar3) = lVar2;
    _objc_retain();
    _objc_release(uVar4);
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  return lVar2;
}



/* Entry: 103ec09f0; end: 103ec0c6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103ec09f0(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 auVar10 [16];
  undefined8 uVar11;
  long lStack_70;
  long lStack_68;
  
  plVar4 = &lStack_70;
  lVar2 = 0;
  func_0x000103ec1270();
  lVar3 = lVar2;
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(lVar3 + _DAT_11302b3d8);
  auVar10 = NEON_fmov(0x4024000000000000,8);
  puVar1[1] = auVar10._8_8_;
  *puVar1 = auVar10._0_8_;
  puVar1[3] = auVar10._8_8_;
  puVar1[2] = auVar10._0_8_;
  uVar11 = 0;
  lStack_70 = lVar3;
  lStack_68 = lVar2;
  _objc_msgSendSuper2(0,0,0,0,&lStack_70,PTR_s_initWithFrame__1125e2948);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c5a050();
  uVar5 = 0x6f7272615f676f6c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6f7272615f676f6c,0xec00000070755f77);
  puVar6 = PTR__OBJC_CLASS___UIImage_1126aea68;
  _objc_opt_self();
  func_0x000107c450cc();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  if (puVar6 != (undefined *)0x0) {
    func_0x000107c55260(plVar4);
    puVar7 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    _objc_opt_self(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    lVar3 = 0x112d360b8;
    FUN_103ec12ac(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                  &UNK_10d9011a0);
    _swift_allocObject();
    *(undefined8 *)(lVar3 + 0x18) = 5;
    *(undefined8 *)(lVar3 + 0x10) = 2;
    puVar8 = (undefined1 *)plVar4;
    func_0x000107c5e308();
    _objc_retainAutoreleasedReturnValue();
    func_0x000107c5b078(puVar6);
    puVar9 = puVar8;
    func_0x000107c40290();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    *(undefined1 **)(lVar3 + 0x20) = puVar9;
    puVar8 = (undefined1 *)plVar4;
    func_0x000107c44d9c();
    _objc_retainAutoreleasedReturnValue();
    func_0x000107c5b078(puVar6);
    puVar9 = puVar8;
    func_0x000107c40290(uVar11);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    *(undefined1 **)(lVar3 + 0x28) = puVar9;
    uVar5 = 0;
    FUN_103ec167c(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    lVar2 = lVar3;
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar3,uVar5);
    _swift_release(lVar3);
    func_0x000107c3d048(puVar7);
    _objc_release(puVar6);
    _objc_release(lVar2);
  }
  uVar5 = 0xd00000000000001d;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001d,0x800000010f1cbcb0);
  func_0x000107c520f4(plVar4);
  _objc_release(plVar4);
  _objc_release(uVar5);
  func_0x000107c3d8b8(plVar4);
  return (undefined1 *)plVar4;
}



/* Entry: 103ec0c6c; end: 103ec0ccb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103ec0c6c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_11302b3a0;
  lVar2 = *(long *)(unaff_x20 + _DAT_11302b3a0);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    FUN_103ec0ccc();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    _objc_retain();
    _objc_release(uVar4);
    lVar3 = 0;
  }
  _objc_retain(lVar3);
  return lVar2;
}



/* Entry: 103ec0ccc; end: 103ec0e0b;  */

undefined * FUN_103ec0ccc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___UITextView_1126afb88;
  _objc_allocWithZone(PTR__OBJC_CLASS___UITextView_1126afb88);
  func_0x000107c453e4();
  func_0x000107c54400();
  func_0x000107c58dd4(puVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _objc_opt_self(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retain(puVar1);
  func_0x000107c3fa94(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c52b50(puVar1);
  _objc_release(puVar2);
  func_0x000107c526c0(0,puVar1);
  func_0x000107c59c7c(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),puVar1);
  puVar2 = puVar1;
  func_0x000107c5c83c(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c55f8c(0);
  _objc_release(puVar2);
  _objc_retain(puVar1);
  func_0x000107c58cd8();
  func_0x000107c5928c(puVar1);
  _objc_release(puVar1);
  uVar3 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1cbc90);
  func_0x000107c520f4(puVar1);
  _objc_release(uVar3);
  func_0x000107c5a050(puVar1);
  _objc_release(puVar1);
  return puVar1;
}



/* Entry: 103ec0e0c; end: 103ec0ec3; -[_TtC25LensInfoControllerFeature11LensLogView initWithFrame:] */

void FUN_103ec0e0c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensInfoControllerFeature.LensLogView",0x25,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ec0e38);
  (*pcVar1)();
}



/* Entry: 103ec0ec4; end: 103ec0ecf;  */

void FUN_103ec0ec4(void)

{
  FUN_103ec0f68();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103ec0ed0; end: 103ec0f67; -[_TtC25LensInfoControllerFeature11LensLogView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec0ed0(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_11302b368));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302b370));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302b378));
  _swift_release(*(undefined8 *)(param_1 + _DAT_11302b388));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302b390));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302b398));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302b3a0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11302b3a8));
  return;
}



/* Entry: 103ec0f68; end: 103ec0f87;  */

void FUN_103ec0f68(void)

{
  _objc_opt_self(&PTR_PTR_11295f530);
  return;
}



/* Entry: 103ec0f88; end: 103ec101b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec0f88(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = param_1;
  FUN_103ec0c6c();
  lVar1 = _DAT_11302b380;
  uVar3 = 0x3ff0000000000000;
  if (*(char *)(param_1 + _DAT_11302b380) == '\0') {
    uVar3 = 0;
  }
  func_0x000107c526c0(uVar3);
  _objc_release(lVar2);
  uVar3 = 0;
  if (*(char *)(param_1 + lVar1) == '\0') {
    uVar3 = 0x3ff0000000000000;
  }
  func_0x000107c526c0(uVar3,*(undefined8 *)(param_1 + _DAT_11302b3a8));
  func_0x000107c5c42c(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c4abfc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103ec101c; end: 103ec110b;  */

/* WARNING: Possible PIC construction at 0x000103ec10ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103ec10f0) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec101c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = *(char *)(param_6 + _DAT_11302b380);
  FUN_103ec0c6c();
  if (cVar1 == '\x01') {
    func_0x000107c3ec60();
    _objc_release(param_5);
    _CGRectGetHeight(param_1,param_2,param_3,param_4);
    uVar2 = *(undefined8 *)(param_6 + _DAT_11302b3a0);
    _objc_retain(uVar2);
    func_0x000107c3ec60();
    _CGRectGetWidth();
    func_0x000107c5b098(uVar2);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1f7b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 103ec110c; end: 103ec1157; -[_TtC25LensInfoControllerFeature11LensLogView appearanceToggleButtonClickedWithSender:] */

void FUN_103ec110c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_103ec142c();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103ec1158; end: 103ec11af; -[_TtC25LensInfoControllerFeatureP33_1374D985B71ED7A95C456925AFAAEEE217ExtendedHitButton initWithCoder:] */

void FUN_103ec1158(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd00000000000001d,0x800000010f0f28b0,
             "LensInfoControllerFeature/LensLogView.swift",0x2b,2,0xe1,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ec11b0);
  (*pcVar1)();
}



/* Entry: 103ec11b0; end: 103ec1203; -[_TtC25LensInfoControllerFeatureP33_1374D985B71ED7A95C456925AFAAEEE217ExtendedHitButton pointInside:withEvent:] */

undefined8 FUN_103ec11b0(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000107c3ec60();
  FUN_103ec1290();
  _CGRectContainsPoint();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 103ec1204; end: 103ec122f; -[_TtC25LensInfoControllerFeatureP33_1374D985B71ED7A95C456925AFAAEEE217ExtendedHitButton initWithFrame:] */

void FUN_103ec1204(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensInfoControllerFeature.ExtendedHitButton",0x2b,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ec1230);
  (*pcVar1)();
}



/* Entry: 103ec1230; end: 103ec123f;  */

void FUN_103ec1230(void)

{
  (*(code *)0x103ec1270)();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103ec1240; end: 103ec128f;  */

void FUN_103ec1240(undefined8 param_1,code *param_2)

{
  (*param_2)();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103ec1290; end: 103ec12ab;  */

double FUN_103ec1290(double param_1)

{
  return param_1 + -10.0;
}



/* Entry: 103ec12ac; end: 103ec142b;  */

void FUN_103ec12ac(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_103ec167c(0,param_1,param_2);
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



/* Entry: 103ec142c; end: 103ec164f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec142c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  lVar3 = _DAT_11302b380;
  ppuVar7 = &puStack_80;
  ppuVar8 = &puStack_80;
  *(byte *)(unaff_x20 + _DAT_11302b380) = (*(byte *)(unaff_x20 + _DAT_11302b380) ^ 0xff) & 1;
  func_0x000107c521e8(*(undefined8 *)(unaff_x20 + _DAT_11302b370));
  if (*(long *)(unaff_x20 + _DAT_11302b378) != 0) {
    func_0x000107c521e8();
  }
  uVar1 = 0xee006e776f645f77;
  if (*(char *)(unaff_x20 + lVar3) == '\0') {
    uVar1 = 0xec00000070755f77;
  }
  uVar4 = 0x6f7272615f676f6c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6f7272615f676f6c,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
  _objc_opt_self();
  func_0x000107c450cc();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  if (puVar5 != (undefined *)0x0) {
    FUN_103ec097c();
    func_0x000107c55260();
    _objc_release(puVar5);
    _objc_release(uVar4);
  }
  puVar6 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_self(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar5 = &UNK_11071ceb8;
  _swift_allocObject(&UNK_11071ceb8,0x18,7);
  *(long *)(puVar5 + 0x10) = unaff_x20;
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_60 = FUN_103ec1650;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_11071ced0;
  puStack_58 = puVar5;
  __Block_copy(&puStack_80);
  puVar5 = puStack_58;
  _objc_retain();
  _swift_release(puVar5);
  puVar5 = &UNK_11071cf08;
  _swift_allocObject(&UNK_11071cf08,0x18,7);
  *(long *)(puVar5 + 0x10) = unaff_x20;
  pcStack_60 = (code *)0x103ec1674;
  puStack_80 = puVar2;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_100288f10;
  puStack_68 = &UNK_11071cf20;
  puStack_58 = puVar5;
  __Block_copy(&puStack_80);
  puVar5 = puStack_58;
  _objc_retain(unaff_x20);
  _swift_release(puVar5);
  func_0x000107c3dcd0(0x3fc999999999999a,puVar6);
  __Block_release(ppuVar8);
  __Block_release(ppuVar7);
  return;
}



/* Entry: 103ec1650; end: 103ec167b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec1650(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar2 = lVar3;
  FUN_103ec0c6c();
  lVar1 = _DAT_11302b380;
  uVar4 = 0x3ff0000000000000;
  if (*(char *)(lVar3 + _DAT_11302b380) == '\0') {
    uVar4 = 0;
  }
  func_0x000107c526c0(uVar4);
  _objc_release(lVar2);
  uVar4 = 0;
  if (*(char *)(lVar3 + lVar1) == '\0') {
    uVar4 = 0x3ff0000000000000;
  }
  func_0x000107c526c0(uVar4,*(undefined8 *)(lVar3 + _DAT_11302b3a8));
  func_0x000107c5c42c(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c4abfc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 103ec167c; end: 103ec16bb;  */

void FUN_103ec167c(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  *param_2 = lVar1;
  return;
}



/* Entry: 103ec16bc; end: 103ec16cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec16bc(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar5 = *param_1;
  _swift_beginAccess(unaff_x20 + 0x10,auStack_58,0,0);
  lVar1 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    if (lVar5 == 0) {
      func_0x000107c550d8(lVar1);
      uVar4 = *(undefined8 *)(lVar1 + _DAT_11302b3a8);
      func_0x000107c529c4(uVar4);
      FUN_103ec0c6c();
      func_0x000107c529c4();
      _objc_release(uVar4);
      func_0x000107c4ac20(lVar1);
    }
    else {
      uVar4 = *(undefined8 *)(lVar5 + 0x10);
      lVar2 = *(long *)(lVar5 + 0x18);
      _objc_retain(lVar2);
      _swift_retain(lVar5);
      _objc_retain(uVar4);
      func_0x000107c550d8(lVar1);
      uVar3 = *(undefined8 *)(lVar1 + _DAT_11302b3a8);
      func_0x000107c529c4(uVar3);
      FUN_103ec0c6c();
      func_0x000107c529c4();
      _objc_release(uVar3);
      func_0x000107c4ac20(lVar1);
      _objc_release(lVar1);
      _swift_release(lVar5);
      _objc_release(uVar4);
      lVar1 = lVar2;
    }
    _objc_release(lVar1);
  }
  return;
}



/* Entry: 103ec16cc; end: 103ec1717;  */

void FUN_103ec16cc(void)

{
  long unaff_x20;
  
  _objc_release(*(undefined8 *)(unaff_x20 + 0x10));
  _objc_release(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103ec1718; end: 103ec1813; -[_TtC25LensInfoControllerFeature15TransparentView hitTest:withEvent:] */

void FUN_103ec1718(undefined8 param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 **ppuVar3;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  
  ppuVar3 = &puStack_60;
  puVar2 = param_3;
  func_0x000103ec1930();
  puVar1 = PTR_s_hitTest_withEvent__1125d6850;
  puStack_60 = param_3;
  puStack_58 = puVar2;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_msgSendSuper2(param_1,param_2,&puStack_60,puVar1,param_5);
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar3 == (undefined1 **)0x0) {
    _objc_release(param_5);
  }
  else {
    func_0x0001007bbbf8(0);
    _objc_retain();
    puVar2 = (undefined1 *)ppuVar3;
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
    _objc_release(ppuVar3);
    _objc_release(param_5);
    _objc_release(param_3);
    param_3 = (undefined1 *)ppuVar3;
    if (((ulong)puVar2 & 1) == 0) goto LAB_103ec17f8;
  }
  _objc_release(param_3);
  ppuVar3 = (undefined1 **)0x0;
LAB_103ec17f8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 103ec1814; end: 103ec187f; -[_TtC25LensInfoControllerFeature15TransparentView initWithFrame:] */

void FUN_103ec1814(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = param_5;
  func_0x000103ec1930();
  uStack_50 = param_5;
  uStack_48 = uVar1;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_50,PTR_s_initWithFrame__1125e2948);
  return;
}



/* Entry: 103ec1880; end: 103ec18ff; -[_TtC25LensInfoControllerFeature15TransparentView initWithCoder:] */

undefined1 * FUN_103ec1880(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = &uStack_40;
  uVar2 = param_1;
  func_0x000103ec1930();
  puVar1 = PTR_s_initWithCoder__1125dd730;
  uStack_40 = param_1;
  uStack_38 = uVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&uStack_40,puVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (puVar3 != (undefined8 *)0x0) {
    _objc_release(puVar3);
  }
  return (undefined1 *)puVar3;
}



/* Entry: 103ec1900; end: 103ec194f;  */

void FUN_103ec1900(void)

{
  func_0x000103ec1930();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103ec1950; end: 103ec195b; -[_TtC26LensProcessingTrackingImpl20LensApplyContextImpl applyId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec1950(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11302b500);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11302b500))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103ec195c; end: 103ec1967; -[_TtC26LensProcessingTrackingImpl20LensApplyContextImpl lensId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec195c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11302b508);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11302b508))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103ec1968; end: 103ec19af;  */

void FUN_103ec1968(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103ec19b0; end: 103ec1b37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec19b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  
  _swift_getObjectType();
  lVar2 = _DAT_11302b4f8;
  uVar3 = 0;
  func_0x00010006a340();
  _swift_allocObject();
  func_0x00010006a360();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302b510);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302b518);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302b520);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302b528);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302b530);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302b538);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302b540);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lVar2 = _DAT_11302b548;
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_103ec23dc();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302b550);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302b558);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(unaff_x20 + _DAT_11302b560) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302b500);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302b508);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  _objc_msgSendSuper2(&stack0xffffffffffffffa0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103ec1b38; end: 103ec1bb3; -[_TtC26LensProcessingTrackingImpl20LensApplyContextImpl funnelEvent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec1b38(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_1;
  _objc_retain();
  uVar1 = 0x11302b590;
  func_0x0001000285a8(0x11302b590,&UNK_10dca6608);
  func_0x000100087bd4(&uStack_38,0x103ec2728,auStack_50,uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_38);
  return;
}



/* Entry: 103ec1bb4; end: 103ec1fbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec1bb4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  code *pcVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  double dVar20;
  double dVar21;
  undefined *puStack_108;
  undefined8 *puStack_f0;
  long lStack_d8;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [32];
  
  if (*(char *)((double *)(param_2 + _DAT_11302b510) + 1) == '\x01') {
    uVar8 = 0;
    goto LAB_103ec1f94;
  }
  dVar21 = *(double *)(param_2 + _DAT_11302b510);
  lVar12 = ((undefined8 *)(param_2 + _DAT_11302b550))[1];
  if (lVar12 == 0) {
    uVar8 = *(undefined8 *)(param_2 + _DAT_11302b500);
    lStack_d8 = ((undefined8 *)(param_2 + _DAT_11302b500))[1];
    _swift_bridgeObjectRetain();
  }
  else {
    uVar8 = *(undefined8 *)(param_2 + _DAT_11302b550);
    lStack_d8 = lVar12;
  }
  lVar5 = _DAT_11302b560;
  uVar1 = *(undefined8 *)(param_2 + _DAT_11302b508);
  uVar3 = ((undefined8 *)(param_2 + _DAT_11302b508))[1];
  uVar2 = *(undefined8 *)(param_2 + _DAT_11302b558);
  uVar4 = ((undefined8 *)(param_2 + _DAT_11302b558))[1];
  if (*(char *)(param_2 + _DAT_11302b560) == '\x01') {
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(lVar12);
    _swift_bridgeObjectRetain(uVar3);
    puVar16 = (undefined *)0x0;
LAB_103ec1ca4:
    bVar7 = true;
  }
  else {
    if (*(char *)((double *)(param_2 + _DAT_11302b528) + 1) == '\x01') {
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(lVar12);
      _swift_bridgeObjectRetain(uVar3);
      puVar16 = (undefined *)0x0;
    }
    else {
      dVar20 = *(double *)(param_2 + _DAT_11302b528);
      puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_allocWithZone(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _swift_bridgeObjectRetain(uVar4);
      _swift_bridgeObjectRetain(lVar12);
      _swift_bridgeObjectRetain(uVar3);
      func_0x000107c466c0(dVar20 - dVar21,puVar16);
      if ((*(byte *)(param_2 + lVar5) & 1) != 0) goto LAB_103ec1ca4;
    }
    bVar7 = *(char *)(param_2 + _DAT_11302b528 + 8) != '\x01';
  }
  lVar12 = _DAT_11302b548;
  _swift_beginAccess(param_2 + _DAT_11302b548,auStack_90,0,0);
  lVar12 = *(long *)(param_2 + lVar12);
  puVar13 = *(undefined8 **)(lVar12 + 0x10);
  if (puVar13 == (undefined8 *)0x0) {
    puStack_f0 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    _swift_bridgeObjectRetain(lVar12);
    puStack_f0 = puVar13;
    FUN_103ec235c(puVar13,0);
    puVar9 = &uStack_b8;
    FUN_103ec2210(puVar9,puStack_f0 + 4,puVar13,lVar12);
    FUN_103ec2740(uStack_b8,uStack_b0,uStack_a8,uStack_a0,uStack_98);
    if (puVar9 != puVar13) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x103ec1dbc);
      (*pcVar6)();
    }
  }
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_allocWithZone();
  func_0x000107c466c0(dVar21);
  if (*(char *)((undefined8 *)(param_2 + _DAT_11302b518) + 1) == '\x01') {
    puStack_108 = (undefined *)0x0;
  }
  else {
    uVar11 = *(undefined8 *)(param_2 + _DAT_11302b518);
    puStack_108 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x000107c466c0(uVar11);
  }
  if (*(char *)((undefined8 *)(param_2 + _DAT_11302b520) + 1) == '\x01') {
    puVar19 = (undefined *)0x0;
  }
  else {
    uVar11 = *(undefined8 *)(param_2 + _DAT_11302b520);
    puVar19 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x000107c466c0(uVar11);
  }
  if (*(char *)((undefined8 *)(param_2 + _DAT_11302b528) + 1) == '\x01') {
    puVar14 = (undefined *)0x0;
  }
  else {
    uVar11 = *(undefined8 *)(param_2 + _DAT_11302b528);
    puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x000107c466c0(uVar11);
  }
  if (*(char *)((undefined8 *)(param_2 + _DAT_11302b530) + 1) == '\x01') {
    puVar15 = (undefined *)0x0;
  }
  else {
    uVar11 = *(undefined8 *)(param_2 + _DAT_11302b530);
    puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x000107c466c0(uVar11);
  }
  if (*(char *)((undefined8 *)(param_2 + _DAT_11302b538) + 1) == '\x01') {
    puVar17 = (undefined *)0x0;
  }
  else {
    uVar11 = *(undefined8 *)(param_2 + _DAT_11302b538);
    puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x000107c466c0(uVar11);
  }
  if (*(char *)((undefined8 *)(param_2 + _DAT_11302b540) + 1) == '\x01') {
    puVar18 = (undefined *)0x0;
  }
  else {
    uVar11 = *(undefined8 *)(param_2 + _DAT_11302b540);
    puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x000107c466c0(uVar11);
  }
  uVar11 = 0;
  func_0x000104340bbc(0);
  _objc_allocWithZone();
  func_0x000104340ad4(uVar11,uVar8,lStack_d8,uVar1,uVar3,uVar2,uVar4,puVar16,bVar7,puStack_f0,
                      puVar10,puStack_108,puVar19,puVar14,puVar15,puVar17,puVar18);
LAB_103ec1f94:
  *param_1 = uVar8;
  return;
}



/* Entry: 103ec1fbc; end: 103ec2043;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec1fbc(ulong param_1,ulong param_2,long param_3)

{
  ulong *puVar1;
  ulong uVar2;
  
  uVar2 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar2 = param_2 >> 0x38 & 0xf;
  }
  if (uVar2 != 0) {
    puVar1 = (ulong *)(param_3 + _DAT_11302b550);
    uVar2 = puVar1[1];
    if ((uVar2 != 0) && (*(char *)(param_3 + _DAT_11302b528 + 8) != '\x01')) {
      *(undefined1 *)(param_3 + _DAT_11302b560) = 1;
    }
    *puVar1 = param_1;
    puVar1[1] = param_2;
    _swift_bridgeObjectRelease(uVar2);
    _swift_bridgeObjectRetain(param_2);
  }
  return;
}



/* Entry: 103ec2044; end: 103ec20cb; -[_TtC26LensProcessingTrackingImpl20LensApplyContextImpl setSwipeId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec2044(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uStack_50 = param_3;
  uStack_48 = param_2;
  uStack_40 = param_1;
  _objc_retain(param_1);
  func_0x000100087bd4(0x103ec270c,auStack_60,PTR___sytN_11034f1b0 + 8);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  return;
}



/* Entry: 103ec20cc; end: 103ec212b; -[_TtC26LensProcessingTrackingImpl20LensApplyContextImpl init] */

void FUN_103ec20cc(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensProcessingTrackingImpl.LensApplyContextImpl",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ec20f8);
  (*pcVar1)();
}



/* Entry: 103ec212c; end: 103ec21b3; -[_TtC26LensProcessingTrackingImpl20LensApplyContextImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec212c(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_11302b4f8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11302b500 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11302b508 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11302b548));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11302b550 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11302b558 + 8))
  ;
  return;
}



/* Entry: 103ec21b4; end: 103ec220f;  */

void FUN_103ec21b4(void)

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
    func_0x0001043406e8();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x11302b598;
  plVar5 = (long *)&UNK_10dca6610;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 103ec2210; end: 103ec235b;  */

long FUN_103ec2210(long *param_1,undefined8 *param_2,long param_3,long param_4)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  
  puVar5 = (ulong *)(param_4 + 0x40);
  uVar6 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar7 = 0xffffffffffffffff;
  if (-uVar6 < 0x40) {
    uVar7 = ~(-1L << (-uVar6 & 0x3f));
  }
  uVar7 = uVar7 & *puVar5;
  if (param_2 == (undefined8 *)0x0) {
    lVar9 = 0;
    param_3 = 0;
  }
  else if (param_3 == 0) {
    lVar9 = 0;
  }
  else {
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103ec235c);
      (*pcVar2)();
    }
    lVar4 = 0;
    lVar8 = 0;
    uVar10 = 0x3f - uVar6 >> 6;
    lVar9 = lVar4;
    while( true ) {
      while (uVar7 == 0) {
        bVar3 = SCARRY8(lVar9,1);
        lVar9 = lVar9 + 1;
        if (bVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103ec2358);
          (*pcVar2)();
        }
        if ((long)uVar10 <= lVar9) {
          uVar7 = 0;
          if ((long)uVar10 <= lVar4 + 1) {
            uVar10 = lVar4 + 1;
          }
          lVar9 = uVar10 - 1;
          param_3 = lVar8;
          goto LAB_103ec231c;
        }
        uVar7 = puVar5[lVar9];
      }
      lVar8 = lVar8 + 1;
      uVar1 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 - 1 & uVar7;
      *param_2 = *(undefined8 *)
                  (*(long *)(param_4 + 0x38) + LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) * 8 +
                  lVar9 * 0x200);
      if (lVar8 == param_3) break;
      _objc_retain();
      lVar4 = lVar9;
      param_2 = param_2 + 1;
    }
    _objc_retain();
  }
LAB_103ec231c:
  *param_1 = param_4;
  param_1[1] = (long)puVar5;
  param_1[2] = ~uVar6;
  param_1[3] = lVar9;
  param_1[4] = uVar7;
  return param_3;
}



/* Entry: 103ec235c; end: 103ec23db;  */

undefined * FUN_103ec235c(undefined *param_1,undefined *param_2)

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
    FUN_103ec21b4();
    _swift_allocObject();
    puVar3 = puVar2;
    _malloc_size();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 103ec23dc; end: 103ec26eb;  */

undefined * FUN_103ec23dc(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x11302b5a0,&UNK_10dca6620);
    puVar5 = puVar8;
    __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
    _swift_retain();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      _swift_bridgeObjectRetain(uVar3);
      _objc_retain();
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x103ec24d8);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x103ec24dc);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    _swift_release(puVar5);
  }
  return puVar5;
}



/* Entry: 103ec26ec; end: 103ec273f;  */

void FUN_103ec26ec(void)

{
  _objc_opt_self(&PTR_PTR_11295f848);
  return;
}



/* Entry: 103ec2740; end: 103ec2747;  */

void FUN_103ec2740(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 103ec2748; end: 103ec28af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103ec2748(void)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = 0;
  uStack_38 = 0xe000000000000000;
  bVar3 = *(char *)(unaff_x20 + _DAT_11302b5f8) == '\0';
  uVar4 = 0x5f444552414853;
  if (bVar3) {
    uVar4 = 0;
  }
  uVar5 = 0xe700000000000000;
  if (bVar3) {
    uVar5 = 0xe000000000000000;
  }
  __sSS6appendyySSF(uVar4,uVar5);
  _swift_bridgeObjectRelease(uVar5);
  lStack_48 = *(long *)(unaff_x20 + _DAT_11302b5c8);
  if (lStack_48 < 2) {
    if (lStack_48 == 0) {
      uVar5 = 0xe400000000000000;
      uVar4 = 0x4e49414d;
    }
    else {
      if (lStack_48 != 1) {
LAB_103ec288c:
        __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                  (&UNK_11075c628,&lStack_48,&UNK_11075c628,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103ec28b0);
        (*pcVar2)();
      }
      uVar5 = 0xe700000000000000;
      uVar4 = 0x57454956455250;
    }
  }
  else if (lStack_48 == 2) {
    uVar5 = 0xe90000000000004e;
    uVar4 = 0x454552435346464f;
  }
  else if (lStack_48 == 3) {
    uVar5 = 0xee00524154415641;
    uVar4 = 0x5f494a4f4d544942;
  }
  else {
    if (lStack_48 != 4) goto LAB_103ec288c;
    uVar5 = 0xea00000000005345;
    uVar4 = 0x4d41475f59414c50;
  }
  __sSS6appendyySSF(uVar4,uVar5);
  _swift_bridgeObjectRelease(uVar5);
  auVar1._8_8_ = uStack_38;
  auVar1._0_8_ = uStack_40;
  return auVar1;
}



/* Entry: 103ec28b0; end: 103ec28bb; -[_TtC26LensProcessingTrackingImpl19LensCoreContextImpl createEvent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ec28b0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_1;
  _objc_retain();
  uVar1 = 0x11302b628;
  func_0x0001000285a8(0x11302b628,&UNK_10dca6688);
  func_0x000100087bd4(&uStack_38,0x103ec2b04,auStack_50,uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_38);
  return;
}


