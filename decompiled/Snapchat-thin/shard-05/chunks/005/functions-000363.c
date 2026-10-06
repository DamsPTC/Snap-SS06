/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103ed3560; end: 103ed356b; -[_TtC14GenerativeAIUI35GenerativeAITrayAlertViewController acceptButtonTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ed3560(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + _DAT_11302c140);
  if (pcVar1 == (code *)0x0) {
    return;
  }
  uVar2 = ((undefined8 *)(param_1 + _DAT_11302c140))[1];
  _objc_retain();
  func_0x000100d718b8(pcVar1,uVar2);
  (*pcVar1)();
  _objc_release(param_1);
  if (pcVar1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar2);
    return;
  }
  return;
}



/* Entry: 103ed356c; end: 103ed35d7;  */

void FUN_103ed356c(long param_1,undefined8 param_2,long *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + *param_3);
  if (pcVar1 == (code *)0x0) {
    return;
  }
  uVar2 = ((undefined8 *)(param_1 + *param_3))[1];
  _objc_retain();
  func_0x000100d718b8(pcVar1,uVar2);
  (*pcVar1)();
  _objc_release(param_1);
  if (pcVar1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar2);
    return;
  }
  return;
}



/* Entry: 103ed35d8; end: 103ed3637; -[_TtC14GenerativeAIUI35GenerativeAITrayAlertViewController initWithNibName:bundle:] */

void FUN_103ed35d8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("GenerativeAIUI.GenerativeAITrayAlertViewController",0x32,"init(nibName:bundle:)",0x15,
             0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ed3604);
  (*pcVar1)();
}



/* Entry: 103ed3638; end: 103ed3723; -[_TtC14GenerativeAIUI35GenerativeAITrayAlertViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103ed36f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103ed36f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ed3638(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302c170));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302c178));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302c190));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302c180));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302c188));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302c150));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302c158));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11302c160 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11302c168 + 8));
  if (*(long *)(param_1 + _DAT_11302c138) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_11302c138))[1]);
    return;
  }
  return;
}



/* Entry: 103ed3724; end: 103ed381f; -[_TtC14GenerativeAIUI35GenerativeAITrayAlertViewController textView:shouldInteractWithURL:inRange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103ed3724(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long extraout_x8;
  undefined8 uVar2;
  undefined1 *puVar3;
  code *pcVar4;
  long lVar5;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  puVar3 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(puVar3,param_4);
  pcVar4 = *(code **)(param_1 + _DAT_11302c148);
  if (pcVar4 == (code *)0x0) {
    pcVar4 = *(code **)(lVar5 + 8);
    _objc_retain(param_1);
    (*pcVar4)(puVar3,lVar1);
    _objc_release(param_1);
  }
  else {
    uVar2 = ((undefined8 *)(param_1 + _DAT_11302c148))[1];
    _objc_retain();
    func_0x000100d718b8(pcVar4,uVar2);
    (*pcVar4)(puVar3);
    func_0x000100d718c8(pcVar4,uVar2);
    _objc_release(param_1);
    (**(code **)(lVar5 + 8))(puVar3,lVar1);
  }
  return 0;
}



/* Entry: 103ed3820; end: 103ed3a1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ed3820(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  code *pcVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  lVar4 = _DAT_11302c1a0;
  ppuVar7 = &puStack_60;
  if (param_1 == 2) {
    pcVar8 = *(code **)(unaff_x20 + _DAT_11302c1b8);
    if (pcVar8 != (code *)0x0) {
      uVar9 = ((undefined8 *)(unaff_x20 + _DAT_11302c1b8))[1];
      _swift_retain(uVar9);
      (*pcVar8)();
      if (pcVar8 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_release_11034f4c0)(uVar9);
        return;
      }
      return;
    }
    lVar2 = unaff_x20 + _DAT_11302c1a0;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar2 != 0) {
      func_0x000107c5e37c();
      _objc_release(lVar2);
    }
    lVar2 = unaff_x20 + lVar4;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar2 != 0) {
      func_0x000107c3e748();
      _objc_release(lVar2);
    }
    lVar2 = unaff_x20 + lVar4;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar2 != 0) {
      lVar3 = lVar2;
      func_0x000107c5de64();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      if (lVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x103ed3a20);
        (*pcVar8)();
      }
      func_0x000107c4ff34(lVar3);
      _objc_release(lVar3);
    }
    lVar2 = unaff_x20 + lVar4;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar2 != 0) {
      func_0x000107c4ff2c();
      _objc_release(lVar2);
    }
    lVar4 = unaff_x20 + lVar4;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar4 != 0) {
      func_0x000107c427e0();
      _objc_release(lVar4);
    }
    uVar1 = *(undefined1 *)(unaff_x20 + _DAT_11302c1c0);
    lVar4 = unaff_x20 + _DAT_11302c130;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar4 != 0) {
      puVar5 = &UNK_11071da50;
      _swift_allocObject(&UNK_11071da50,0x18,7);
      _swift_unknownObjectWeakInit(puVar5 + 0x10);
      puVar6 = &UNK_11071daf0;
      _swift_allocObject(&UNK_11071daf0,0x19,7);
      *(undefined **)(puVar6 + 0x10) = puVar5;
      puVar6[0x18] = uVar1;
      uStack_40 = 0x103ed3b5c;
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0x42000000;
      puStack_50 = &UNK_1000b0c7c;
      puStack_48 = &UNK_11071db08;
      puStack_38 = puVar6;
      __Block_copy(&puStack_60);
      _swift_release(puStack_38);
      func_0x000107c41864(lVar4);
      __Block_release(ppuVar7);
      _swift_unknownObjectRelease(lVar4);
    }
  }
  return;
}



/* Entry: 103ed3a20; end: 103ed3aeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_103ed3a20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar9 = (undefined4)((ulong)param_4 >> 0x20);
  uVar8 = (undefined4)param_4;
  uVar7 = (undefined4)((ulong)param_3 >> 0x20);
  uVar6 = (undefined4)param_3;
  uVar5 = 0xbff0000000000000;
  if (param_5 == 8) {
    lVar2 = unaff_x20 + _DAT_11302c1a0;
    _swift_unknownObjectWeakLoadStrong(0xbff0000000000000);
    if (lVar2 == 0) {
      uVar5 = 0;
    }
    else {
      lVar3 = lVar2;
      func_0x000107c5de64();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      if (lVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103ed3aec);
        (*pcVar1)();
      }
      puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      _objc_opt_self(PTR__OBJC_CLASS___UIScreen_1126aea10);
      func_0x000107c4c194();
      _objc_retainAutoreleasedReturnValue();
      func_0x000107c3ec60();
      uVar5 = CONCAT44(uVar9,uVar8);
      _objc_release(puVar4);
      func_0x000107c5c614(CONCAT44(uVar7,uVar6),uVar5,0x447a0000,0x42480000,lVar3);
      _objc_release(lVar3);
    }
  }
  return uVar5;
}



/* Entry: 103ed3aec; end: 103ed3b0b;  */

void FUN_103ed3aec(void)

{
  _objc_opt_self(&PTR_PTR_112960a58);
  return;
}



/* Entry: 103ed3b0c; end: 103ed3b47;  */

void FUN_103ed3b0c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103ed3b48; end: 103ed3b87;  */

void FUN_103ed3b48(uint param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000103ed3b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1 & 1);
  return;
}



/* Entry: 103ed3b88; end: 103ed3bdf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103ed3b88(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + _DAT_11302c218);
  _swift_beginAccess(pauVar1,auStack_38,0,0);
  auVar2 = *pauVar1;
  func_0x000100b64c10(*(undefined8 *)*pauVar1,*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 103ed3be0; end: 103ed3c3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ed3be0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302c218);
  _swift_beginAccess(puVar1,auStack_48,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x00010058d43c(uVar2,uVar3);
  return;
}



/* Entry: 103ed3c3c; end: 103ed3c7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103ed3c3c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_11302c218;
  _swift_beginAccess(unaff_x20 + _DAT_11302c218,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_103ed3c7c;
  return auVar2;
}



/* Entry: 103ed3c7c; end: 103ed3c7f;  */

void FUN_103ed3c7c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 103ed3c80; end: 103ed3cf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ed3c80(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302c218);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302c220);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  return;
}



/* Entry: 103ed3cf4; end: 103ed3d6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ed3cf4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302c218);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302c220);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000103ed3d4c();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  return;
}



/* Entry: 103ed3d6c; end: 103ed3dd3; -[_TtC14GenerativeAIUI34GenericLeftSwipeableViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ed3d6c(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_11302c218);
  *puVar1 = 0;
  puVar1[1] = 0;
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
             "GenerativeAIUI/GenericLeftSwipeableViewController.swift",0x37,2,0x12,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103ed3dd4);
  (*pcVar2)();
}



/* Entry: 103ed3dd4; end: 103ed3e53; -[_TtC14GenerativeAIUI34GenericLeftSwipeableViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ed3dd4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lStack_30;
  long lStack_28;
  
  plVar3 = &lStack_30;
  lVar2 = param_1;
  func_0x000103ed3d4c();
  puVar1 = PTR_s_loadView_112604be0;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain();
  _objc_msgSendSuper2(&lStack_30,puVar1);
  (**(code **)(param_1 + _DAT_11302c220))();
  func_0x000107c5a568(param_1);
  _objc_release(plVar3);
  _objc_release(param_1);
  return;
}



/* Entry: 103ed3e54; end: 103ed3f1f; -[_TtC14GenerativeAIUI34GenericLeftSwipeableViewController didMoveToParentViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ed3e54(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined1 auStack_58 [24];
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_1;
  func_0x000103ed3d4c();
  puVar2 = PTR_s_didMoveToParentViewController__1125bb948;
  lStack_40 = param_1;
  lStack_38 = lVar3;
  _objc_retain();
  _objc_retain();
  _objc_msgSendSuper2(&lStack_40,puVar2,param_3);
  if (param_3 == 0) {
    puVar1 = (undefined8 *)(param_1 + _DAT_11302c218);
    _swift_beginAccess(puVar1,auStack_58,0,0);
    pcVar5 = (code *)*puVar1;
    if (pcVar5 != (code *)0x0) {
      uVar4 = puVar1[1];
      _swift_retain(uVar4);
      (*pcVar5)();
      _objc_release(param_1);
      func_0x00010058d43c(pcVar5,uVar4);
      return;
    }
  }
  else {
    _objc_release(param_3);
  }
  _objc_release(param_1);
  return;
}



/* Entry: 103ed3f20; end: 103ed3f4b; -[_TtC14GenerativeAIUI34GenericLeftSwipeableViewController initWithNibName:bundle:] */

void FUN_103ed3f20(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("GenerativeAIUI.GenericLeftSwipeableViewController",0x31,"init(nibName:bundle:)",0x15,0
            );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ed3f4c);
  (*pcVar1)();
}



/* Entry: 103ed3f4c; end: 103ed3fa7; -[_TtC14GenerativeAIUI34GenericLeftSwipeableViewController initWithNibName:bundle:transitionType:] */

void FUN_103ed3f4c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("GenerativeAIUI.GenericLeftSwipeableViewController",0x31,
             "init(nibName:bundle:transitionType:)",0x24,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ed3f78);
  (*pcVar1)();
}



/* Entry: 103ed3fa8; end: 103ed4097; -[_TtC14GenerativeAIUI34GenericLeftSwipeableViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ed3fa8(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_11302c220 + 8));
  if (*(long *)(param_1 + _DAT_11302c218) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_11302c218))[1]);
    return;
  }
  return;
}



/* Entry: 103ed4098; end: 103ed4147;  */

/* WARNING: Possible PIC construction at 0x000103ed4130: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103ed4134) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ed4098(undefined *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11302c258);
  FUN_103ed4148(0);
  _swift_getObjCClassFromMetadata();
  uVar1 = uVar3;
  func_0x000107c49f68();
  if ((int)uVar1 == 0) {
    param_1 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
    _objc_allocWithZone();
    func_0x000107c483f8();
    puVar2 = param_1;
    func_0x000107c4f044();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 != (undefined *)0x0) {
      func_0x000107c53fcc();
      _objc_release(puVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf0c990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar3,PTR_s_attachUI__1125a0c08,param_1);
  return;
}



/* Entry: 103ed4148; end: 103ed418b;  */

void FUN_103ed4148(void)

{
  undefined *puVar1;
  
  if (puRam000000011302c260 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126aead0;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  puRam000000011302c260 = puVar1;
  return;
}



/* Entry: 103ed418c; end: 103ed4283; -[SCNavigationWrappedUIContainer attachUI:] */

void FUN_103ed418c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_103ed4098(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103ed4284; end: 103ed429f;  */

void FUN_103ed4284(long param_1,long param_2)

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



/* Entry: 103ed42a0; end: 103ed432b; -[SCNavigationWrappedUIContainer detachUI:] */

void FUN_103ed42a0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  code *pcVar2;
  
  __Block_copy();
  if (param_3 == 0) {
    pcVar2 = (code *)0x0;
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = &UNK_11071db68;
    _swift_allocObject(&UNK_11071db68,0x18,7);
    *(long *)(puVar1 + 0x10) = param_3;
    pcVar2 = FUN_103ed4430;
  }
  _objc_retain(param_1);
  func_0x000103ed41dc(pcVar2,puVar1);
  func_0x00010058d43c(pcVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103ed432c; end: 103ed438b; -[SCNavigationWrappedUIContainer init] */

void FUN_103ed432c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("GenerativeAIUI.NavigationWrappedUIContainer",0x2b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ed4358);
  (*pcVar1)();
}



/* Entry: 103ed438c; end: 103ed43c3; -[SCNavigationWrappedUIContainer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ed438c(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11302c250));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_11302c258));
  return;
}



/* Entry: 103ed43c4; end: 103ed43e3;  */

void FUN_103ed43c4(void)

{
  _objc_opt_self(&PTR_PTR_112960d38);
  return;
}



/* Entry: 103ed43e4; end: 103ed442f; -[SCNavigationWrappedUIContainer presentationControllerDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ed43e4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11302c250;
  _swift_beginAccess(param_1 + _DAT_11302c250,auStack_38,0,0);
  if (*(long *)(param_1 + lVar1) != 0) {
    func_0x000107c4d538();
  }
  return;
}



/* Entry: 103ed4430; end: 103ed443b;  */

void FUN_103ed4430(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000103ed4438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 103ed443c; end: 103ed4543;  */

void FUN_103ed443c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_103ed4544();
  uVar1 = 0;
  FUN_103ed4648(0,0x112d48390,&PTR__OBJC_CLASS___UIColor_1126aea70);
  uVar2 = param_1;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(param_1,uVar1);
  _swift_bridgeObjectRelease(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103ed4544; end: 103ed4647;  */

long FUN_103ed4544(long param_1)

{
  undefined *puVar1;
  
  func_0x0001030baf1c();
  _swift_allocObject();
  *(undefined8 *)(param_1 + 0x18) = 9;
  *(undefined8 *)(param_1 + 0x10) = 4;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _objc_allocWithZone();
  func_0x000107c482a8(0x3ff0000000000000,0x3fefbfbfbfbfbfc0,0x3feafafafafafafb,0x3ff0000000000000);
  *(undefined **)(param_1 + 0x20) = puVar1;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _objc_allocWithZone();
  func_0x000107c482a8(0x3ff0000000000000,0x3fed3d3d3d3d3d3d,0x3fe3333333333333,0x3ff0000000000000);
  *(undefined **)(param_1 + 0x28) = puVar1;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _objc_allocWithZone();
  func_0x000107c482a8(0x3ff0000000000000,0x3fed3d3d3d3d3d3d,0x3fe3333333333333,0x3ff0000000000000);
  *(undefined **)(param_1 + 0x30) = puVar1;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _objc_allocWithZone();
  func_0x000107c482a8(0x3fe8989898989899,0x3fdb1b1b1b1b1b1b,0x3f90101010101010,0x3ff0000000000000);
  *(undefined **)(param_1 + 0x38) = puVar1;
  return param_1;
}



/* Entry: 103ed4648; end: 103ed4687;  */

void FUN_103ed4648(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 103ed4688; end: 103ed46f3;  */

undefined1  [16] FUN_103ed4688(double param_1,double param_2,undefined8 param_3)

{
  double dVar1;
  undefined1 auVar2 [16];
  
  _objc_retain();
  func_0x000107c5b078();
  func_0x000107c51820(param_3);
  param_2 = param_2 * param_1;
  func_0x000107c5b078(param_3);
  dVar1 = param_1;
  func_0x000107c51820(param_3);
  _objc_release(param_3);
  auVar2._0_8_ = param_1 * dVar1;
  auVar2._8_8_ = param_2;
  return auVar2;
}



/* Entry: 103ed46f4; end: 103ed4707;  */

bool FUN_103ed46f4(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103ed4708; end: 103ed47b3;  */

void FUN_103ed4708(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103ed47b4; end: 103ed47db;  */

void FUN_103ed47b4(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 2) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 1 < uVar2;
  return;
}



/* Entry: 103ed47dc; end: 103ed4e0f;  */

void FUN_103ed47dc(void)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 unaff_x20;
  undefined *apuStack_270 [16];
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uVar3 = unaff_x20;
  func_0x000107c4aba4();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c4fe68();
  _objc_release(uVar3);
  puVar2 = PTR__OBJC_CLASS___CATransaction_1126b5718;
  _objc_opt_self(PTR__OBJC_CLASS___CATransaction_1126b5718);
  func_0x000107c3e740();
  uVar3 = 0x726f66736e617274;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x726f66736e617274,0xe90000000000006d);
  puVar4 = PTR__OBJC_CLASS___CAKeyframeAnimation_1126c8240;
  _objc_opt_self(PTR__OBJC_CLASS___CAKeyframeAnimation_1126c8240);
  func_0x000107c3dd18();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = unaff_x20;
  func_0x000107c4aba4();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c5cf28(&uStack_f0);
  _objc_release(uVar3);
  _CATransform3DScale(&uStack_1f0,0,0,0,&uStack_f0);
  uVar3 = unaff_x20;
  func_0x000107c4aba4();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c5cf28(&uStack_f0);
  _objc_release(uVar3);
  _CATransform3DScale(&uStack_170,0x3ff3333333333333,0x3ff3333333333333,0x3ff0000000000000,
                      &uStack_f0);
  uVar3 = unaff_x20;
  func_0x000107c4aba4();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c5cf28(apuStack_270);
  _objc_release(uVar3);
  _CATransform3DScale(&uStack_f0,0x3feccccccccccccd,0x3feccccccccccccd,0x3ff0000000000000,
                      apuStack_270);
  lVar5 = 0x112d38dc0;
  func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
  _swift_allocObject();
  *(undefined8 *)(lVar5 + 0x18) = 8;
  *(undefined8 *)(lVar5 + 0x10) = 4;
  uVar3 = 0;
  func_0x0001031274f4();
  *(undefined8 *)(lVar5 + 0x38) = uVar3;
  puVar7 = &UNK_11071db90;
  puVar6 = puVar7;
  _swift_allocObject(&UNK_11071db90,0x90,7);
  *(undefined **)(lVar5 + 0x20) = puVar6;
  *(undefined8 *)(puVar6 + 0x58) = uStack_1a8;
  *(undefined8 *)(puVar6 + 0x50) = uStack_1b0;
  *(undefined8 *)(puVar6 + 0x68) = uStack_198;
  *(undefined8 *)(puVar6 + 0x60) = uStack_1a0;
  *(undefined8 *)(puVar6 + 0x78) = uStack_188;
  *(undefined8 *)(puVar6 + 0x70) = uStack_190;
  *(undefined8 *)(puVar6 + 0x88) = uStack_178;
  *(undefined8 *)(puVar6 + 0x80) = uStack_180;
  *(undefined8 *)(puVar6 + 0x18) = uStack_1e8;
  *(undefined8 *)(puVar6 + 0x10) = uStack_1f0;
  *(undefined8 *)(puVar6 + 0x28) = uStack_1d8;
  *(undefined8 *)(puVar6 + 0x20) = uStack_1e0;
  *(undefined8 *)(puVar6 + 0x38) = uStack_1c8;
  *(undefined8 *)(puVar6 + 0x30) = uStack_1d0;
  *(undefined8 *)(puVar6 + 0x48) = uStack_1b8;
  *(undefined8 *)(puVar6 + 0x40) = uStack_1c0;
  *(undefined8 *)(lVar5 + 0x58) = uVar3;
  puVar6 = puVar7;
  _swift_allocObject(&UNK_11071db90,0x90,7);
  *(undefined **)(lVar5 + 0x40) = puVar6;
  *(undefined8 *)(puVar6 + 0x58) = uStack_128;
  *(undefined8 *)(puVar6 + 0x50) = uStack_130;
  *(undefined8 *)(puVar6 + 0x68) = uStack_118;
  *(undefined8 *)(puVar6 + 0x60) = uStack_120;
  *(undefined8 *)(puVar6 + 0x78) = uStack_108;
  *(undefined8 *)(puVar6 + 0x70) = uStack_110;
  *(undefined8 *)(puVar6 + 0x88) = uStack_f8;
  *(undefined8 *)(puVar6 + 0x80) = uStack_100;
  *(undefined8 *)(puVar6 + 0x18) = uStack_168;
  *(undefined8 *)(puVar6 + 0x10) = uStack_170;
  *(undefined8 *)(puVar6 + 0x28) = uStack_158;
  *(undefined8 *)(puVar6 + 0x20) = uStack_160;
  *(undefined8 *)(puVar6 + 0x38) = uStack_148;
  *(undefined8 *)(puVar6 + 0x30) = uStack_150;
  *(undefined8 *)(puVar6 + 0x48) = uStack_138;
  *(undefined8 *)(puVar6 + 0x40) = uStack_140;
  *(undefined8 *)(lVar5 + 0x78) = uVar3;
  _swift_allocObject(&UNK_11071db90,0x90,7);
  *(undefined **)(lVar5 + 0x60) = puVar7;
  *(undefined8 *)(puVar7 + 0x58) = uStack_a8;
  *(undefined8 *)(puVar7 + 0x50) = uStack_b0;
  *(undefined8 *)(puVar7 + 0x68) = uStack_98;
  *(undefined8 *)(puVar7 + 0x60) = uStack_a0;
  *(undefined8 *)(puVar7 + 0x78) = uStack_88;
  *(undefined8 *)(puVar7 + 0x70) = uStack_90;
  *(undefined8 *)(puVar7 + 0x88) = uStack_78;
  *(undefined8 *)(puVar7 + 0x80) = uStack_80;
  *(undefined8 *)(puVar7 + 0x18) = uStack_e8;
  *(undefined8 *)(puVar7 + 0x10) = uStack_f0;
  *(undefined8 *)(puVar7 + 0x28) = uStack_d8;
  *(undefined8 *)(puVar7 + 0x20) = uStack_e0;
  *(undefined8 *)(puVar7 + 0x38) = uStack_c8;
  *(undefined8 *)(puVar7 + 0x30) = uStack_d0;
  *(undefined8 *)(puVar7 + 0x48) = uStack_b8;
  *(undefined8 *)(puVar7 + 0x40) = uStack_c0;
  uVar3 = 0;
  func_0x0001023c36f0();
  *(undefined8 *)(lVar5 + 0x98) = uVar3;
  puVar7 = &UNK_11071dbb8;
  _swift_allocObject(&UNK_11071dbb8,0x40,7);
  *(undefined **)(lVar5 + 0x80) = puVar7;
  *(undefined8 *)(puVar7 + 0x10) = 0x3ff0000000000000;
  *(undefined8 *)(puVar7 + 0x18) = 0;
  *(undefined8 *)(puVar7 + 0x20) = 0;
  *(undefined8 *)(puVar7 + 0x28) = 0x3ff0000000000000;
  *(undefined8 *)(puVar7 + 0x30) = 0;
  *(undefined8 *)(puVar7 + 0x38) = 0;
  lVar8 = lVar5;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar5,PTR___sypN_11034f1a8 + 8);
  _swift_release(lVar5);
  func_0x000107c5a4ac(puVar4);
  _objc_release(lVar8);
  apuStack_270[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001002ecff4(0,4,0);
  puVar7 = apuStack_270[0];
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_allocWithZone();
  func_0x000107c466c0(0);
  uVar1 = *(ulong *)(puVar7 + 0x10);
  if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
    func_0x0001002ecff4(1 < *(ulong *)(puVar7 + 0x18),uVar1 + 1,1);
    puVar7 = apuStack_270[0];
  }
  *(ulong *)(puVar7 + 0x10) = uVar1 + 1;
  *(undefined **)(puVar7 + uVar1 * 8 + 0x20) = puVar6;
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_allocWithZone();
  func_0x000107c466c0(0x3fe0000000000000);
  uVar1 = *(ulong *)(puVar7 + 0x10);
  if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
    func_0x0001002ecff4(1 < *(ulong *)(puVar7 + 0x18),uVar1 + 1,1);
    puVar7 = apuStack_270[0];
  }
  *(ulong *)(puVar7 + 0x10) = uVar1 + 1;
  *(undefined **)(puVar7 + uVar1 * 8 + 0x20) = puVar6;
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_allocWithZone();
  func_0x000107c466c0(0x3feccccccccccccd);
  uVar1 = *(ulong *)(puVar7 + 0x10);
  if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
    func_0x0001002ecff4(1 < *(ulong *)(puVar7 + 0x18),uVar1 + 1,1);
  }
  puVar7 = apuStack_270[0];
  *(ulong *)(apuStack_270[0] + 0x10) = uVar1 + 1;
  *(undefined **)(apuStack_270[0] + uVar1 * 8 + 0x20) = puVar6;
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_allocWithZone();
  func_0x000107c466c0(0x3ff0000000000000);
  uVar1 = *(ulong *)(puVar7 + 0x10);
  if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
    func_0x0001002ecff4(1 < *(ulong *)(puVar7 + 0x18),uVar1 + 1,1);
    puVar7 = apuStack_270[0];
  }
  *(ulong *)(puVar7 + 0x10) = uVar1 + 1;
  *(undefined **)(puVar7 + uVar1 * 8 + 0x20) = puVar6;
  uVar3 = 0;
  FUN_103ed5324(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  puVar6 = puVar7;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(puVar7,uVar3);
  _swift_release(puVar7);
  func_0x000107c559b4(puVar4);
  _objc_release();
  FUN_103ed1c1c();
  _swift_allocObject();
  *(undefined8 *)(puVar6 + 0x18) = 7;
  *(undefined8 *)(puVar6 + 0x10) = 3;
  puVar7 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  _objc_opt_self();
  puVar9 = puVar7;
  func_0x000107c43be8();
  _objc_retainAutoreleasedReturnValue();
  *(undefined **)(puVar6 + 0x20) = puVar9;
  uVar3 = *(undefined8 *)PTR__kCAMediaTimingFunctionEaseInEaseOut_110346d78;
  _objc_retain(uVar3);
  puVar9 = puVar7;
  func_0x000107c43be8();
  _objc_retainAutoreleasedReturnValue();
  *(undefined **)(puVar6 + 0x28) = puVar9;
  func_0x000107c43be8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  *(undefined **)(puVar6 + 0x30) = puVar7;
  uVar3 = 0;
  FUN_103ed5324(0,0x11302c128,&PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140);
  puVar7 = puVar6;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(puVar6,uVar3);
  _swift_release(puVar6);
  func_0x000107c59e00(puVar4);
  _objc_release(puVar7);
  _objc_retain(puVar4);
  func_0x000107c57ce4();
  func_0x000107c549b8(puVar4);
  _objc_release(puVar4);
  func_0x000107c4aba4();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0xd000000000000027;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000027,0x800000010f1cc2e0);
  func_0x000107c3d5a4(unaff_x20);
  _objc_release(unaff_x20);
  _objc_release(uVar3);
  func_0x000107c3fe58(puVar2);
  _objc_release(puVar4);
  return;
}



/* Entry: 103ed4e10; end: 103ed4e37;  */

void FUN_103ed4e10(undefined8 param_1)

{
  _objc_retain();
  FUN_103ed47dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103ed4e38; end: 103ed5003;  */

void FUN_103ed4e38(double param_1,int param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 unaff_x20;
  undefined8 uVar5;
  
  lVar1 = 8;
  if (param_2 != 1) {
    lVar1 = 0;
  }
  uVar5 = *(undefined8 *)(&UNK_10df9f9b0 + lVar1);
  uVar3 = unaff_x20;
  func_0x000107c4aba4();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c4fe68();
  _objc_release(uVar3);
  puVar2 = PTR__OBJC_CLASS___CATransaction_1126b5718;
  _objc_opt_self(PTR__OBJC_CLASS___CATransaction_1126b5718);
  func_0x000107c3e740();
  uVar3 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f1cc310);
  puVar4 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  _objc_opt_self(PTR__OBJC_CLASS___CABasicAnimation_1126b5708);
  func_0x000107c3dd18();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = 0;
  __sSi10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF(0);
  func_0x000107c54ce4(puVar4);
  _objc_release(uVar3);
  __s12CoreGraphics7CGFloatV10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF(uVar5);
  func_0x000107c59e64(puVar4);
  _objc_release(uVar3);
  _objc_retain(puVar4);
  func_0x000107c54358(param_1 * 0.5);
  func_0x000107c57d30(0x7f7fffff,puVar4);
  func_0x000107c53bd4(puVar4);
  func_0x000107c57ce4(puVar4);
  func_0x000107c549b8(puVar4);
  _objc_release(puVar4);
  func_0x000107c4aba4();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0xd000000000000027;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000027,0x800000010f1cc330);
  func_0x000107c3d5a4(unaff_x20);
  _objc_release(unaff_x20);
  _objc_release(uVar3);
  func_0x000107c3fe58(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 103ed5004; end: 103ed5043;  */

void FUN_103ed5004(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain();
  FUN_103ed4e38(param_1,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 103ed5044; end: 103ed50c3;  */

void FUN_103ed5044(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000107c4aba4();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c4fe68();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x000107c4aba4(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c52580();
  _objc_release(uVar1);
  _objc_release(param_1);
  return;
}



/* Entry: 103ed50c4; end: 103ed515f;  */

bool FUN_103ed50c4(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  lVar2 = param_1;
  func_0x000107c4aba4();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x000107c3dcfc();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (lVar3 == 0) {
    _objc_release(param_1);
    bVar1 = false;
  }
  else {
    lVar2 = lVar3;
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
              (lVar3,PTR___sSSN_11034da80);
    _objc_release(lVar3);
    lVar3 = *(long *)(lVar2 + 0x10);
    _swift_bridgeObjectRelease(lVar2);
    _objc_release(param_1);
    bVar1 = lVar3 != 0;
  }
  return bVar1;
}



/* Entry: 103ed5160; end: 103ed5163;  */

void FUN_103ed5160(void)

{
  undefined *puVar1;
  
  if (puRam000000011302c290 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dca7248;
  _swift_getWitnessTable(&UNK_10dca7248,&UNK_11071dbe0);
  puRam000000011302c290 = puVar1;
  return;
}



/* Entry: 103ed5164; end: 103ed51a3;  */

void FUN_103ed5164(void)

{
  undefined *puVar1;
  
  if (puRam000000011302c290 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dca7248;
  _swift_getWitnessTable(&UNK_10dca7248,&UNK_11071dbe0);
  puRam000000011302c290 = puVar1;
  return;
}



/* Entry: 103ed51a4; end: 103ed51b3;  */

undefined1  [16] FUN_103ed51a4(void)

{
  return ZEXT816(0x11071dbe0);
}



/* Entry: 103ed51b4; end: 103ed51e7;  */

void FUN_103ed51b4(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_103ed51e8();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 103ed51e8; end: 103ed5323;  */

undefined *
FUN_103ed51e8(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5,
             undefined8 param_6,undefined8 param_7)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103ed5324);
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
    (*param_5)();
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
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
    FUN_103ed5324(0,param_6,param_7);
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      _memmove(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Entry: 103ed5324; end: 103ed5363;  */

void FUN_103ed5324(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 103ed5364; end: 103ed5667;  */

void FUN_103ed5364(void)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  undefined *puVar12;
  ulong unaff_x20;
  ulong uVar13;
  ulong uVar14;
  ulong uStack_70;
  
  func_0x000107c4aba4();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = unaff_x20;
  func_0x000107c5c288();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(unaff_x20);
  if (uVar13 != 0) {
    uVar3 = 0;
    FUN_103ed6508(0,0x112eefda8,&PTR__OBJC_CLASS___CALayer_1126b1750);
    uVar4 = uVar13;
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ();
    _objc_release(uVar13);
    if (uVar4 >> 0x3e == 0) {
      uVar13 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
      puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      uVar13 = uVar4 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar4) {
        uVar13 = uVar4;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    PTR___swiftEmptyArrayStorage_11034f1c8 = puVar9;
    if (uVar13 != 0) {
      uStack_70 = uVar4 & 0xffffffffffffff8;
      uVar14 = 0;
      do {
        while( true ) {
          if ((uVar4 & 0xc000000000000001) == 0) {
            if (*(ulong *)(uStack_70 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x103ed5584);
              (*pcVar2)();
            }
            uVar5 = *(ulong *)(uVar4 + uVar14 * 8 + 0x20);
            _objc_retain();
            uVar11 = uVar3;
          }
          else {
            uVar5 = uVar14;
            uVar11 = uVar4;
            FUN_103ed62e8(uVar14,uVar4,&PTR__OBJC_CLASS___CALayer_1126b1750,0x112eefda8);
          }
          uVar1 = uVar14 + 1;
          if (SCARRY8(uVar14,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x103ed5580);
            (*pcVar2)();
          }
          uVar6 = uVar5;
          func_0x000107c4d3e4();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar11;
          if (uVar6 == 0) break;
          uVar7 = uVar6;
          __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
          uVar3 = uVar11;
          _objc_release(uVar6);
          if ((uVar7 == 0xd000000000000013) && (uVar11 == 0x800000010f1cc360)) {
            _swift_bridgeObjectRelease(0x800000010f1cc360);
          }
          else {
            uVar3 = uVar11;
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (uVar7,uVar11,0xd000000000000013,0x800000010f1cc360,0);
            _swift_bridgeObjectRelease(uVar11);
            if ((uVar7 & 1) == 0) break;
          }
          puVar12 = puVar9;
          _swift_isUniquelyReferenced_nonNull_native();
          if (((ulong)puVar12 & 1) == 0) {
            uVar3 = *(long *)(puVar9 + 0x10) + 1;
            FUN_103ed51b4(0,uVar3,1);
          }
          uVar11 = *(ulong *)(puVar9 + 0x10);
          uVar14 = uVar11 + 1;
          if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar11) {
            uVar3 = uVar14;
            FUN_103ed51b4(1 < *(ulong *)(puVar9 + 0x18),uVar14,1);
          }
          *(ulong *)(puVar9 + 0x10) = uVar14;
          *(ulong *)(puVar9 + uVar11 * 8 + 0x20) = uVar5;
          uVar14 = uVar1;
          if (uVar1 == uVar13) goto LAB_103ed55a8;
        }
        _objc_release(uVar5);
        uVar14 = uVar14 + 1;
      } while (uVar1 != uVar13);
    }
LAB_103ed55a8:
    _swift_bridgeObjectRelease(uVar4);
    if (((long)puVar9 < 0) || (((ulong)puVar9 >> 0x3e & 1) != 0)) {
      puVar12 = puVar9;
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    else {
      puVar12 = *(undefined **)(puVar9 + 0x10);
    }
    if (puVar12 == (undefined *)0x0) {
      _swift_release(puVar9);
    }
    else {
      if (((ulong)puVar9 & 0xc000000000000001) == 0) {
        if (*(long *)(puVar9 + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103ed5668);
          (*pcVar2)();
        }
        lVar8 = *(long *)(puVar9 + 0x20);
        _objc_retain();
      }
      else {
        lVar8 = 0;
        FUN_103ed62e8(0,puVar9,&PTR__OBJC_CLASS___CALayer_1126b1750,0x112eefda8);
      }
      _swift_release(puVar9);
      puVar9 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
      _objc_opt_self(PTR__OBJC_CLASS___CAGradientLayer_1126b2788);
      lVar10 = lVar8;
      _swift_dynamicCastObjCClass(lVar8,puVar9);
      if (lVar10 == 0) {
        _objc_release(lVar8);
      }
    }
  }
  return;
}



/* Entry: 103ed5668; end: 103ed567b;  */

bool FUN_103ed5668(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103ed567c; end: 103ed5753;  */

void FUN_103ed567c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103ed5754; end: 103ed575f;  */

void FUN_103ed5754(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 103ed5760; end: 103ed5c6f;  */

void FUN_103ed5760(double param_1,double param_2,double param_3,double param_4,double param_5,
                  undefined8 param_6,undefined *param_7,long param_8,undefined *param_9,
                  undefined *param_10,undefined *param_11)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 unaff_x20;
  undefined *puVar9;
  undefined *puVar10;
  undefined *apuStack_d0 [3];
  undefined8 uStack_b8;
  undefined *puStack_b0;
  
  puVar3 = param_7;
  FUN_103ed5364();
  puVar7 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    puVar7 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
    _objc_allocWithZone();
    func_0x000107c453e4();
  }
  if ((ulong)param_7 >> 0x3e == 0) {
    puVar10 = *(undefined **)(((ulong)param_7 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar10 = (undefined *)((ulong)param_7 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_7) {
      puVar10 = param_7;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (puVar10 == (undefined *)0x0) {
    _objc_retain(puVar3);
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_b0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    _objc_retain(puVar3);
    func_0x000100c077e4(0,(ulong)puVar10 & ((long)puVar10 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)puVar10 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103ed5c44);
      (*pcVar2)();
    }
    puVar8 = (undefined *)0x0;
    puVar9 = puStack_b0;
    do {
      if (((ulong)param_7 & 0xc000000000000001) == 0) {
        if ((long)puVar8 < 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103ed5c3c);
          (*pcVar2)();
        }
        if (*(undefined **)(((ulong)param_7 & 0xffffffffffffff8) + 0x10) <= puVar8) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103ed5c40);
          (*pcVar2)();
        }
        puVar4 = *(undefined **)(param_7 + (long)puVar8 * 8 + 0x20);
        _objc_retain();
      }
      else {
        puVar4 = puVar8;
        FUN_103ed62e8(puVar8,param_7,&PTR__OBJC_CLASS___UIColor_1126aea70,0x112d48390);
      }
      puVar5 = puVar4;
      func_0x00010bdc0fe0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = 0;
      func_0x000100ef8bfc();
      uStack_b8 = uVar6;
      _objc_release(puVar4);
      uVar1 = *(ulong *)(puVar9 + 0x10);
      apuStack_d0[0] = puVar5;
      puStack_b0 = puVar9;
      if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar1) {
        func_0x000100c077e4(1 < *(ulong *)(puVar9 + 0x18),uVar1 + 1,1);
      }
      puVar9 = puStack_b0;
      puVar8 = puVar8 + 1;
      *(ulong *)(puStack_b0 + 0x10) = uVar1 + 1;
      func_0x000100102924(apuStack_d0,puStack_b0 + uVar1 * 0x20 + 0x20);
    } while (puVar10 != puVar8);
  }
  puVar10 = param_9;
  if ((param_9 < (undefined *)0x8) && (puVar10 = param_10, param_10 < (undefined *)0x8)) {
    _objc_retain(puVar7);
    func_0x000107c54b80(param_1,param_2,param_3 + param_5,param_4 + param_5);
    puVar10 = puVar9;
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(puVar9,PTR___sypN_11034f1a8 + 8);
    func_0x000107c535a0(puVar7);
    _objc_release(puVar10);
    if (param_8 == 0) {
      param_8 = 0;
    }
    else {
      uVar6 = 0;
      FUN_103ed6508(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(param_8,uVar6);
    }
    func_0x000107c56084(puVar7);
    _objc_release(param_8);
    func_0x000107c597c4(0,0,puVar7);
    func_0x000107c54598(0x3ff0000000000000,0x3ff0000000000000,puVar7);
    if (param_11 == (undefined *)0x0) {
      param_11 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
      _objc_allocWithZone(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
      func_0x000107c453e4();
      puVar10 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
      _objc_opt_self(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
      func_0x000107c3e8b0(param_1 + param_5 * 0.5,param_2 + param_5 * 0.5,param_3 - param_5,
                          param_4 - param_5,param_6);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar10;
      func_0x00010bdc1040();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      func_0x000107c57274(param_11);
      _objc_release(puVar8);
      puVar10 = PTR__OBJC_CLASS___UIColor_1126aea70;
      _objc_opt_self(PTR__OBJC_CLASS___UIColor_1126aea70);
      puVar8 = puVar10;
      func_0x000107c3fa94();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar8;
      func_0x00010bdc0fe0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      func_0x000107c549b4(param_11);
      _objc_release(puVar4);
      func_0x000107c5e2ac(puVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar10;
      func_0x00010bdc0fe0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      func_0x000107c59a18(param_11);
      _objc_release(puVar8);
      func_0x000107c55f94(param_5,param_11);
    }
    else {
      _objc_retain(param_11);
    }
    _objc_retain();
    func_0x000107c562f4(puVar7);
    _objc_release(param_11);
    _objc_release(param_11);
    _swift_bridgeObjectRelease(puVar9);
    if (puVar3 == (undefined *)0x0) {
      uVar6 = 0xd000000000000013;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1cc360);
      func_0x000107c56954(puVar7);
      _objc_release(puVar7);
      _objc_release(uVar6);
      func_0x000107c4aba4(unaff_x20);
      _objc_retainAutoreleasedReturnValue();
      func_0x000107c49770();
      _objc_release(unaff_x20);
    }
    else {
      _objc_release(puVar7);
      _objc_release(puVar7);
      puVar7 = puVar3;
    }
    _objc_release(puVar7);
    return;
  }
  apuStack_d0[0] = puVar10;
  __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
            (&UNK_11071dc58,apuStack_d0,&UNK_11071dc58,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103ed5c70);
  (*pcVar2)();
}



/* Entry: 103ed5c70; end: 103ed5da3;  */

void FUN_103ed5c70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_103ed6508(0,0x112d48390,&PTR__OBJC_CLASS___UIColor_1126aea70);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_9,uVar1);
  if (param_10 != 0) {
    uVar1 = 0;
    FUN_103ed6508(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_10,uVar1);
  }
  uVar1 = param_13;
  _objc_retain(param_13);
  _objc_retain(param_7);
  FUN_103ed5760(param_1,param_2,param_3,param_4,param_5,param_6,param_9,param_10,param_11,param_12,
                param_13);
  _objc_release(uVar1);
  _objc_release(param_7);
  _swift_bridgeObjectRelease(param_9);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_10);
  return;
}



/* Entry: 103ed5da4; end: 103ed6217;  */

void FUN_103ed5da4(double param_1,double param_2,double param_3,double param_4,double param_5,
                  undefined *param_6)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  puVar2 = param_6;
  dVar10 = param_1;
  dVar12 = param_2;
  dVar13 = param_3;
  dVar14 = param_4;
  FUN_103ed5364();
  if (puVar2 == (undefined *)0x0) {
    return;
  }
  _objc_retain();
  puVar3 = puVar2;
  func_0x000107c4c548();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined *)0x0) {
    _objc_release(puVar2);
  }
  else {
    puVar9 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
    _objc_opt_self(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
    puVar8 = puVar3;
    _swift_dynamicCastObjCClass(puVar3,puVar9);
    if (puVar8 == (undefined *)0x0) {
      _objc_release(puVar2);
    }
    else {
      func_0x000107c4b644();
      dVar15 = param_3 + dVar10;
      dVar16 = param_4 + dVar10;
      func_0x000107c438d4(puVar2);
      puVar9 = puVar2;
      _objc_release();
      iVar1 = (int)puVar9;
      dVar11 = param_1;
      _CGRectEqualToRect(param_1,param_2,dVar15,dVar16,dVar10,dVar12,dVar13,dVar14);
      if ((iVar1 == 0) || (func_0x000107c407dc(puVar8), param_5 != dVar11)) {
        func_0x000107c4b644(puVar8);
        puVar8 = puVar2;
        func_0x000107c3fdec();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = PTR___sypN_11034f1a8;
        if (puVar8 == (undefined *)0x0) {
          puVar6 = (undefined *)0x0;
        }
        else {
          puVar6 = puVar8;
          __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ();
          _objc_release(puVar8);
        }
        puVar8 = puVar2;
        func_0x000107c4b938();
        _objc_retainAutoreleasedReturnValue();
        if (puVar8 == (undefined *)0x0) {
          puVar7 = (undefined *)0x0;
        }
        else {
          uVar4 = 0;
          FUN_103ed6508(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
          puVar7 = puVar8;
          __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
                    (puVar8,uVar4);
          _objc_release(puVar8);
        }
        func_0x000107c5bb6c(puVar2);
        func_0x000107c42858(puVar2);
        func_0x000107c54b80(param_1,param_2,param_3 + dVar11,param_4 + dVar11,puVar2);
        if (puVar6 == (undefined *)0x0) {
          puVar8 = (undefined *)0x0;
        }
        else {
          puVar8 = puVar6;
          __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(puVar6,puVar9 + 8);
        }
        func_0x000107c535a0(puVar2);
        _objc_release(puVar8);
        if (puVar7 == (undefined *)0x0) {
          puVar9 = (undefined *)0x0;
        }
        else {
          uVar4 = 0;
          FUN_103ed6508(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
          puVar9 = puVar7;
          __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(puVar7,uVar4);
        }
        func_0x000107c56084(puVar2);
        _objc_release(puVar9);
        func_0x000107c597c4(0,0,puVar2);
        func_0x000107c54598(0x3ff0000000000000,0x3ff0000000000000,puVar2);
        if (param_6 == (undefined *)0x0) {
          param_6 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
          _objc_allocWithZone(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
          func_0x000107c453e4();
          puVar9 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
          _objc_opt_self(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
          func_0x000107c3e8b0(param_1 + dVar11 * 0.5,param_2 + dVar11 * 0.5,param_3 - dVar11,
                              param_4 - dVar11,param_5);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar9;
          func_0x00010bdc1040();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar9);
          func_0x000107c57274(param_6);
          _objc_release(puVar8);
          puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
          _objc_opt_self(PTR__OBJC_CLASS___UIColor_1126aea70);
          puVar8 = puVar9;
          func_0x000107c3fa94();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar8;
          func_0x00010bdc0fe0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar8);
          func_0x000107c549b4(param_6);
          _objc_release(puVar5);
          func_0x000107c5e2ac(puVar9);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar9;
          func_0x00010bdc0fe0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar9);
          func_0x000107c59a18(param_6);
          _objc_release(puVar8);
          func_0x000107c55f94(dVar11,param_6);
        }
        else {
          _objc_retain(param_6);
        }
        _objc_retain();
        func_0x000107c562f4(puVar2);
        _objc_release(param_6);
        _objc_release(param_6);
        _objc_release(puVar3);
        _objc_release(puVar2);
        _swift_bridgeObjectRelease(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(puVar6);
        return;
      }
    }
    _objc_release(puVar2);
    puVar2 = puVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 103ed6218; end: 103ed62ab;  */

void FUN_103ed6218(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  
  uVar1 = param_8;
  _objc_retain(param_8);
  _objc_retain(param_6);
  FUN_103ed5da4(param_1,param_2,param_3,param_4,param_5,param_8);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 103ed62ac; end: 103ed62e7;  */

void FUN_103ed62ac(long param_1)

{
  long lVar1;
  
  _objc_retain();
  lVar1 = param_1;
  FUN_103ed5364();
  if (lVar1 != 0) {
    func_0x000107c4ff30();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103ed62e8; end: 103ed64a3;  */

ulong FUN_103ed62e8(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103ed63cc);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103ed63d0);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    _swift_unknownObjectRetain(param_1);
    uVar3 = *param_3;
    _objc_opt_self(uVar3);
    uVar4 = param_1;
    _swift_dynamicCastObjCClass(param_1,uVar3);
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
    uVar3 = *param_3;
    _objc_opt_self(uVar3);
    uVar4 = param_1;
    _swift_dynamicCastObjCClass(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  __sSS6appendyySSF(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_103ed6508(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103ed64a4);
  (*pcVar2)();
}



/* Entry: 103ed64a4; end: 103ed64b7;  */

undefined1  [16] FUN_103ed64a4(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 8) {
    uVar1 = param_1;
  }
  auVar2[8] = 7 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 103ed64b8; end: 103ed64f7;  */

void FUN_103ed64b8(void)

{
  undefined *puVar1;
  
  if (puRam000000011302c298 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dca7310;
  _swift_getWitnessTable(&UNK_10dca7310,&UNK_11071dc58);
  puRam000000011302c298 = puVar1;
  return;
}



/* Entry: 103ed64f8; end: 103ed6507;  */

undefined1  [16] FUN_103ed64f8(void)

{
  return ZEXT816(0x11071dc58);
}



/* Entry: 103ed6508; end: 103ed6547;  */

void FUN_103ed6508(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 103ed6548; end: 103ed6577;  */

void FUN_103ed6548(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103ed6578; end: 103ed6587; -[_TtC46SponsoredLensInfoActionSheetNavigationServices64SCSnapEditorScopedSponsoredLensInfoActionSheetNavigationServices navigator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ed6578(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302c338));
  return;
}



/* Entry: 103ed6588; end: 103ed661f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ed6588(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11302c338) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103ed6620; end: 103ed667f; -[_TtC46SponsoredLensInfoActionSheetNavigationServices64SCSnapEditorScopedSponsoredLensInfoActionSheetNavigationServices init] */

void FUN_103ed6620(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SponsoredLensInfoActionSheetNavigationServices.SCSnapEditorScopedSponsoredLensInfoActionSheetNavigationServices"
             ,0x6f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ed664c);
  (*pcVar1)();
}



/* Entry: 103ed6680; end: 103ed668f; -[_TtC46SponsoredLensInfoActionSheetNavigationServices64SCSnapEditorScopedSponsoredLensInfoActionSheetNavigationServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ed6680(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11302c338));
  return;
}



/* Entry: 103ed6690; end: 103ed66af;  */

void FUN_103ed6690(void)

{
  _objc_opt_self(&PTR_PTR_112960e00);
  return;
}



/* Entry: 103ed66b0; end: 103ed66bf; -[_TtC46SponsoredLensInfoActionSheetNavigationServices53SponsoredLensInfoActionSheetPreviewNavigationServices navigator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ed66b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302c368));
  return;
}



/* Entry: 103ed66c0; end: 103ed6757;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ed66c0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11302c368) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103ed6758; end: 103ed67b7; -[_TtC46SponsoredLensInfoActionSheetNavigationServices53SponsoredLensInfoActionSheetPreviewNavigationServices init] */

void FUN_103ed6758(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SponsoredLensInfoActionSheetNavigationServices.SponsoredLensInfoActionSheetPreviewNavigationServices"
             ,100,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ed6784);
  (*pcVar1)();
}



/* Entry: 103ed67b8; end: 103ed67c7; -[_TtC46SponsoredLensInfoActionSheetNavigationServices53SponsoredLensInfoActionSheetPreviewNavigationServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ed67b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11302c368));
  return;
}



/* Entry: 103ed67c8; end: 103ed67e7;  */

void FUN_103ed67c8(void)

{
  _objc_opt_self(&PTR_PTR_112960ec0);
  return;
}



/* Entry: 103ed67e8; end: 103ed67f7; -[_TtC34SponsoredLensCTAPresentingServices52SCSnapEditorScopedSponsoredLensCTAPresentingServices sponsoredLensCTAPresentingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ed67e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302c398));
  return;
}



/* Entry: 103ed67f8; end: 103ed688f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ed67f8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11302c398) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103ed6890; end: 103ed68e7; -[_TtC34SponsoredLensCTAPresentingServices52SCSnapEditorScopedSponsoredLensCTAPresentingServices initWithSponsoredLensCTAPresentingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ed6890(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11302c398) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 103ed68e8; end: 103ed6947; -[_TtC34SponsoredLensCTAPresentingServices52SCSnapEditorScopedSponsoredLensCTAPresentingServices init] */

void FUN_103ed68e8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SponsoredLensCTAPresentingServices.SCSnapEditorScopedSponsoredLensCTAPresentingServices"
             ,0x57,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ed6914);
  (*pcVar1)();
}



/* Entry: 103ed6948; end: 103ed6957; -[_TtC34SponsoredLensCTAPresentingServices52SCSnapEditorScopedSponsoredLensCTAPresentingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ed6948(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11302c398));
  return;
}



/* Entry: 103ed6958; end: 103ed6977;  */

void FUN_103ed6958(void)

{
  _objc_opt_self(&PTR_PTR_112960f80);
  return;
}



/* Entry: 103ed6978; end: 103ed6997; -[_TtC34SponsoredLensCTAPresentingServices42SponsoredLensCTACarouselPresentingServices ctaViewControllerProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ed6978(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11302c3c8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103ed6998; end: 103ed69e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ed6998(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11302c3c8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103ed69e4; end: 103ed6a43; -[_TtC34SponsoredLensCTAPresentingServices42SponsoredLensCTACarouselPresentingServices init] */

void FUN_103ed69e4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SponsoredLensCTAPresentingServices.SponsoredLensCTACarouselPresentingServices",0x4d,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ed6a10);
  (*pcVar1)();
}



/* Entry: 103ed6a44; end: 103ed6a53; -[_TtC34SponsoredLensCTAPresentingServices42SponsoredLensCTACarouselPresentingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ed6a44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_11302c3c8));
  return;
}



/* Entry: 103ed6a54; end: 103ed6a73;  */

void FUN_103ed6a54(void)

{
  _objc_opt_self(&PTR_PTR_112961040);
  return;
}



/* Entry: 103ed6a74; end: 103ed6a83; -[_TtC34SponsoredLensCTAPresentingServices34SponsoredLensCTAPresentingServices ctaViewProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ed6a74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302c3f8));
  return;
}



/* Entry: 103ed6a84; end: 103ed6b1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ed6a84(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11302c3f8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103ed6b1c; end: 103ed6b7b; -[_TtC34SponsoredLensCTAPresentingServices34SponsoredLensCTAPresentingServices init] */

void FUN_103ed6b1c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SponsoredLensCTAPresentingServices.SponsoredLensCTAPresentingServices",0x45,"init()",6
             ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ed6b48);
  (*pcVar1)();
}



/* Entry: 103ed6b7c; end: 103ed6b8b; -[_TtC34SponsoredLensCTAPresentingServices34SponsoredLensCTAPresentingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ed6b7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11302c3f8));
  return;
}



/* Entry: 103ed6b8c; end: 103ed6bab;  */

void FUN_103ed6b8c(void)

{
  _objc_opt_self(&PTR_PTR_112961100);
  return;
}



/* Entry: 103ed6bac; end: 103ed6bb3;  */

undefined8 FUN_103ed6bac(void)

{
  return 1;
}



/* Entry: 103ed6bb4; end: 103ed6c53;  */

void FUN_103ed6bb4(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103ed6c54; end: 103ed6c57;  */

void FUN_103ed6c54(void)

{
  undefined *puVar1;
  
  if (puRam000000011302c428 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dca7580;
  _swift_getWitnessTable(&UNK_10dca7580,&UNK_11071de20);
  puRam000000011302c428 = puVar1;
  return;
}



/* Entry: 103ed6c58; end: 103ed6c97;  */

void FUN_103ed6c58(void)

{
  undefined *puVar1;
  
  if (puRam000000011302c428 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dca7580;
  _swift_getWitnessTable(&UNK_10dca7580,&UNK_11071de20);
  puRam000000011302c428 = puVar1;
  return;
}



/* Entry: 103ed6c98; end: 103ed6d93;  */

void FUN_103ed6c98(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 103ed6d94; end: 103ed6da3; -[SCLensPlusPreviewServices lensPlusPreviewCTAProviderObjc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ed6d94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302c438));
  return;
}



/* Entry: 103ed6da4; end: 103ed6eab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103ed6da4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11302c430) = param_1;
  uVar1 = param_1;
  _swift_retain();
  func_0x0001003a5b88();
  *(undefined8 *)(unaff_x20 + _DAT_11302c438) = uVar1;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  _swift_release(param_1);
  return puVar2;
}



/* Entry: 103ed6eac; end: 103ed6f0b; -[SCLensPlusPreviewServices init] */

void FUN_103ed6eac(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCLensPlusPreviewServices.SCLensPlusPreviewServices",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ed6ed8);
  (*pcVar1)();
}


