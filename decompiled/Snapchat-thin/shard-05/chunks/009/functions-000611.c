/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10434f680; end: 10434f927;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10434f680(ulong param_1)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  code *pcVar11;
  long unaff_x20;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar9 = &puStack_80;
  ppuVar10 = &puStack_80;
  uVar2 = (uint)param_1 >> 6 & 3;
  if (uVar2 == 0) {
    uVar4 = param_1;
    func_0x00010434eacc();
    if ((param_1 & 1) == 0) {
      func_0x0001000d224c(&puStack_80);
      puVar5 = puStack_80;
      _swift_getObjectType(puStack_80);
      bVar1 = *(byte *)(unaff_x20 + _DAT_113070738);
      pcVar11 = *(code **)(lStack_78 + 0x20);
      puVar8 = puStack_80;
    }
    else {
      func_0x0001000d224c(&puStack_80);
      puVar5 = puStack_80;
      _swift_getObjectType(puStack_80);
      bVar1 = *(byte *)(unaff_x20 + _DAT_113070738);
      pcVar11 = *(code **)(lStack_78 + 0x18);
      puVar8 = puStack_80;
    }
    uVar3 = (ulong)bVar1;
    (*pcVar11)(uVar3,puVar5,lStack_78);
    _swift_unknownObjectRelease(puVar8);
    func_0x00010c1a9f00(uVar4);
    _objc_release(uVar4);
  }
  else if (uVar2 == 1) {
    uVar4 = param_1;
    func_0x00010434eacc();
    func_0x0001000d224c(&puStack_80);
    puVar5 = puStack_80;
    _swift_getObjectType(puStack_80);
    uVar3 = 4;
    (**(code **)(lStack_78 + 8))(4,puVar5,lStack_78);
    _swift_unknownObjectRelease(puStack_80);
    func_0x00010c1a9f00(uVar4);
    _objc_release(uVar4);
  }
  else {
    uVar3 = param_1;
    func_0x00010434eacc();
    func_0x00010c1a9f00();
  }
  _objc_release(uVar3);
  func_0x00010434eacc();
  func_0x00010c1677c0(0);
  _objc_release(uVar3);
  puVar6 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_self(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar5 = &UNK_11075e290;
  puVar7 = puVar5;
  _swift_allocObject(&UNK_11075e290,0x18,7);
  _swift_unknownObjectWeakInit(puVar7 + 0x10);
  puVar8 = &UNK_11075e2b8;
  _swift_allocObject(&UNK_11075e2b8,0x19,7);
  *(undefined **)(puVar8 + 0x10) = puVar7;
  puVar8[0x18] = (char)param_1;
  puVar7 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_60 = FUN_10434fe68;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  lStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_11075e2d0;
  puStack_58 = puVar8;
  __Block_copy(&puStack_80);
  _swift_release(puStack_58);
  _swift_allocObject(&UNK_11075e290,0x18,7);
  _swift_unknownObjectWeakInit(puVar5 + 0x10);
  pcStack_60 = (code *)0x10434fe90;
  puStack_80 = puVar7;
  lStack_78 = 0x42000000;
  puStack_70 = &UNK_100288f10;
  puStack_68 = &UNK_11075e2f8;
  puStack_58 = puVar5;
  __Block_copy(&puStack_80);
  _swift_release(puStack_58);
  func_0x00010bf03440(0x3fd0000000000000,0,puVar6);
  __Block_release(ppuVar10);
  __Block_release(ppuVar9);
  return;
}



/* Entry: 10434f928; end: 10434f9bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10434f928(void)

{
  undefined *puVar1;
  code *pcVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  if (-1 < *(char *)(unaff_x20 + _DAT_113070730)) {
    puVar1 = PTR_PTR_1126affa8;
    _objc_opt_self();
    func_0x00010c22bc20();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10434f9bc);
      (*pcVar2)();
    }
    func_0x00010c0f8760();
    _objc_release(puVar1);
    pcVar2 = *(code **)(unaff_x20 + _DAT_113070718);
    if (pcVar2 != (code *)0x0) {
      uVar3 = ((undefined8 *)(unaff_x20 + _DAT_113070718))[1];
      _swift_retain(uVar3);
      (*pcVar2)();
      if (pcVar2 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_release_11034f4c0)(uVar3);
        return;
      }
      return;
    }
  }
  return;
}



/* Entry: 10434f9bc; end: 10434fa83; -[_TtC15GamesUIServices22ActionBarCaptureButton handleTap] */

void FUN_10434f9bc(undefined8 param_1)

{
  _objc_retain();
  FUN_10434f928();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10434fa84; end: 10434fad3; -[_TtC15GamesUIServices22ActionBarCaptureButton handleLongPress:] */

void FUN_10434fa84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  func_0x00010434f9e4(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10434fad4; end: 10434fb8b;  */

void FUN_10434fad4(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010434eacc();
    func_0x00010c1677c0(0x3ff0000000000000);
    _objc_release(lVar1);
    func_0x00010434ea34();
    func_0x00010c1677c0(0);
    _objc_release(lVar1);
    func_0x00010434e99c();
    uVar2 = 0x3ff0000000000000;
    if ((param_2 & 0xc0) != 0) {
      uVar2 = 0;
    }
    func_0x00010c1677c0(uVar2);
    _objc_release(lVar1);
    _objc_release(param_1);
  }
  return;
}



/* Entry: 10434fb8c; end: 10434fc4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10434fb8c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    lVar1 = param_2;
    func_0x00010434ea34();
    lVar2 = lVar1;
    func_0x00010434eacc();
    lVar3 = lVar2;
    func_0x00010bfe6ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    func_0x00010c1a9f00(lVar1);
    _objc_release(lVar1);
    _objc_release(lVar3);
    func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_2 + _DAT_113070748));
    func_0x00010c1677c0(0,*(undefined8 *)(param_2 + _DAT_113070750));
    _objc_release(param_2);
  }
  return;
}



/* Entry: 10434fc50; end: 10434fcaf; -[_TtC15GamesUIServices22ActionBarCaptureButton initWithFrame:] */

void FUN_10434fc50(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("GamesUIServices.ActionBarCaptureButton",0x26,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10434fc7c);
  (*pcVar1)();
}



/* Entry: 10434fcb0; end: 10434fd2f; -[_TtC15GamesUIServices22ActionBarCaptureButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10434fcb0(long param_1)

{
  func_0x00010058d43c(*(undefined8 *)(param_1 + _DAT_113070718),
                      ((undefined8 *)(param_1 + _DAT_113070718))[1]);
  func_0x00010058d43c(*(undefined8 *)(param_1 + _DAT_113070720),
                      ((undefined8 *)(param_1 + _DAT_113070720))[1]);
  _swift_release(*(undefined8 *)(param_1 + _DAT_113070728));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113070740));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113070748));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113070750));
  return;
}



/* Entry: 10434fd30; end: 10434fd4f;  */

void FUN_10434fd30(void)

{
  _objc_opt_self(&PTR_PTR_1129a01d0);
  return;
}



/* Entry: 10434fd50; end: 10434fd57; -[_TtC15GamesUIServices22ActionBarCaptureButton gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

undefined8 FUN_10434fd50(void)

{
  return 1;
}



/* Entry: 10434fd58; end: 10434fd9b;  */

void FUN_10434fd58(void)

{
  long unaff_x20;
  
  _objc_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10434fd9c; end: 10434fdb3;  */

void FUN_10434fd9c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10434fdb4; end: 10434fe67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10434fdb4(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113070718);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113070720);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(unaff_x20 + _DAT_113070730) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_113070738) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113070740) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113070748) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113070750) = 0;
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd00000000000001d,0x800000010f0f28b0,
             "GamesUIServices/ActionBarCaptureButton.swift",0x2c,2,0x3b,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10434fe68);
  (*pcVar2)();
}



/* Entry: 10434fe68; end: 10434fe9f;  */

void FUN_10434fe68(void)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_58 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  bVar1 = *(byte *)(unaff_x20 + 0x18);
  _swift_beginAccess(lVar3 + 0x10,auStack_58,0,0);
  lVar3 = lVar3 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar3 != 0) {
    lVar2 = lVar3;
    func_0x00010434eacc();
    func_0x00010c1677c0(0x3ff0000000000000);
    _objc_release(lVar2);
    func_0x00010434ea34();
    func_0x00010c1677c0(0);
    _objc_release(lVar2);
    func_0x00010434e99c();
    uVar4 = 0x3ff0000000000000;
    if ((bVar1 & 0xc0) != 0) {
      uVar4 = 0;
    }
    func_0x00010c1677c0(uVar4);
    _objc_release(lVar2);
    _objc_release(lVar3);
  }
  return;
}



/* Entry: 10434fea0; end: 10434ffd7;  */

void FUN_10434fea0(undefined8 param_1,byte param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar5 = 0xe900000000000073;
  uVar6 = 0x736e654c4941796d;
  uVar2 = 0xed00006572616853;
  if (param_2 != 6) {
    uVar6 = 0xd000000000000011;
    uVar2 = 0x800000010f0c6e30;
  }
  uVar1 = 0xeb00000000647261;
  uVar3 = 0x6f6272656461656c;
  if (param_2 != 4) {
    uVar1 = 0xec000000656c6767;
    uVar3 = 0x6f546172656d6163;
  }
  if (param_2 < 6) {
    uVar2 = uVar1;
    uVar6 = uVar3;
  }
  uVar1 = 0x75706e4974616863;
  if (param_2 != 2) {
    uVar1 = 0x7265726f6c707865;
  }
  uVar3 = 0xe800000000000000;
  if (param_2 == 2) {
    uVar3 = 0xe900000000000074;
  }
  uVar4 = 0x657469726f766166;
  if (param_2 != 0) {
    uVar5 = 0xe500000000000000;
    uVar4 = 0x6572616873;
  }
  if (param_2 < 2) {
    uVar3 = uVar5;
    uVar1 = uVar4;
  }
  if (param_2 < 4) {
    uVar2 = uVar3;
    uVar6 = uVar1;
  }
  __sSS4hash4intoys6HasherVz_tF(param_1,uVar6,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 10434ffd8; end: 10435023b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10434ffd8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_113070820;
    _swift_beginAccess(lVar2,auStack_60,0,0);
    lVar1 = lVar2;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar1 == 0) {
      _objc_release(param_1);
    }
    else {
      lVar2 = *(long *)(lVar2 + 8);
      _objc_release(param_1);
      _swift_getObjectType(lVar1);
      (**(code **)(lVar2 + 8))();
      _swift_unknownObjectRelease(lVar1);
    }
  }
  return;
}



/* Entry: 10435023c; end: 1043503c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10435023c(undefined8 param_1,undefined **param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  
  lVar1 = 0;
  FUN_104353584();
  lVar2 = 1;
  FUN_104353584();
  lVar6 = lVar2;
  func_0x000104353b1c();
  if (lVar6 == 0) {
    lVar6 = *(long *)(unaff_x20 + _DAT_113070848);
    _swift_retain(lVar6);
    param_2 = &PTR_DAT_11075e258;
  }
  FUN_10435ebdc(0);
  _objc_allocWithZone();
  _swift_unknownObjectRetain(lVar6);
  FUN_10435d420(lVar1,lVar6,param_2,lVar2);
  func_0x00010c219b60();
  if (*(char *)(lVar1 + _DAT_113070a58) == '\x01') {
    *(undefined1 *)(lVar1 + _DAT_113070a58) = 0;
    func_0x00010c1677c0(0,lVar1);
  }
  func_0x00010befbb60(param_1);
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  _objc_opt_self(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  lVar2 = lVar1;
  func_0x000104354450(lVar1);
  uVar4 = 0;
  FUN_10435aad8(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  lVar5 = lVar2;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar2,uVar4);
  _swift_bridgeObjectRelease(lVar2);
  func_0x00010beef8c0(puVar3);
  _objc_release(lVar5);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_113070840);
  *(long *)(unaff_x20 + _DAT_113070840) = lVar1;
  _objc_retain(lVar1);
  _objc_release(uVar4);
  func_0x00010c08cdc0(param_1);
  _swift_unknownObjectRelease(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1043503c4; end: 10435057f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043503c4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  code *pcVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  undefined1 auStack_78 [24];
  
  lVar8 = unaff_x20;
  _swift_getObjectType();
  lVar3 = _DAT_113070840;
  lVar4 = *(long *)(unaff_x20 + _DAT_113070840);
  if (lVar4 == 0) {
    func_0x0001007d6c6c(2,0xd00000000000002c,0x800000010f1f76a0,lVar8,&PTR_DAT_11075e3f0);
  }
  else {
    _objc_retain();
    func_0x0001007d6c6c(1,0xd000000000000014,0x800000010f1f76d0,lVar8,&PTR_DAT_11075e3f0);
    FUN_104350580();
    if (*(char *)(unaff_x20 + _DAT_1130708b8) == '\x01') {
      FUN_1043506c0(0,0,0,1,0);
    }
    lVar8 = _DAT_113070860;
    _swift_beginAccess(unaff_x20 + _DAT_113070860,auStack_78,0,0);
    lVar8 = *(long *)(unaff_x20 + lVar8);
    uVar9 = *(ulong *)(lVar8 + 0x10);
    _swift_bridgeObjectRetain(lVar8);
    if (uVar9 != 0) {
      uVar10 = 0;
      plVar11 = (long *)(lVar8 + 0x28);
      do {
        if (*(ulong *)(lVar8 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x104350580);
          (*pcVar7)();
        }
        uVar10 = uVar10 + 1;
        lVar1 = plVar11[-1];
        lVar2 = *plVar11;
        lVar5 = lVar1;
        _swift_getObjectType(lVar1);
        pcVar7 = *(code **)(lVar2 + 0x38);
        _swift_unknownObjectRetain(lVar1);
        (*pcVar7)(lVar5,lVar2);
        _swift_unknownObjectRelease(lVar1);
        plVar11 = plVar11 + 2;
      } while (uVar9 != uVar10);
    }
    _swift_bridgeObjectRelease(lVar8);
    func_0x00010435ffb4(0,0);
    func_0x00010c12c960(lVar4);
    _objc_release(lVar4);
    uVar6 = *(undefined8 *)(unaff_x20 + lVar3);
    *(undefined8 *)(unaff_x20 + lVar3) = 0;
    _objc_release(uVar6);
  }
  return;
}



/* Entry: 104350580; end: 1043506bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104350580(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  
  lVar3 = _DAT_113070890;
  lVar4 = *(long *)(unaff_x20 + _DAT_113070890);
  if (lVar4 == 0) {
    *(undefined1 *)(unaff_x20 + _DAT_113070888) = 0;
    return;
  }
  lVar1 = unaff_x20;
  _swift_getObjectType();
  _objc_retain(lVar4);
  func_0x0001007d6c6c(1,0xd000000000000023,0x800000010f1f7600,lVar1,&PTR_DAT_11075e3f0);
  func_0x00010c2559c0(lVar4);
  func_0x00010bfaf6c0(lVar4);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar3);
  *(undefined8 *)(unaff_x20 + lVar3) = 0;
  _objc_release(uVar2);
  *(undefined1 *)(unaff_x20 + _DAT_113070888) = 0;
  lVar3 = *(long *)(unaff_x20 + _DAT_113070840);
  if (lVar3 != 0) {
    _objc_retain();
    lVar1 = lVar3;
    FUN_10435d360();
    func_0x00010c1677c0(0x3ff0000000000000);
    _objc_release(lVar1);
    func_0x00010435d36c();
    func_0x00010c1677c0(0x3ff0000000000000);
    _objc_release(lVar1);
    _objc_release(lVar4);
    *(undefined1 *)(lVar3 + _DAT_113070a60) = 1;
    lVar4 = lVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 1043506c0; end: 104350da7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043506c0(undefined8 param_1,byte param_2,undefined8 param_3,undefined8 param_4,
                  char param_5,uint param_6)

{
  byte bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long unaff_x20;
  undefined1 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [32];
  
  lVar2 = unaff_x20;
  _swift_getObjectType();
  lVar16 = _DAT_113070840;
  lVar14 = *(long *)(unaff_x20 + _DAT_113070840);
  if ((lVar14 == 0) || (lVar18 = *(long *)(unaff_x20 + _DAT_1130708a0), lVar18 == 0)) {
    func_0x0001007d6c6c(2,0xd00000000000002e,0x800000010f1f76f0,lVar2,&PTR_DAT_11075e3f0);
    return;
  }
  if (param_5 == '\x01') {
    _objc_retain(lVar14);
    _objc_retain(lVar18);
    FUN_104354f5c();
    param_4 = param_1;
    if ((param_2 & 1) != 0) goto LAB_1043507d8;
LAB_104350760:
    bVar1 = *(byte *)(unaff_x20 + _DAT_1130708b8);
    *(undefined1 *)(unaff_x20 + _DAT_1130708b8) = 0;
    FUN_10435327c();
    func_0x00010c08cdc0(lVar14);
    uVar15 = 0;
    param_4 = 0x404e000000000000;
  }
  else {
    _objc_retain(lVar14);
    _objc_retain(lVar18);
    if ((param_2 & 1) == 0) goto LAB_104350760;
LAB_1043507d8:
    FUN_10435cc7c(param_3);
    bVar1 = *(byte *)(unaff_x20 + _DAT_1130708b8);
    uVar15 = 1;
    *(undefined1 *)(unaff_x20 + _DAT_1130708b8) = 1;
  }
  lVar2 = unaff_x20 + _DAT_113070830;
  _swift_unknownObjectWeakLoadStrong();
  puVar5 = &UNK_11075e498;
  puVar3 = puVar5;
  _swift_allocObject(&UNK_11075e498,0x18,7);
  _swift_unknownObjectWeakInit(puVar3 + 0x10);
  puVar4 = &UNK_11075e650;
  _swift_allocObject(&UNK_11075e650,0x40,7);
  *(long *)(puVar4 + 0x10) = lVar18;
  *(undefined8 *)(puVar4 + 0x18) = param_4;
  puVar4[0x20] = uVar15;
  *(undefined **)(puVar4 + 0x28) = puVar3;
  *(long *)(puVar4 + 0x30) = lVar14;
  bVar1 = param_2 ^ bVar1;
  *(long *)(puVar4 + 0x38) = lVar2;
  _swift_allocObject(&UNK_11075e498,0x18,7);
  _swift_unknownObjectWeakInit(puVar5 + 0x10);
  puVar6 = &UNK_11075e678;
  _swift_allocObject(&UNK_11075e678,0x30,7);
  puVar6[0x10] = uVar15;
  *(long *)(puVar6 + 0x18) = lVar14;
  puVar6[0x20] = bVar1 & 1;
  *(undefined **)(puVar6 + 0x28) = puVar5;
  if ((param_6 & 1) == 0) {
    lVar17 = lVar14;
    _objc_retain();
    _objc_retain();
    lVar13 = lVar18;
    _objc_retain(lVar18);
    lVar9 = lVar2;
    _objc_retain();
    _swift_retain(puVar5);
    _swift_retain(puVar3);
    func_0x00010c181140(param_4,lVar13);
    if ((param_2 & 1) == 0) {
      _swift_beginAccess(puVar3 + 0x10,&puStack_f0,0,0);
      puVar11 = puVar3 + 0x10;
      _swift_unknownObjectWeakLoadStrong();
      if (puVar11 != (undefined *)0x0) {
        lVar13 = *(long *)(puVar11 + _DAT_1130708b0);
        if (lVar13 != 0) {
          _objc_retain(lVar13);
          _objc_release(puVar11);
          func_0x00010c162480(lVar13);
        }
        _objc_release();
      }
      puVar11 = puVar3 + 0x10;
      _swift_unknownObjectWeakLoadStrong();
      if (puVar11 != (undefined *)0x0) {
        puVar10 = *(undefined **)(puVar11 + _DAT_1130708a8);
        goto joined_r0x000104350b24;
      }
    }
    else {
      _swift_beginAccess(puVar3 + 0x10,&puStack_f0,0,0);
      puVar11 = puVar3 + 0x10;
      _swift_unknownObjectWeakLoadStrong();
      if (puVar11 != (undefined *)0x0) {
        lVar13 = *(long *)(puVar11 + _DAT_1130708a8);
        if (lVar13 != 0) {
          _objc_retain(lVar13);
          _objc_release(puVar11);
          func_0x00010c162480(lVar13);
        }
        _objc_release();
      }
      puVar11 = puVar3 + 0x10;
      _swift_unknownObjectWeakLoadStrong();
      if (puVar11 != (undefined *)0x0) {
        puVar10 = *(undefined **)(puVar11 + _DAT_1130708b0);
joined_r0x000104350b24:
        if (puVar10 != (undefined *)0x0) {
          _objc_retain();
          _objc_release(puVar11);
          func_0x00010c162480(puVar10);
          puVar11 = puVar10;
        }
        _objc_release(puVar11);
      }
    }
    FUN_10435cf60(param_2 & 1);
    if (*(long *)(lVar17 + _DAT_113070a80) != 0) {
      uVar12 = 0x3ff0000000000000;
      if ((param_2 & 1) == 0) {
        uVar12 = 0;
      }
      func_0x00010c1677c0(uVar12);
    }
    func_0x00010c08cdc0(lVar9);
    _swift_release(puVar3);
  }
  else {
    puVar10 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_self();
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d0 = 0x10435aaac;
    puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e8 = 0x42000000;
    puStack_e0 = &UNK_1000f6b44;
    puStack_d8 = &UNK_11075e690;
    ppuVar7 = &puStack_f0;
    puStack_c8 = puVar4;
    __Block_copy(ppuVar7);
    puVar11 = puStack_c8;
    _objc_retain(lVar14);
    _objc_retain();
    _objc_retain(lVar18);
    _objc_retain(lVar2);
    _swift_retain(puVar5);
    _swift_retain(puVar4);
    _swift_release(puVar11);
    uStack_d0 = 0x10435aac4;
    puStack_f0 = puVar3;
    uStack_e8 = 0x42000000;
    puStack_e0 = &UNK_100288f10;
    puStack_d8 = &UNK_11075e6b8;
    ppuVar8 = &puStack_f0;
    puStack_c8 = puVar6;
    __Block_copy(ppuVar8);
    puVar3 = puStack_c8;
    _swift_retain(puVar6);
    _swift_release(puVar3);
    func_0x00010bf03440(0x3fd3333333333333,0,puVar10);
    __Block_release(ppuVar8);
    __Block_release(ppuVar7);
  }
  if ((bVar1 & 1) != 0) {
    lVar17 = unaff_x20 + _DAT_113070828;
    _swift_beginAccess(lVar17,auStack_c0,0,0);
    lVar13 = lVar17;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar13 != 0) {
      lVar17 = *(long *)(lVar17 + 8);
      if (((param_2 & 1) == 0) || (lVar16 = *(long *)(unaff_x20 + lVar16), lVar16 == 0)) {
        lVar16 = 0;
      }
      else {
        func_0x00010c274200();
        _objc_retainAutoreleasedReturnValue();
      }
      lVar9 = lVar13;
      _swift_getObjectType(lVar13);
      (**(code **)(lVar17 + 8))(param_2 & 1,lVar16,param_6 & 1,lVar9,lVar17);
      _swift_unknownObjectRelease(lVar13);
      _objc_release(lVar16);
    }
  }
  lVar16 = _DAT_113070a80;
  if ((param_6 & 1) != 0) {
    _objc_release(lVar14);
    _swift_release(puVar5);
    _swift_release(puVar6);
    _swift_release(puVar4);
    _objc_release(lVar2);
    lVar14 = lVar18;
    goto LAB_104350d80;
  }
  if ((param_2 & 1) == 0) {
    uVar12 = 0;
    if (*(long *)(lVar14 + _DAT_113070a80) != 0) {
      func_0x00010c12c960();
      uVar12 = *(undefined8 *)(lVar14 + lVar16);
    }
    *(undefined8 *)(lVar14 + lVar16) = 0;
    _objc_release(uVar12);
  }
  if ((bVar1 & 1) == 0) {
LAB_104350d34:
    _swift_release(puVar5);
    _objc_release(lVar2);
  }
  else {
    _swift_beginAccess(puVar5 + 0x10,auStack_90,0,0);
    puVar3 = puVar5 + 0x10;
    _swift_unknownObjectWeakLoadStrong();
    if (puVar3 == (undefined *)0x0) goto LAB_104350d34;
    puVar11 = puVar3 + _DAT_113070828;
    _swift_beginAccess(puVar11,auStack_a8,0,0);
    puVar10 = puVar11;
    _swift_unknownObjectWeakLoadStrong();
    if (puVar10 == (undefined *)0x0) {
      _swift_release(puVar5);
      _objc_release(puVar3);
    }
    else {
      lVar16 = *(long *)(puVar11 + 8);
      _objc_release(puVar3);
      puVar3 = puVar10;
      _swift_getObjectType(puVar10);
      (**(code **)(lVar16 + 0x10))(param_2 & 1,puVar3,lVar16);
      _swift_release(puVar5);
      _swift_unknownObjectRelease(puVar10);
    }
    _objc_release(lVar2);
  }
  _objc_release(lVar18);
  _swift_release(puVar4);
  _swift_release(puVar6);
LAB_104350d80:
  _objc_release(lVar14);
  return;
}



/* Entry: 104350da8; end: 104350faf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104350da8(byte param_1,ulong param_2)

{
  undefined8 uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  lVar6 = *(long *)(unaff_x20 + _DAT_113070840);
  if (lVar6 == 0) {
    _swift_getObjectType();
    puStack_70 = (undefined *)0x0;
    uStack_68 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x30);
    _swift_bridgeObjectRelease(uStack_68);
    puStack_70 = (undefined *)0xd00000000000002e;
    uStack_68 = 0x800000010f1f7670;
    bVar2 = (param_1 & 1) == 0;
    uVar7 = 0x65757274;
    if (bVar2) {
      uVar7 = 0x65736c6166;
    }
    uVar1 = 0xe400000000000000;
    if (bVar2) {
      uVar1 = 0xe500000000000000;
    }
    __sSS6appendyySSF(uVar7,uVar1);
    _swift_bridgeObjectRelease(uVar1);
    uVar7 = uStack_68;
    func_0x0001007d6c6c(2,puStack_70,uStack_68,unaff_x20,&PTR_DAT_11075e3f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar7);
    return;
  }
  if ((param_1 & 1) != *(byte *)(lVar6 + _DAT_113070a58)) {
    *(byte *)(lVar6 + _DAT_113070a58) = param_1 & 1;
    uVar7 = 0x3ff0000000000000;
    if ((param_1 & 1) == 0) {
      uVar7 = 0;
    }
    if ((param_2 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(uVar7,lVar6,PTR_s_setAlpha__112637810);
      return;
    }
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_self(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar4 = &UNK_11075e600;
    _swift_allocObject(&UNK_11075e600,0x20,7);
    *(long *)(puVar4 + 0x10) = lVar6;
    *(undefined8 *)(puVar4 + 0x18) = uVar7;
    uStack_50 = 0x10435aaa0;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1000f6b44;
    puStack_58 = &UNK_11075e618;
    puStack_48 = puVar4;
    __Block_copy(&puStack_70);
    puVar4 = puStack_48;
    _objc_retain(lVar6);
    _objc_retain();
    _swift_release(puVar4);
    func_0x00010bf03440(0x3fe0000000000000,0,puVar3);
    _objc_release(lVar6);
    __Block_release(ppuVar5);
  }
  return;
}



/* Entry: 104350fb0; end: 10435127f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104350fb0(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  undefined8 uVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long lVar9;
  long lVar10;
  long unaff_x20;
  long lVar11;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 uStack_61;
  
  lVar4 = unaff_x20;
  _swift_getObjectType();
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x2a);
  __sSS6appendyySSF(0xd000000000000017,0x800000010f13b780);
  uStack_61 = (undefined1)param_1;
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&uStack_61,&puStack_98,&UNK_11075d960,PTR___ss26DefaultStringInterpolationVN_11034ec00,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  __sSS6appendyySSF(0x426e6f6974636120,0xef3a776569567261);
  lVar11 = _DAT_113070840;
  bVar3 = *(long *)(unaff_x20 + _DAT_113070840) != 0;
  uVar5 = 0x6c696e;
  if (bVar3) {
    uVar5 = 0x737473697865;
  }
  uVar2 = 0xe300000000000000;
  if (bVar3) {
    uVar2 = 0xe600000000000000;
  }
  __sSS6appendyySSF(uVar5,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  uVar5 = uStack_90;
  func_0x0001007d6c6c(1,puStack_98,uStack_90,lVar4,&PTR_DAT_11075e3f0);
  _swift_bridgeObjectRelease(uVar5);
  uVar5 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_113070848) + 0x10);
  _objc_retain(uVar5);
  FUN_10434f4b4(param_1,param_2);
  _objc_release(uVar5);
  lVar4 = _DAT_113070a60;
  lVar11 = *(long *)(unaff_x20 + lVar11);
  if ((lVar11 != 0) &&
     ((((uint)param_1 & 0xc0) != 0x40) != (bool)*(char *)(lVar11 + _DAT_113070a60))) {
    uVar1 = (uint)param_1 & 0xc0;
    uVar5 = 0x3ff0000000000000;
    if (uVar1 == 0x40) {
      uVar5 = 0;
    }
    if ((param_2 & 1) == 0) {
      lVar9 = lVar11;
      _objc_retain(lVar11);
      lVar10 = lVar9;
      FUN_10435d360();
      func_0x00010c1677c0(uVar5);
      _objc_release(lVar10);
      func_0x00010435d36c();
      func_0x00010c1677c0(uVar5);
      _objc_release(lVar10);
      *(bool *)(lVar11 + lVar4) = uVar1 != 0x40;
      _objc_release(lVar9);
    }
    else {
      puVar6 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_opt_self(PTR__OBJC_CLASS___UIView_1126aec20);
      puVar7 = &UNK_11075e5b0;
      _swift_allocObject(&UNK_11075e5b0,0x20,7);
      *(long *)(puVar7 + 0x10) = lVar11;
      *(undefined8 *)(puVar7 + 0x18) = uVar5;
      pcStack_78 = FUN_10435aa94;
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0x42000000;
      puStack_88 = &UNK_1000f6b44;
      puStack_80 = &UNK_11075e5c8;
      ppuVar8 = &puStack_98;
      puStack_70 = puVar7;
      __Block_copy(ppuVar8);
      puVar7 = puStack_70;
      _objc_retain(lVar11);
      _objc_retain();
      _swift_release(puVar7);
      func_0x00010bf03440(0x3fe0000000000000,0,puVar6);
      _objc_release(lVar11);
      __Block_release(ppuVar8);
    }
  }
  return;
}



/* Entry: 104351280; end: 104351393;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104351280(uint param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  long lVar4;
  long unaff_x20;
  
  lVar4 = *(long *)(unaff_x20 + _DAT_113070840);
  if (lVar4 != 0) {
    _objc_retain();
    FUN_10435c8f4(param_1 & 1,param_2 & 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar4);
    return;
  }
  _swift_getObjectType();
  __ss11_StringGutsV4growyySiF(0x3e);
  __sSS6appendyySSF(0xd00000000000003c,0x800000010f1f7630);
  bVar3 = (param_1 & 1) == 0;
  uVar1 = 0x65757274;
  if (bVar3) {
    uVar1 = 0x65736c6166;
  }
  uVar2 = 0xe400000000000000;
  if (bVar3) {
    uVar2 = 0xe500000000000000;
  }
  __sSS6appendyySSF(uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  func_0x0001007d6c6c(2,0,0xe000000000000000,unaff_x20,&PTR_DAT_11075e3f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(0xe000000000000000);
  return;
}



/* Entry: 104351394; end: 104351c6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104351394(long param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  byte bVar6;
  undefined *puVar7;
  code *pcVar8;
  undefined1 uVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined **ppuVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  byte *pbVar25;
  undefined8 uVar26;
  long unaff_x20;
  long lVar27;
  long lVar28;
  ulong uVar29;
  long lVar30;
  ulong *puVar31;
  long lVar32;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [32];
  
  lVar11 = unaff_x20;
  _swift_getObjectType();
  if (*(char *)(unaff_x20 + _DAT_1130708b8) == '\x01') {
    plVar1 = (long *)(unaff_x20 + _DAT_1130708c0);
    lVar11 = *plVar1;
    lVar32 = plVar1[1];
    lVar27 = plVar1[2];
    lVar30 = plVar1[3];
    *plVar1 = param_1;
    plVar1[1] = param_2;
    plVar1[2] = param_3;
    plVar1[3] = param_4;
    _swift_unknownObjectRetain(param_2);
    _swift_bridgeObjectRetain(param_1);
    _objc_retain(param_4);
    if (lVar11 != 0) {
      _swift_bridgeObjectRelease(lVar11,lVar32,lVar27);
      _swift_unknownObjectRelease(lVar32);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar30);
      return;
    }
    return;
  }
  lVar27 = *(long *)(*(long *)(unaff_x20 + _DAT_113070848) + 0x10);
  if (param_4 == 0) {
    pbVar25 = (byte *)(lVar27 + _DAT_113070738);
    bVar6 = *pbVar25;
    _objc_retain(lVar27);
    if ((bVar6 & 1) == 0) goto LAB_10435150c;
    uVar10 = 0;
  }
  else {
    lVar32 = lVar27;
    _objc_retain();
    lVar30 = param_4;
    func_0x00010c07eda0();
    pbVar25 = (byte *)(lVar32 + _DAT_113070738);
    uVar10 = (uint)lVar30;
    if (uVar10 == *pbVar25) goto LAB_10435150c;
  }
  *pbVar25 = (byte)uVar10;
  uVar12 = (ulong)*(byte *)(lVar27 + _DAT_113070730);
  FUN_10434f300(uVar12);
  func_0x00010434eacc();
  uVar23 = uVar12;
  func_0x00010434ea34();
  uVar29 = uVar23;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar23);
  func_0x00010c1a9f00(uVar12);
  _objc_release(uVar12);
  _objc_release(uVar29);
LAB_10435150c:
  _objc_release(lVar27);
  lVar27 = _DAT_113070860;
  puVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_4 == 0) {
    func_0x0001007d6c6c(1,0xd000000000000031,0x800000010f1f74b0,lVar11,&PTR_DAT_11075e3f0);
    FUN_104350580();
    lVar11 = _DAT_113070860;
    _swift_beginAccess(unaff_x20 + _DAT_113070860,&puStack_c0,1,0);
    uVar26 = *(undefined8 *)(unaff_x20 + lVar11);
    *(undefined **)(unaff_x20 + lVar11) = puVar18;
    _swift_bridgeObjectRelease(uVar26);
    FUN_104351c6c();
    lVar11 = _DAT_113070870;
    _swift_beginAccess(unaff_x20 + _DAT_113070870,auStack_90,1,0);
    uVar26 = *(undefined8 *)(unaff_x20 + lVar11);
    *(undefined **)(unaff_x20 + lVar11) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
    _swift_bridgeObjectRelease(uVar26);
    FUN_104351d54();
    puVar18 = *(undefined **)(unaff_x20 + _DAT_113070840);
    if (puVar18 == (undefined *)0x0) {
      return;
    }
    _objc_retain();
    puVar19 = puVar18;
    FUN_10435d360();
    func_0x00010c1677c0(0);
    _objc_release(puVar19);
    func_0x00010435d36c();
    func_0x00010c1677c0(0);
    _objc_release(puVar19);
    puVar18[_DAT_113070a60] = 0;
  }
  else {
    _swift_beginAccess(unaff_x20 + _DAT_113070860,auStack_90,0,0);
    lVar30 = *(long *)(unaff_x20 + lVar27);
    lVar32 = *(long *)(lVar30 + 0x10);
    puVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar32 != 0) {
      puStack_c0 = PTR___swiftEmptyArrayStorage_11034f1c8;
      _swift_bridgeObjectRetain(lVar30);
      func_0x000104357c90(0,lVar32,0);
      lVar28 = lVar30 + 0x28;
      do {
        puVar18 = puStack_c0;
        uVar9 = (undefined1)*(undefined8 *)(lVar28 + -8);
        _swift_getObjectType();
        FUN_10434d2a8();
        uVar23 = *(ulong *)(puVar18 + 0x10);
        puStack_c0 = puVar18;
        if (*(ulong *)(puVar18 + 0x18) >> 1 <= uVar23) {
          func_0x000104357c90(1 < *(ulong *)(puVar18 + 0x18),uVar23 + 1,1);
        }
        puVar18 = puStack_c0;
        lVar28 = lVar28 + 0x10;
        *(ulong *)(puStack_c0 + 0x10) = uVar23 + 1;
        puStack_c0[uVar23 + 0x20] = uVar9;
        lVar32 = lVar32 + -1;
      } while (lVar32 != 0);
      _swift_bridgeObjectRelease(lVar30);
    }
    puVar19 = puVar18;
    func_0x0001033b1104();
    _swift_bridgeObjectRelease(puVar18);
    puVar18 = puVar19;
    FUN_104355430(puVar19,param_1);
    _swift_bridgeObjectRelease(puVar19);
    lVar32 = _DAT_113070888;
    if ((*(byte *)(unaff_x20 + _DAT_113070888) & 1) != 0) {
      func_0x0001007d6c6c(1,0xd000000000000027,0x800000010f1f7550,lVar11,&PTR_DAT_11075e3f0);
      FUN_104350580();
    }
    if (((ulong)puVar18 & 1) != 0) {
      func_0x0001007d6c6c(1,0xd000000000000023,0x800000010f1f7520,lVar11,&PTR_DAT_11075e3f0);
      lVar11 = _DAT_113070870;
      lVar32 = *(long *)(unaff_x20 + lVar27);
      uVar23 = *(ulong *)(lVar32 + 0x10);
      if (uVar23 != 0) {
        _swift_bridgeObjectRetain(lVar32);
        uVar29 = 0;
        puVar31 = (ulong *)(lVar32 + 0x28);
        do {
          if (*(ulong *)(lVar32 + 0x10) <= uVar29) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x104351c54);
            (*pcVar8)();
          }
          uVar12 = puVar31[-1];
          uVar4 = *puVar31;
          uVar13 = uVar12;
          _swift_getObjectType();
          _swift_unknownObjectRetain(uVar12);
          uVar14 = uVar13;
          FUN_10434d2a8(uVar13,uVar4);
          ppuVar21 = &puStack_c0;
          _swift_beginAccess(unaff_x20 + lVar11,ppuVar21,0x20,0);
          lVar30 = *(long *)(unaff_x20 + lVar11);
          if (*(long *)(lVar30 + 0x10) == 0) {
LAB_1043517fc:
            _swift_endAccess(&puStack_c0);
            uVar15 = uVar13;
            FUN_10434d2a8(uVar13,uVar4);
            uVar16 = uVar13;
            uVar22 = uVar4;
            (**(code **)(uVar4 + 0x18))();
            ppuVar21 = &puStack_c0;
            _swift_beginAccess(unaff_x20 + lVar11,ppuVar21,0x21,0);
            uVar17 = *(ulong *)(unaff_x20 + lVar11);
            _swift_isUniquelyReferenced_nonNull_native();
            uVar10 = (uint)uVar17;
            lVar30 = *(long *)(unaff_x20 + lVar11);
            *(undefined8 *)(unaff_x20 + lVar11) = 0x8000000000000000;
            uVar14 = uVar15;
            func_0x0001028c0d28();
            uVar24 = (ulong)~(uint)ppuVar21 & 1;
            if (SCARRY8(*(long *)(lVar30 + 0x10),uVar24)) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x104351c58);
              (*pcVar8)();
            }
            if (*(long *)(lVar30 + 0x18) < (long)(*(long *)(lVar30 + 0x10) + uVar24)) {
              func_0x000104356d14();
              uVar14 = uVar15;
              func_0x0001028c0d28();
              if (((uint)ppuVar21 & 1) != (uVar10 & 1)) {
                __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                          (&UNK_11075dde0);
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x104351c6c);
                (*pcVar8)();
              }
joined_r0x000104351930:
              if (((ulong)ppuVar21 & 1) == 0) goto LAB_1043518dc;
LAB_1043516e8:
              puVar3 = (ulong *)(*(long *)(lVar30 + 0x38) + uVar14 * 0x10);
              uVar14 = *puVar3;
              uVar15 = puVar3[1];
              *puVar3 = uVar16;
              puVar3[1] = uVar22;
              func_0x00010434d2d8(uVar14,uVar15);
            }
            else {
              if ((uVar17 & 1) == 0) {
                func_0x0001043561d8();
                goto joined_r0x000104351930;
              }
              if (((ulong)ppuVar21 & 1) != 0) goto LAB_1043516e8;
LAB_1043518dc:
              lVar28 = lVar30 + (uVar14 >> 6) * 8;
              *(ulong *)(lVar28 + 0x40) = *(ulong *)(lVar28 + 0x40) | 1L << (uVar14 & 0x3f);
              *(char *)(*(long *)(lVar30 + 0x30) + uVar14) = (char)uVar15;
              puVar3 = (ulong *)(*(long *)(lVar30 + 0x38) + uVar14 * 0x10);
              *puVar3 = uVar16;
              puVar3[1] = uVar22;
              if (SCARRY8(*(long *)(lVar30 + 0x10),1)) {
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x104351c5c);
                (*pcVar8)();
              }
              *(long *)(lVar30 + 0x10) = *(long *)(lVar30 + 0x10) + 1;
            }
            *(long *)(unaff_x20 + lVar11) = lVar30;
            _swift_endAccess(&puStack_c0);
          }
          else {
            _swift_bridgeObjectRetain(lVar30);
            func_0x0001028c0d28();
            if (((ulong)ppuVar21 & 1) == 0) {
              _swift_bridgeObjectRelease(lVar30);
              goto LAB_1043517fc;
            }
            puVar2 = (undefined8 *)(*(long *)(lVar30 + 0x38) + uVar14 * 0x10);
            uVar26 = *puVar2;
            uVar5 = puVar2[1];
            func_0x00010434c9dc(uVar26,uVar5);
            _swift_endAccess(&puStack_c0);
            _swift_bridgeObjectRelease(lVar30);
            func_0x00010434d2d8(uVar26,uVar5);
          }
          uVar29 = uVar29 + 1;
          (**(code **)(uVar4 + 0x28))(param_4,uVar13,uVar4);
          _swift_unknownObjectRelease(uVar12);
          puVar31 = puVar31 + 2;
        } while (uVar23 != uVar29);
        _swift_bridgeObjectRelease(lVar32);
      }
      FUN_104352d88();
      uVar26 = *(undefined8 *)(unaff_x20 + lVar27);
      _swift_bridgeObjectRetain(uVar26);
      FUN_10435c36c();
      _swift_bridgeObjectRelease(uVar26);
      FUN_104351d54();
      return;
    }
    func_0x0001007d6c6c(1,0xd000000000000029,0x800000010f1f74f0,lVar11,&PTR_DAT_11075e3f0);
    *(undefined1 *)(unaff_x20 + lVar32) = 1;
    puVar18 = PTR__OBJC_CLASS___UIViewPropertyAnimator_1126b0db0;
    _objc_allocWithZone();
    func_0x00010c00ea00(0x3fe0000000000000);
    puVar19 = &UNK_11075e498;
    puVar20 = puVar19;
    _swift_allocObject(&UNK_11075e498,0x18,7);
    _swift_unknownObjectWeakInit(puVar20 + 0x10,unaff_x20);
    puVar7 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_a0 = FUN_10435a288;
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0x42000000;
    puStack_b0 = &UNK_1000f6b44;
    puStack_a8 = &UNK_11075e4b0;
    ppuVar21 = &puStack_c0;
    puStack_98 = puVar20;
    __Block_copy(ppuVar21);
    _swift_release(puStack_98);
    func_0x00010bef6cc0(puVar18);
    __Block_release(ppuVar21);
    _swift_allocObject(&UNK_11075e498,0x18,7);
    _swift_unknownObjectWeakInit(puVar19 + 0x10,unaff_x20);
    puVar20 = &UNK_11075e4e8;
    _swift_allocObject(&UNK_11075e4e8,0x38,7);
    *(undefined **)(puVar20 + 0x10) = puVar19;
    *(long *)(puVar20 + 0x18) = param_1;
    *(long *)(puVar20 + 0x20) = param_2;
    *(long *)(puVar20 + 0x28) = param_3;
    *(long *)(puVar20 + 0x30) = param_4;
    pcStack_a0 = (code *)0x10435a2ac;
    puStack_c0 = puVar7;
    uStack_b8 = 0x42000000;
    puStack_b0 = &UNK_1023dda20;
    puStack_a8 = &UNK_11075e500;
    ppuVar21 = &puStack_c0;
    puStack_98 = puVar20;
    __Block_copy(ppuVar21);
    puVar19 = puStack_98;
    _swift_unknownObjectRetain(param_2);
    _swift_bridgeObjectRetain(param_1);
    _objc_retain(param_4);
    _swift_release(puVar19);
    func_0x00010bef78c0(puVar18);
    __Block_release(ppuVar21);
    uVar26 = *(undefined8 *)(unaff_x20 + _DAT_113070890);
    *(undefined **)(unaff_x20 + _DAT_113070890) = puVar18;
    _objc_retain(puVar18);
    _objc_release(uVar26);
    func_0x00010c24dc40(puVar18);
  }
  _objc_release(puVar18);
  return;
}



/* Entry: 104351c6c; end: 104351d53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104351c6c(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar5 = _DAT_113070868;
  _swift_beginAccess(unaff_x20 + _DAT_113070868,auStack_48,1,0);
  puVar1 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  uVar2 = *(undefined8 *)(unaff_x20 + lVar5);
  *(undefined **)(unaff_x20 + lVar5) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  _swift_bridgeObjectRelease(uVar2);
  uVar3 = 0;
  func_0x0001000c6560();
  uVar2 = uVar3;
  _swift_allocObject();
  func_0x0001000c6580();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_113070878);
  *(undefined8 *)(unaff_x20 + _DAT_113070878) = uVar2;
  _swift_release(uVar4);
  lVar5 = *(long *)(unaff_x20 + _DAT_113070880);
  _swift_allocObject(uVar3,0x20,7);
  func_0x0001000c6580();
  uVar2 = *(undefined8 *)(lVar5 + 0x10);
  *(undefined8 *)(lVar5 + 0x10) = uVar3;
  _swift_release(uVar2);
  _swift_beginAccess(lVar5 + 0x18,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lVar5 + 0x18);
  *(undefined **)(lVar5 + 0x18) = puVar1;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 104351d54; end: 104351ea3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104351d54(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + _DAT_113070840);
  if (lVar2 != 0) {
    _objc_retain();
    uVar3 = 0;
    FUN_104353584(0);
    lVar4 = 1;
    FUN_104353584();
    lVar5 = lVar4;
    FUN_10435d360();
    lVar1 = _DAT_113070a48;
    _swift_beginAccess(lVar2 + _DAT_113070a48,auStack_58,0x21,0);
    func_0x00010435f820(uVar3,lVar5,lVar2 + lVar1);
    _swift_endAccess(auStack_58);
    _objc_release();
    func_0x00010435d36c();
    lVar1 = _DAT_113070a50;
    _swift_beginAccess(lVar2 + _DAT_113070a50,auStack_58,0x21,0);
    func_0x00010435f820(lVar4,lVar5,lVar2 + lVar1);
    _swift_endAccess(auStack_58);
    _swift_bridgeObjectRelease(uVar3);
    _swift_bridgeObjectRelease(lVar4);
    _objc_release();
    func_0x000104353b1c();
    if (lVar5 == 0) {
      lVar5 = *(long *)(unaff_x20 + _DAT_113070848);
      _swift_retain(lVar5);
    }
    func_0x00010435ffb4(lVar5);
    _swift_unknownObjectRelease(lVar5);
    _objc_release(lVar2);
  }
  return;
}



/* Entry: 104351ea4; end: 104351f53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104351ea4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + _DAT_113070840);
    if (lVar1 != 0) {
      _objc_retain();
      _objc_release(param_1);
      FUN_10435d360();
      func_0x00010c1677c0(0);
      _objc_release(param_1);
      func_0x00010435d36c();
      func_0x00010c1677c0(0);
      _objc_release(param_1);
      *(undefined1 *)(lVar1 + _DAT_113070a60) = 0;
    }
    _objc_release();
  }
  return;
}



/* Entry: 104351f54; end: 10435215f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104351f54(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_78,0,0);
  puVar3 = (undefined *)(param_2 + 0x10);
  _swift_unknownObjectWeakLoadStrong();
  if (puVar3 != (undefined *)0x0) {
    puVar5 = puVar3;
    if (param_1 == 0) {
      FUN_104352160(param_3,param_4,param_5,param_6);
      lVar2 = _DAT_113070890;
      uVar4 = *(undefined8 *)(puVar3 + _DAT_113070890);
      *(undefined8 *)(puVar3 + _DAT_113070890) = 0;
      _objc_release(uVar4);
      puVar5 = PTR__OBJC_CLASS___UIViewPropertyAnimator_1126b0db0;
      _objc_allocWithZone();
      func_0x00010c00ea00(0x3fe0000000000000);
      puVar9 = &UNK_11075e498;
      puVar6 = puVar9;
      _swift_allocObject(&UNK_11075e498,0x18,7);
      _swift_unknownObjectWeakInit(puVar6 + 0x10,puVar3);
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x10435a300;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      puStack_98 = &UNK_1000f6b44;
      puStack_90 = &UNK_11075e550;
      ppuVar7 = &puStack_a8;
      puStack_80 = puVar6;
      __Block_copy(ppuVar7);
      puVar6 = puStack_80;
      puVar8 = puVar3;
      _objc_retain(puVar3);
      _swift_release(puVar6);
      func_0x00010bef6cc0(puVar5);
      __Block_release(ppuVar7);
      _swift_allocObject(&UNK_11075e498,0x18,7);
      _swift_unknownObjectWeakInit(puVar9 + 0x10,puVar8);
      _objc_release(puVar8);
      uStack_88 = 0x10435a308;
      puStack_a8 = puVar1;
      uStack_a0 = 0x42000000;
      puStack_98 = &UNK_1023dda20;
      puStack_90 = &UNK_11075e578;
      ppuVar7 = &puStack_a8;
      puStack_80 = puVar9;
      __Block_copy(ppuVar7);
      _swift_release(puStack_80);
      func_0x00010bef78c0(puVar5);
      __Block_release(ppuVar7);
      uVar4 = *(undefined8 *)(puVar3 + lVar2);
      *(undefined **)(puVar3 + lVar2) = puVar5;
      _objc_retain(puVar5);
      _objc_release(uVar4);
      func_0x00010c24dc40(puVar5);
      _objc_release(puVar8);
    }
    _objc_release(puVar5);
  }
  return;
}



/* Entry: 104352160; end: 104352c5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104352160(undefined *param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  long lVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  undefined **ppuVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  long unaff_x20;
  ulong *puVar25;
  long lVar26;
  long lVar27;
  ulong uVar28;
  long lVar29;
  long lVar30;
  ulong uVar31;
  undefined8 uVar32;
  ulong uStack_d0;
  undefined *apuStack_b8 [4];
  undefined *apuStack_98 [3];
  undefined1 auStack_80 [32];
  
  lVar29 = unaff_x20;
  _swift_getObjectType();
  lVar4 = _DAT_113070860;
  _swift_beginAccess(unaff_x20 + _DAT_113070860,auStack_80,0,0);
  lVar26 = *(long *)(unaff_x20 + lVar4);
  lVar30 = *(long *)(lVar26 + 0x10);
  puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar30 != 0) {
    apuStack_98[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
    _swift_bridgeObjectRetain(lVar26);
    func_0x000104357c90(0,lVar30,0);
    lVar27 = lVar26 + 0x28;
    do {
      puVar12 = apuStack_98[0];
      uVar7 = (undefined1)*(undefined8 *)(lVar27 + -8);
      _swift_getObjectType();
      FUN_10434d2a8();
      uVar22 = *(ulong *)(puVar12 + 0x10);
      apuStack_98[0] = puVar12;
      if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar22) {
        func_0x000104357c90(1 < *(ulong *)(puVar12 + 0x18),uVar22 + 1,1);
      }
      puVar12 = apuStack_98[0];
      lVar27 = lVar27 + 0x10;
      *(ulong *)(apuStack_98[0] + 0x10) = uVar22 + 1;
      apuStack_98[0][uVar22 + 0x20] = uVar7;
      lVar30 = lVar30 + -1;
    } while (lVar30 != 0);
    _swift_bridgeObjectRelease(lVar26);
  }
  puVar8 = puVar12;
  func_0x0001033b1104();
  _swift_bridgeObjectRelease(puVar12);
  lVar30 = *(long *)(unaff_x20 + lVar4);
  uVar22 = *(ulong *)(lVar30 + 0x10);
  if (uVar22 != 0) {
    _swift_bridgeObjectRetain(lVar30);
    uVar31 = 0;
    do {
      if (*(ulong *)(lVar30 + 0x10) <= uVar31) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x104352c28);
        (*pcVar5)();
      }
      puVar1 = (undefined8 *)(lVar30 + 0x20 + uVar31 * 0x10);
      uVar24 = *puVar1;
      lVar26 = puVar1[1];
      uVar23 = uVar24;
      _swift_getObjectType();
      _swift_unknownObjectRetain(uVar24);
      uVar11 = uVar23;
      FUN_10434d2a8(uVar23,lVar26);
      if (*(long *)(param_1 + 0x10) != 0) {
        uVar9 = *(ulong *)(param_1 + 0x28);
        func_0x0001028c0dc0(uVar9,uVar11);
        uVar20 = -1L << ((ulong)(byte)param_1[0x20] & 0x3f);
        uVar9 = uVar9 & (uVar20 ^ 0xffffffffffffffff);
        if ((*(ulong *)(param_1 + (uVar9 >> 6) * 8 + 0x38) >> (uVar9 & 0x3f) & 1) != 0) {
          do {
            if ((uint)*(byte *)(*(long *)(param_1 + 0x30) + uVar9) == ((uint)uVar11 & 0xff))
            goto LAB_1043522bc;
            uVar9 = uVar9 + 1 & ~uVar20;
          } while ((*(ulong *)(param_1 + (uVar9 >> 6) * 8 + 0x38) >> (uVar9 & 0x3f) & 1) != 0);
        }
      }
      (**(code **)(lVar26 + 0x30))(uVar23,lVar26);
LAB_1043522bc:
      uVar31 = uVar31 + 1;
      _swift_unknownObjectRelease(uVar24);
    } while (uVar31 != uVar22);
    _swift_bridgeObjectRelease(lVar30);
  }
  _swift_beginAccess(unaff_x20 + lVar4,apuStack_98,0x21,0);
  uVar22 = *(ulong *)(unaff_x20 + lVar4);
  puVar25 = (ulong *)(uVar22 + 0x10);
  uVar31 = *puVar25;
  if (uVar31 == 0) {
    uStack_d0 = 0;
    uVar31 = 0;
  }
  else {
    uStack_d0 = 0;
    do {
      puVar1 = (undefined8 *)(uVar22 + 0x20 + uStack_d0 * 0x10);
      uVar24 = *puVar1;
      uVar23 = puVar1[1];
      uVar11 = uVar24;
      _swift_getObjectType();
      _swift_unknownObjectRetain(uVar24);
      FUN_10434d2a8(uVar11,uVar23);
      if (*(long *)(param_1 + 0x10) == 0) {
LAB_104352468:
        _swift_unknownObjectRelease(uVar24);
        uVar31 = uStack_d0 + 1;
        uVar9 = *puVar25;
        if (uVar31 != uVar9) {
          do {
            if (uVar9 <= uVar31) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x104352c38);
              (*pcVar5)();
            }
            puVar1 = (undefined8 *)(uVar22 + 0x20 + uVar31 * 0x10);
            uVar24 = *puVar1;
            uVar23 = puVar1[1];
            uVar11 = uVar24;
            _swift_getObjectType();
            _swift_unknownObjectRetain(uVar24);
            FUN_10434d2a8(uVar11,uVar23);
            if (*(long *)(param_1 + 0x10) != 0) {
              uVar9 = *(ulong *)(param_1 + 0x28);
              func_0x0001028c0dc0(uVar9,uVar11);
              uVar20 = -1L << ((ulong)(byte)param_1[0x20] & 0x3f);
              uVar9 = uVar9 & (uVar20 ^ 0xffffffffffffffff);
              if ((*(ulong *)(param_1 + (uVar9 >> 6) * 8 + 0x38) >> (uVar9 & 0x3f) & 1) != 0) {
                do {
                  if ((uint)*(byte *)(*(long *)(param_1 + 0x30) + uVar9) == ((uint)uVar11 & 0xff)) {
                    _swift_unknownObjectRelease(uVar24);
                    if (uStack_d0 != uVar31) {
                      if ((long)uStack_d0 < 0) {
                    /* WARNING: Does not return */
                        pcVar5 = (code *)SoftwareBreakpoint(1,0x104352c44);
                        (*pcVar5)();
                      }
                      if (*puVar25 <= uStack_d0) {
                    /* WARNING: Does not return */
                        pcVar5 = (code *)SoftwareBreakpoint(1,0x104352c48);
                        (*pcVar5)();
                      }
                      if ((long)*puVar25 <= (long)uVar31) {
                    /* WARNING: Does not return */
                        pcVar5 = (code *)SoftwareBreakpoint(1,0x104352c4c);
                        (*pcVar5)();
                      }
                      puVar3 = (undefined8 *)(uVar22 + 0x20 + uStack_d0 * 0x10);
                      uVar23 = puVar3[1];
                      uVar24 = *puVar3;
                      uVar32 = puVar1[1];
                      uVar11 = *puVar1;
                      _swift_unknownObjectRetain(uVar24);
                      _swift_unknownObjectRetain(uVar11);
                      uVar9 = uVar22;
                      _swift_isUniquelyReferenced_nonNull_native();
                      *(ulong *)(unaff_x20 + lVar4) = uVar22;
                      if ((uVar9 & 1) == 0) {
                        FUN_10435a25c();
                        *(ulong *)(unaff_x20 + lVar4) = uVar22;
                      }
                      lVar30 = uVar22 + 0x20;
                      uVar10 = *(undefined8 *)(lVar30 + uStack_d0 * 0x10);
                      puVar1 = (undefined8 *)(lVar30 + uStack_d0 * 0x10);
                      puVar1[1] = uVar32;
                      *puVar1 = uVar11;
                      _swift_unknownObjectRelease(uVar10);
                      *(ulong *)(unaff_x20 + lVar4) = uVar22;
                      if (*(long *)(uVar22 + 0x10) <= (long)uVar31) {
                    /* WARNING: Does not return */
                        pcVar5 = (code *)SoftwareBreakpoint(1,0x104352c50);
                        (*pcVar5)();
                      }
                      uVar11 = *(undefined8 *)(lVar30 + uVar31 * 0x10);
                      puVar1 = (undefined8 *)(lVar30 + uVar31 * 0x10);
                      puVar1[1] = uVar23;
                      *puVar1 = uVar24;
                      _swift_unknownObjectRelease(uVar11);
                      *(ulong *)(unaff_x20 + lVar4) = uVar22;
                    }
                    bVar6 = SCARRY8(uStack_d0,1);
                    uStack_d0 = uStack_d0 + 1;
                    if (bVar6) {
                    /* WARNING: Does not return */
                      pcVar5 = (code *)SoftwareBreakpoint(1,0x104352c40);
                      (*pcVar5)();
                    }
                    goto LAB_1043524a4;
                  }
                  uVar9 = uVar9 + 1 & ~uVar20;
                } while ((*(ulong *)(param_1 + (uVar9 >> 6) * 8 + 0x38) >> (uVar9 & 0x3f) & 1) != 0)
                ;
              }
            }
            _swift_unknownObjectRelease(uVar24);
LAB_1043524a4:
            uVar31 = uVar31 + 1;
            puVar25 = (ulong *)(uVar22 + 0x10);
            uVar9 = *puVar25;
          } while (uVar31 != uVar9);
        }
        if ((long)uVar31 < (long)uStack_d0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x104352498);
          (*pcVar5)();
        }
        goto LAB_104352648;
      }
      uVar9 = *(ulong *)(param_1 + 0x28);
      func_0x0001028c0dc0(uVar9,uVar11);
      uVar20 = -1L << ((ulong)(byte)param_1[0x20] & 0x3f);
      uVar9 = uVar9 & (uVar20 ^ 0xffffffffffffffff);
      if ((*(ulong *)(param_1 + (uVar9 >> 6) * 8 + 0x38) >> (uVar9 & 0x3f) & 1) == 0)
      goto LAB_104352468;
      while ((uint)*(byte *)(*(long *)(param_1 + 0x30) + uVar9) != ((uint)uVar11 & 0xff)) {
        uVar9 = uVar9 + 1 & ~uVar20;
        if ((*(ulong *)(param_1 + (uVar9 >> 6) * 8 + 0x38) >> (uVar9 & 0x3f) & 1) == 0)
        goto LAB_104352468;
      }
      _swift_unknownObjectRelease(uVar24);
      uStack_d0 = uStack_d0 + 1;
    } while (uStack_d0 != uVar31);
    uStack_d0 = *puVar25;
    uVar31 = uStack_d0;
  }
LAB_104352648:
  func_0x00010435a3dc(lVar4,uStack_d0,uVar31);
  _swift_endAccess(apuStack_98);
  lVar30 = _DAT_113070870;
  _swift_beginAccess(unaff_x20 + _DAT_113070870,apuStack_98,1,0);
  uVar23 = *(undefined8 *)(unaff_x20 + lVar30);
  _swift_bridgeObjectRetain(param_1);
  uVar24 = uVar23;
  _swift_bridgeObjectRetain();
  FUN_10435a66c();
  _swift_bridgeObjectRelease(uVar23);
  _swift_bridgeObjectRelease(param_1);
  uVar23 = *(undefined8 *)(unaff_x20 + lVar30);
  *(undefined8 *)(unaff_x20 + lVar30) = uVar24;
  _swift_bridgeObjectRelease(uVar23);
  if (*(ulong *)(param_1 + 0x10) >> 3 < *(ulong *)(puVar8 + 0x10)) {
    _swift_bridgeObjectRetain(param_1);
    puVar12 = puVar8;
    FUN_104357fe4(puVar8,param_1);
    _swift_bridgeObjectRelease(puVar8);
  }
  else {
    apuStack_b8[0] = param_1;
    _swift_bridgeObjectRetain(param_1);
    FUN_104357ed8(puVar8);
    _swift_bridgeObjectRelease(puVar8);
    puVar12 = apuStack_b8[0];
  }
  if (*(long *)(puVar12 + 0x10) == 0) {
    _swift_bridgeObjectRelease(puVar12);
  }
  else if (param_2 == 0) {
    _swift_bridgeObjectRelease(puVar12);
    func_0x0001007d6c6c(3,0xd000000000000033,0x800000010f1f7580,lVar29,&PTR_DAT_11075e3f0);
  }
  else {
    uVar31 = 1L << ((ulong)(byte)puVar12[0x20] & 0x3f);
    uVar22 = 0xffffffffffffffff;
    if ((puVar12[0x20] & 0x3f) < 6) {
      uVar22 = ~(-1L << (uVar31 & 0x3f));
    }
    uVar22 = uVar22 & *(ulong *)(puVar12 + 0x38);
    _swift_unknownObjectRetain();
    lVar29 = 0;
    while( true ) {
      while (uVar22 != 0) {
        uVar9 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
        uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar22 = uVar22 - 1 & uVar22;
        uVar9 = (ulong)*(byte *)(*(long *)(puVar12 + 0x30) + LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20)
                                + lVar29 * 0x40);
        lVar26 = param_2;
        _swift_getObjectType();
        (**(code **)(param_3 + 8))();
        if (uVar9 != 0) {
          uVar20 = uVar9;
          _swift_getObjectType();
          uVar13 = uVar20;
          _swift_conformsToProtocol();
          if (uVar13 != 0) {
            (**(code **)(uVar13 + 8))(unaff_x20,&PTR_DAT_11075e3b0,uVar20,uVar13);
          }
          _swift_beginAccess(unaff_x20 + lVar4,apuStack_b8,0x21,0);
          uVar28 = *(ulong *)(unaff_x20 + lVar4);
          _swift_unknownObjectRetain(uVar9);
          uVar20 = uVar28;
          _swift_isUniquelyReferenced_nonNull_native();
          *(ulong *)(unaff_x20 + lVar4) = uVar28;
          uVar13 = uVar28;
          if ((uVar20 & 1) == 0) {
            uVar13 = 0;
            FUN_104357cac(0,*(long *)(uVar28 + 0x10) + 1,1,uVar28,
                          PTR__swift_bridgeObjectRelease_11034f258);
            *(ulong *)(unaff_x20 + lVar4) = uVar13;
          }
          uVar20 = *(ulong *)(uVar13 + 0x10);
          uVar28 = uVar13;
          if (*(ulong *)(uVar13 + 0x18) >> 1 <= uVar20) {
            uVar28 = (ulong)(1 < *(ulong *)(uVar13 + 0x18));
            FUN_104357cac(uVar28,uVar20 + 1,1,uVar13,PTR__swift_bridgeObjectRelease_11034f258);
          }
          *(ulong *)(uVar28 + 0x10) = uVar20 + 1;
          lVar27 = uVar28 + uVar20 * 0x10;
          *(ulong *)(lVar27 + 0x20) = uVar9;
          *(long *)(lVar27 + 0x28) = lVar26;
          *(ulong *)(unaff_x20 + lVar4) = uVar28;
          _swift_endAccess(apuStack_b8);
          _swift_unknownObjectRelease(uVar9);
        }
      }
      bVar6 = SCARRY8(lVar29,1);
      lVar29 = lVar29 + 1;
      if (bVar6) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x104352c34);
        (*pcVar5)();
      }
      if ((long)(uVar31 + 0x3f >> 6) <= lVar29) break;
      uVar22 = *(ulong *)((long)(puVar12 + 0x38) + lVar29 * 8);
    }
    _swift_release(puVar12);
    _swift_unknownObjectRelease(param_2);
  }
  lVar29 = *(long *)(unaff_x20 + lVar4);
  uVar22 = *(ulong *)(lVar29 + 0x10);
  if (uVar22 != 0) {
    _swift_bridgeObjectRetain(lVar29);
    uVar31 = 0;
    puVar25 = (ulong *)(lVar29 + 0x28);
    do {
      if (*(ulong *)(lVar29 + 0x10) <= uVar31) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x104352c2c);
        (*pcVar5)();
      }
      uVar9 = puVar25[-1];
      uVar20 = *puVar25;
      uVar13 = uVar9;
      _swift_getObjectType();
      _swift_unknownObjectRetain(uVar9);
      uVar28 = uVar13;
      FUN_10434d2a8(uVar13,uVar20);
      ppuVar18 = apuStack_b8;
      _swift_beginAccess(unaff_x20 + lVar30,ppuVar18,0x20,0);
      lVar26 = *(long *)(unaff_x20 + lVar30);
      if (*(long *)(lVar26 + 0x10) == 0) {
LAB_104352a88:
        _swift_endAccess(apuStack_b8);
        uVar14 = uVar13;
        FUN_10434d2a8(uVar13,uVar20);
        uVar15 = uVar13;
        uVar19 = uVar20;
        (**(code **)(uVar20 + 0x18))();
        ppuVar18 = apuStack_b8;
        _swift_beginAccess(unaff_x20 + lVar30,ppuVar18,0x21,0);
        uVar16 = *(ulong *)(unaff_x20 + lVar30);
        _swift_isUniquelyReferenced_nonNull_native();
        uVar17 = (uint)uVar16;
        lVar26 = *(long *)(unaff_x20 + lVar30);
        *(undefined8 *)(unaff_x20 + lVar30) = 0x8000000000000000;
        uVar28 = uVar14;
        func_0x0001028c0d28();
        uVar21 = (ulong)~(uint)ppuVar18 & 1;
        if (SCARRY8(*(long *)(lVar26 + 0x10),uVar21)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x104352c30);
          (*pcVar5)();
        }
        if (*(long *)(lVar26 + 0x18) < (long)(*(long *)(lVar26 + 0x10) + uVar21)) {
          func_0x000104356d14();
          uVar28 = uVar14;
          func_0x0001028c0d28();
          if (((uint)ppuVar18 & 1) != (uVar17 & 1)) {
            __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                      (&UNK_11075dde0);
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x104352c60);
            (*pcVar5)();
          }
joined_r0x000104352bbc:
          if (((ulong)ppuVar18 & 1) != 0) goto LAB_104352974;
LAB_104352b68:
          lVar27 = lVar26 + (uVar28 >> 6) * 8;
          *(ulong *)(lVar27 + 0x40) = *(ulong *)(lVar27 + 0x40) | 1L << (uVar28 & 0x3f);
          *(char *)(*(long *)(lVar26 + 0x30) + uVar28) = (char)uVar14;
          puVar2 = (ulong *)(*(long *)(lVar26 + 0x38) + uVar28 * 0x10);
          *puVar2 = uVar15;
          puVar2[1] = uVar19;
          if (SCARRY8(*(long *)(lVar26 + 0x10),1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x104352c3c);
            (*pcVar5)();
          }
          *(long *)(lVar26 + 0x10) = *(long *)(lVar26 + 0x10) + 1;
        }
        else {
          if ((uVar16 & 1) == 0) {
            func_0x0001043561d8();
            goto joined_r0x000104352bbc;
          }
          if (((ulong)ppuVar18 & 1) == 0) goto LAB_104352b68;
LAB_104352974:
          puVar2 = (ulong *)(*(long *)(lVar26 + 0x38) + uVar28 * 0x10);
          uVar28 = *puVar2;
          uVar14 = puVar2[1];
          *puVar2 = uVar15;
          puVar2[1] = uVar19;
          func_0x00010434d2d8(uVar28,uVar14);
        }
        *(long *)(unaff_x20 + lVar30) = lVar26;
        _swift_endAccess(apuStack_b8);
      }
      else {
        _swift_bridgeObjectRetain(lVar26);
        func_0x0001028c0d28();
        if (((ulong)ppuVar18 & 1) == 0) {
          _swift_bridgeObjectRelease(lVar26);
          goto LAB_104352a88;
        }
        puVar1 = (undefined8 *)(*(long *)(lVar26 + 0x38) + uVar28 * 0x10);
        uVar24 = *puVar1;
        uVar23 = puVar1[1];
        func_0x00010434c9dc(uVar24,uVar23);
        _swift_endAccess(apuStack_b8);
        _swift_bridgeObjectRelease(lVar26);
        func_0x00010434d2d8(uVar24,uVar23);
      }
      uVar31 = uVar31 + 1;
      (**(code **)(uVar20 + 0x28))(param_4,uVar13,uVar20);
      _swift_unknownObjectRelease(uVar9);
      puVar25 = puVar25 + 2;
    } while (uVar22 != uVar31);
    _swift_bridgeObjectRelease(lVar29);
  }
  FUN_104352d88();
  uVar24 = *(undefined8 *)(unaff_x20 + lVar4);
  _swift_bridgeObjectRetain(uVar24);
  FUN_10435c36c();
  _swift_bridgeObjectRelease(uVar24);
  FUN_104351d54();
  return;
}



/* Entry: 104352c60; end: 104352d87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104352c60(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + _DAT_113070840);
    if (lVar1 != 0) {
      _objc_retain();
      _objc_release(param_1);
      FUN_10435d360();
      func_0x00010c1677c0(0x3ff0000000000000);
      _objc_release(param_1);
      func_0x00010435d36c();
      func_0x00010c1677c0(0x3ff0000000000000);
      _objc_release(param_1);
      *(undefined1 *)(lVar1 + _DAT_113070a60) = 1;
    }
    _objc_release();
  }
  return;
}



/* Entry: 104352d88; end: 10435317b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104352d88(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined1 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  bool bVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 *puVar15;
  undefined *puVar16;
  long *plVar17;
  undefined *puVar18;
  uint uVar19;
  ulong uVar20;
  ulong uVar21;
  long unaff_x20;
  long lVar22;
  code *pcVar23;
  ulong uVar24;
  long *plVar25;
  undefined8 uVar26;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  FUN_104351c6c();
  lVar10 = _DAT_113070860;
  _swift_beginAccess(unaff_x20 + _DAT_113070860,auStack_78,0,0);
  lVar7 = _DAT_113070878;
  lVar6 = _DAT_113070870;
  lVar5 = _DAT_113070868;
  lVar10 = *(long *)(unaff_x20 + lVar10);
  uVar20 = *(ulong *)(lVar10 + 0x10);
  if (uVar20 != 0) {
    _swift_bridgeObjectRetain();
    uVar24 = 0;
    plVar25 = (long *)(lVar10 + 0x28);
    do {
      if (*(ulong *)(lVar10 + 0x10) <= uVar24) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x104353164);
        (*pcVar8)();
      }
      uVar3 = plVar25[-1];
      lVar22 = *plVar25;
      uVar11 = uVar3;
      _swift_getObjectType();
      _swift_unknownObjectRetain(uVar3);
      uVar12 = uVar11;
      FUN_10434d2a8(uVar11,lVar22);
      (**(code **)(lVar22 + 0x20))(uVar11,lVar22);
      puVar15 = auStack_90;
      _swift_beginAccess(unaff_x20 + lVar6,puVar15,0x20,0);
      lVar22 = *(long *)(unaff_x20 + lVar6);
      if (*(long *)(lVar22 + 0x10) == 0) {
LAB_104352f0c:
        bVar9 = true;
      }
      else {
        _swift_bridgeObjectRetain(lVar22);
        uVar13 = uVar12;
        func_0x0001028c0d28();
        if (((ulong)puVar15 & 1) == 0) {
          _swift_bridgeObjectRelease(lVar22);
          goto LAB_104352f0c;
        }
        puVar1 = (undefined8 *)(*(long *)(lVar22 + 0x38) + uVar13 * 0x10);
        uVar26 = *puVar1;
        uVar13 = puVar1[1];
        func_0x00010434c9dc(uVar26,uVar13);
        _swift_bridgeObjectRelease(lVar22);
        func_0x00010434d2d8(uVar26,uVar13);
        bVar9 = uVar13 < 0x8000000000000000 || uVar11 == 0;
      }
      _swift_endAccess(auStack_90);
      puVar15 = auStack_90;
      _swift_beginAccess(unaff_x20 + lVar5,puVar15,0x21,0);
      uVar14 = *(ulong *)(unaff_x20 + lVar5);
      _swift_isUniquelyReferenced_nonNull_native();
      uVar19 = (uint)uVar14;
      lVar22 = *(long *)(unaff_x20 + lVar5);
      *(undefined8 *)(unaff_x20 + lVar5) = 0x8000000000000000;
      uVar13 = uVar12;
      func_0x0001028c0d28();
      uVar21 = (ulong)~(uint)puVar15 & 1;
      if (SCARRY8(*(long *)(lVar22 + 0x10),uVar21)) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x104353168);
        (*pcVar8)();
      }
      uVar4 = (undefined1)uVar12;
      if (*(long *)(lVar22 + 0x18) < (long)(*(long *)(lVar22 + 0x10) + uVar21)) {
        func_0x0001043565cc();
        func_0x0001028c0d28();
        uVar13 = uVar12;
        if (((uint)puVar15 & 1) != (uVar19 & 1)) {
          __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF(&UNK_11075dde0);
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10435317c);
          (*pcVar8)();
        }
joined_r0x000104352fd8:
        if (((ulong)puVar15 & 1) != 0) goto LAB_104352fc0;
LAB_104352fdc:
        lVar2 = lVar22 + (uVar13 >> 6) * 8;
        *(ulong *)(lVar2 + 0x40) = *(ulong *)(lVar2 + 0x40) | 1L << (uVar13 & 0x3f);
        *(undefined1 *)(*(long *)(lVar22 + 0x30) + uVar13) = uVar4;
        *(bool *)(*(long *)(lVar22 + 0x38) + uVar13) = bVar9;
        if (SCARRY8(*(long *)(lVar22 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10435316c);
          (*pcVar8)();
        }
        *(long *)(lVar22 + 0x10) = *(long *)(lVar22 + 0x10) + 1;
      }
      else {
        if ((uVar14 & 1) == 0) {
          FUN_104355f28();
          goto joined_r0x000104352fd8;
        }
        if (((ulong)puVar15 & 1) == 0) goto LAB_104352fdc;
LAB_104352fc0:
        *(bool *)(*(long *)(lVar22 + 0x38) + uVar13) = bVar9;
      }
      *(long *)(unaff_x20 + lVar5) = lVar22;
      _swift_endAccess(auStack_90);
      if (uVar11 == 0) {
        _swift_unknownObjectRelease(uVar3);
      }
      else {
        puVar15 = auStack_90;
        auStack_90[0] = bVar9;
        func_0x0001006c71a4(puVar15);
        plVar17 = (long *)PTR___sSbSQsWP_11034dd50;
        puVar16 = PTR___sSbSQsWP_11034dd50;
        func_0x0001000c2068(PTR___sSbSQsWP_11034dd50);
        _swift_release(puVar15);
        func_0x000104884898();
        _swift_release(puVar16);
        puVar16 = &UNK_11075e498;
        _swift_allocObject(&UNK_11075e498,0x18,7);
        _swift_unknownObjectWeakInit(puVar16 + 0x10);
        puVar18 = &UNK_11075e538;
        _swift_allocObject(&UNK_11075e538,0x19,7);
        *(undefined **)(puVar18 + 0x10) = puVar16;
        puVar18[0x18] = uVar4;
        pcVar8 = FUN_10435a2f4;
        puVar16 = puVar18;
        (**(code **)(*plVar17 + 0x60))(FUN_10435a2f4);
        _swift_release(plVar17);
        _swift_release(puVar18);
        _swift_getObjectType(pcVar8);
        uVar26 = *(undefined8 *)(unaff_x20 + lVar7);
        pcVar23 = *(code **)(puVar16 + 0x10);
        _swift_retain(uVar26);
        (*pcVar23)();
        _swift_unknownObjectRelease(pcVar8);
        _swift_release(uVar26);
        _swift_unknownObjectRelease(uVar3);
        _swift_release(uVar11);
      }
      uVar24 = uVar24 + 1;
      plVar25 = plVar25 + 2;
    } while (uVar20 != uVar24);
    _swift_bridgeObjectRelease();
  }
  return;
}



/* Entry: 10435317c; end: 10435327b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10435317c(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x20;
  ulong uVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  undefined1 auStack_68 [24];
  
  lVar6 = _DAT_113070860;
  if (*(char *)(unaff_x20 + _DAT_1130708b8) == '\x01') {
    _swift_beginAccess(unaff_x20 + _DAT_113070860,auStack_68,0,0);
    lVar4 = *(long *)(unaff_x20 + lVar6);
    lVar6 = *(long *)(lVar4 + 0x10);
    if (lVar6 != 0) {
      _swift_bridgeObjectRetain(lVar4);
      lVar7 = 0x20;
      do {
        uVar5 = *(ulong *)(lVar4 + lVar7);
        uVar1 = uVar5;
        _swift_getObjectType();
        uVar2 = uVar1;
        _swift_conformsToProtocol();
        if (uVar2 != 0 && uVar5 != 0) {
          pcVar8 = *(code **)(uVar2 + 0x10);
          _swift_unknownObjectRetain(uVar5);
          uVar3 = uVar1;
          (*pcVar8)(uVar1,uVar2);
          if ((uVar3 & 1) != 0) {
            (**(code **)(uVar2 + 0x18))(uVar1,uVar2);
          }
          _swift_unknownObjectRelease(uVar5);
        }
        lVar7 = lVar7 + 0x10;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      _swift_bridgeObjectRelease(lVar4);
    }
  }
  return;
}



/* Entry: 10435327c; end: 1043534eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10435327c(void)

{
  long *plVar1;
  long lVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long unaff_x20;
  long lVar12;
  long lVar13;
  long lVar14;
  byte *pbVar15;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  plVar1 = (long *)(unaff_x20 + _DAT_1130708c0);
  lVar13 = *plVar1;
  if (lVar13 == 0) {
    return;
  }
  lVar2 = plVar1[1];
  lVar11 = plVar1[2];
  lVar14 = plVar1[3];
  plVar1[1] = 0;
  *plVar1 = 0;
  plVar1[3] = 0;
  plVar1[2] = 0;
  FUN_104350580();
  lVar12 = *(long *)(*(long *)(unaff_x20 + _DAT_113070848) + 0x10);
  if (lVar14 == 0) {
    pbVar15 = (byte *)(lVar12 + _DAT_113070738);
    bVar3 = *pbVar15;
    _objc_retain(lVar12);
    if ((bVar3 & 1) == 0) goto LAB_104353384;
    uVar4 = 0;
  }
  else {
    lVar5 = lVar12;
    _objc_retain();
    lVar6 = lVar14;
    func_0x00010c07eda0();
    pbVar15 = (byte *)(lVar5 + _DAT_113070738);
    uVar4 = (uint)lVar6;
    if (uVar4 == *pbVar15) goto LAB_104353384;
  }
  *pbVar15 = (byte)uVar4;
  uVar7 = (ulong)*(byte *)(lVar12 + _DAT_113070730);
  FUN_10434f300(uVar7);
  func_0x00010434eacc();
  uVar8 = uVar7;
  func_0x00010434ea34();
  uVar9 = uVar8;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  func_0x00010c1a9f00(uVar7);
  _objc_release(uVar7);
  _objc_release(uVar9);
LAB_104353384:
  _objc_release(lVar12);
  lVar12 = _DAT_113070860;
  if (lVar14 == 0) {
    _swift_beginAccess(unaff_x20 + _DAT_113070860,auStack_78,1,0);
    uVar10 = *(undefined8 *)(unaff_x20 + lVar12);
    *(undefined **)(unaff_x20 + lVar12) = PTR___swiftEmptyArrayStorage_11034f1c8;
    _swift_bridgeObjectRelease(uVar10);
    FUN_104351c6c();
    lVar11 = _DAT_113070870;
    _swift_beginAccess(unaff_x20 + _DAT_113070870,auStack_90,1,0);
    uVar10 = *(undefined8 *)(unaff_x20 + lVar11);
    *(undefined **)(unaff_x20 + lVar11) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
    _swift_bridgeObjectRelease(uVar10);
    FUN_104351d54();
    lVar11 = *(long *)(unaff_x20 + _DAT_113070840);
    if (lVar11 == 0) {
      _swift_bridgeObjectRelease(lVar13);
      _swift_unknownObjectRelease(lVar2);
    }
    else {
      _objc_retain();
      lVar12 = lVar11;
      FUN_10435d360();
      func_0x00010c1677c0(0);
      _objc_release(lVar12);
      func_0x00010435d36c();
      func_0x00010c1677c0(0);
      _objc_release(lVar12);
      _swift_bridgeObjectRelease(lVar13);
      _swift_unknownObjectRelease(lVar2);
      *(undefined1 *)(lVar11 + _DAT_113070a60) = 0;
      _objc_release(lVar11);
    }
    return;
  }
  FUN_104352160(lVar13,lVar2,lVar11,lVar14);
  _swift_bridgeObjectRelease(lVar13);
  _swift_unknownObjectRelease(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar14);
  return;
}



/* Entry: 1043534ec; end: 104353583;  */

undefined1 FUN_1043534ec(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (*(long *)(param_2 + 0x10) == 0) {
    return 0;
  }
  uVar1 = *(ulong *)(param_2 + 0x28);
  func_0x0001028c0dc0(uVar1,param_1);
  uVar2 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar1 = uVar1 & (uVar2 ^ 0xffffffffffffffff);
  if ((*(ulong *)(param_2 + 0x38 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0) {
    do {
      if ((uint)*(byte *)(*(long *)(param_2 + 0x30) + uVar1) == ((uint)param_1 & 0xff)) {
        return 1;
      }
      uVar1 = uVar1 + 1 & ~uVar2;
    } while ((*(ulong *)(param_2 + 0x38 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0);
  }
  return 0;
}



/* Entry: 104353584; end: 1043546fb;  */

/* WARNING: Removing unreachable block (ram,0x000104353b10) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_104353584(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  byte bVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  ulong uVar11;
  ulong uVar12;
  long unaff_x20;
  long lVar13;
  code *pcVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  undefined *apuStack_98 [3];
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar21 = param_1;
  func_0x000104353b1c();
  lVar16 = _DAT_113070860;
  if (lVar21 == 0) {
    _swift_beginAccess(unaff_x20 + _DAT_113070860,auStack_78,0,0);
    lVar16 = *(long *)(unaff_x20 + lVar16);
    uVar18 = *(ulong *)(lVar16 + 0x10);
    _swift_bridgeObjectRetain(lVar16);
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar18 != 0) {
      uVar11 = 0;
      do {
        while( true ) {
          if (*(ulong *)(lVar16 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
            pcVar14 = (code *)SoftwareBreakpoint(1,0x104353b08);
            (*pcVar14)();
          }
          puVar15 = (undefined8 *)(lVar16 + 0x20 + uVar11 * 0x10);
          lVar21 = puVar15[1];
          uVar20 = *puVar15;
          uVar19 = uVar11 + 1;
          uVar5 = uVar20;
          _swift_getObjectType();
          pcVar14 = *(code **)(lVar21 + 0x10);
          _swift_unknownObjectRetain(uVar20,uVar20);
          (*pcVar14)(uVar5,lVar21);
          if (((uint)uVar5 & 0xff) == ((uint)param_1 & 0xff)) break;
          _swift_unknownObjectRelease(uVar20);
          uVar11 = uVar19;
          if (uVar18 == uVar19) goto LAB_10435371c;
        }
        puVar6 = puVar9;
        _swift_isUniquelyReferenced_nonNull_native();
        apuStack_98[0] = puVar9;
        if (((ulong)puVar6 & 1) == 0) {
          FUN_104357c6c(0,*(long *)(puVar9 + 0x10) + 1,1);
        }
        uVar2 = *(ulong *)(apuStack_98[0] + 0x10);
        if (*(ulong *)(apuStack_98[0] + 0x18) >> 1 <= uVar2) {
          FUN_104357c6c(1 < *(ulong *)(apuStack_98[0] + 0x18),uVar2 + 1,1);
        }
        *(ulong *)(apuStack_98[0] + 0x10) = uVar2 + 1;
        *(long *)(apuStack_98[0] + uVar2 * 0x10 + 0x28) = lVar21;
        *(undefined8 *)(apuStack_98[0] + uVar2 * 0x10 + 0x20) = uVar20;
        bVar4 = uVar18 - 1 != uVar11;
        puVar9 = apuStack_98[0];
        uVar11 = uVar19;
      } while (bVar4);
    }
LAB_10435371c:
    _swift_bridgeObjectRelease(lVar16);
    lVar16 = _DAT_113070868;
    uVar18 = *(ulong *)(puVar9 + 0x10);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar18 != 0) {
      uVar11 = 0;
LAB_104353754:
      do {
        if (*(ulong *)(puVar9 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x104353b0c);
          (*pcVar14)();
        }
        lVar22 = *(long *)((long)(puVar9 + uVar11 * 0x10 + 0x20) + 8);
        lVar17 = *(long *)(puVar9 + uVar11 * 0x10 + 0x20);
        lVar21 = lVar17;
        _swift_getObjectType();
        _swift_unknownObjectRetain(lVar17);
        FUN_10434d2a8(lVar17,lVar21,lVar22);
        ppuVar10 = apuStack_98;
        _swift_beginAccess(unaff_x20 + lVar16,ppuVar10,0x20,0);
        lVar13 = *(long *)(unaff_x20 + lVar16);
        if (*(long *)(lVar13 + 0x10) == 0) {
          _swift_endAccess(apuStack_98);
        }
        else {
          _swift_bridgeObjectRetain(lVar13);
          func_0x0001028c0d28();
          if (((ulong)ppuVar10 & 1) == 0) {
            _swift_endAccess(apuStack_98);
            _swift_bridgeObjectRelease(lVar13);
          }
          else {
            bVar3 = *(byte *)(*(long *)(lVar13 + 0x38) + lVar21);
            _swift_endAccess(apuStack_98);
            _swift_bridgeObjectRelease(lVar13);
            if ((bVar3 & 1) == 0) {
              uVar11 = uVar11 + 1;
              _swift_unknownObjectRelease(lVar17);
              if (uVar18 == uVar11) break;
              goto LAB_104353754;
            }
          }
        }
        puVar7 = puVar6;
        _swift_isUniquelyReferenced_nonNull_native();
        puStack_80 = puVar6;
        if (((ulong)puVar7 & 1) == 0) {
          FUN_104357c6c(0,*(long *)(puVar6 + 0x10) + 1,1);
        }
        uVar19 = *(ulong *)(puStack_80 + 0x10);
        if (*(ulong *)(puStack_80 + 0x18) >> 1 <= uVar19) {
          FUN_104357c6c(1 < *(ulong *)(puStack_80 + 0x18),uVar19 + 1,1);
        }
        *(ulong *)(puStack_80 + 0x10) = uVar19 + 1;
        *(long *)(puStack_80 + uVar19 * 0x10 + 0x28) = lVar22;
        *(long *)(puStack_80 + uVar19 * 0x10 + 0x20) = lVar17;
        bVar4 = uVar18 - 1 != uVar11;
        puVar6 = puStack_80;
        uVar11 = uVar11 + 1;
      } while (bVar4);
    }
    _swift_release(puVar9);
    apuStack_98[0] = puVar6;
    _swift_retain(puVar6);
    FUN_104359320(apuStack_98,0x10435ab48,FUN_104359998);
    _swift_release(puVar6);
    puVar6 = apuStack_98[0];
    lVar16 = _DAT_113070870;
    uVar18 = *(ulong *)(apuStack_98[0] + 0x10);
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar18 != 0) {
      uVar11 = 0;
LAB_104353930:
      puVar15 = (undefined8 *)(puVar6 + uVar11 * 0x10 + 0x28);
      uVar19 = uVar11;
      do {
        if (*(ulong *)(puVar6 + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x104353b10);
          (*pcVar14)();
        }
        lVar21 = puVar15[-1];
        uVar5 = *puVar15;
        lVar13 = lVar21;
        _swift_getObjectType();
        _swift_unknownObjectRetain(lVar21);
        FUN_10434d2a8(lVar13,uVar5);
        ppuVar10 = apuStack_98;
        _swift_beginAccess(unaff_x20 + lVar16,ppuVar10,0x20,0);
        lVar17 = *(long *)(unaff_x20 + lVar16);
        if (*(long *)(lVar17 + 0x10) == 0) {
LAB_104353948:
          _swift_endAccess(apuStack_98);
          _swift_unknownObjectRelease(lVar21);
        }
        else {
          _swift_bridgeObjectRetain(lVar17);
          func_0x0001028c0d28();
          if (((ulong)ppuVar10 & 1) == 0) {
            _swift_bridgeObjectRelease(lVar17);
            goto LAB_104353948;
          }
          puVar1 = (undefined8 *)(*(long *)(lVar17 + 0x38) + lVar13 * 0x10);
          uVar5 = *puVar1;
          lVar13 = puVar1[1];
          func_0x00010434c9dc(uVar5,lVar13);
          _swift_endAccess(apuStack_98);
          _swift_unknownObjectRelease(lVar21);
          _swift_bridgeObjectRelease(lVar17);
          if (-1 < lVar13) goto LAB_104353a18;
          func_0x00010434d2d8(uVar5,lVar13);
        }
        uVar19 = uVar19 + 1;
        puVar15 = puVar15 + 2;
        if (uVar18 == uVar19) break;
      } while( true );
    }
LAB_104353ad4:
    _swift_release(puVar6);
  }
  else {
    _swift_unknownObjectRelease();
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  return puVar9;
LAB_104353a18:
  puVar7 = puVar9;
  _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
  if (((((ulong)puVar7 & 1) == 0) || ((long)puVar9 < 0)) || (((ulong)puVar9 >> 0x3e & 1) != 0)) {
    if ((ulong)puVar9 >> 0x3e == 0) {
      puVar7 = *(undefined **)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar7 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar9) {
        puVar7 = puVar9;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg(puVar7);
    }
    puVar8 = (undefined *)0x0;
    func_0x0001043557fc(0,puVar7 + 1,1,puVar9);
    puVar9 = puVar8;
  }
  uVar12 = (ulong)puVar9 & 0xffffffffffffff8;
  uVar2 = *(ulong *)(uVar12 + 0x10);
  if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar2) {
    puVar9 = (undefined *)(ulong)(1 < *(ulong *)(uVar12 + 0x18));
    func_0x0001043557fc(puVar9,uVar2 + 1,1);
    uVar12 = (ulong)puVar9 & 0xffffffffffffff8;
  }
  uVar11 = uVar19 + 1;
  *(ulong *)(uVar12 + 0x10) = uVar2 + 1;
  *(undefined8 *)(uVar12 + uVar2 * 8 + 0x20) = uVar5;
  if (uVar18 - 1 == uVar19) goto LAB_104353ad4;
  goto LAB_104353930;
}



/* Entry: 1043546fc; end: 1043547c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043546fc(undefined1 *param_1,long param_2,undefined8 param_3)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  uVar1 = *param_1;
  _swift_beginAccess(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  lVar2 = _DAT_113070868;
  if (param_2 != 0) {
    _swift_beginAccess(param_2 + _DAT_113070868,auStack_70,0x21,0);
    uVar3 = *(undefined8 *)(param_2 + lVar2);
    _swift_isUniquelyReferenced_nonNull_native(uVar3);
    uVar4 = *(undefined8 *)(param_2 + lVar2);
    *(undefined8 *)(param_2 + lVar2) = 0x8000000000000000;
    FUN_104355ca4(uVar1,param_3,uVar3);
    *(undefined8 *)(param_2 + lVar2) = uVar4;
    _swift_endAccess(auStack_70);
    FUN_104351d54();
    _objc_release(param_2);
  }
  return;
}



/* Entry: 1043547c4; end: 104354823; -[_TtC15GamesUIServices18GamesActionBarImpl init] */

void FUN_1043547c4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("GamesUIServices.GamesActionBarImpl",0x22,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043547f0);
  (*pcVar1)();
}



/* Entry: 104354824; end: 104354963; -[_TtC15GamesUIServices18GamesActionBarImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104354824(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  func_0x000100db67b8(param_1 + _DAT_113070820);
  func_0x000100db67b8(param_1 + _DAT_113070828);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113070830);
  _objc_release(*(undefined8 *)(param_1 + _DAT_113070838));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113070840));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113070848));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113070850));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113070858));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113070860));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113070868));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113070870));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113070878));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113070880));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113070890));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130708a0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130708a8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130708b0));
  plVar1 = (long *)(param_1 + _DAT_1130708c0);
  lVar2 = plVar1[1];
  lVar3 = plVar1[3];
  if (*plVar1 != 0) {
    _swift_bridgeObjectRelease(*plVar1,lVar2,plVar1[2]);
    _swift_unknownObjectRelease(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar3);
    return;
  }
  return;
}



/* Entry: 104354964; end: 104354983;  */

void FUN_104354964(void)

{
  _objc_opt_self(&PTR_PTR_1129a02c8);
  return;
}



/* Entry: 104354984; end: 104354a3b;  */

long FUN_104354984(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 104354a3c; end: 104354ab3;  */

undefined8 * FUN_104354a3c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_2[2];
  uVar2 = param_1[1];
  param_1[1] = param_2[1];
  _swift_unknownObjectRetain();
  _swift_unknownObjectRelease(uVar2);
  param_1[2] = uVar1;
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _objc_retain();
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 104354ab4; end: 104354aff;  */

undefined8 * FUN_104354ab4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _swift_bridgeObjectRelease(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_unknownObjectRelease(uVar1);
  uVar1 = param_1[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 104354b00; end: 104354baf;  */

int FUN_104354b00(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 104354bb0; end: 104354c3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_104354bb0(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auVar5 [16];
  
  lVar2 = 0x38;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(0x38,0x18b0);
  }
  *param_1 = lVar2;
  lVar1 = _DAT_113070820;
  *(long *)(lVar2 + 0x28) = unaff_x20;
  *(long *)(lVar2 + 0x30) = lVar1;
  lVar1 = unaff_x20 + lVar1;
  _swift_beginAccess(lVar1,lVar2,0x21,0);
  lVar3 = lVar1;
  _swift_unknownObjectWeakLoadStrong();
  uVar4 = *(undefined8 *)(lVar1 + 8);
  *(long *)(lVar2 + 0x18) = lVar3;
  *(undefined8 *)(lVar2 + 0x20) = uVar4;
  auVar5._8_8_ = (long *)(lVar2 + 0x18);
  auVar5._0_8_ = 0x10435aba8;
  return auVar5;
}



/* Entry: 104354c3c; end: 104354c47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104354c3c(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = unaff_x20 + _DAT_113070828;
  _swift_beginAccess(lVar1,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(lVar1);
  return;
}



/* Entry: 104354c48; end: 104354c8f;  */

void FUN_104354c48(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  _swift_beginAccess(unaff_x20 + lVar1,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(unaff_x20 + lVar1);
  return;
}



/* Entry: 104354c90; end: 104354c9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104354c90(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = unaff_x20 + _DAT_113070828;
  _swift_beginAccess(lVar1,auStack_48,1,0);
  *(undefined8 *)(lVar1 + 8) = param_2;
  _swift_unknownObjectWeakAssign(lVar1,param_1);
  _swift_unknownObjectRelease(param_1);
  return;
}



/* Entry: 104354c9c; end: 104354d8b;  */

void FUN_104354c9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = unaff_x20 + *param_5;
  _swift_beginAccess(lVar1,auStack_48,1,0);
  *(undefined8 *)(lVar1 + 8) = param_2;
  _swift_unknownObjectWeakAssign(lVar1,param_1);
  _swift_unknownObjectRelease(param_1);
  return;
}



/* Entry: 104354d8c; end: 104354d8f;  */

void FUN_104354d8c(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *param_1;
  uVar3 = *(undefined8 *)(lVar2 + 0x18);
  lVar1 = *(long *)(lVar2 + 0x28) + *(long *)(lVar2 + 0x30);
  *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(lVar2 + 0x20);
  _swift_unknownObjectWeakAssign(lVar1,uVar3);
  if ((param_2 & 1) == 0) {
    _swift_endAccess(lVar2);
    _swift_unknownObjectRelease(uVar3);
  }
  else {
    _swift_unknownObjectRelease(*(undefined8 *)(lVar2 + 0x18));
    _swift_endAccess(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar2);
  return;
}



/* Entry: 104354d90; end: 104354e03;  */

void FUN_104354d90(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *param_1;
  uVar3 = *(undefined8 *)(lVar2 + 0x18);
  lVar1 = *(long *)(lVar2 + 0x28) + *(long *)(lVar2 + 0x30);
  *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(lVar2 + 0x20);
  _swift_unknownObjectWeakAssign(lVar1,uVar3);
  if ((param_2 & 1) == 0) {
    _swift_endAccess(lVar2);
    _swift_unknownObjectRelease(uVar3);
  }
  else {
    _swift_unknownObjectRelease(*(undefined8 *)(lVar2 + 0x18));
    _swift_endAccess(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar2);
  return;
}



/* Entry: 104354e04; end: 104354e0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104354e04(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  _swift_getObjectType();
  lVar2 = unaff_x20 + _DAT_113070830;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar2 != 0) {
    if (*(long *)(unaff_x20 + _DAT_113070840) == 0) {
      func_0x0001007d6c6c(1,0xd00000000000001c,0x800000010f1f7760,lVar1,&PTR_DAT_11075e3f0);
      FUN_10435023c(lVar2);
    }
    else {
      func_0x0001007d6c6c(1,0xd00000000000001e,0x800000010f1f7780,lVar1,&PTR_DAT_11075e3f0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  FUN_104366fc4(0xd000000000000031,0x800000010f1f7720,lVar1,&PTR_DAT_11075e3f0);
  return;
}



/* Entry: 104354e10; end: 104354e8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104354e10(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113070850);
  *(undefined8 *)(unaff_x20 + _DAT_113070850) = param_1;
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_113070848) + 0x10);
  _objc_retain(param_1);
  _objc_retain(uVar2);
  uVar1 = uVar2;
  FUN_10434e99c();
  func_0x00010c1a9f00();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104354e8c; end: 104354ebf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104354e8c(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  undefined8 uVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long lVar9;
  long lVar10;
  long unaff_x20;
  long lVar11;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 uStack_61;
  
  lVar4 = unaff_x20;
  _swift_getObjectType();
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x2a);
  __sSS6appendyySSF(0xd000000000000017,0x800000010f13b780);
  uStack_61 = (undefined1)param_1;
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&uStack_61,&puStack_98,&UNK_11075d960,PTR___ss26DefaultStringInterpolationVN_11034ec00,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  __sSS6appendyySSF(0x426e6f6974636120,0xef3a776569567261);
  lVar11 = _DAT_113070840;
  bVar3 = *(long *)(unaff_x20 + _DAT_113070840) != 0;
  uVar5 = 0x6c696e;
  if (bVar3) {
    uVar5 = 0x737473697865;
  }
  uVar2 = 0xe300000000000000;
  if (bVar3) {
    uVar2 = 0xe600000000000000;
  }
  __sSS6appendyySSF(uVar5,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  uVar5 = uStack_90;
  func_0x0001007d6c6c(1,puStack_98,uStack_90,lVar4,&PTR_DAT_11075e3f0);
  _swift_bridgeObjectRelease(uVar5);
  uVar5 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_113070848) + 0x10);
  _objc_retain(uVar5);
  FUN_10434f4b4(param_1,param_2);
  _objc_release(uVar5);
  lVar4 = _DAT_113070a60;
  lVar11 = *(long *)(unaff_x20 + lVar11);
  if ((lVar11 != 0) &&
     ((((uint)param_1 & 0xc0) != 0x40) != (bool)*(char *)(lVar11 + _DAT_113070a60))) {
    uVar1 = (uint)param_1 & 0xc0;
    uVar5 = 0x3ff0000000000000;
    if (uVar1 == 0x40) {
      uVar5 = 0;
    }
    if ((param_2 & 1) == 0) {
      lVar9 = lVar11;
      _objc_retain(lVar11);
      lVar10 = lVar9;
      FUN_10435d360();
      func_0x00010c1677c0(uVar5);
      _objc_release(lVar10);
      func_0x00010435d36c();
      func_0x00010c1677c0(uVar5);
      _objc_release(lVar10);
      *(bool *)(lVar11 + lVar4) = uVar1 != 0x40;
      _objc_release(lVar9);
    }
    else {
      puVar6 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_opt_self(PTR__OBJC_CLASS___UIView_1126aec20);
      puVar7 = &UNK_11075e5b0;
      _swift_allocObject(&UNK_11075e5b0,0x20,7);
      *(long *)(puVar7 + 0x10) = lVar11;
      *(undefined8 *)(puVar7 + 0x18) = uVar5;
      pcStack_78 = FUN_10435aa94;
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0x42000000;
      puStack_88 = &UNK_1000f6b44;
      puStack_80 = &UNK_11075e5c8;
      ppuVar8 = &puStack_98;
      puStack_70 = puVar7;
      __Block_copy(ppuVar8);
      puVar7 = puStack_70;
      _objc_retain(lVar11);
      _objc_retain();
      _swift_release(puVar7);
      func_0x00010bf03440(0x3fe0000000000000,0,puVar6);
      _objc_release(lVar11);
      __Block_release(ppuVar8);
    }
  }
  return;
}



/* Entry: 104354ec0; end: 104354f5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104354ec0(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_113070840);
  if (lVar1 == 0) {
    lVar1 = unaff_x20 + _DAT_113070830;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar1 == 0) {
      return;
    }
  }
  else {
    _objc_retain();
  }
  do {
    lVar2 = lVar1;
    func_0x00010c0d9e20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (lVar2 == 0) {
      return;
    }
    puVar3 = PTR__OBJC_CLASS___UIViewController_1126af898;
    _objc_opt_self(PTR__OBJC_CLASS___UIViewController_1126af898);
    lVar4 = lVar2;
    _swift_dynamicCastObjCClass(lVar2,puVar3);
    lVar1 = lVar2;
  } while (lVar4 == 0);
  return;
}



/* Entry: 104354f5c; end: 104355083;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_104354f5c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_113070840);
  if (lVar2 == 0) {
    lVar2 = unaff_x20 + _DAT_113070830;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar2 == 0) {
LAB_10435500c:
      lVar5 = unaff_x20 + _DAT_113070830;
      _swift_unknownObjectWeakLoadStrong();
      if (lVar5 == 0) {
        return 0.0;
      }
      goto LAB_104355024;
    }
  }
  else {
    _objc_retain();
  }
  do {
    lVar3 = lVar2;
    func_0x00010c0d9e20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    if (lVar3 == 0) goto LAB_10435500c;
    puVar4 = PTR__OBJC_CLASS___UIViewController_1126af898;
    _objc_opt_self(PTR__OBJC_CLASS___UIViewController_1126af898);
    lVar5 = lVar3;
    _swift_dynamicCastObjCClass(lVar3,puVar4);
    lVar2 = lVar3;
  } while (lVar5 == 0);
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104355084);
    (*pcVar1)();
  }
LAB_104355024:
  func_0x00010bf20c00(lVar5);
  _objc_release(lVar5);
  _CGRectGetHeight(param_1,param_2,param_3,param_4);
  return param_1 * 0.5;
}



/* Entry: 104355084; end: 10435537f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104355084(undefined8 param_1,uint param_2,long param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x00010c181140();
  if ((param_2 & 1) == 0) {
    _swift_beginAccess(param_3 + 0x10,auStack_58,0,0);
    lVar2 = param_3 + 0x10;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar2 != 0) {
      lVar1 = *(long *)(lVar2 + _DAT_1130708b0);
      if (lVar1 != 0) {
        _objc_retain(lVar1);
        _objc_release(lVar2);
        func_0x00010c162480(lVar1);
      }
      _objc_release();
    }
    _swift_beginAccess(param_3 + 0x10,auStack_70,0,0);
    param_3 = param_3 + 0x10;
    _swift_unknownObjectWeakLoadStrong();
    if (param_3 == 0) goto LAB_1043551ec;
    lVar2 = *(long *)(param_3 + _DAT_1130708a8);
  }
  else {
    _swift_beginAccess(param_3 + 0x10,auStack_58,0,0);
    lVar2 = param_3 + 0x10;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar2 != 0) {
      lVar1 = *(long *)(lVar2 + _DAT_1130708a8);
      if (lVar1 != 0) {
        _objc_retain(lVar1);
        _objc_release(lVar2);
        func_0x00010c162480(lVar1);
      }
      _objc_release();
    }
    _swift_beginAccess(param_3 + 0x10,auStack_70,0,0);
    param_3 = param_3 + 0x10;
    _swift_unknownObjectWeakLoadStrong();
    if (param_3 == 0) goto LAB_1043551ec;
    lVar2 = *(long *)(param_3 + _DAT_1130708b0);
  }
  if (lVar2 != 0) {
    _objc_retain(lVar2);
    _objc_release(param_3);
    func_0x00010c162480(lVar2);
  }
  _objc_release();
LAB_1043551ec:
  FUN_10435cf60(param_2 & 1);
  if (*(long *)(param_4 + _DAT_113070a80) != 0) {
    uVar3 = 0x3ff0000000000000;
    if ((param_2 & 1) == 0) {
      uVar3 = 0;
    }
    func_0x00010c1677c0(uVar3);
  }
  func_0x00010c08cdc0(param_5);
  return;
}



/* Entry: 104355380; end: 104355393;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104355380(void)

{
  long unaff_x20;
  
  return *(undefined1 *)(unaff_x20 + _DAT_1130708b8);
}



/* Entry: 104355394; end: 1043553bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104355394(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + _DAT_113070840) != 0) {
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1043553c0; end: 1043553d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1043553c0(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_113070840);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    _objc_retain();
    lVar2 = lVar1;
    FUN_10435cb64();
    _objc_release(lVar1);
  }
  return lVar2;
}



/* Entry: 1043553d8; end: 104355427;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1043553d8(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_113070840);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    _objc_retain();
    lVar2 = lVar1;
    (*param_3)();
    _objc_release(lVar1);
  }
  return lVar2;
}



/* Entry: 104355428; end: 10435542f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_104355428(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_113070840);
  if (lVar2 == 0) {
    lVar2 = unaff_x20 + _DAT_113070830;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar2 == 0) {
LAB_10435500c:
      lVar5 = unaff_x20 + _DAT_113070830;
      _swift_unknownObjectWeakLoadStrong();
      if (lVar5 == 0) {
        return 0.0;
      }
      goto LAB_104355024;
    }
  }
  else {
    _objc_retain();
  }
  do {
    lVar3 = lVar2;
    func_0x00010c0d9e20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    if (lVar3 == 0) goto LAB_10435500c;
    puVar4 = PTR__OBJC_CLASS___UIViewController_1126af898;
    _objc_opt_self(PTR__OBJC_CLASS___UIViewController_1126af898);
    lVar5 = lVar3;
    _swift_dynamicCastObjCClass(lVar3,puVar4);
    lVar2 = lVar3;
  } while (lVar5 == 0);
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104355084);
    (*pcVar1)();
  }
LAB_104355024:
  func_0x00010bf20c00(lVar5);
  _objc_release(lVar5);
  _CGRectGetHeight(param_1,param_2,param_3,param_4);
  return param_1 * 0.5;
}



/* Entry: 104355430; end: 10435557b;  */

undefined8 FUN_104355430(long param_1,long param_2)

{
  char cVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  
  if (param_1 == param_2) {
LAB_104355558:
    uVar3 = 1;
  }
  else {
    if (*(long *)(param_1 + 0x10) == *(long *)(param_2 + 0x10)) {
      uVar6 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      uVar9 = 0xffffffffffffffff;
      if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
        uVar9 = ~(-1L << (uVar6 & 0x3f));
      }
      uVar9 = uVar9 & *(ulong *)(param_1 + 0x38);
      lVar5 = 0;
      while( true ) {
        if (uVar9 == 0) {
          do {
            lVar8 = lVar5 + 1;
            if (SCARRY8(lVar5,1)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10435557c);
              (*pcVar2)();
            }
            if ((long)(uVar6 + 0x3f >> 6) <= lVar8) goto LAB_104355558;
            uVar9 = ((ulong *)(param_1 + 0x38))[lVar8];
            lVar5 = lVar5 + 1;
          } while (uVar9 == 0);
          uVar4 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
          uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
          uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
          uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
          uVar4 = uVar4 >> 0x20 | uVar4 << 0x20;
          uVar9 = uVar9 - 1 & uVar9;
        }
        else {
          uVar4 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
          uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
          uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
          uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
          uVar4 = uVar4 >> 0x20 | uVar4 << 0x20;
          uVar9 = uVar9 - 1 & uVar9;
          lVar8 = lVar5;
        }
        cVar1 = *(char *)(*(long *)(param_1 + 0x30) + (LZCOUNT(uVar4) | lVar8 << 6));
        uVar4 = *(ulong *)(param_2 + 0x28);
        func_0x0001028c0dc0(uVar4,cVar1);
        uVar7 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
        uVar4 = uVar4 & (uVar7 ^ 0xffffffffffffffff);
        if ((*(ulong *)(param_2 + 0x38 + (uVar4 >> 6) * 8) >> (uVar4 & 0x3f) & 1) == 0) break;
        while (lVar5 = lVar8, *(char *)(*(long *)(param_2 + 0x30) + uVar4) != cVar1) {
          uVar4 = uVar4 + 1 & ~uVar7;
          if ((*(ulong *)(param_2 + 0x38 + (uVar4 >> 6) * 8) >> (uVar4 & 0x3f) & 1) == 0)
          goto LAB_104355550;
        }
      }
    }
LAB_104355550:
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 10435557c; end: 1043555d3;  */

void FUN_10435557c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_78,*(undefined8 *)(unaff_x20 + 0x28));
  uVar1 = param_1;
  __ss6HasherV8_combineyySuF();
  __ss6HasherV9_finalizeSiyF();
  uVar2 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar1 = uVar1 & (uVar2 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) == 0) {
    return;
  }
  do {
    if (*(ulong *)(*(long *)(unaff_x20 + 0x30) + uVar1 * 8) == param_1) {
      return;
    }
    uVar1 = uVar1 + 1 & ~uVar2;
  } while ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0);
  return;
}



/* Entry: 1043555d4; end: 104355637;  */

void FUN_1043555d4(long param_1,ulong param_2)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar1 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) == 0) {
    return;
  }
  do {
    if (*(long *)(*(long *)(unaff_x20 + 0x30) + param_2 * 8) == param_1) {
      return;
    }
    param_2 = param_2 + 1 & ~uVar1;
  } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
  return;
}



/* Entry: 104355638; end: 1043556b7;  */

undefined * FUN_104355638(undefined *param_1,undefined *param_2,code *param_3)

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
    (*param_3)();
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



/* Entry: 1043556b8; end: 10435592b;  */

undefined * FUN_1043556b8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1043557fc);
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
    puVar3 = (undefined *)0x113070900;
    func_0x0001000285a8(0x113070900,&UNK_10dceee78);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x18) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x113070908;
    func_0x0001000285a8(0x113070908,&UNK_10dceee80);
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x18 <= puVar4) {
      _memmove(puVar4,puVar1,uVar7 * 0x18);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Entry: 10435592c; end: 104355947;  */

ulong FUN_10435592c(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104355a90);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_104355638(uVar2,uVar4,FUN_10435ec58);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104355a8c);
      (*pcVar1)();
    }
    FUN_104355b88(0,uVar2,uVar3 + 0x20,param_4,0x113070928,&PTR_PTR_1126adc70);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      _memmove(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    _swift_bridgeObjectRelease(param_4);
  }
  return uVar3;
}



/* Entry: 104355948; end: 104355a8f;  */

ulong FUN_104355948(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104355a90);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_104355638(uVar2,uVar4,param_5);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104355a8c);
      (*pcVar1)();
    }
    FUN_104355b88(0,uVar2,uVar3 + 0x20,param_4,param_6,param_7);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      _memmove(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    _swift_bridgeObjectRelease(param_4);
  }
  return uVar3;
}



/* Entry: 104355a90; end: 104355b87;  */

long FUN_104355a90(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x104355b84);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x104355b88);
        (*pcVar3)();
      }
      uVar4 = 0;
      func_0x00010434d014(0);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        __ss12_ArrayBufferV18_typeCheckSlowPathyySiF(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      func_0x00010434d014(0);
      _swift_arrayInitWithCopy
                (param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,param_2 - param_1,uVar4)
      ;
      _swift_bridgeObjectRelease(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x104355b80);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 104355b88; end: 104355ca3;  */

long FUN_104355b88(long param_1,long param_2,long param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x104355ca0);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x104355ca4);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_10435aad8(0,param_5,param_6);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        __ss12_ArrayBufferV18_typeCheckSlowPathyySiF(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_10435aad8(0,param_5,param_6);
      _swift_arrayInitWithCopy
                (param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,param_2 - param_1,uVar4)
      ;
      _swift_bridgeObjectRelease(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x104355c9c);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 104355ca4; end: 104355dc3;  */

void FUN_104355ca4(byte param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  
  lVar7 = *unaff_x20;
  uVar2 = param_2;
  uVar3 = param_2;
  func_0x0001028c0d28();
  lVar4 = *(long *)(lVar7 + 0x10);
  uVar6 = (ulong)~(uint)uVar3 & 1;
  lVar5 = lVar4 + uVar6;
  if (SCARRY8(lVar4,uVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104355d54);
    (*pcVar1)();
  }
  if (*(long *)(lVar7 + 0x18) < lVar5) {
    param_3 = param_3 & 1;
    func_0x0001043565cc(lVar5);
    uVar2 = param_2;
    func_0x0001028c0d28();
    if (((uint)uVar3 & 1) != (param_3 & 1)) {
      __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF(&UNK_11075dde0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104355d34);
      (*pcVar1)();
    }
  }
  else if ((param_3 & 1) == 0) {
    FUN_104355f28();
    lVar5 = *unaff_x20;
    goto joined_r0x000104355d68;
  }
  lVar5 = *unaff_x20;
joined_r0x000104355d68:
  if ((uVar3 & 1) == 0) {
    lVar4 = lVar5 + (uVar2 >> 6) * 8;
    *(ulong *)(lVar4 + 0x40) = *(ulong *)(lVar4 + 0x40) | 1L << (uVar2 & 0x3f);
    *(char *)(*(long *)(lVar5 + 0x30) + uVar2) = (char)param_2;
    *(byte *)(*(long *)(lVar5 + 0x38) + uVar2) = param_1 & 1;
    if (SCARRY8(*(long *)(lVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104355dc4);
      (*pcVar1)();
    }
    *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
  }
  else {
    *(byte *)(*(long *)(lVar5 + 0x38) + uVar2) = param_1 & 1;
  }
  return;
}



/* Entry: 104355dc4; end: 104355f27;  */

void FUN_104355dc4(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  
  func_0x0001000285a8(0x113070910,&UNK_10dceee90);
  lVar8 = *unaff_x20;
  lVar4 = lVar8;
  __ss18_DictionaryStorageC4copy8originalAByxq_Gs05__RawaB0C_tFZ();
  if (*(long *)(lVar8 + 0x10) != 0) {
    lVar1 = lVar8 + 0x40;
    uVar5 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar4 != lVar8 || lVar1 + uVar5 * 8 <= lVar4 + 0x40U) {
      _memmove(lVar4 + 0x40U,lVar1,uVar5 << 3);
    }
    lVar10 = 0;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar8 + 0x10);
    uVar6 = 1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
    uVar5 = 0xffffffffffffffff;
    if ((*(byte *)(lVar8 + 0x20) & 0x3f) < 6) {
      uVar5 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar5 = uVar5 & *(ulong *)(lVar8 + 0x40);
    if (uVar5 == 0) goto LAB_104355ea0;
    do {
      uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar5 = uVar5 - 1 & uVar5;
      while( true ) {
        uVar7 = LZCOUNT(uVar7) | lVar10 << 6;
        uVar9 = *(undefined8 *)(*(long *)(lVar8 + 0x38) + uVar7 * 8);
        *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar7 * 8) =
             *(undefined8 *)(*(long *)(lVar8 + 0x30) + uVar7 * 8);
        *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar7 * 8) = uVar9;
        _swift_retain();
        _objc_retain(uVar9);
        if (uVar5 != 0) break;
LAB_104355ea0:
        do {
          lVar2 = lVar10 + 1;
          if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x104355f28);
            (*pcVar3)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar2) goto LAB_104355f00;
          uVar5 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar10 = lVar10 + 1;
        } while (uVar5 == 0);
        uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
        uVar5 = uVar5 - 1 & uVar5;
        lVar10 = lVar2;
      }
    } while( true );
  }
LAB_104355f00:
  _swift_release(lVar8);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 104355f28; end: 104356073;  */

void FUN_104355f28(void)

{
  long lVar1;
  undefined1 uVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long *unaff_x20;
  long lVar10;
  
  func_0x0001000285a8(0x1130704a8,&UNK_10dcee798);
  lVar10 = *unaff_x20;
  lVar4 = lVar10;
  __ss18_DictionaryStorageC4copy8originalAByxq_Gs05__RawaB0C_tFZ();
  if (*(long *)(lVar10 + 0x10) != 0) {
    lVar1 = lVar10 + 0x40;
    uVar5 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar4 != lVar10 || lVar1 + uVar5 * 8 <= lVar4 + 0x40U) {
      _memmove(lVar4 + 0x40U,lVar1,uVar5 << 3);
    }
    lVar6 = 0;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar10 + 0x10);
    uVar7 = 1L << ((ulong)*(byte *)(lVar10 + 0x20) & 0x3f);
    uVar5 = 0xffffffffffffffff;
    if ((*(byte *)(lVar10 + 0x20) & 0x3f) < 6) {
      uVar5 = ~(-1L << (uVar7 & 0x3f));
    }
    uVar5 = uVar5 & *(ulong *)(lVar10 + 0x40);
    lVar8 = lVar6;
    if (uVar5 == 0) goto LAB_104356000;
    do {
      uVar9 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 - 1 & uVar5;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | lVar6 << 6;
      while( true ) {
        uVar2 = *(undefined1 *)(*(long *)(lVar10 + 0x38) + uVar9);
        *(undefined1 *)(*(long *)(lVar4 + 0x30) + uVar9) =
             *(undefined1 *)(*(long *)(lVar10 + 0x30) + uVar9);
        *(undefined1 *)(*(long *)(lVar4 + 0x38) + uVar9) = uVar2;
        lVar8 = lVar6;
        if (uVar5 != 0) break;
LAB_104356000:
        do {
          lVar6 = lVar8 + 1;
          if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x104356074);
            (*pcVar3)();
          }
          if ((long)(uVar7 + 0x3f >> 6) <= lVar6) goto LAB_104356054;
          uVar5 = *(ulong *)(lVar1 + lVar6 * 8);
          lVar8 = lVar8 + 1;
        } while (uVar5 == 0);
        uVar9 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
        uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar5 = uVar5 - 1 & uVar5;
        uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | lVar6 * 0x40;
      }
    } while( true );
  }
LAB_104356054:
  _swift_release(lVar10);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 104356074; end: 10435633f;  */

void FUN_104356074(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  func_0x0001000285a8(0x113070498,&UNK_10dceee60);
  lVar9 = *unaff_x20;
  lVar5 = lVar9;
  __ss18_DictionaryStorageC4copy8originalAByxq_Gs05__RawaB0C_tFZ();
  if (*(long *)(lVar9 + 0x10) != 0) {
    lVar1 = lVar9 + 0x40;
    uVar6 = (1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar5 != lVar9 || lVar1 + uVar6 * 8 <= lVar5 + 0x40U) {
      _memmove(lVar5 + 0x40U,lVar1,uVar6 << 3);
    }
    lVar10 = 0;
    *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)(lVar9 + 0x10);
    uVar7 = 1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    uVar6 = 0xffffffffffffffff;
    if ((*(byte *)(lVar9 + 0x20) & 0x3f) < 6) {
      uVar6 = ~(-1L << (uVar7 & 0x3f));
    }
    uVar6 = uVar6 & *(ulong *)(lVar9 + 0x40);
    if (uVar6 == 0) goto LAB_104356150;
    do {
      uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar6 = uVar6 - 1 & uVar6;
      while( true ) {
        uVar8 = LZCOUNT(uVar8) | lVar10 << 6;
        puVar3 = (undefined8 *)(*(long *)(lVar9 + 0x38) + uVar8 * 0x10);
        uVar12 = puVar3[1];
        uVar11 = *puVar3;
        *(undefined1 *)(*(long *)(lVar5 + 0x30) + uVar8) =
             *(undefined1 *)(*(long *)(lVar9 + 0x30) + uVar8);
        puVar3 = (undefined8 *)(*(long *)(lVar5 + 0x38) + uVar8 * 0x10);
        puVar3[1] = uVar12;
        *puVar3 = uVar11;
        _swift_unknownObjectRetain(uVar11);
        if (uVar6 != 0) break;
LAB_104356150:
        do {
          lVar2 = lVar10 + 1;
          if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1043561d8);
            (*pcVar4)();
          }
          if ((long)(uVar7 + 0x3f >> 6) <= lVar2) goto LAB_1043561b0;
          uVar6 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar10 = lVar10 + 1;
        } while (uVar6 == 0);
        uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
        uVar6 = uVar6 - 1 & uVar6;
        lVar10 = lVar2;
      }
    } while( true );
  }
LAB_1043561b0:
  _swift_release(lVar9);
  *unaff_x20 = lVar5;
  return;
}



/* Entry: 104356340; end: 1043570d3;  */

void FUN_104356340(long param_1,ulong param_2)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  ulong uVar12;
  ulong *puVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  undefined1 auStack_a8 [72];
  
  lVar11 = *unaff_x20;
  lVar1 = *(long *)(lVar11 + 0x18);
  if (*(long *)(lVar11 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar14 = 0x113070910;
  func_0x0001000285a8(0x113070910,&UNK_10dceee90);
  lVar4 = lVar11;
  __ss18_DictionaryStorageC6resize8original8capacity4moveAByxq_Gs05__RawaB0C_SiSbtFZ
            (lVar11,lVar1,param_2,uVar14);
  if (*(long *)(lVar11 + 0x10) == 0) {
LAB_104356598:
    _swift_release(lVar11);
    *unaff_x20 = lVar4;
    return;
  }
  puVar13 = (ulong *)(lVar11 + 0x40);
  uVar8 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
    uVar12 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar12 = uVar12 & *puVar13;
  lVar1 = lVar4 + 0x40;
  lVar6 = 0;
  do {
    if (uVar12 == 0) {
      do {
        lVar16 = lVar6 + 1;
        if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1043565c8);
          (*pcVar3)();
        }
        if ((long)(uVar8 + 0x3f >> 6) <= lVar16) {
          if ((param_2 & 1) != 0) {
            uVar12 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
            if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
              *puVar13 = -1L << (uVar12 & 0x3f);
            }
            else {
              _bzero(puVar13,uVar12 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar11 + 0x10) = 0;
          }
          goto LAB_104356598;
        }
        uVar12 = puVar13[lVar16];
        lVar6 = lVar6 + 1;
      } while (uVar12 == 0);
      uVar5 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
    }
    else {
      uVar5 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
      lVar16 = lVar6;
    }
    uVar5 = LZCOUNT(uVar5) | lVar16 << 6;
    uVar15 = *(ulong *)(*(long *)(lVar11 + 0x30) + uVar5 * 8);
    uVar14 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar5 * 8);
    if ((param_2 & 1) == 0) {
      _swift_retain(uVar15);
      _objc_retain(uVar14);
    }
    __ss6HasherV5_seedABSi_tcfC(auStack_a8,*(undefined8 *)(lVar4 + 0x28));
    uVar9 = uVar15;
    __ss6HasherV8_combineyySuF();
    __ss6HasherV9_finalizeSiyF();
    uVar10 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    uVar9 = uVar9 & (uVar10 ^ 0xffffffffffffffff);
    uVar7 = uVar9 >> 6;
    uVar5 = -1L << (uVar9 & 0x3f) & (*(ulong *)(lVar1 + uVar7 * 8) ^ 0xffffffffffffffff);
    if (uVar5 == 0) {
      bVar2 = false;
      uVar5 = 0x3f - uVar10 >> 6;
      do {
        uVar9 = uVar7 + 1;
        if ((uVar9 == uVar5) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1043565cc);
          (*pcVar3)();
        }
        uVar7 = 0;
        if (uVar9 != uVar5) {
          uVar7 = uVar9;
        }
        bVar2 = (bool)(uVar9 == uVar5 | bVar2);
        uVar9 = *(ulong *)(lVar1 + uVar7 * 8);
      } while (uVar9 == 0xffffffffffffffff);
      uVar9 = ~uVar9;
      uVar5 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | uVar7 << 6;
    }
    else {
      uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | uVar9 & 0x7fffffffffffffc0;
    }
    uVar7 = uVar5 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar7) = 1L << (uVar5 & 0x3f) | *(ulong *)(lVar1 + uVar7);
    *(ulong *)(*(long *)(lVar4 + 0x30) + uVar5 * 8) = uVar15;
    *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar5 * 8) = uVar14;
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    lVar6 = lVar16;
  } while( true );
}



/* Entry: 1043570d4; end: 1043572cf;  */

undefined8 FUN_1043570d4(ulong *param_1,ulong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  ulong uVar4;
  ulong uVar5;
  ulong auStack_88 [9];
  
  uVar4 = *unaff_x20;
  if ((uVar4 & 0xc000000000000001) == 0) {
    __ss6HasherV5_seedABSi_tcfC(auStack_88,*(undefined8 *)(uVar4 + 0x28));
    uVar5 = param_2;
    __ss6HasherV8_combineyySuF();
    __ss6HasherV9_finalizeSiyF();
    uVar3 = -1L << ((ulong)*(byte *)(uVar4 + 0x20) & 0x3f);
    uVar5 = uVar5 & (uVar3 ^ 0xffffffffffffffff);
    if ((*(ulong *)(uVar4 + 0x38 + (uVar5 >> 6) * 8) >> (uVar5 & 0x3f) & 1) != 0) {
      do {
        if (*(ulong *)(*(long *)(uVar4 + 0x30) + uVar5 * 8) == param_2) {
          _swift_release(param_2);
          *param_1 = *(ulong *)(*(long *)(uVar4 + 0x30) + uVar5 * 8);
          _swift_retain();
          return 0;
        }
        uVar5 = uVar5 + 1 & ~uVar3;
      } while ((*(ulong *)(uVar4 + 0x38 + (uVar5 >> 6) * 8) >> (uVar5 & 0x3f) & 1) != 0);
    }
    _swift_isUniquelyReferenced_nonNull_native(*unaff_x20);
    auStack_88[0] = *unaff_x20;
    _swift_retain(param_2);
    FUN_1043574d0();
    *unaff_x20 = auStack_88[0];
  }
  else {
    uVar5 = uVar4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar4) {
      uVar5 = uVar4;
    }
    _swift_retain(param_2);
    _swift_bridgeObjectRetain(uVar4);
    uVar3 = param_2;
    __ss10__CocoaSetV6member3foryXlSgyXl_tF(param_2,uVar5);
    _swift_release(param_2);
    if (uVar3 != 0) {
      _swift_bridgeObjectRelease(uVar4);
      _swift_release(param_2);
      uVar2 = 0;
      auStack_88[0] = uVar3;
      func_0x00010434d014(0);
      _swift_dynamicCast(param_1,auStack_88,PTR___syXlN_11034f1a0 + 8,uVar2,7);
      return 0;
    }
    uVar3 = uVar5;
    __ss10__CocoaSetV5countSivg();
    if (SCARRY8(uVar3,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1043572d0);
      (*pcVar1)();
    }
    FUN_1043572d0(uVar5,uVar3 + 1);
    uVar3 = *(ulong *)(uVar5 + 0x10);
    auStack_88[0] = uVar5;
    if (uVar3 < *(ulong *)(uVar5 + 0x18)) {
      _swift_retain(param_2);
    }
    else {
      _swift_retain(param_2);
      FUN_104357978(uVar3 + 1);
      uVar5 = auStack_88[0];
    }
    FUN_104357bcc(param_2,uVar5);
    _swift_bridgeObjectRelease(uVar4);
    *unaff_x20 = uVar5;
  }
  *param_1 = param_2;
  return 1;
}



/* Entry: 1043572d0; end: 1043574cf;  */

undefined * FUN_1043572d0(undefined *param_1,long param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *apuStack_b8 [9];
  undefined *puStack_70;
  undefined *puStack_68;
  
  if (param_2 == 0) {
    _swift_unknownObjectRelease();
    puVar5 = PTR___swiftEmptySetSingleton_11034f1d8;
  }
  else {
    func_0x0001000285a8(0x113070920,&UNK_10dceee98);
    puVar5 = param_1;
    __ss11_SetStorageC7convert_8capacityAByxGs07__CocoaA0V_SitFZ(param_1,param_2);
    puStack_68 = puVar5;
    __ss10__CocoaSetV12makeIteratorAB0D0CyF();
    puVar6 = param_1;
    __ss10__CocoaSetV8IteratorC4nextyXlSgyF();
    if (puVar6 != (undefined *)0x0) {
      uVar7 = 0;
      func_0x00010434d014(0);
      puVar2 = PTR___syXlN_11034f1a0;
      do {
        apuStack_b8[0] = puVar6;
        _swift_dynamicCast(&puStack_70,apuStack_b8,puVar2 + 8,uVar7,7);
        puVar3 = puStack_70;
        if (*(ulong *)(puVar5 + 0x18) <= *(ulong *)(puVar5 + 0x10)) {
          FUN_104357978(*(ulong *)(puVar5 + 0x10) + 1);
          puVar5 = puStack_68;
        }
        __ss6HasherV5_seedABSi_tcfC(apuStack_b8,*(undefined8 *)(puVar5 + 0x28));
        puVar6 = puVar3;
        __ss6HasherV8_combineyySuF();
        __ss6HasherV9_finalizeSiyF();
        uVar11 = -1L << ((ulong)(byte)puVar5[0x20] & 0x3f);
        uVar10 = (ulong)puVar6 & (uVar11 ^ 0xffffffffffffffff);
        uVar8 = uVar10 >> 6;
        uVar9 = -1L << (uVar10 & 0x3f) &
                (*(ulong *)(puVar5 + uVar8 * 8 + 0x38) ^ 0xffffffffffffffff);
        if (uVar9 == 0) {
          bVar1 = false;
          uVar9 = 0x3f - uVar11 >> 6;
          do {
            uVar10 = uVar8 + 1;
            if ((uVar10 == uVar9) && (bVar1)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1043574d0);
              (*pcVar4)();
            }
            uVar8 = 0;
            if (uVar10 != uVar9) {
              uVar8 = uVar10;
            }
            bVar1 = (bool)(uVar10 == uVar9 | bVar1);
          } while (*(ulong *)(puVar5 + uVar8 * 8 + 0x38) == 0xffffffffffffffff);
          uVar9 = ~*(ulong *)(puVar5 + uVar8 * 8 + 0x38);
          uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
          uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
          uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
          uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
          uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar8 << 6;
        }
        else {
          uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
          uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
          uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
          uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
          uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar10 & 0x7fffffffffffffc0;
        }
        uVar8 = uVar9 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(puVar5 + uVar8 + 0x38) = 1L << (uVar9 & 0x3f) | *(ulong *)(puVar5 + uVar8 + 0x38)
        ;
        *(undefined **)(*(long *)(puVar5 + 0x30) + uVar9 * 8) = puVar3;
        *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
        __ss10__CocoaSetV8IteratorC4nextyXlSgyF();
      } while (puVar6 != (undefined *)0x0);
    }
    _swift_release(param_1);
  }
  return puVar5;
}



/* Entry: 1043574d0; end: 10435760f;  */

void FUN_1043574d0(ulong param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  long *unaff_x20;
  long lVar4;
  undefined1 auStack_88 [72];
  
  uVar2 = *(ulong *)(*unaff_x20 + 0x10);
  if (uVar2 < *(ulong *)(*unaff_x20 + 0x18)) {
    if ((param_3 & 1) == 0) {
      FUN_104357828();
    }
  }
  else {
    if ((param_3 & 1) == 0) {
      FUN_104357610(uVar2 + 1);
    }
    else {
      FUN_104357978();
    }
    lVar4 = *unaff_x20;
    __ss6HasherV5_seedABSi_tcfC(auStack_88,*(undefined8 *)(lVar4 + 0x28));
    param_2 = param_1;
    __ss6HasherV8_combineyySuF();
    __ss6HasherV9_finalizeSiyF();
    uVar2 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    param_2 = param_2 & (uVar2 ^ 0xffffffffffffffff);
    if ((*(ulong *)(lVar4 + 0x38 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0) {
      func_0x00010434d014(0);
      do {
        if (*(ulong *)(*(long *)(lVar4 + 0x30) + param_2 * 8) == param_1) {
          __ss50ELEMENT_TYPE_OF_SET_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF();
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x104357610);
          (*pcVar1)();
        }
        param_2 = param_2 + 1 & ~uVar2;
      } while ((*(ulong *)(lVar4 + 0x38 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
    }
  }
  lVar3 = *unaff_x20;
  lVar4 = lVar3 + (param_2 >> 6) * 8;
  *(ulong *)(lVar4 + 0x38) = *(ulong *)(lVar4 + 0x38) | 1L << (param_2 & 0x3f);
  *(ulong *)(*(long *)(lVar3 + 0x30) + param_2 * 8) = param_1;
  if (!SCARRY8(*(long *)(lVar3 + 0x10),1)) {
    *(long *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104357608);
  (*pcVar1)();
}



/* Entry: 104357610; end: 104357827;  */

void FUN_104357610(long param_1)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *unaff_x20;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined1 auStack_a8 [72];
  
  lVar13 = *unaff_x20;
  lVar1 = *(long *)(lVar13 + 0x18);
  if (*(long *)(lVar13 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar4 = 0x113070920;
  func_0x0001000285a8(0x113070920,&UNK_10dceee98);
  lVar5 = lVar13;
  __ss11_SetStorageC6resize8original8capacity4moveAByxGs05__RawaB0C_SiSbtFZ(lVar13,lVar1,0,uVar4);
  if (*(long *)(lVar13 + 0x10) == 0) {
LAB_1043577f0:
    _swift_release(lVar13);
    *unaff_x20 = lVar5;
    return;
  }
  uVar9 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
    uVar12 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar12 = uVar12 & *(ulong *)(lVar13 + 0x38);
  lVar1 = lVar5 + 0x38;
  lVar7 = 0;
  do {
    if (uVar12 == 0) {
      do {
        lVar15 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x104357824);
          (*pcVar3)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar15) goto LAB_1043577f0;
        uVar12 = ((ulong *)(lVar13 + 0x38))[lVar15];
        lVar7 = lVar7 + 1;
      } while (uVar12 == 0);
      uVar6 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
    }
    else {
      uVar6 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
      lVar15 = lVar7;
    }
    uVar14 = *(ulong *)(*(long *)(lVar13 + 0x30) + (LZCOUNT(uVar6) | lVar15 << 6) * 8);
    __ss6HasherV5_seedABSi_tcfC(auStack_a8,*(undefined8 *)(lVar5 + 0x28));
    uVar10 = uVar14;
    __ss6HasherV8_combineyySuF();
    __ss6HasherV9_finalizeSiyF();
    uVar11 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
    uVar10 = uVar10 & (uVar11 ^ 0xffffffffffffffff);
    uVar8 = uVar10 >> 6;
    uVar6 = -1L << (uVar10 & 0x3f) & (*(ulong *)(lVar1 + uVar8 * 8) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar2 = false;
      uVar6 = 0x3f - uVar11 >> 6;
      do {
        uVar10 = uVar8 + 1;
        if ((uVar10 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x104357828);
          (*pcVar3)();
        }
        uVar8 = 0;
        if (uVar10 != uVar6) {
          uVar8 = uVar10;
        }
        bVar2 = (bool)(uVar10 == uVar6 | bVar2);
        uVar10 = *(ulong *)(lVar1 + uVar8 * 8);
      } while (uVar10 == 0xffffffffffffffff);
      uVar10 = ~uVar10;
      uVar6 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar10 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar8) = 1L << (uVar6 & 0x3f) | *(ulong *)(lVar1 + uVar8);
    *(ulong *)(*(long *)(lVar5 + 0x30) + uVar6 * 8) = uVar14;
    *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
    _swift_retain(uVar14);
    lVar7 = lVar15;
  } while( true );
}



/* Entry: 104357828; end: 104357977;  */

void FUN_104357828(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  long lVar9;
  
  func_0x0001000285a8(0x113070920,&UNK_10dceee98);
  lVar8 = *unaff_x20;
  lVar4 = lVar8;
  __ss11_SetStorageC4copy8originalAByxGs05__RawaB0C_tFZ();
  if (*(long *)(lVar8 + 0x10) != 0) {
    lVar1 = lVar8 + 0x38;
    uVar5 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar4 != lVar8 || lVar1 + uVar5 * 8 <= lVar4 + 0x38U) {
      _memmove(lVar4 + 0x38U,lVar1,uVar5 << 3);
    }
    lVar9 = 0;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar8 + 0x10);
    uVar6 = 1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
    uVar5 = 0xffffffffffffffff;
    if ((*(byte *)(lVar8 + 0x20) & 0x3f) < 6) {
      uVar5 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar5 = uVar5 & *(ulong *)(lVar8 + 0x38);
    if (uVar5 == 0) goto LAB_104357904;
    do {
      uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar5 = uVar5 - 1 & uVar5;
      while( true ) {
        uVar7 = LZCOUNT(uVar7) | lVar9 << 6;
        *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar7 * 8) =
             *(undefined8 *)(*(long *)(lVar8 + 0x30) + uVar7 * 8);
        _swift_retain();
        if (uVar5 != 0) break;
LAB_104357904:
        do {
          lVar2 = lVar9 + 1;
          if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x104357978);
            (*pcVar3)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar2) goto LAB_104357950;
          uVar5 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar9 = lVar9 + 1;
        } while (uVar5 == 0);
        uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
        uVar5 = uVar5 - 1 & uVar5;
        lVar9 = lVar2;
      }
    } while( true );
  }
LAB_104357950:
  _swift_release(lVar8);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 104357978; end: 104357bcb;  */

void FUN_104357978(long param_1)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *unaff_x20;
  long lVar13;
  ulong *puVar14;
  ulong uVar15;
  long lVar16;
  undefined1 auStack_a8 [72];
  
  lVar13 = *unaff_x20;
  lVar1 = *(long *)(lVar13 + 0x18);
  if (*(long *)(lVar13 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar4 = 0x113070920;
  func_0x0001000285a8(0x113070920,&UNK_10dceee98);
  lVar5 = lVar13;
  __ss11_SetStorageC6resize8original8capacity4moveAByxGs05__RawaB0C_SiSbtFZ(lVar13,lVar1,1,uVar4);
  if (*(long *)(lVar13 + 0x10) == 0) {
LAB_104357b98:
    _swift_release(lVar13);
    *unaff_x20 = lVar5;
    return;
  }
  puVar14 = (ulong *)(lVar13 + 0x38);
  uVar9 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
    uVar12 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar12 = uVar12 & *puVar14;
  lVar1 = lVar5 + 0x38;
  lVar7 = 0;
  do {
    if (uVar12 == 0) {
      do {
        lVar16 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x104357bc8);
          (*pcVar3)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar16) {
          uVar12 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
          if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
            *puVar14 = -1L << (uVar12 & 0x3f);
          }
          else {
            _bzero(puVar14,uVar12 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(lVar13 + 0x10) = 0;
          goto LAB_104357b98;
        }
        uVar12 = puVar14[lVar16];
        lVar7 = lVar7 + 1;
      } while (uVar12 == 0);
      uVar6 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
    }
    else {
      uVar6 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
      lVar16 = lVar7;
    }
    uVar15 = *(ulong *)(*(long *)(lVar13 + 0x30) + (LZCOUNT(uVar6) | lVar16 << 6) * 8);
    __ss6HasherV5_seedABSi_tcfC(auStack_a8,*(undefined8 *)(lVar5 + 0x28));
    uVar10 = uVar15;
    __ss6HasherV8_combineyySuF();
    __ss6HasherV9_finalizeSiyF();
    uVar11 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
    uVar10 = uVar10 & (uVar11 ^ 0xffffffffffffffff);
    uVar8 = uVar10 >> 6;
    uVar6 = -1L << (uVar10 & 0x3f) & (*(ulong *)(lVar1 + uVar8 * 8) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar2 = false;
      uVar6 = 0x3f - uVar11 >> 6;
      do {
        uVar10 = uVar8 + 1;
        if ((uVar10 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x104357bcc);
          (*pcVar3)();
        }
        uVar8 = 0;
        if (uVar10 != uVar6) {
          uVar8 = uVar10;
        }
        bVar2 = (bool)(uVar10 == uVar6 | bVar2);
        uVar10 = *(ulong *)(lVar1 + uVar8 * 8);
      } while (uVar10 == 0xffffffffffffffff);
      uVar10 = ~uVar10;
      uVar6 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar10 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar8) = 1L << (uVar6 & 0x3f) | *(ulong *)(lVar1 + uVar8);
    *(ulong *)(*(long *)(lVar5 + 0x30) + uVar6 * 8) = uVar15;
    *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
    lVar7 = lVar16;
  } while( true );
}



/* Entry: 104357bcc; end: 104357c6b;  */

void FUN_104357bcc(ulong param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auStack_78 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_78,*(undefined8 *)(param_2 + 0x28));
  uVar2 = param_1;
  __ss6HasherV8_combineyySuF();
  __ss6HasherV9_finalizeSiyF();
  lVar1 = param_2 + 0x38;
  uVar3 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar2 = uVar2 & (uVar3 ^ 0xffffffffffffffff);
  __ss10_HashTableV8nextHole9atOrAfterAB6BucketVAF_tF(uVar2,lVar1,~uVar3);
  uVar3 = uVar2 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar3) = 1L << (uVar2 & 0x3f) | *(ulong *)(lVar1 + uVar3);
  *(ulong *)(*(long *)(param_2 + 0x30) + uVar2 * 8) = param_1;
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + 1;
  return;
}



/* Entry: 104357c6c; end: 104357cab;  */

void FUN_104357c6c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_104357cac();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 104357cac; end: 104357de7;  */

undefined *
FUN_104357cac(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104357de8);
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
    puVar3 = (undefined *)0x1130708f0;
    func_0x0001000285a8(0x1130708f0,&UNK_10dceee68);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x1130708f8;
    func_0x0001000285a8(0x1130708f8,&UNK_10dceee70);
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar7 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*param_5)(param_4);
  return puVar3;
}



/* Entry: 104357de8; end: 104357ed7;  */

undefined * FUN_104357de8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104357ed8);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112ec7e70;
    func_0x0001000285a8(0x112ec7e70,&UNK_10daea2d0);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = (long)puVar4 * 2 + -0x40;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar4,puVar1,uVar6);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Entry: 104357ed8; end: 104357fe3;  */

void FUN_104357ed8(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  long *unaff_x20;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  
  if (*(long *)(*unaff_x20 + 0x10) == 0) {
    return;
  }
  puVar5 = (ulong *)(param_1 + 0x38);
  uVar7 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar8 = 0xffffffffffffffff;
  if (-uVar7 < 0x40) {
    uVar8 = ~(-1L << (-uVar7 & 0x3f));
  }
  uVar8 = uVar8 & *puVar5;
  _swift_bridgeObjectRetain();
  lVar6 = 0;
  lVar1 = lVar6;
  while( true ) {
    for (; uVar8 != 0; uVar8 = uVar8 - 1 & uVar8) {
      uVar2 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
      uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      FUN_10435844c(*(undefined1 *)
                     (*(long *)(param_1 + 0x30) + LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) +
                     lVar1 * 0x40));
      lVar6 = lVar1;
    }
    bVar4 = SCARRY8(lVar1,1);
    lVar1 = lVar1 + 1;
    if (bVar4) break;
    if ((long)(0x3f - uVar7 >> 6) <= lVar1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff,puVar5,~uVar7,lVar6,0);
      return;
    }
    uVar8 = puVar5[lVar1];
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x104357fe4);
  (*pcVar3)();
}



/* Entry: 104357fe4; end: 10435844b;  */

/* WARNING: Removing unreachable block (ram,0x0001043583f8) */
/* WARNING: Removing unreachable block (ram,0x000104358408) */

undefined * FUN_104357fe4(long param_1,undefined *param_2)

{
  undefined *puVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *puVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined auStack_100 [8];
  ulong uStack_f8;
  undefined *puStack_e8;
  undefined1 auStack_e0 [16];
  undefined *puStack_d0;
  ulong uStack_c8;
  long *plStack_c0;
  long lStack_90;
  ulong *puStack_88;
  ulong uStack_80;
  long lStack_78;
  ulong uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_2 + 0x10) != 0) {
    puVar12 = (ulong *)(param_1 + 0x38);
    uVar9 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
    uVar15 = 0xffffffffffffffff;
    if (-uVar9 < 0x40) {
      uVar15 = ~(-1L << (-uVar9 & 0x3f));
    }
    uVar15 = uVar15 & *puVar12;
    uStack_f8 = 0x800000010f0c6e30;
    puVar1 = param_2 + 0x38;
    _swift_bridgeObjectRetain();
    lVar13 = 0;
    lVar14 = lVar13;
    do {
      while (uVar15 != 0) {
        uVar11 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        uVar15 = uVar15 - 1 & uVar15;
        bVar2 = *(byte *)(*(long *)(param_1 + 0x30) + LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) +
                         lVar13 * 0x40);
        lStack_90 = param_1;
        puStack_88 = puVar12;
        uStack_80 = ~uVar9;
        lStack_78 = lVar13;
        uStack_70 = uVar15;
        __ss6HasherV5_seedABSi_tcfC(auStack_e0,*(undefined8 *)(param_2 + 0x28));
        if (bVar2 < 4) {
          if (bVar2 < 2) {
            if (bVar2 == 0) {
              uVar7 = 0x657469726f766166;
              uVar11 = 0xe900000000000073;
            }
            else {
              uVar7 = 0x6572616873;
              uVar11 = 0xe500000000000000;
            }
          }
          else if (bVar2 == 2) {
            uVar7 = 0x75706e4974616863;
            uVar11 = 0xe900000000000074;
          }
          else {
            uVar7 = 0x7265726f6c707865;
            uVar11 = 0xe800000000000000;
          }
        }
        else if (bVar2 < 6) {
          if (bVar2 == 4) {
            uVar7 = 0x6f6272656461656c;
            uVar11 = 0xeb00000000647261;
          }
          else {
            uVar7 = 0x6f546172656d6163;
            uVar11 = 0xec000000656c6767;
          }
        }
        else if (bVar2 == 6) {
          uVar7 = 0x736e654c4941796d;
          uVar11 = 0xed00006572616853;
        }
        else {
          uVar7 = 0xd000000000000011;
          uVar11 = uStack_f8;
        }
        __sSS4hash4intoys6HasherVz_tF(auStack_e0,uVar7,uVar11);
        _swift_bridgeObjectRelease();
        __ss6HasherV9_finalizeSiyF();
        uVar10 = -1L << ((ulong)(byte)param_2[0x20] & 0x3f);
        uVar11 = uVar11 & (uVar10 ^ 0xffffffffffffffff);
        lVar14 = lVar13;
        if ((*(ulong *)(puVar1 + (uVar11 >> 6) * 8) >> (uVar11 & 0x3f) & 1) != 0) {
          uVar8 = (ulong)(byte)param_2[0x20] & 0x3f;
          do {
            if (*(byte *)(*(long *)(param_2 + 0x30) + uVar11) == bVar2) {
              uVar9 = (1L << uVar8) + 0x3fU >> 6;
              plStack_c0 = &lStack_90;
              uVar15 = uVar9 << 3;
              puStack_d0 = param_2;
              uStack_c8 = uVar11;
              if ((uint)uVar8 < 0xe) {
LAB_104358294:
                (*(code *)PTR____chkstk_darwin_11034bd40)();
                puVar6 = auStack_100 + -(uVar15 + 0xf & 0x3ffffffffffffff0);
                _memcpy(puVar6,puVar1);
                FUN_1043587f0(puVar6,uVar9,param_2,uVar11,&lStack_90);
              }
              else {
                iVar5 = 2;
                func_0x000100029b9c(2,0xf,4,0);
                if ((iVar5 != 0) &&
                   (uVar10 = uVar15, _swift_stdlib_isStackAllocationSafe(uVar15,8),
                   (uVar10 & 1) != 0)) goto LAB_104358294;
                _swift_slowAlloc(uVar15,0xffffffffffffffff);
                if (uVar15 == 0) goto LAB_1043583f4;
                _memcpy();
                FUN_10435a8b8(&puStack_e8,uVar15,uVar9);
                _swift_slowDealloc(uVar15,0xffffffffffffffff,0xffffffffffffffff);
                puVar6 = puStack_e8;
              }
              _swift_release(param_2);
              func_0x0001033b2430(lStack_90,puStack_88,uStack_80,lStack_78,uStack_70);
              param_2 = puVar6;
              goto LAB_104358328;
            }
            uVar11 = uVar11 + 1 & ~uVar10;
          } while ((*(ulong *)(puVar1 + (uVar11 >> 6) * 8) >> (uVar11 & 0x3f) & 1) != 0);
        }
      }
      bVar4 = SCARRY8(lVar13,1);
      lVar13 = lVar13 + 1;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x104358368);
        (*pcVar3)();
      }
      if ((long)(0x3f - uVar9 >> 6) <= lVar13) goto LAB_104358310;
      uVar15 = puVar12[lVar13];
    } while( true );
  }
  _swift_release(param_2);
  param_2 = PTR___swiftEmptySetSingleton_11034f1d8;
LAB_104358328:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_2;
  }
  ___stack_chk_fail();
LAB_1043583f4:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1043583f8);
  (*pcVar3)();
LAB_104358310:
  func_0x0001033b2430(param_1,puVar12,~uVar9,lVar14,0);
  goto LAB_104358328;
}



/* Entry: 10435844c; end: 10435852b;  */

undefined1 FUN_10435844c(undefined8 param_1)

{
  undefined1 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  ulong uVar4;
  
  uVar4 = *unaff_x20;
  uVar2 = *(ulong *)(uVar4 + 0x28);
  func_0x0001028c0dc0(uVar2,param_1);
  uVar3 = -1L << ((ulong)*(byte *)(uVar4 + 0x20) & 0x3f);
  uVar2 = uVar2 & (uVar3 ^ 0xffffffffffffffff);
  if ((*(ulong *)(uVar4 + 0x38 + (uVar2 >> 6) * 8) >> (uVar2 & 0x3f) & 1) != 0) {
    do {
      if ((uint)*(byte *)(*(long *)(uVar4 + 0x30) + uVar2) == ((uint)param_1 & 0xff)) {
        uVar3 = *unaff_x20;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar4 = *unaff_x20;
        if ((uVar3 & 1) == 0) {
          func_0x0001033b1da0();
        }
        uVar1 = *(undefined1 *)(*(long *)(uVar4 + 0x30) + uVar2);
        FUN_10435852c(uVar2);
        *unaff_x20 = uVar4;
        return uVar1;
      }
      uVar2 = uVar2 + 1 & ~uVar3;
    } while ((*(ulong *)(uVar4 + 0x38 + (uVar2 >> 6) * 8) >> (uVar2 & 0x3f) & 1) != 0);
  }
  return 8;
}



/* Entry: 10435852c; end: 1043587ef;  */

void FUN_10435852c(ulong param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  byte bVar4;
  code *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_a8 [72];
  
  lVar9 = *unaff_x20;
  lVar1 = lVar9 + 0x38;
  uVar8 = -1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
  uVar10 = param_1 + 1 & (uVar8 ^ 0xffffffffffffffff);
  uVar11 = 1L << (uVar10 & 0x3f);
  if ((uVar11 & *(ulong *)(lVar1 + (uVar10 >> 6) * 8)) == 0) {
    uVar8 = param_1 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar8) = *(ulong *)(lVar1 + uVar8) & (-1L << (param_1 & 0x3f)) - 1U;
  }
  else {
    uVar8 = ~uVar8;
    uVar7 = param_1;
    __ss10_HashTableV12previousHole6beforeAB6BucketVAF_tF(param_1,lVar1,uVar8);
    if ((*(ulong *)(lVar1 + (uVar10 >> 6) * 8) & uVar11) != 0) {
      uVar11 = uVar7 + 1 & uVar8;
      do {
        bVar4 = *(byte *)(*(long *)(lVar9 + 0x30) + uVar10);
        __ss6HasherV5_seedABSi_tcfC(auStack_a8,*(undefined8 *)(lVar9 + 0x28));
        if (bVar4 < 4) {
          if (bVar4 < 2) {
            if (bVar4 == 0) {
              uVar6 = 0x657469726f766166;
              uVar7 = 0xe900000000000073;
            }
            else {
              uVar6 = 0x6572616873;
              uVar7 = 0xe500000000000000;
            }
          }
          else if (bVar4 == 2) {
            uVar6 = 0x75706e4974616863;
            uVar7 = 0xe900000000000074;
          }
          else {
            uVar6 = 0x7265726f6c707865;
            uVar7 = 0xe800000000000000;
          }
        }
        else if (bVar4 < 6) {
          if (bVar4 == 4) {
            uVar6 = 0x6f6272656461656c;
            uVar7 = 0xeb00000000647261;
          }
          else {
            uVar6 = 0x6f546172656d6163;
            uVar7 = 0xec000000656c6767;
          }
        }
        else {
          uVar6 = 0x736e654c4941796d;
          uVar7 = 0xed00006572616853;
          if (bVar4 != 6) {
            uVar6 = 0xd000000000000011;
            uVar7 = 0x800000010f0c6e30;
          }
        }
        __sSS4hash4intoys6HasherVz_tF(auStack_a8,uVar6,uVar7);
        _swift_bridgeObjectRelease();
        __ss6HasherV9_finalizeSiyF();
        uVar7 = uVar7 & uVar8;
        if ((long)param_1 < (long)uVar11) {
          if (uVar7 < uVar11) {
LAB_104358744:
            if ((long)param_1 < (long)uVar7) goto LAB_1043585ec;
          }
          puVar2 = (undefined1 *)(*(long *)(lVar9 + 0x30) + param_1);
          puVar3 = (undefined1 *)(*(long *)(lVar9 + 0x30) + uVar10);
          if ((param_1 != uVar10) || (puVar3 + 1 <= puVar2)) {
            *puVar2 = *puVar3;
            param_1 = uVar10;
          }
        }
        else if (uVar11 <= uVar7) goto LAB_104358744;
LAB_1043585ec:
        uVar10 = uVar10 + 1 & uVar8;
      } while ((*(ulong *)(lVar1 + (uVar10 >> 6) * 8) >> (uVar10 & 0x3f) & 1) != 0);
    }
    uVar8 = param_1 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar8) = (-1L << (param_1 & 0x3f)) - 1U & *(ulong *)(lVar1 + uVar8);
  }
  if (SBORROW8(*(long *)(lVar9 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1043587f0);
    (*pcVar5)();
  }
  *(long *)(lVar9 + 0x10) = *(long *)(lVar9 + 0x10) + -1;
  *(int *)(lVar9 + 0x24) = *(int *)(lVar9 + 0x24) + 1;
  return;
}



/* Entry: 1043587f0; end: 104358ae7;  */

void FUN_1043587f0(long param_1,undefined8 param_2,long param_3,ulong param_4,long *param_5)

{
  long lVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uStack_b8;
  undefined1 auStack_a8 [72];
  
  lVar6 = *(long *)(param_3 + 0x10);
  uVar8 = param_4 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(param_1 + uVar8) = *(ulong *)(param_1 + uVar8) & (-1L << (param_4 & 0x3f)) - 1U;
  lVar6 = lVar6 + -1;
  uStack_b8 = 0x800000010f0c6e30;
LAB_10435887c:
  do {
    do {
      lVar1 = param_5[3];
      uVar8 = param_5[4];
      lVar9 = lVar1;
      if (uVar8 == 0) {
        uVar7 = param_5[2] + 0x40U >> 6;
        lVar12 = lVar1;
        do {
          lVar9 = lVar12 + 1;
          if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x104358ae4);
            (*pcVar3)();
          }
          if ((long)uVar7 <= lVar9) {
            if ((long)uVar7 <= lVar1 + 1) {
              uVar7 = lVar1 + 1;
            }
            param_5[3] = uVar7 - 1;
            param_5[4] = 0;
            _swift_retain(param_3);
            FUN_104358ae8(param_1,param_2,lVar6,param_3);
            return;
          }
          uVar8 = *(ulong *)(param_5[1] + lVar9 * 8);
          lVar12 = lVar12 + 1;
        } while (uVar8 == 0);
      }
      uVar7 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      bVar2 = *(byte *)(*(long *)(*param_5 + 0x30) + LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) +
                       lVar9 * 0x40);
      param_5[3] = lVar9;
      param_5[4] = uVar8 - 1 & uVar8;
      __ss6HasherV5_seedABSi_tcfC(auStack_a8,*(undefined8 *)(param_3 + 0x28));
      if (bVar2 < 4) {
        if (bVar2 < 2) {
          if (bVar2 == 0) {
            uVar5 = 0x657469726f766166;
            uVar8 = 0xe900000000000073;
          }
          else {
            uVar5 = 0x6572616873;
            uVar8 = 0xe500000000000000;
          }
        }
        else if (bVar2 == 2) {
          uVar5 = 0x75706e4974616863;
          uVar8 = 0xe900000000000074;
        }
        else {
          uVar5 = 0x7265726f6c707865;
          uVar8 = 0xe800000000000000;
        }
      }
      else if (bVar2 < 6) {
        if (bVar2 == 4) {
          uVar5 = 0x6f6272656461656c;
          uVar8 = 0xeb00000000647261;
        }
        else {
          uVar5 = 0x6f546172656d6163;
          uVar8 = 0xec000000656c6767;
        }
      }
      else if (bVar2 == 6) {
        uVar5 = 0x736e654c4941796d;
        uVar8 = 0xed00006572616853;
      }
      else {
        uVar5 = 0xd000000000000011;
        uVar8 = uStack_b8;
      }
      __sSS4hash4intoys6HasherVz_tF(auStack_a8,uVar5,uVar8);
      _swift_bridgeObjectRelease();
      __ss6HasherV9_finalizeSiyF();
      uVar11 = -1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
      uVar8 = uVar8 & (uVar11 ^ 0xffffffffffffffff);
      uVar7 = uVar8 >> 6;
      uVar10 = 1L << (uVar8 & 0x3f);
    } while ((uVar10 & *(ulong *)(param_3 + 0x38 + uVar7 * 8)) == 0);
    if (*(byte *)(*(long *)(param_3 + 0x30) + uVar8) != bVar2) {
      do {
        uVar8 = uVar8 + 1 & ~uVar11;
        uVar7 = uVar8 >> 6;
        uVar10 = 1L << (uVar8 & 0x3f);
        if ((uVar10 & *(ulong *)(param_3 + 0x38 + uVar7 * 8)) == 0) goto LAB_10435887c;
      } while (*(byte *)(*(long *)(param_3 + 0x30) + uVar8) != bVar2);
    }
    uVar8 = *(ulong *)(param_1 + uVar7 * 8);
    *(ulong *)(param_1 + uVar7 * 8) = uVar8 & (uVar10 ^ 0xffffffffffffffff);
    if ((uVar8 & uVar10) != 0) {
      bVar4 = SBORROW8(lVar6,1);
      lVar6 = lVar6 + -1;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x104358ae8);
        (*pcVar3)();
      }
      if (lVar6 == 0) {
        return;
      }
    }
  } while( true );
}



/* Entry: 104358ae8; end: 104358e13;  */

undefined * FUN_104358ae8(ulong *param_1,long param_2,undefined *param_3,undefined *param_4)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uStack_b0;
  undefined1 auStack_a8 [72];
  
  puVar4 = PTR___swiftEmptySetSingleton_11034f1d8;
  if (param_3 != (undefined *)0x0) {
    if (param_3 == *(undefined **)(param_4 + 0x10)) {
      return param_4;
    }
    func_0x0001000285a8(0x112f61960,&UNK_10dbbe210);
    puVar4 = param_3;
    __ss11_SetStorageC8allocate8capacityAByxGSi_tFZ();
    if (param_2 < 1) {
      uVar12 = 0;
    }
    else {
      uVar12 = *param_1;
    }
    uStack_b0 = 0x800000010f0c6e30;
    lVar7 = 0;
    do {
      if (uVar12 == 0) {
        do {
          lVar11 = lVar7 + 1;
          if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x104358e0c);
            (*pcVar2)();
          }
          if (param_2 <= lVar11) goto LAB_104358b64;
          uVar12 = param_1[lVar11];
          lVar7 = lVar7 + 1;
        } while (uVar12 == 0);
        uVar6 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
        uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
        uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
        uVar12 = uVar12 - 1 & uVar12;
      }
      else {
        uVar6 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
        uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
        uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
        uVar12 = uVar12 - 1 & uVar12;
        lVar11 = lVar7;
      }
      bVar1 = *(byte *)(*(long *)(param_4 + 0x30) + (LZCOUNT(uVar6) | lVar11 << 6));
      __ss6HasherV5_seedABSi_tcfC(auStack_a8,*(undefined8 *)(puVar4 + 0x28));
      if (bVar1 < 4) {
        if (bVar1 < 2) {
          if (bVar1 == 0) {
            uVar5 = 0x657469726f766166;
            uVar6 = 0xe900000000000073;
          }
          else {
            uVar5 = 0x6572616873;
            uVar6 = 0xe500000000000000;
          }
        }
        else if (bVar1 == 2) {
          uVar5 = 0x75706e4974616863;
          uVar6 = 0xe900000000000074;
        }
        else {
          uVar5 = 0x7265726f6c707865;
          uVar6 = 0xe800000000000000;
        }
      }
      else if (bVar1 < 6) {
        if (bVar1 == 4) {
          uVar5 = 0x6f6272656461656c;
          uVar6 = 0xeb00000000647261;
        }
        else {
          uVar5 = 0x6f546172656d6163;
          uVar6 = 0xec000000656c6767;
        }
      }
      else if (bVar1 == 6) {
        uVar5 = 0x736e654c4941796d;
        uVar6 = 0xed00006572616853;
      }
      else {
        uVar5 = 0xd000000000000011;
        uVar6 = uStack_b0;
      }
      __sSS4hash4intoys6HasherVz_tF(auStack_a8,uVar5,uVar6);
      _swift_bridgeObjectRelease();
      __ss6HasherV9_finalizeSiyF();
      uVar10 = -1L << ((ulong)(byte)puVar4[0x20] & 0x3f);
      uVar6 = uVar6 & (uVar10 ^ 0xffffffffffffffff);
      uVar8 = uVar6 >> 6;
      uVar9 = -1L << (uVar6 & 0x3f) & (*(ulong *)(puVar4 + uVar8 * 8 + 0x38) ^ 0xffffffffffffffff);
      if (uVar9 == 0) {
        bVar3 = false;
        uVar6 = 0x3f - uVar10 >> 6;
        do {
          uVar9 = uVar8 + 1;
          if ((uVar9 == uVar6) && (bVar3)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x104358e10);
            (*pcVar2)();
          }
          uVar8 = 0;
          if (uVar9 != uVar6) {
            uVar8 = uVar9;
          }
          bVar3 = (bool)(uVar9 == uVar6 | bVar3);
        } while (*(ulong *)(puVar4 + uVar8 * 8 + 0x38) == 0xffffffffffffffff);
        uVar6 = ~*(ulong *)(puVar4 + uVar8 * 8 + 0x38);
        uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
        uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
      }
      else {
        uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
        uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar6 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar6 & 0x7fffffffffffffc0;
      }
      uVar9 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar4 + uVar9 + 0x38) = 1L << (uVar6 & 0x3f) | *(ulong *)(puVar4 + uVar9 + 0x38);
      *(byte *)(*(long *)(puVar4 + 0x30) + uVar6) = bVar1;
      *(long *)(puVar4 + 0x10) = *(long *)(puVar4 + 0x10) + 1;
      bVar3 = SBORROW8((long)param_3,1);
      param_3 = param_3 + -1;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104358e14);
        (*pcVar2)();
      }
      lVar7 = lVar11;
    } while (param_3 != (undefined *)0x0);
  }
LAB_104358b64:
  _swift_release(param_4);
  return puVar4;
}



/* Entry: 104358e14; end: 104358fa3;  */

void FUN_104358e14(long param_1,undefined8 param_2,long param_3,code *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long unaff_x21;
  long lVar11;
  long lStack_98;
  ulong uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_51;
  
  lStack_98 = 0;
  uVar9 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uStack_80 = 0xffffffffffffffff;
  if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
    uStack_80 = ~(-1L << (uVar9 & 0x3f));
  }
  uStack_80 = uStack_80 & *(ulong *)(param_3 + 0x40);
  lVar8 = 0;
  do {
    if (uStack_80 == 0) {
      do {
        lVar11 = lVar8 + 1;
        if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x104358fa4);
          (*pcVar4)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar11) {
          FUN_104358fa4(param_1,param_2,lStack_98,param_3);
          return;
        }
        uStack_80 = ((ulong *)(param_3 + 0x40))[lVar11];
        lVar8 = lVar8 + 1;
      } while (uStack_80 == 0);
      uVar7 = (uStack_80 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_80 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uStack_80 = uStack_80 - 1 & uStack_80;
    }
    else {
      uVar7 = (uStack_80 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_80 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uStack_80 = uStack_80 - 1 & uStack_80;
      lVar11 = lVar8;
    }
    uVar7 = LZCOUNT(uVar7);
    uVar10 = uVar7 | lVar11 << 6;
    uStack_51 = *(undefined1 *)(*(long *)(param_3 + 0x30) + uVar10);
    puVar1 = (undefined8 *)(*(long *)(param_3 + 0x38) + uVar10 * 0x10);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    uStack_70 = uVar2;
    uStack_68 = uVar3;
    func_0x00010434c9dc(uVar2,uVar3);
    puVar6 = &uStack_51;
    (*param_4)(puVar6,&uStack_70);
    func_0x00010434d2d8(uVar2,uVar3);
    if (unaff_x21 != 0) {
      return;
    }
    lVar8 = lVar11;
    if (((ulong)puVar6 & 1) != 0) {
      uVar10 = (uVar7 & 0xffffffffffffffc0 | lVar11 << 6) >> 3;
      *(ulong *)(param_1 + uVar10) = *(ulong *)(param_1 + uVar10) | 1L << (uVar7 & 0x3f);
      bVar5 = SCARRY8(lStack_98,1);
      lStack_98 = lStack_98 + 1;
      if (bVar5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x104358f6c);
        (*pcVar4)();
      }
    }
  } while( true );
}



/* Entry: 104358fa4; end: 10435931f;  */

undefined * FUN_104358fa4(ulong *param_1,long param_2,undefined *param_3,undefined *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined8 uVar6;
  code *pcVar7;
  bool bVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong uStack_c8;
  ulong uStack_b8;
  undefined1 auStack_a8 [72];
  
  puVar9 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (param_3 != (undefined *)0x0) {
    if (param_3 == *(undefined **)(param_4 + 0x10)) {
      _swift_retain(param_4);
      puVar9 = param_4;
    }
    else {
      func_0x0001000285a8(0x1130704a0,&UNK_10dcee790);
      puVar9 = param_3;
      __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
      if (param_2 < 1) {
        uStack_b8 = 0;
      }
      else {
        uStack_b8 = *param_1;
      }
      uStack_c8 = 0x800000010f0c6e30;
      lVar11 = 0;
      do {
        if (uStack_b8 == 0) {
          do {
            lVar16 = lVar11 + 1;
            if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x104359318);
              (*pcVar7)();
            }
            if (param_2 <= lVar16) {
              return puVar9;
            }
            uStack_b8 = param_1[lVar16];
            lVar11 = lVar11 + 1;
          } while (uStack_b8 == 0);
          uVar10 = (uStack_b8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_b8 & 0x5555555555555555) << 1;
          uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
          uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
          uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
          uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
          uStack_b8 = uStack_b8 - 1 & uStack_b8;
        }
        else {
          uVar10 = (uStack_b8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_b8 & 0x5555555555555555) << 1;
          uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
          uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
          uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
          uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
          uStack_b8 = uStack_b8 - 1 & uStack_b8;
          lVar16 = lVar11;
        }
        uVar10 = LZCOUNT(uVar10) | lVar16 << 6;
        puVar1 = (undefined8 *)(*(long *)(param_4 + 0x38) + uVar10 * 0x10);
        bVar5 = *(byte *)(*(long *)(param_4 + 0x30) + uVar10);
        uVar3 = *puVar1;
        uVar4 = puVar1[1];
        __ss6HasherV5_seedABSi_tcfC(auStack_a8,*(undefined8 *)(puVar9 + 0x28));
        uVar12 = 0x736e654c4941796d;
        if (bVar5 != 6) {
          uVar12 = 0xd000000000000011;
        }
        uVar10 = 0xed00006572616853;
        if (bVar5 != 6) {
          uVar10 = uStack_c8;
        }
        uVar2 = 0x6f6272656461656c;
        if (bVar5 != 4) {
          uVar2 = 0x6f546172656d6163;
        }
        uVar15 = 0xeb00000000647261;
        if (bVar5 != 4) {
          uVar15 = 0xec000000656c6767;
        }
        if (bVar5 < 6) {
          uVar10 = uVar15;
          uVar12 = uVar2;
        }
        uVar2 = 0x75706e4974616863;
        if (bVar5 != 2) {
          uVar2 = 0x7265726f6c707865;
        }
        uVar15 = 0xe900000000000073;
        uVar13 = 0xe800000000000000;
        if (bVar5 == 2) {
          uVar13 = 0xe900000000000074;
        }
        uVar6 = 0x657469726f766166;
        if (bVar5 != 0) {
          uVar15 = 0xe500000000000000;
          uVar6 = 0x6572616873;
        }
        if (bVar5 < 2) {
          uVar13 = uVar15;
          uVar2 = uVar6;
        }
        if (bVar5 < 4) {
          uVar10 = uVar13;
          uVar12 = uVar2;
        }
        func_0x00010434c9dc(uVar3,uVar4);
        __sSS4hash4intoys6HasherVz_tF(auStack_a8,uVar12,uVar10);
        _swift_bridgeObjectRelease();
        __ss6HasherV9_finalizeSiyF();
        uVar14 = -1L << ((ulong)(byte)puVar9[0x20] & 0x3f);
        uVar10 = uVar10 & (uVar14 ^ 0xffffffffffffffff);
        uVar13 = uVar10 >> 6;
        uVar15 = -1L << (uVar10 & 0x3f) &
                 (*(ulong *)(puVar9 + uVar13 * 8 + 0x40) ^ 0xffffffffffffffff);
        if (uVar15 == 0) {
          bVar8 = false;
          uVar10 = 0x3f - uVar14 >> 6;
          do {
            uVar15 = uVar13 + 1;
            if ((uVar15 == uVar10) && (bVar8)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x10435931c);
              (*pcVar7)();
            }
            uVar13 = 0;
            if (uVar15 != uVar10) {
              uVar13 = uVar15;
            }
            bVar8 = (bool)(uVar15 == uVar10 | bVar8);
          } while (*(ulong *)(puVar9 + uVar13 * 8 + 0x40) == 0xffffffffffffffff);
          uVar10 = ~*(ulong *)(puVar9 + uVar13 * 8 + 0x40);
          uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
          uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
          uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
          uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
          uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar13 << 6;
        }
        else {
          uVar15 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
          uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
          uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
          uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
          uVar10 = LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) | uVar10 & 0x7fffffffffffffc0;
        }
        uVar15 = uVar10 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(puVar9 + uVar15 + 0x40) =
             1L << (uVar10 & 0x3f) | *(ulong *)(puVar9 + uVar15 + 0x40);
        *(byte *)(*(long *)(puVar9 + 0x30) + uVar10) = bVar5;
        puVar1 = (undefined8 *)(*(long *)(puVar9 + 0x38) + uVar10 * 0x10);
        *puVar1 = uVar3;
        puVar1[1] = uVar4;
        *(long *)(puVar9 + 0x10) = *(long *)(puVar9 + 0x10) + 1;
        bVar8 = SBORROW8((long)param_3,1);
        param_3 = param_3 + -1;
        if (bVar8) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x104359320);
          (*pcVar7)();
        }
        lVar11 = lVar16;
      } while (param_3 != (undefined *)0x0);
    }
  }
  return puVar9;
}



/* Entry: 104359320; end: 10435943b;  */

void FUN_104359320(ulong *param_1,code *param_2,code *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puStack_70;
  undefined *puStack_68;
  long lStack_60;
  ulong uStack_58;
  undefined1 auStack_48 [8];
  
  uVar4 = *param_1;
  uVar1 = uVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar1 & 1) == 0) {
    FUN_10435a164();
  }
  uVar6 = *(ulong *)(uVar4 + 0x10);
  lStack_60 = uVar4 + 0x20;
  uVar1 = uVar6;
  uStack_58 = uVar6;
  __ss22_minimumMergeRunLengthyS2iF();
  if ((long)uVar1 < (long)uVar6) {
    puVar5 = (undefined *)(uVar6 >> 1);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (1 < uVar6) {
      uVar2 = 0x1130708f8;
      func_0x0001000285a8(0x1130708f8,&UNK_10dceee70);
      puVar3 = puVar5;
      __ss15ContiguousArrayV28_allocateBufferUninitialized15minimumCapacitys01_abD0VyxGSi_tFZ
                (puVar5,uVar2);
      *(undefined **)(puVar3 + 0x10) = puVar5;
    }
    puStack_70 = puVar3 + 0x20;
    puStack_68 = puVar5;
    (*param_3)(&puStack_70,auStack_48,&lStack_60,uVar1);
    *(undefined8 *)(puVar3 + 0x10) = 0;
    _swift_release(puVar3);
  }
  else if (uVar6 != 0) {
    (*param_2)(0,uVar6,1,&lStack_60);
  }
  *param_1 = uVar4;
  return;
}



/* Entry: 10435943c; end: 104359997;  */

void FUN_10435943c(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong *puVar13;
  ulong uVar14;
  long lVar15;
  long unaff_x21;
  long lVar16;
  ulong *puVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar18 = param_3[1];
  if (0 < lVar18) {
    lVar9 = 0;
    do {
      lVar16 = lVar9 + 1;
      if (lVar16 < lVar18) {
        puVar13 = (ulong *)(*param_3 + lVar16 * 0x10);
        uVar14 = *puVar13;
        uVar7 = puVar13[1];
        lVar22 = lVar9 * 0x10;
        puVar13 = (ulong *)(*param_3 + lVar22);
        uVar23 = *puVar13;
        uVar6 = uVar14;
        _swift_getObjectType();
        _swift_unknownObjectRetain(uVar14);
        _swift_unknownObjectRetain(uVar23);
        FUN_10434d2a8(uVar6,uVar7);
        uVar6 = *(ulong *)(&UNK_10dceeea8 + (uVar6 & 0xff) * 8);
        uVar7 = uVar23;
        _swift_getObjectType();
        FUN_10434d2a8();
        uVar7 = *(ulong *)(&UNK_10dceeea8 + (uVar7 & 0xff) * 8);
        _swift_unknownObjectRelease(uVar14);
        _swift_unknownObjectRelease(uVar23);
        puVar13 = puVar13 + 3;
        lVar8 = lVar9 + 2;
        lVar19 = lVar16;
        lVar11 = lVar22;
        do {
          lVar15 = lVar19;
          lVar16 = lVar8;
          lVar11 = lVar11 + 0x10;
          if (lVar18 <= lVar16) break;
          uVar14 = puVar13[1];
          uVar20 = puVar13[2];
          uVar21 = puVar13[-1];
          uVar23 = uVar14;
          _swift_getObjectType();
          _swift_unknownObjectRetain(uVar14);
          _swift_unknownObjectRetain(uVar21);
          FUN_10434d2a8(uVar23,uVar20);
          uVar20 = *(ulong *)(&UNK_10dceeea8 + (uVar23 & 0xff) * 8);
          uVar23 = uVar21;
          _swift_getObjectType();
          FUN_10434d2a8();
          uVar23 = *(ulong *)(&UNK_10dceeea8 + (uVar23 & 0xff) * 8);
          _swift_unknownObjectRelease(uVar14);
          _swift_unknownObjectRelease(uVar21);
          puVar13 = puVar13 + 2;
          lVar8 = lVar16 + 1;
          lVar19 = lVar15 + 1;
        } while (uVar6 < uVar7 != uVar23 <= uVar20);
        if (uVar6 < uVar7) {
          if (lVar16 < lVar9) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10435996c);
            (*pcVar1)();
          }
          if (lVar9 < lVar16) {
            lVar8 = *param_3;
            puVar10 = (undefined8 *)(lVar8 + lVar11);
            puVar12 = (undefined8 *)(lVar8 + lVar22);
            lVar18 = lVar9;
            do {
              if (lVar18 != lVar15) {
                if (lVar8 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x10435998c);
                  (*pcVar1)();
                }
                uVar25 = puVar12[1];
                uVar24 = *puVar12;
                uVar26 = *puVar10;
                puVar12[1] = puVar10[1];
                *puVar12 = uVar26;
                puVar10[1] = uVar25;
                *puVar10 = uVar24;
              }
              lVar18 = lVar18 + 1;
              puVar10 = puVar10 + -2;
              puVar12 = puVar12 + 2;
              bVar2 = lVar18 < lVar15;
              lVar15 = lVar15 + -1;
            } while (bVar2);
          }
        }
      }
      lVar18 = param_3[1];
      lVar11 = lVar16;
      if (lVar16 < lVar18) {
        if (SBORROW8(lVar16,lVar9)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x104359968);
          (*pcVar1)();
        }
        if (lVar16 - lVar9 < param_4) {
          if (SCARRY8(lVar9,param_4)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x104359970);
            (*pcVar1)();
          }
          lVar8 = lVar9 + param_4;
          if (lVar18 <= lVar9 + param_4) {
            lVar8 = lVar18;
          }
          if (lVar8 < lVar9) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x104359974);
            (*pcVar1)();
          }
          if (lVar16 != lVar8) {
            lVar18 = *param_3;
            puVar13 = (ulong *)(lVar18 + lVar16 * 0x10 + -0x10);
            lVar19 = lVar9 - lVar16;
            do {
              puVar17 = (ulong *)(lVar18 + lVar16 * 0x10);
              uVar14 = *puVar17;
              uVar23 = puVar17[1];
              lVar11 = lVar19;
              puVar17 = puVar13;
              do {
                uVar7 = *puVar17;
                uVar6 = uVar14;
                _swift_getObjectType();
                _swift_unknownObjectRetain(uVar14);
                _swift_unknownObjectRetain(uVar7);
                FUN_10434d2a8(uVar6,uVar23);
                uVar6 = *(ulong *)(&UNK_10dceeea8 + (uVar6 & 0xff) * 8);
                uVar23 = uVar7;
                _swift_getObjectType();
                FUN_10434d2a8();
                uVar23 = *(ulong *)(&UNK_10dceeea8 + (uVar23 & 0xff) * 8);
                _swift_unknownObjectRelease(uVar14);
                _swift_unknownObjectRelease(uVar7);
                if (uVar23 <= uVar6) break;
                if (lVar18 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x104359978);
                  (*pcVar1)();
                }
                uVar23 = puVar17[3];
                uVar6 = puVar17[1];
                uVar7 = *puVar17;
                uVar14 = puVar17[2];
                puVar17[1] = puVar17[3];
                *puVar17 = uVar14;
                puVar17[3] = uVar6;
                puVar17[2] = uVar7;
                bVar2 = lVar11 != -1;
                lVar11 = lVar11 + 1;
                puVar17 = puVar17 + -2;
              } while (bVar2);
              lVar16 = lVar16 + 1;
              puVar13 = puVar13 + 2;
              lVar19 = lVar19 + -1;
              lVar11 = lVar8;
            } while (lVar16 != lVar8);
          }
        }
      }
      puVar5 = puStack_58;
      if (lVar11 < lVar9) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10435995c);
        (*pcVar1)();
      }
      puVar3 = puStack_58;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar4 = puVar5;
      if (((ulong)puVar3 & 1) == 0) {
        puVar4 = (undefined *)0x0;
        func_0x0001000a91e0(0,*(long *)(puVar5 + 0x10) + 1,1,puVar5);
      }
      uVar14 = *(ulong *)(puVar4 + 0x10);
      puVar5 = puVar4;
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar14) {
        puVar5 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
        func_0x0001000a91e0(puVar5,uVar14 + 1,1,puVar4);
      }
      *(ulong *)(puVar5 + 0x10) = uVar14 + 1;
      *(long *)(puVar5 + uVar14 * 0x10 + 0x20) = lVar9;
      *(long *)(puVar5 + uVar14 * 0x10 + 0x28) = lVar11;
      puStack_58 = puVar5;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x104359990);
        (*pcVar1)();
      }
      FUN_104359ef4(&puStack_58,*param_1,param_3,0x10435ab30);
      puVar5 = puStack_58;
      if (unaff_x21 != 0) goto LAB_10435992c;
      lVar18 = param_3[1];
      lVar9 = lVar11;
    } while (lVar11 < lVar18);
  }
  puVar5 = puStack_58;
  lVar18 = *param_1;
  if (lVar18 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104359998);
    (*pcVar1)();
  }
  puVar3 = puStack_58;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar3 & 1) == 0) {
    func_0x000100e06d54();
  }
  uVar14 = *(ulong *)(puVar5 + 0x10);
  while (puStack_58 = puVar5, 1 < uVar14) {
    lVar9 = *param_3;
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104359994);
      (*pcVar1)();
    }
    lVar8 = uVar14 - 1;
    lVar11 = *(long *)(puVar5 + uVar14 * 0x10);
    lVar16 = *(long *)(puVar5 + lVar8 * 0x10 + 0x28);
    func_0x000100db6378(lVar9 + lVar11 * 0x10,lVar9 + *(long *)(puVar5 + lVar8 * 0x10 + 0x20) * 0x10
                        ,lVar9 + lVar16 * 0x10,lVar18);
    if (unaff_x21 != 0) break;
    if (lVar16 < lVar11) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104359960);
      (*pcVar1)();
    }
    puVar3 = puVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((ulong)puVar3 & 1) == 0) {
      func_0x000100e06d54();
    }
    if (*(ulong *)(puVar5 + 0x10) <= uVar14 - 2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104359964);
      (*pcVar1)();
    }
    *(long *)(puVar5 + uVar14 * 0x10) = lVar11;
    *(long *)((long)(puVar5 + uVar14 * 0x10) + 8) = lVar16;
    puStack_58 = puVar5;
    func_0x0001000a97cc(lVar8);
    puVar5 = puStack_58;
    uVar14 = *(ulong *)(puStack_58 + 0x10);
  }
LAB_10435992c:
  _swift_bridgeObjectRelease(puVar5);
  return;
}



/* Entry: 104359998; end: 104359ef3;  */

void FUN_104359998(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong *puVar13;
  ulong uVar14;
  long lVar15;
  long unaff_x21;
  long lVar16;
  ulong *puVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar18 = param_3[1];
  if (0 < lVar18) {
    lVar9 = 0;
    do {
      lVar16 = lVar9 + 1;
      if (lVar16 < lVar18) {
        puVar13 = (ulong *)(*param_3 + lVar16 * 0x10);
        uVar14 = *puVar13;
        uVar7 = puVar13[1];
        lVar22 = lVar9 * 0x10;
        puVar13 = (ulong *)(*param_3 + lVar22);
        uVar23 = *puVar13;
        uVar6 = uVar14;
        _swift_getObjectType();
        _swift_unknownObjectRetain(uVar14);
        _swift_unknownObjectRetain(uVar23);
        FUN_10434d2a8(uVar6,uVar7);
        uVar6 = *(ulong *)(&UNK_10dceeea8 + (uVar6 & 0xff) * 8);
        uVar7 = uVar23;
        _swift_getObjectType();
        FUN_10434d2a8();
        uVar7 = *(ulong *)(&UNK_10dceeea8 + (uVar7 & 0xff) * 8);
        _swift_unknownObjectRelease(uVar14);
        _swift_unknownObjectRelease(uVar23);
        puVar13 = puVar13 + 3;
        lVar8 = lVar9 + 2;
        lVar19 = lVar16;
        lVar11 = lVar22;
        do {
          lVar15 = lVar19;
          lVar16 = lVar8;
          lVar11 = lVar11 + 0x10;
          if (lVar18 <= lVar16) break;
          uVar14 = puVar13[1];
          uVar20 = puVar13[2];
          uVar21 = puVar13[-1];
          uVar23 = uVar14;
          _swift_getObjectType();
          _swift_unknownObjectRetain(uVar14);
          _swift_unknownObjectRetain(uVar21);
          FUN_10434d2a8(uVar23,uVar20);
          uVar20 = *(ulong *)(&UNK_10dceeea8 + (uVar23 & 0xff) * 8);
          uVar23 = uVar21;
          _swift_getObjectType();
          FUN_10434d2a8();
          uVar23 = *(ulong *)(&UNK_10dceeea8 + (uVar23 & 0xff) * 8);
          _swift_unknownObjectRelease(uVar14);
          _swift_unknownObjectRelease(uVar21);
          puVar13 = puVar13 + 2;
          lVar8 = lVar16 + 1;
          lVar19 = lVar15 + 1;
        } while (uVar6 < uVar7 != uVar23 <= uVar20);
        if (uVar6 < uVar7) {
          if (lVar16 < lVar9) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x104359ec8);
            (*pcVar1)();
          }
          if (lVar9 < lVar16) {
            lVar8 = *param_3;
            puVar10 = (undefined8 *)(lVar8 + lVar11);
            puVar12 = (undefined8 *)(lVar8 + lVar22);
            lVar18 = lVar9;
            do {
              if (lVar18 != lVar15) {
                if (lVar8 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x104359ee8);
                  (*pcVar1)();
                }
                uVar25 = puVar12[1];
                uVar24 = *puVar12;
                uVar26 = *puVar10;
                puVar12[1] = puVar10[1];
                *puVar12 = uVar26;
                puVar10[1] = uVar25;
                *puVar10 = uVar24;
              }
              lVar18 = lVar18 + 1;
              puVar10 = puVar10 + -2;
              puVar12 = puVar12 + 2;
              bVar2 = lVar18 < lVar15;
              lVar15 = lVar15 + -1;
            } while (bVar2);
          }
        }
      }
      lVar18 = param_3[1];
      lVar11 = lVar16;
      if (lVar16 < lVar18) {
        if (SBORROW8(lVar16,lVar9)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x104359ec4);
          (*pcVar1)();
        }
        if (lVar16 - lVar9 < param_4) {
          if (SCARRY8(lVar9,param_4)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x104359ecc);
            (*pcVar1)();
          }
          lVar8 = lVar9 + param_4;
          if (lVar18 <= lVar9 + param_4) {
            lVar8 = lVar18;
          }
          if (lVar8 < lVar9) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x104359ed0);
            (*pcVar1)();
          }
          if (lVar16 != lVar8) {
            lVar18 = *param_3;
            puVar13 = (ulong *)(lVar18 + lVar16 * 0x10 + -0x10);
            lVar19 = lVar9 - lVar16;
            do {
              puVar17 = (ulong *)(lVar18 + lVar16 * 0x10);
              uVar14 = *puVar17;
              uVar23 = puVar17[1];
              lVar11 = lVar19;
              puVar17 = puVar13;
              do {
                uVar7 = *puVar17;
                uVar6 = uVar14;
                _swift_getObjectType();
                _swift_unknownObjectRetain(uVar14);
                _swift_unknownObjectRetain(uVar7);
                FUN_10434d2a8(uVar6,uVar23);
                uVar6 = *(ulong *)(&UNK_10dceeea8 + (uVar6 & 0xff) * 8);
                uVar23 = uVar7;
                _swift_getObjectType();
                FUN_10434d2a8();
                uVar23 = *(ulong *)(&UNK_10dceeea8 + (uVar23 & 0xff) * 8);
                _swift_unknownObjectRelease(uVar14);
                _swift_unknownObjectRelease(uVar7);
                if (uVar23 <= uVar6) break;
                if (lVar18 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x104359ed4);
                  (*pcVar1)();
                }
                uVar23 = puVar17[3];
                uVar6 = puVar17[1];
                uVar7 = *puVar17;
                uVar14 = puVar17[2];
                puVar17[1] = puVar17[3];
                *puVar17 = uVar14;
                puVar17[3] = uVar6;
                puVar17[2] = uVar7;
                bVar2 = lVar11 != -1;
                lVar11 = lVar11 + 1;
                puVar17 = puVar17 + -2;
              } while (bVar2);
              lVar16 = lVar16 + 1;
              puVar13 = puVar13 + 2;
              lVar19 = lVar19 + -1;
              lVar11 = lVar8;
            } while (lVar16 != lVar8);
          }
        }
      }
      puVar5 = puStack_58;
      if (lVar11 < lVar9) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x104359eb8);
        (*pcVar1)();
      }
      puVar3 = puStack_58;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar4 = puVar5;
      if (((ulong)puVar3 & 1) == 0) {
        puVar4 = (undefined *)0x0;
        func_0x0001000a91e0(0,*(long *)(puVar5 + 0x10) + 1,1,puVar5);
      }
      uVar14 = *(ulong *)(puVar4 + 0x10);
      puVar5 = puVar4;
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar14) {
        puVar5 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
        func_0x0001000a91e0(puVar5,uVar14 + 1,1,puVar4);
      }
      *(ulong *)(puVar5 + 0x10) = uVar14 + 1;
      *(long *)(puVar5 + uVar14 * 0x10 + 0x20) = lVar9;
      *(long *)(puVar5 + uVar14 * 0x10 + 0x28) = lVar11;
      puStack_58 = puVar5;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x104359eec);
        (*pcVar1)();
      }
      FUN_104359ef4(&puStack_58,*param_1,param_3,FUN_10435ab18);
      puVar5 = puStack_58;
      if (unaff_x21 != 0) goto LAB_104359e88;
      lVar18 = param_3[1];
      lVar9 = lVar11;
    } while (lVar11 < lVar18);
  }
  puVar5 = puStack_58;
  lVar18 = *param_1;
  if (lVar18 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104359ef4);
    (*pcVar1)();
  }
  puVar3 = puStack_58;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar3 & 1) == 0) {
    func_0x000100e06d54();
  }
  uVar14 = *(ulong *)(puVar5 + 0x10);
  while (puStack_58 = puVar5, 1 < uVar14) {
    lVar9 = *param_3;
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104359ef0);
      (*pcVar1)();
    }
    lVar8 = uVar14 - 1;
    lVar11 = *(long *)(puVar5 + uVar14 * 0x10);
    lVar16 = *(long *)(puVar5 + lVar8 * 0x10 + 0x28);
    func_0x000100db6378(lVar9 + lVar11 * 0x10,lVar9 + *(long *)(puVar5 + lVar8 * 0x10 + 0x20) * 0x10
                        ,lVar9 + lVar16 * 0x10,lVar18);
    if (unaff_x21 != 0) break;
    if (lVar16 < lVar11) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104359ebc);
      (*pcVar1)();
    }
    puVar3 = puVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((ulong)puVar3 & 1) == 0) {
      func_0x000100e06d54();
    }
    if (*(ulong *)(puVar5 + 0x10) <= uVar14 - 2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104359ec0);
      (*pcVar1)();
    }
    *(long *)(puVar5 + uVar14 * 0x10) = lVar11;
    *(long *)((long)(puVar5 + uVar14 * 0x10) + 8) = lVar16;
    puStack_58 = puVar5;
    func_0x0001000a97cc(lVar8);
    puVar5 = puStack_58;
    uVar14 = *(ulong *)(puStack_58 + 0x10);
  }
LAB_104359e88:
  _swift_bridgeObjectRelease(puVar5);
  return;
}



/* Entry: 104359ef4; end: 10435a163;  */

undefined8 FUN_104359ef4(ulong *param_1,undefined8 param_2,long *param_3,code *param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x21;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  uVar8 = *param_1;
  if (1 < *(ulong *)(uVar8 + 0x10)) {
    uVar6 = uVar8;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar6 & 1) == 0) {
      func_0x000100e06d54();
    }
    *param_1 = uVar8;
    uVar6 = *(ulong *)(uVar8 + 0x10);
    do {
      lVar9 = uVar6 - 1;
      if (uVar6 < 4) {
        if (uVar6 == 3) {
          bVar5 = SBORROW8(*(long *)(uVar8 + 0x28),*(long *)(uVar8 + 0x20));
          lVar7 = *(long *)(uVar8 + 0x28) - *(long *)(uVar8 + 0x20);
          goto LAB_104359fcc;
        }
        if (uVar6 < 2) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10435a14c);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar7 = *plVar1;
        lVar12 = plVar1[1];
        bVar5 = SBORROW8(lVar12,lVar7);
        lVar12 = lVar12 - lVar7;
LAB_10435a030:
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10435a13c);
          (*pcVar4)();
        }
        lVar7 = uVar8 + lVar9 * 0x10;
        lVar2 = *(long *)(lVar7 + 0x20);
        lVar7 = *(long *)(lVar7 + 0x28);
        if (SBORROW8(lVar7,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10435a144);
          (*pcVar4)();
        }
        lVar10 = lVar9;
        if (lVar7 - lVar2 < lVar12) {
          return 1;
        }
      }
      else {
        lVar12 = uVar8 + 0x20 + uVar6 * 0x10;
        if (SBORROW8(*(long *)(lVar12 + -0x38),*(long *)(lVar12 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10435a124);
          (*pcVar4)();
        }
        lVar7 = *(long *)(lVar12 + -0x28) - *(long *)(lVar12 + -0x30);
        if (SBORROW8(*(long *)(lVar12 + -0x28),*(long *)(lVar12 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10435a128);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar2 = *plVar1;
        lVar10 = plVar1[1];
        lVar3 = lVar10 - lVar2;
        if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10435a130);
          (*pcVar4)();
        }
        if (SCARRY8(lVar7,lVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10435a138);
          (*pcVar4)();
        }
        bVar5 = false;
        if (lVar7 + lVar3 < *(long *)(lVar12 + -0x38) - *(long *)(lVar12 + -0x40)) {
LAB_104359fcc:
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10435a12c);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + uVar6 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar12 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10435a134);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar3 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10435a140);
            (*pcVar4)();
          }
          if (SCARRY8(lVar12,lVar3)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10435a148);
            (*pcVar4)();
          }
          bVar5 = false;
          if (lVar12 + lVar3 < lVar7) goto LAB_10435a030;
          lVar10 = uVar6 - 2;
          if (lVar3 <= lVar7) {
            lVar10 = lVar9;
          }
        }
        else {
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar12 = *plVar1;
          lVar2 = plVar1[1];
          if (SBORROW8(lVar2,lVar12)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10435a150);
            (*pcVar4)();
          }
          lVar10 = uVar6 - 2;
          if (lVar2 - lVar12 <= lVar7) {
            lVar10 = lVar9;
          }
        }
      }
      uVar11 = lVar10 - 1;
      if (uVar6 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10435a118);
        (*pcVar4)();
      }
      lVar9 = *param_3;
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10435a164);
        (*pcVar4)();
      }
      lVar12 = *(long *)(uVar8 + 0x20 + uVar11 * 0x10);
      plVar1 = (long *)(uVar8 + 0x20 + lVar10 * 0x10);
      lVar7 = plVar1[1];
      (*param_4)(lVar9 + lVar12 * 0x10,lVar9 + *plVar1 * 0x10,lVar9 + lVar7 * 0x10,param_2);
      if (unaff_x21 != 0) {
        return 1;
      }
      if (lVar7 < lVar12) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10435a11c);
        (*pcVar4)();
      }
      uVar6 = uVar8;
      _swift_isUniquelyReferenced_nonNull_native();
      if ((uVar6 & 1) == 0) {
        func_0x000100e06d54();
      }
      if (*(ulong *)(uVar8 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10435a120);
        (*pcVar4)();
      }
      lVar9 = uVar8 + uVar11 * 0x10;
      *(long *)(lVar9 + 0x20) = lVar12;
      *(long *)(lVar9 + 0x28) = lVar7;
      *param_1 = uVar8;
      func_0x0001000a97cc(lVar10);
      uVar8 = *param_1;
      uVar6 = *(ulong *)(uVar8 + 0x10);
    } while (1 < uVar6);
  }
  return 1;
}



/* Entry: 10435a164; end: 10435a18f;  */

void FUN_10435a164(long param_1)

{
  FUN_104357cac(0,*(undefined8 *)(param_1 + 0x10),0,param_1,PTR__swift_release_11034f4c0);
  return;
}



/* Entry: 10435a190; end: 10435a25b;  */

void FUN_10435a190(long *param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,long *param_7)

{
  code *pcVar1;
  long unaff_x21;
  
  if (param_2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10435a25c);
    (*pcVar1)();
  }
  if (-1 < param_3) {
    if (param_3 != 0) {
      _bzero(param_2,param_3 << 3);
    }
    _swift_retain(param_4);
    FUN_104358e14(param_2,param_3,param_4,param_5,param_6);
    _swift_release(param_4);
    if (unaff_x21 == 0) {
      *param_1 = param_2;
      _swift_release(param_4);
    }
    else {
      *param_7 = unaff_x21;
      _swift_release(param_4);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10435a258);
  (*pcVar1)();
}



/* Entry: 10435a25c; end: 10435a287;  */

void FUN_10435a25c(long param_1)

{
  FUN_104357cac(0,*(undefined8 *)(param_1 + 0x10),0,param_1,PTR__swift_bridgeObjectRelease_11034f258
               );
  return;
}


