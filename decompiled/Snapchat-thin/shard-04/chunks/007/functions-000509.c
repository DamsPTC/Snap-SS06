/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10388efe8; end: 10388f02b; -[_TtC11SCARBarImpl24SIGFooterPlaceholderView dimUnselectedIcons] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10388efe8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa5af0;
  func_0x000107c61428(param_1 + _DAT_112fa5af0,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 10388f02c; end: 10388f1a3; -[_TtC11SCARBarImpl24SIGFooterPlaceholderView setDimUnselectedIcons:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10388f02c(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa5af0;
  func_0x000107c61428(param_1 + _DAT_112fa5af0,auStack_48,1,0);
  *(undefined1 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 10388f1a4; end: 10388f207; -[_TtC11SCARBarImpl24SIGFooterPlaceholderView initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10388f1a4(long param_1)

{
  code *pcVar1;
  
  *(undefined8 *)(param_1 + _DAT_112fa5ae8) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCARBarImpl/ARBarFooterPresenter.swift",0x26,2,0x21,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10388f208);
  (*pcVar1)();
}



/* Entry: 10388f208; end: 10388f277; -[_TtC11SCARBarImpl24SIGFooterPlaceholderView beginTransition:transitionIn:context:] */

/* WARNING: Possible PIC construction at 0x00010388f258: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010388f25c) */

void FUN_10388f208(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_1);
  FUN_1038904c8(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10388f278; end: 10388f287; -[_TtC11SCARBarImpl24SIGFooterPlaceholderView endTransition:transitionIn:complete:context:enableDarkModeAlways:] */

void FUN_10388f278(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,int param_5
                  )

{
  if (((param_4 & 1) == 0) && (param_5 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010c12c970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_removeFromSuperview_112628c78);
    return;
  }
  return;
}



/* Entry: 10388f288; end: 10388f28b; -[_TtC11SCARBarImpl24SIGFooterPlaceholderView performAnimations:context:enableDarkModeAlways:] */

void FUN_10388f288(void)

{
  return;
}



/* Entry: 10388f28c; end: 10388f28f; -[_TtC11SCARBarImpl24SIGFooterPlaceholderView setBackgroundAlpha:] */

void FUN_10388f28c(void)

{
  return;
}



/* Entry: 10388f290; end: 10388f2ef; -[_TtC11SCARBarImpl24SIGFooterPlaceholderView initWithFrame:] */

void FUN_10388f290(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCARBarImpl.SIGFooterPlaceholderView",0x24,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10388f2bc);
  (*pcVar1)();
}



/* Entry: 10388f2f0; end: 10388f2ff; -[_TtC11SCARBarImpl24SIGFooterPlaceholderView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10388f2f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fa5ae8));
  return;
}



/* Entry: 10388f300; end: 10388f337;  */

void FUN_10388f300(void)

{
  long unaff_x20;
  undefined1 auStack_28 [24];
  
  func_0x000107c61428(unaff_x20 + 0x48,auStack_28,0,0);
  func_0x000107c61618(unaff_x20 + 0x48);
  return;
}



/* Entry: 10388f338; end: 10388f413;  */

void FUN_10388f338(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x48,auStack_48,1,0);
  *(undefined8 *)(unaff_x20 + 0x50) = param_2;
  func_0x000107c61604(unaff_x20 + 0x48,param_1);
  func_0x000107c615e8(param_1);
  return;
}



/* Entry: 10388f414; end: 10388f417;  */

void FUN_10388f414(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *param_1;
  uVar3 = *(undefined8 *)(lVar2 + 0x18);
  lVar1 = *(long *)(lVar2 + 0x28);
  *(undefined8 *)(lVar1 + 0x50) = *(undefined8 *)(lVar2 + 0x20);
  func_0x000107c61604(lVar1 + 0x48,uVar3);
  if ((param_2 & 1) == 0) {
    func_0x000107c614a8(lVar2);
    func_0x000107c615e8(uVar3);
  }
  else {
    func_0x000107c615e8(*(undefined8 *)(lVar2 + 0x18));
    func_0x000107c614a8(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar2);
  return;
}



/* Entry: 10388f418; end: 10388f52b;  */

void FUN_10388f418(long *param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  func_0x000104875e28(&lStack_40);
  if (lStack_40 == 0) {
    lVar1 = 0;
    lVar2 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    lVar1 = lStack_40;
    func_0x000107c614f0();
    lVar2 = *(long *)(lStack_38 + 0x18);
  }
  *param_1 = lStack_40;
  param_1[3] = lVar1;
  param_1[4] = lVar2;
  return;
}



/* Entry: 10388f52c; end: 10388f533;  */

undefined1 FUN_10388f52c(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 10388f534; end: 10388f587;  */

void FUN_10388f534(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_10388f588();
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 10388f588; end: 10388f70b;  */

/* WARNING: Possible PIC construction at 0x00010388f608: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010388f618: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010388f688: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010388f6dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010388f63c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010388f68c) */
/* WARNING: Removing unreachable block (ram,0x00010388f6e8) */
/* WARNING: Removing unreachable block (ram,0x00010388f6cc) */
/* WARNING: Removing unreachable block (ram,0x00010388f61c) */
/* WARNING: Removing unreachable block (ram,0x00010388f620) */
/* WARNING: Removing unreachable block (ram,0x00010388f60c) */
/* WARNING: Removing unreachable block (ram,0x00010388f6e0) */

void FUN_10388f588(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  FUN_10388f70c();
  lVar1 = param_1;
  func_0x000107c5c42c();
  func_0x000107c61180();
  lVar2 = unaff_x20 + 0x60;
  func_0x000107c61618();
  if (lVar1 == 0) {
    if (lVar2 == 0) {
      lVar2 = unaff_x20 + 0x60;
      func_0x000107c61618();
      if (lVar2 == 0) {
        uVar3 = 0;
        FUN_103890900(0,0x112fa5c60,&PTR_PTR_1126c8700);
        func_0x000107c614e8();
        func_0x000107c61174(param_1);
        func_0x000107c610f8(uVar3);
        func_0x000107c47004();
      }
      else {
        func_0x000107c61170();
      }
    }
  }
  else if (lVar2 != 0) {
    FUN_103890900(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x000107c61174(lVar1);
    func_0x000107c60118();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10388f70c; end: 10388f87b;  */

undefined1  [16]
FUN_10388f70c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  long lStack_78;
  long lStack_70;
  
  func_0x000104875e28(&lStack_78);
  if (lStack_78 == 0) {
    func_0x0001000d224c(&lStack_78);
    lVar1 = *(long *)(unaff_x20 + 0x28);
    lVar2 = *(long *)(unaff_x20 + 0x30);
    func_0x0001000a8868(unaff_x20 + 0x10,lVar1);
    (**(code **)(lVar2 + 8))(lVar1,lVar2);
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x000107c4a76c();
      func_0x000107c61180();
      func_0x000107c61170(lVar1);
      if (lVar2 != 0) {
        lVar1 = lVar2;
        func_0x000107c4a7c4();
        func_0x000107c61180();
        func_0x000107c61170(lVar2);
        if (lVar1 != 0) {
          func_0x000107c438d4(lVar1);
          func_0x000107c61170(lVar1);
          lVar1 = lStack_78;
          func_0x000107c614f0(lStack_78);
          func_0x000107c609b0(param_1,param_2,param_3,param_4);
          (**(code **)(lStack_70 + 0x40))(lVar1,lStack_70);
        }
      }
    }
    func_0x000107c614f0(lStack_78);
    func_0x000107c61428(unaff_x20 + 0x48,&lStack_78,0,0);
    func_0x000107c61618(unaff_x20 + 0x48);
    (**(code **)(lStack_70 + 0x58))();
  }
  auVar3._8_8_ = lStack_70;
  auVar3._0_8_ = lStack_78;
  return auVar3;
}



/* Entry: 10388f87c; end: 10388f8c7;  */

void FUN_10388f87c(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  FUN_10388c5c0(unaff_x20 + 0x48);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61610(unaff_x20 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10388f8c8; end: 10388f90b;  */

void FUN_10388f8c8(void)

{
  long lVar1;
  long *unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *unaff_x20;
  func_0x000107c61428(lVar1 + 0x48,auStack_38,0,0);
  func_0x000107c61618(lVar1 + 0x48);
  return;
}



/* Entry: 10388f90c; end: 10388facb;  */

void FUN_10388f90c(undefined8 param_1,undefined8 param_2)

{
  long *unaff_x20;
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *unaff_x20;
  func_0x000107c61428(lVar1 + 0x48,auStack_48,1,0);
  *(undefined8 *)(lVar1 + 0x50) = param_2;
  func_0x000107c61604(lVar1 + 0x48,param_1);
  func_0x000107c615e8(param_1);
  return;
}



/* Entry: 10388facc; end: 10388fc93;  */

void FUN_10388facc(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  long lStack_60;
  long lStack_58;
  
  func_0x000104875e28(&lStack_60);
  if (lStack_60 != 0) {
    puVar1 = &UNK_1106a19d0;
    func_0x000107c613fc(&UNK_1106a19d0,0x20,7);
    *(long *)(puVar1 + 0x18) = lStack_58;
    func_0x000107c61614(puVar1 + 0x10,lStack_60);
    puVar2 = &UNK_1106a19f8;
    func_0x000107c613fc(&UNK_1106a19f8,0x18,7);
    func_0x000107c61644(puVar2 + 0x10);
    puVar3 = &UNK_1106a1a20;
    func_0x000107c613fc(&UNK_1106a1a20,0x20,7);
    *(undefined **)(puVar3 + 0x10) = puVar1;
    *(undefined **)(puVar3 + 0x18) = puVar2;
    func_0x000107c6157c(puVar1);
    puVar4 = puVar2;
    func_0x000107c6157c();
    FUN_10388fe54();
    if (((ulong)puVar4 & 1) == 0) {
      FUN_10388fc94(param_1,puVar1,puVar2);
      func_0x000107c61170(lStack_60);
      func_0x000107c61574(puVar1);
      func_0x000107c61574(puVar2);
    }
    else {
      func_0x000107c61574(puVar1);
      func_0x000107c61574(puVar2);
      puVar1 = &UNK_1106a19d0;
      func_0x000107c613fc(&UNK_1106a19d0,0x20,7);
      *(long *)(puVar1 + 0x18) = lStack_58;
      func_0x000107c61614(puVar1 + 0x10,lStack_60);
      puVar2 = &UNK_1106a1a48;
      func_0x000107c613fc(&UNK_1106a1a48,0x30,7);
      *(code **)(puVar2 + 0x10) = FUN_1038908ac;
      *(undefined **)(puVar2 + 0x18) = puVar3;
      *(undefined8 *)(puVar2 + 0x20) = param_1;
      *(undefined **)(puVar2 + 0x28) = puVar1;
      lVar5 = lStack_60;
      func_0x000107c614f0(lStack_60);
      lVar6 = *(long *)(lStack_58 + 0x10);
      pcVar7 = *(code **)(lVar6 + 0x10);
      func_0x000107c6157c(puVar3);
      func_0x000107c61174(param_1);
      (*pcVar7)(0x1038908b4,puVar2,lVar5,lVar6);
      FUN_10389000c();
      func_0x000107c61170(lStack_60);
    }
    func_0x000107c61574(puVar3);
  }
  return;
}



/* Entry: 10388fc94; end: 10388fe53;  */

void FUN_10388fc94(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long alStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  lVar1 = param_2 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c4ff34();
    func_0x000107c61170(lVar1);
  }
  func_0x000107c61428(param_2 + 0x10,auStack_70,0,0);
  puVar2 = (undefined *)(param_2 + 0x10);
  func_0x000107c61618();
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar2 != (undefined *)0x0) {
    puVar3 = puVar2;
    func_0x000107c402b8();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    uVar4 = 0;
    FUN_103890900(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    puVar5 = puVar3;
    func_0x000107c5fc54(puVar3,uVar4);
    func_0x000107c61170(puVar3);
  }
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  uVar4 = 0;
  FUN_103890900(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  puVar3 = puVar5;
  func_0x000107c5fc48(puVar5,uVar4);
  func_0x000107c6142c(puVar5);
  func_0x000107c413a0(puVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c61428(param_2 + 0x10,auStack_88,0,0);
  lVar1 = param_2 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar7 = *(long *)(param_2 + 0x18);
    lVar6 = lVar1;
    func_0x000107c614f0();
    alStack_a0[0] = lVar1;
    (**(code **)(*(long *)(lVar7 + 0x10) + 0x20))(param_1,lVar6);
    func_0x000107c61170(lVar1);
  }
  func_0x000107c61428(param_3 + 0x10,alStack_a0,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 != 0) {
    func_0x000107c61604(param_3 + 0x60,param_1);
    func_0x000107c61574(param_3);
  }
  return;
}



/* Entry: 10388fe54; end: 10388ff1b;  */

bool FUN_10388fe54(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x28);
  lVar1 = *(long *)(unaff_x20 + 0x30);
  func_0x0001000a8868(unaff_x20 + 0x10,lVar2);
  (**(code **)(lVar1 + 8))(lVar2,lVar1);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x000107c4a76c();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x000107c4a7c4();
      func_0x000107c61180();
      func_0x000107c61170(lVar1);
      if (lVar2 != 0) {
        lVar1 = lVar2;
        func_0x000107c614f0();
        func_0x000107c61440();
        if (lVar1 != 0) goto LAB_10388fefc;
        func_0x000107c61170(lVar2);
      }
    }
    lVar2 = 0;
  }
LAB_10388fefc:
  func_0x000107c61170();
  return lVar2 != 0;
}



/* Entry: 10388ff1c; end: 10389000b;  */

void FUN_10388ff1c(code *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined1 auStack_68 [24];
  
  (*param_1)(param_3);
  func_0x000107c61428(param_4 + 0x10,auStack_68,0x21,0);
  lVar1 = param_4 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    func_0x000107c61604(param_4 + 0x10,0);
    func_0x000107c614a8(auStack_68);
  }
  else {
    lVar5 = *(long *)(param_4 + 0x18);
    lVar2 = lVar1;
    func_0x000107c614f0();
    lVar4 = *(long *)(lVar5 + 0x10);
    pcVar6 = *(code **)(lVar4 + 0x10);
    lVar3 = lVar1;
    func_0x000107c61174(lVar1);
    (*pcVar6)(0,0,lVar2,lVar4);
    func_0x000107c61170(lVar3);
    *(long *)(param_4 + 0x18) = lVar5;
    func_0x000107c61604(param_4 + 0x10,lVar1);
    func_0x000107c614a8(auStack_68);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 10389000c; end: 1038901c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10389000c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined *puVar5;
  long unaff_x20;
  long lStack_70;
  long lStack_68;
  
  plVar4 = &lStack_70;
  lVar1 = *(long *)(unaff_x20 + 0x28);
  lVar2 = *(long *)(unaff_x20 + 0x30);
  func_0x0001000a8868(unaff_x20 + 0x10,lVar1);
  (**(code **)(lVar2 + 8))(lVar1,lVar2);
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c4a76c();
    func_0x000107c61180();
    func_0x000107c61170();
    if (lVar2 != 0) {
      lVar3 = lVar2;
      func_0x000107c4a7c4();
      func_0x000107c61180();
      func_0x000107c61170();
      lVar1 = lVar2;
      if (lVar3 != 0) {
        func_0x000107c438d4(lVar3);
        func_0x000107c61170();
        func_0x000107c609b0(param_1,param_2,param_3,param_4);
        goto LAB_1038900dc;
      }
    }
  }
  lVar3 = lVar1;
  param_1 = 0x404e000000000000;
LAB_1038900dc:
  FUN_1038908c0();
  lVar1 = lVar3;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112fa5ae8) = 0;
  *(undefined8 *)(lVar1 + _DAT_112fa5af8) = param_1;
  *(undefined1 *)(lVar1 + _DAT_112fa5af0) = 0;
  lStack_70 = lVar1;
  lStack_68 = lVar3;
  func_0x000107c61154(0,0,0,0,&lStack_70,PTR_s_initWithFrame__1125e2948);
  puVar5 = PTR_PTR_1126c8700;
  func_0x000107c610f8(PTR_PTR_1126c8700);
  func_0x000107c47004();
  func_0x000107c61170(plVar4);
  func_0x000107c53750(puVar5);
  lVar1 = *(long *)(unaff_x20 + 0x28);
  lVar2 = *(long *)(unaff_x20 + 0x30);
  func_0x0001000a8868(unaff_x20 + 0x10,lVar1);
  (**(code **)(lVar2 + 8))(lVar1,lVar2);
  if (lVar1 != 0) {
    func_0x000107c55904();
    func_0x000107c61170(lVar1);
  }
  func_0x000107c61170(puVar5);
  return;
}



/* Entry: 1038901c8; end: 1038902ef;  */

void FUN_1038901c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x28);
  lVar2 = *(long *)(unaff_x20 + 0x30);
  func_0x0001000a8868(unaff_x20 + 0x10,lVar1);
  (**(code **)(lVar2 + 8))(lVar1,lVar2);
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c4a76c();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      lVar1 = lVar2;
      func_0x000107c4a7c4();
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      if (lVar1 != 0) {
        lVar2 = lVar1;
        func_0x000107c5c42c();
        func_0x000107c61180();
        if (lVar2 == 0) {
          func_0x000107c61170(lVar1);
        }
        else {
          func_0x000107c438d4(lVar1);
          lVar3 = lVar2;
          func_0x000107c40784(lVar2);
          func_0x000107c61180();
          func_0x000107c40718(param_1,param_2,param_3);
          func_0x000107c61170(lVar1);
          func_0x000107c61170(lVar2);
          func_0x000107c615e8(lVar3);
        }
      }
    }
  }
  return;
}



/* Entry: 1038902f0; end: 103890447;  */

/* WARNING: Possible PIC construction at 0x000103890344: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103890364: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103890384: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010388f608: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010388f618: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010388f688: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010388f6dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010388f63c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010388f68c) */
/* WARNING: Removing unreachable block (ram,0x00010388f6e8) */
/* WARNING: Removing unreachable block (ram,0x00010388f6cc) */
/* WARNING: Removing unreachable block (ram,0x00010388f61c) */
/* WARNING: Removing unreachable block (ram,0x00010388f620) */
/* WARNING: Removing unreachable block (ram,0x00010388f60c) */
/* WARNING: Removing unreachable block (ram,0x000103890388) */
/* WARNING: Removing unreachable block (ram,0x00010389038c) */
/* WARNING: Removing unreachable block (ram,0x00010388f588) */
/* WARNING: Removing unreachable block (ram,0x00010388f624) */
/* WARNING: Removing unreachable block (ram,0x00010388f628) */
/* WARNING: Removing unreachable block (ram,0x00010388f634) */
/* WARNING: Removing unreachable block (ram,0x00010388f640) */
/* WARNING: Removing unreachable block (ram,0x00010388f5c4) */
/* WARNING: Removing unreachable block (ram,0x00010388f638) */
/* WARNING: Removing unreachable block (ram,0x00010388f63c) */
/* WARNING: Removing unreachable block (ram,0x00010388f5c8) */
/* WARNING: Removing unreachable block (ram,0x000103890368) */
/* WARNING: Removing unreachable block (ram,0x00010389036c) */
/* WARNING: Removing unreachable block (ram,0x000103890348) */
/* WARNING: Removing unreachable block (ram,0x00010389034c) */
/* WARNING: Removing unreachable block (ram,0x00010388f6e0) */
/* WARNING: Removing unreachable block (ram,0x00010388f6f0) */

void FUN_1038902f0(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x28);
  lVar1 = *(long *)(unaff_x20 + 0x30);
  func_0x0001000a8868(unaff_x20 + 0x10,lVar2);
  (**(code **)(lVar1 + 8))(lVar2,lVar1);
  if (lVar2 != 0) {
    func_0x000107c4a76c();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 103890448; end: 1038904c7;  */

void FUN_103890448(void)

{
  FUN_10388facc();
  return;
}



/* Entry: 1038904c8; end: 10389075f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038904c8(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long unaff_x20;
  
  if ((param_2 & 1) != 0) {
    func_0x000107c526c0(0);
    func_0x000107c550d8();
    func_0x000107c5a050();
    func_0x000107c3d89c(param_1);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    func_0x000107c61168();
    puVar2 = puVar1;
    func_0x0001008478a8();
    func_0x000107c613fc();
    *(undefined8 *)(puVar2 + 0x18) = 0xb;
    *(undefined8 *)(puVar2 + 0x10) = 5;
    lVar3 = unaff_x20;
    func_0x000107c4acb0();
    func_0x000107c61180();
    uVar6 = param_1;
    func_0x000107c4acb0(param_1);
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    func_0x000107c61170(uVar6);
    *(long *)(puVar2 + 0x20) = lVar4;
    lVar3 = unaff_x20;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    uVar6 = param_1;
    func_0x000107c5ce8c(param_1);
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    func_0x000107c61170(uVar6);
    *(long *)(puVar2 + 0x28) = lVar4;
    lVar3 = unaff_x20;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    uVar6 = param_1;
    func_0x000107c5cbe4(param_1);
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    func_0x000107c61170(uVar6);
    *(long *)(puVar2 + 0x30) = lVar4;
    lVar3 = unaff_x20;
    func_0x000107c44d9c();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c40290(*(undefined8 *)(unaff_x20 + _DAT_112fa5af8));
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    *(long *)(puVar2 + 0x38) = lVar4;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    uVar6 = param_1;
    func_0x000107c515ac(param_1);
    func_0x000107c61180();
    uVar5 = uVar6;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    func_0x000107c61170(uVar6);
    lVar3 = unaff_x20;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(unaff_x20);
    func_0x000107c61170(uVar5);
    *(long *)(puVar2 + 0x40) = lVar3;
    uVar6 = 0;
    FUN_103890900(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    puVar7 = puVar2;
    func_0x000107c5fc48(puVar2,uVar6);
    func_0x000107c61574(puVar2);
    func_0x000107c3d048(puVar1);
    func_0x000107c61170(puVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 103890760; end: 1038908ab;  */

void FUN_103890760(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  code *pcVar4;
  undefined *puVar5;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  func_0x000107c61614(unaff_x20 + 0x48,0);
  uVar1 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + 0x58) = uVar1;
  func_0x000107c61614(unaff_x20 + 0x60,0);
  func_0x000103890940(param_1,unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x38) = param_2;
  *(undefined8 *)(unaff_x20 + 0x40) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  puVar2 = PTR___sSbSQsWP_11034dd50;
  func_0x000104884898(PTR___sSbSQsWP_11034dd50);
  pcVar3 = FUN_10388f52c;
  func_0x0001000c0ebc(FUN_10388f52c,0);
  func_0x000107c61574(puVar2);
  puVar2 = &UNK_1106a19f8;
  func_0x000107c613fc(&UNK_1106a19f8,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  pcVar4 = FUN_103890984;
  puVar5 = puVar2;
  (**(code **)(*(long *)pcVar3 + 0x60))(FUN_103890984);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(puVar2);
  pcVar3 = pcVar4;
  func_0x000107c614f0(pcVar4);
  (**(code **)(puVar5 + 0x10))(*(undefined8 *)(unaff_x20 + 0x58),pcVar3,puVar5);
  func_0x000107c615e8(pcVar4);
  func_0x0001000834e4(param_1);
  return;
}



/* Entry: 1038908ac; end: 1038908bf;  */

void FUN_1038908ac(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  long alStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  lVar7 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar6 + 0x10,auStack_58,0,0);
  lVar1 = lVar6 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c4ff34();
    func_0x000107c61170(lVar1);
  }
  func_0x000107c61428(lVar6 + 0x10,auStack_70,0,0);
  puVar2 = (undefined *)(lVar6 + 0x10);
  func_0x000107c61618();
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar2 != (undefined *)0x0) {
    puVar3 = puVar2;
    func_0x000107c402b8();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    uVar4 = 0;
    FUN_103890900(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    puVar5 = puVar3;
    func_0x000107c5fc54(puVar3,uVar4);
    func_0x000107c61170(puVar3);
  }
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  uVar4 = 0;
  FUN_103890900(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  puVar3 = puVar5;
  func_0x000107c5fc48(puVar5,uVar4);
  func_0x000107c6142c(puVar5);
  func_0x000107c413a0(puVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c61428(lVar6 + 0x10,auStack_88,0,0);
  lVar1 = lVar6 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar8 = *(long *)(lVar6 + 0x18);
    lVar6 = lVar1;
    func_0x000107c614f0();
    alStack_a0[0] = lVar1;
    (**(code **)(*(long *)(lVar8 + 0x10) + 0x20))(param_1,lVar6);
    func_0x000107c61170(lVar1);
  }
  func_0x000107c61428(lVar7 + 0x10,alStack_a0,0,0);
  lVar7 = lVar7 + 0x10;
  func_0x000107c61648();
  if (lVar7 != 0) {
    func_0x000107c61604(lVar7 + 0x60,param_1);
    func_0x000107c61574(lVar7);
  }
  return;
}



/* Entry: 1038908c0; end: 1038908ff;  */

void FUN_1038908c0(void)

{
  func_0x000107c61168(&PTR_PTR_1128f7760);
  return;
}



/* Entry: 103890900; end: 103890983;  */

void FUN_103890900(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 103890984; end: 10389098f;  */

void FUN_103890984(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_10388f588();
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 103890990; end: 103890a8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_103890990(void)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  
  uVar2 = *(ulong *)(unaff_x20 + _DAT_112fa5c80);
  func_0x000107c3db80();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c5fc54();
  func_0x000107c61170(uVar2);
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
  func_0x000107c6142c(uVar3);
  if (uVar2 == 0) {
    uVar2 = *(ulong *)(unaff_x20 + _DAT_112fa5c78);
    func_0x000107c3db80();
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c5fc54();
    func_0x000107c61170(uVar2);
    if (uVar3 >> 0x3e == 0) {
      uVar2 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar2 = uVar3 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar3) {
        uVar2 = uVar3;
      }
      func_0x000107c60480(uVar2);
    }
    func_0x000107c6142c(uVar3);
    bVar1 = uVar2 != 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 103890a8c; end: 103890fe3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103890a8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_112fa5c68) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112fa5c70) = 0;
  lVar7 = _DAT_112fa5c78;
  puVar2 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
  func_0x000107c61168();
  puVar3 = puVar2;
  func_0x000107c5e15c();
  func_0x000107c61180();
  *(undefined **)(unaff_x20 + lVar7) = puVar3;
  lVar7 = _DAT_112fa5c80;
  func_0x000107c5e15c();
  func_0x000107c61180();
  *(undefined **)(unaff_x20 + lVar7) = puVar2;
  lVar7 = _DAT_112fa5c88;
  uVar4 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar7) = uVar4;
  *(undefined8 *)(unaff_x20 + _DAT_112fa5c90) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fa5c98);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fa5ca0) = param_1;
  FUN_103890fe4(param_2,unaff_x20 + _DAT_112fa5ca8);
  *(undefined8 *)(unaff_x20 + _DAT_112fa5cb0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112fa5cb8) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112fa5cc0) = param_5;
  *(undefined1 *)(unaff_x20 + _DAT_112fa5cc8) = param_6;
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  puVar5 = auStack_70;
  func_0x000107c61154(puVar5,puVar2);
  uStack_78 = 0;
  func_0x000100087c34(&uStack_78);
  uVar4 = *(undefined8 *)(puVar5 + _DAT_112fa5cc0);
  func_0x000107c6157c(uVar4);
  func_0x0001000d224c(&uStack_78);
  func_0x000107c61574(uVar4);
  lVar7 = CONCAT71(uStack_77,uStack_78);
  if (lVar7 == 0) {
    func_0x000107c61574(param_1);
    func_0x000107c61574(param_3);
    func_0x000107c61574(param_4);
    func_0x000107c61574(param_5);
    func_0x000103894070(param_2);
  }
  else {
    lVar6 = lVar7;
    func_0x000107c4c18c(lVar7);
    func_0x000107c61180();
    func_0x000107c615e8(lVar7);
    lVar7 = lVar6;
    func_0x000107c614f0(lVar6);
    puVar2 = &UNK_1106a1ad0;
    func_0x000107c613fc(&UNK_1106a1ad0,0x18,7);
    func_0x000107c61614(puVar2 + 0x10,puVar5);
    func_0x000107c6157c(puVar2);
    func_0x00010090569c(FUN_10389107c,puVar2,lVar7);
    func_0x000107c61574(param_1);
    func_0x000107c61574(param_3);
    func_0x000107c61574(param_4);
    func_0x000107c61574(param_5);
    func_0x000107c615e8(lVar6);
    func_0x000107c61574(puVar2);
    func_0x000103894070(param_2);
    func_0x000107c61574(puVar2);
  }
  return puVar5;
}



/* Entry: 103890fe4; end: 10389107b;  */

long FUN_103890fe4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 10389107c; end: 103891083;  */

void FUN_10389107c(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_103891084();
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 103891084; end: 10389128b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103891084(void)

{
  long *plVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plStack_50;
  long lStack_48;
  
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112fa5cb0);
  func_0x000107c6157c(uVar7);
  plVar1 = (long *)PTR___sSbSQsWP_11034dd50;
  func_0x000104884898();
  func_0x000107c61574(uVar7);
  puVar2 = &UNK_1106a1ad0;
  func_0x000107c613fc(&UNK_1106a1ad0,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  uVar7 = 0x1038940e8;
  puVar6 = puVar2;
  (**(code **)(*plVar1 + 0x60))(0x1038940e8);
  func_0x000107c61574(plVar1);
  func_0x000107c61574(puVar2);
  uVar3 = uVar7;
  func_0x000107c614f0(uVar7);
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112fa5c88);
  (**(code **)(puVar6 + 0x10))(uVar8,uVar3,puVar6);
  func_0x000107c615e8(uVar7);
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112fa5cc0);
  func_0x000107c6157c(uVar7);
  func_0x0001000d224c(&plStack_50);
  func_0x000107c61574(uVar7);
  plVar1 = plStack_50;
  if (plStack_50 != (long *)0x0) {
    plVar4 = plStack_50;
    func_0x000107c4c18c();
    func_0x000107c61180();
    func_0x000107c615e8(plVar1);
    func_0x0001000d224c(&plStack_50);
    plVar1 = plStack_50;
    func_0x000107c614f0(plStack_50);
    (**(code **)(lStack_48 + 0x18))();
    func_0x000107c615e8(plStack_50);
    plVar5 = plVar4;
    func_0x000100471e0c(plVar4,0);
    func_0x000107c61574(plVar1);
    puVar2 = &UNK_1106a1ad0;
    func_0x000107c613fc(&UNK_1106a1ad0,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    uVar7 = 0x1038940f0;
    puVar6 = puVar2;
    (**(code **)(*plVar5 + 0x60))(0x1038940f0);
    func_0x000107c61574(plVar5);
    func_0x000107c61574(puVar2);
    uVar3 = uVar7;
    func_0x000107c614f0(uVar7);
    (**(code **)(puVar6 + 0x10))(uVar8,uVar3,puVar6);
    func_0x000107c615e8(plVar4);
    func_0x000107c615e8(uVar7);
  }
  return;
}



/* Entry: 10389128c; end: 10389137f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10389128c(char *param_1,long param_2)

{
  char cVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  cVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    if (cVar1 == '\0') {
      lVar3 = *(long *)(param_2 + _DAT_112fa5c90);
      if (lVar3 != 0) {
        uVar4 = *(undefined8 *)(param_2 + _DAT_112fa5cb8);
        puVar2 = PTR_PTR_1126de960;
        func_0x000107c61168();
        func_0x000107c615f0(lVar3);
        func_0x000107c6157c(uVar4);
        func_0x000107c41adc();
        func_0x000107c61180();
        puStack_50 = puVar2;
        func_0x0001002a64a8(&puStack_50);
        func_0x000107c61170(puVar2);
        func_0x000107c61574(uVar4);
        func_0x000107c615e8(lVar3);
      }
    }
    else {
      FUN_1038915d4();
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 103891380; end: 1038913d3;  */

void FUN_103891380(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_1038913d4();
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1038913d4; end: 1038915d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038913d4(ulong param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long unaff_x20;
  ulong uVar7;
  long lVar8;
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  long lStack_70;
  long lStack_60;
  long lStack_58;
  
  FUN_103890990();
  if ((param_1 & 1) != 0) {
    func_0x0001000d224c(&uStack_78);
    FUN_10389179c();
    if ((param_1 & 1) == 0) {
      uVar7 = *(ulong *)(unaff_x20 + _DAT_112fa5c90);
      if ((uVar7 != 0) &&
         (uVar3 = uVar7, puVar5 = PTR_s_respondsToSelector__11262c7e0,
         func_0x000107c61150(uVar7,PTR_s_respondsToSelector__11262c7e0,PTR_s_identifier_1125d7178),
         (uVar3 & 1) != 0)) {
        func_0x000107c44fdc(uVar7);
        func_0x000107c61180();
        uVar3 = uVar7;
        func_0x000107c5faec();
        func_0x000107c61170(uVar7);
        uVar4 = uStack_78;
        func_0x000107c614f0(uStack_78);
        puVar6 = puVar5;
        (**(code **)(lStack_70 + 0x48))(uVar3,puVar5,uVar4,lStack_70);
        func_0x000107c6142c(puVar5);
        if (((uint)puVar6 & 0xff) != 1) {
          lVar8 = unaff_x20 + _DAT_112fa5ca8;
          func_0x000107c61428(lVar8,auStack_90,0,0);
          lVar1 = *(long *)(lVar8 + 0x18);
          lVar2 = *(long *)(lVar8 + 0x20);
          FUN_103893948(lVar8,lVar1);
          lVar8 = *(long *)(lVar1 + -8);
          (*(code *)PTR____chkstk_darwin_11034bd40)
                    (*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
          (**(code **)(lVar8 + 0x10))(auStack_90 + -extraout_x8);
          (**(code **)(lVar2 + 0x20))(&uStack_78,lVar1,lVar2);
          (**(code **)(lVar8 + 8))(auStack_90 + -extraout_x8,lVar1);
          if (lStack_60 != 0) {
            FUN_103893948(&uStack_78,lStack_60);
            (**(code **)(lStack_58 + 8))(uVar3,0,lStack_60,lStack_58);
            func_0x000107c615e8(uStack_78);
            func_0x000103894070(&uStack_78);
            return;
          }
          func_0x000107c615e8(uStack_78);
          FUN_103892ac0(&uStack_78);
          return;
        }
      }
      FUN_1038918f0();
    }
    func_0x000107c615e8(uStack_78);
  }
  return;
}



/* Entry: 1038915d4; end: 10389174b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038915d4(void)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  undefined8 uStack_70;
  long lStack_68;
  
  if (*(char *)(unaff_x20 + _DAT_112fa5cc8) == '\x01') {
    plVar1 = (long *)(unaff_x20 + _DAT_112fa5c98);
    lVar3 = plVar1[1];
    if (lVar3 != 0) {
      lVar4 = plVar1[2];
      lVar7 = *plVar1;
      func_0x000107c61434(lVar3);
      func_0x0001000d224c(&uStack_70);
      uVar2 = uStack_70;
      func_0x000107c614f0(uStack_70);
      pcVar8 = *(code **)(lStack_68 + 0x48);
      func_0x000107c61434(lVar3);
      lVar5 = lVar3;
      (*pcVar8)(lVar7,lVar3,uVar2,lStack_68);
      if (((uint)lVar5 & 0xff) == 1) {
        lVar5 = 0;
        lVar6 = 0;
      }
      else {
        lVar5 = lVar7;
        (**(code **)(lStack_68 + 0x20))();
        lVar6 = 0;
        if (lVar5 != 0) {
          lVar6 = lVar7;
        }
      }
      func_0x000107c615e8(uStack_70);
      func_0x000107c6142c(lVar3);
      if (lVar5 != 0) {
        FUN_1038922d4(lVar5,lVar6,lVar4);
        func_0x000107c6142c(lVar3);
        func_0x000107c615e8(lVar5);
        lVar3 = plVar1[1];
        plVar1[1] = 0;
        plVar1[2] = 0;
        *plVar1 = 0;
        func_0x000107c6142c(lVar3);
        return;
      }
      func_0x000107c6142c(lVar3);
    }
  }
  lVar3 = *(long *)(unaff_x20 + _DAT_112fa5c90);
  if (lVar3 == 0) {
    FUN_1038918f0();
  }
  else {
    func_0x000107c615f0(lVar3);
    FUN_1038924e8();
    func_0x000107c615e8(lVar3);
  }
  return;
}



/* Entry: 10389174c; end: 10389179b; -[_TtC11SCARBarImpl9ARBarImpl activeFeature] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10389174c(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103890990();
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112fa5c90);
    func_0x000107c615f0(uVar2);
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10389179c; end: 1038918ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10389179c(void)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  undefined8 uStack_70;
  long lStack_68;
  
  if (*(char *)(unaff_x20 + _DAT_112fa5cc8) == '\x01') {
    plVar1 = (long *)(unaff_x20 + _DAT_112fa5c98);
    lVar3 = plVar1[1];
    if (lVar3 != 0) {
      lVar4 = plVar1[2];
      lVar7 = *plVar1;
      func_0x000107c61434(lVar3);
      func_0x0001000d224c(&uStack_70);
      uVar2 = uStack_70;
      func_0x000107c614f0(uStack_70);
      pcVar8 = *(code **)(lStack_68 + 0x48);
      func_0x000107c61434(lVar3);
      lVar5 = lVar3;
      (*pcVar8)(lVar7,lVar3,uVar2,lStack_68);
      if (((uint)lVar5 & 0xff) == 1) {
        lVar5 = 0;
        lVar6 = 0;
      }
      else {
        lVar5 = lVar7;
        (**(code **)(lStack_68 + 0x20))();
        lVar6 = 0;
        if (lVar5 != 0) {
          lVar6 = lVar7;
        }
      }
      func_0x000107c615e8(uStack_70);
      func_0x000107c6142c(lVar3);
      if (lVar5 != 0) {
        FUN_1038922d4(lVar5,lVar6,lVar4);
        func_0x000107c6142c(lVar3);
        func_0x000107c615e8(lVar5);
        lVar3 = plVar1[1];
        plVar1[1] = 0;
        plVar1[2] = 0;
        *plVar1 = 0;
        func_0x000107c6142c(lVar3);
        return 1;
      }
      func_0x000107c6142c(lVar3);
    }
  }
  return 0;
}



/* Entry: 1038918f0; end: 103891a3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038918f0(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x0001000d224c(&uStack_50);
  lVar3 = lStack_48;
  uVar4 = uStack_50;
  uVar1 = uStack_50;
  func_0x000107c614f0();
  lVar2 = 3;
  (**(code **)(lVar3 + 0x30))(3,uVar1,lVar3);
  func_0x000107c615e8(uVar4);
  if (((uint)uVar1 & 0xff) == 1) {
    return;
  }
  func_0x0001000d224c(&uStack_50);
  uVar4 = uStack_50;
  func_0x000107c614f0(uStack_50);
  lVar3 = lVar2;
  (**(code **)(lStack_48 + 0x20))(lVar2,uVar4,lStack_48);
  func_0x000107c615e8(uStack_50);
  if (lVar3 == 0) {
    return;
  }
  if ((*(byte *)(unaff_x20 + _DAT_112fa5cc8) & 1) != 0) {
    lVar5 = *(long *)(unaff_x20 + _DAT_112fa5c98 + 8);
    if ((lVar5 != 0) && (*(long *)(unaff_x20 + _DAT_112fa5c98 + 0x10) == 6)) {
      func_0x000107c61434(lVar5);
      FUN_1038922d4(lVar3,lVar2,6);
      func_0x000107c6142c(lVar5);
      goto LAB_103891a1c;
    }
  }
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112fa5c90);
  *(long *)(unaff_x20 + _DAT_112fa5c90) = lVar3;
  func_0x000107c615f0(lVar3);
  func_0x000107c615e8(uVar4);
  FUN_1038924e8(lVar3);
LAB_103891a1c:
  func_0x000107c615e8(lVar3);
  return;
}



/* Entry: 103891a3c; end: 103891f43;  */

/* WARNING: Possible PIC construction at 0x000103891e88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103891ebc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103891e8c) */
/* WARNING: Removing unreachable block (ram,0x000103891ec0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103891a3c(ulong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long unaff_x20;
  undefined8 uVar10;
  ulong uVar11;
  undefined *apuStack_a8 [3];
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar2 = _DAT_112fa5c90;
  if (param_1 == 0) {
    return;
  }
  if (param_1 == *(ulong *)(unaff_x20 + _DAT_112fa5c90)) {
    return;
  }
  uVar11 = *(ulong *)(unaff_x20 + _DAT_112fa5c78);
  func_0x000107c615f0(param_1);
  func_0x000107c3db80();
  func_0x000107c61180();
  uVar3 = uVar11;
  func_0x000107c5fc54();
  func_0x000107c61170(uVar11);
  if (uVar3 >> 0x3e == 0) {
    uVar11 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar11 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar11 = uVar3;
    }
    func_0x000107c60480();
  }
  func_0x000107c6142c(uVar3);
  if (uVar11 != 0) {
    uVar3 = param_1;
    func_0x000107c3e08c();
    uVar1 = 5;
    if (uVar3 != 0) {
      uVar1 = param_2;
    }
    uVar3 = param_1;
    func_0x000107c61150(param_1,PTR_s_respondsToSelector__11262c7e0,
                        PTR_s_prepareForActivationFromARBar_ac_11261ff38);
    if ((uVar3 & 1) != 0) {
      func_0x000107c4ede0(param_1);
    }
    uVar3 = param_1;
    func_0x000107c3d0d0();
    if (uVar3 != 3) {
      uVar3 = param_1;
      func_0x000107c3d0d0();
      uVar11 = *(ulong *)(unaff_x20 + lVar2);
      puVar4 = &UNK_1106a1ad0;
      func_0x000107c613fc(&UNK_1106a1ad0,0x18,7);
      func_0x000107c61614(puVar4 + 0x10);
      puVar5 = &UNK_1106a1bf0;
      func_0x000107c613fc(&UNK_1106a1bf0,0x28,7);
      *(undefined **)(puVar5 + 0x10) = puVar4;
      *(ulong *)(puVar5 + 0x18) = param_1;
      *(undefined8 *)(puVar5 + 0x20) = uVar1;
      if (uVar11 == 0) {
        func_0x000107c61428(puVar4 + 0x10,&puStack_90,0,0);
        puVar9 = puVar4 + 0x10;
        func_0x000107c61618();
        func_0x000107c615f4(param_1,3);
        func_0x000107c61580(puVar4,2);
        if (puVar9 == (undefined *)0x0) {
          func_0x000107c61574(puVar5);
        }
        else {
          func_0x000107c6157c(puVar4);
          FUN_103891f44(param_1,uVar1);
          func_0x000107c61574(puVar4);
          func_0x000107c61574(puVar5);
          func_0x000107c61170(puVar9);
        }
        func_0x000107c61578(puVar4,2);
        func_0x000107c615ec(param_1,3);
      }
      else {
        puVar9 = &UNK_1106a1ad0;
        func_0x000107c613fc(&UNK_1106a1ad0,0x18,7);
        func_0x000107c61614(puVar9 + 0x10);
        puVar6 = &UNK_1106a1c18;
        func_0x000107c613fc(&UNK_1106a1c18,0x38,7);
        *(undefined **)(puVar6 + 0x10) = puVar9;
        *(ulong *)(puVar6 + 0x18) = uVar11;
        *(undefined8 *)(puVar6 + 0x20) = uVar1;
        *(undefined8 *)(puVar6 + 0x28) = 0x103894090;
        *(undefined **)(puVar6 + 0x30) = puVar5;
        uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112fa5cb8);
        puVar7 = PTR_PTR_1126de960;
        func_0x000107c61168();
        func_0x000107c615f4(uVar11,3);
        func_0x000107c615f4(param_1,2);
        func_0x000107c61580(puVar4,2);
        func_0x000107c6157c(puVar9);
        func_0x000107c6157c(puVar5);
        func_0x000107c6157c(uVar10);
        puVar8 = puVar7;
        func_0x000107c5e348();
        func_0x000107c61180();
        puStack_90 = puVar8;
        func_0x0001002a64a8(&puStack_90);
        func_0x000107c61170(puVar8);
        func_0x000107c61574(uVar10);
        if (uVar3 != 2) {
          func_0x000107c61574(puVar9);
          uStack_70 = 0x10389410c;
          puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_88 = 0x42000000;
          puStack_80 = &UNK_1000b0c7c;
          puStack_78 = &UNK_1106a1c30;
          puStack_68 = puVar6;
          func_0x000107c60bc4(&puStack_90);
          puVar4 = puStack_68;
          func_0x000107c6157c(puVar6);
          func_0x000107c61574(puVar4);
          func_0x000107c413a4(uVar11);
          func_0x000107c61574(puVar6);
          param_1 = uVar11;
          goto code_r0x000107c615e8;
        }
        func_0x000107c413a4(uVar11);
        func_0x000107c61428(puVar9 + 0x10,&puStack_90,0,0);
        puVar8 = puVar9 + 0x10;
        func_0x000107c61618();
        if (puVar8 != (undefined *)0x0) {
          uVar10 = *(undefined8 *)(puVar8 + _DAT_112fa5cb8);
          func_0x000107c6157c(uVar10);
          func_0x000107c61170(puVar8);
          func_0x000107c41adc();
          func_0x000107c61180();
          apuStack_a8[0] = puVar7;
          func_0x0001002a64a8(apuStack_a8);
          func_0x000107c61170(puVar7);
          func_0x000107c61574(uVar10);
        }
        func_0x000107c61428(puVar4 + 0x10,apuStack_a8,0,0);
        puVar7 = puVar4 + 0x10;
        func_0x000107c61618();
        if (puVar7 == (undefined *)0x0) {
          func_0x000107c61574(puVar4);
          func_0x000107c61574(puVar5);
        }
        else {
          FUN_103891f44(param_1,uVar1);
          func_0x000107c61574(puVar4);
          func_0x000107c61574(puVar5);
          func_0x000107c61170(puVar7);
        }
        func_0x000107c61574(puVar4);
        func_0x000107c61574(puVar9);
        func_0x000107c61574(puVar6);
        func_0x000107c615ec(uVar11,2);
        func_0x000107c615ec(param_1,2);
      }
      return;
    }
    FUN_103891f44(param_1,uVar1);
  }
code_r0x000107c615e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103891f44; end: 103892163;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103891f44(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lVar6;
  undefined *puStack_58;
  
  uVar1 = *(ulong *)(unaff_x20 + _DAT_112fa5c78);
  func_0x000107c3db80();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5fc54();
  func_0x000107c61170(uVar1);
  if (uVar2 >> 0x3e == 0) {
    uVar1 = *(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar1 = uVar2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar2) {
      uVar1 = uVar2;
    }
    func_0x000107c60480();
  }
  func_0x000107c6142c(uVar2);
  lVar6 = _DAT_112fa5cb8;
  if (uVar1 != 0) {
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fa5cb8);
    puVar3 = PTR_PTR_1126de960;
    func_0x000107c61168();
    func_0x000107c6157c(uVar5);
    puVar4 = puVar3;
    func_0x000107c5e31c();
    func_0x000107c61180();
    puStack_58 = puVar4;
    func_0x0001002a64a8(&puStack_58);
    func_0x000107c61170(puVar4);
    func_0x000107c61574(uVar5);
    uVar2 = param_1;
    func_0x000107c3d074();
    if ((int)uVar2 == 0) {
      FUN_10389179c();
      if ((uVar2 & 1) == 0) {
        lVar6 = *(long *)(unaff_x20 + _DAT_112fa5c90);
        if (lVar6 == 0) {
          FUN_1038918f0();
        }
        else {
          func_0x000107c615f0(lVar6);
          FUN_1038924e8();
          func_0x000107c615e8(lVar6);
        }
      }
    }
    else {
      uVar2 = param_1;
      func_0x000107c3d0d0();
      if (uVar2 == 2) {
        uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fa5c90);
        *(undefined8 *)(unaff_x20 + _DAT_112fa5c90) = 0;
        func_0x000107c615e8(uVar5);
      }
      else {
        uVar2 = param_1;
        func_0x000107c3d0d0();
        if (uVar2 == 1) {
          uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fa5c90);
          *(ulong *)(unaff_x20 + _DAT_112fa5c90) = param_1;
          func_0x000107c615e8(uVar5);
          func_0x000107c615f0(param_1);
        }
      }
      FUN_1038921d4(param_1);
      uVar5 = *(undefined8 *)(unaff_x20 + lVar6);
      func_0x000107c6157c(uVar5);
      func_0x000107c419b8();
      func_0x000107c61180();
      puStack_58 = puVar3;
      func_0x0001002a64a8(&puStack_58);
      func_0x000107c61170(puVar3);
      func_0x000107c61574(uVar5);
    }
  }
  return;
}



/* Entry: 103892164; end: 1038921d3;  */

void FUN_103892164(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_103891f44(param_2,param_3);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1038921d4; end: 1038922d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1038921d4(long param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auVar6 [16];
  long lStack_50;
  long lStack_48;
  
  func_0x0001000d224c(&lStack_50);
  lVar1 = lStack_48;
  lVar5 = lStack_50;
  lVar3 = lStack_50;
  func_0x000107c614f0();
  lVar4 = 3;
  (**(code **)(lVar1 + 0x30))(3,lVar3,lVar1);
  func_0x000107c615e8(lVar5);
  func_0x0001000d224c(&lStack_50);
  lVar5 = lStack_50;
  func_0x000107c614f0();
  (**(code **)(lStack_48 + 0x28))(param_1,lVar5,lStack_48);
  func_0x000107c615e8(lStack_50);
  if (((uint)lVar5 & 0xff) == 1) {
    param_1 = lStack_50;
    func_0x000107c5eac8();
    lVar5 = param_1;
    func_0x000107c5eac8();
    lStack_50 = lVar5;
  }
  else {
    func_0x000107c5eac8();
    if ((((uint)lVar3 & 0xff) != 1) && (lStack_50 = param_1 - lVar4, SBORROW8(param_1,lVar4))) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1038922d4);
      (*pcVar2)();
    }
  }
  auVar6._8_8_ = lStack_50;
  auVar6._0_8_ = param_1;
  return auVar6;
}



/* Entry: 1038922d4; end: 103892413;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038922d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  long lStack_60;
  long lStack_58;
  
  FUN_103891a3c(param_1,param_3);
  lVar4 = unaff_x20 + _DAT_112fa5ca8;
  func_0x000107c61428(lVar4,auStack_90,0,0);
  lVar1 = *(long *)(lVar4 + 0x18);
  lVar2 = *(long *)(lVar4 + 0x20);
  FUN_103893948(lVar4,lVar1);
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar4 + 0x10))(auStack_90 + -extraout_x8);
  (**(code **)(lVar2 + 0x20))(auStack_78,lVar1,lVar2);
  (**(code **)(lVar4 + 8))(auStack_90 + -extraout_x8,lVar1);
  if (lStack_60 == 0) {
    FUN_103892ac0(auStack_78);
  }
  else {
    FUN_103893948(auStack_78,lStack_60);
    (**(code **)(lStack_58 + 8))(param_2,0,lStack_60,lStack_58);
    func_0x000103894070(auStack_78);
  }
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112fa5c90);
  *(undefined8 *)(unaff_x20 + _DAT_112fa5c90) = param_1;
  func_0x000107c615e8(uVar3);
  func_0x000107c615f0(param_1);
  return;
}



/* Entry: 103892414; end: 1038924e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103892414(long param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112fa5cb8);
    func_0x000107c6157c(uVar2);
    func_0x000107c61170(param_1);
    puVar1 = PTR_PTR_1126de960;
    func_0x000107c61168();
    func_0x000107c41adc();
    func_0x000107c61180();
    puStack_60 = puVar1;
    func_0x0001002a64a8(&puStack_60);
    func_0x000107c61170(puVar1);
    func_0x000107c61574(uVar2);
  }
  if (param_4 != (code *)0x0) {
    (*param_4)();
  }
  return;
}



/* Entry: 1038924e8; end: 10389278f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038924e8(ulong param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar8;
  long lVar9;
  undefined1 auStack_a0 [24];
  undefined *puStack_88;
  long lStack_80;
  long lStack_70;
  long lStack_68;
  
  uVar3 = param_1;
  puVar6 = PTR_s_respondsToSelector__11262c7e0;
  func_0x000107c61150(param_1,PTR_s_respondsToSelector__11262c7e0,PTR_s_identifier_1125d7178);
  if ((uVar3 & 1) != 0) {
    uVar3 = param_1;
    func_0x000107c44fdc(param_1);
    func_0x000107c61180();
    uVar4 = uVar3;
    func_0x000107c5faec();
    func_0x000107c61170(uVar3);
    func_0x0001000d224c(&puStack_88);
    puVar5 = puStack_88;
    func_0x000107c614f0(puStack_88);
    puVar7 = puVar6;
    (**(code **)(lStack_80 + 0x48))(uVar4,puVar6,puVar5,lStack_80);
    func_0x000107c6142c(puVar6);
    func_0x000107c615e8(puStack_88);
    if (((uint)puVar7 & 0xff) != 1) {
      lVar9 = unaff_x20 + _DAT_112fa5ca8;
      func_0x000107c61428(lVar9,auStack_a0,0,0);
      lVar1 = *(long *)(lVar9 + 0x18);
      lVar2 = *(long *)(lVar9 + 0x20);
      FUN_103893948(lVar9,lVar1);
      lVar9 = *(long *)(lVar1 + -8);
      (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0)
      ;
      (**(code **)(lVar9 + 0x10))(auStack_a0 + -extraout_x8);
      (**(code **)(lVar2 + 0x20))(&puStack_88,lVar1,lVar2);
      (**(code **)(lVar9 + 8))(auStack_a0 + -extraout_x8,lVar1);
      if (lStack_70 == 0) {
        FUN_103892ac0(&puStack_88);
      }
      else {
        FUN_103893948(&puStack_88,lStack_70);
        (**(code **)(lStack_68 + 8))(uVar4,0,lStack_70,lStack_68);
        func_0x000103894070(&puStack_88);
      }
    }
  }
  lVar9 = _DAT_112fa5cb8;
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112fa5cb8);
  puVar6 = PTR_PTR_1126de960;
  func_0x000107c61168();
  func_0x000107c6157c(uVar8);
  puVar5 = puVar6;
  func_0x000107c5e3a4();
  func_0x000107c61180();
  puStack_88 = puVar5;
  func_0x0001002a64a8(&puStack_88);
  func_0x000107c61170(puVar5);
  func_0x000107c61574(uVar8);
  uVar3 = param_1;
  func_0x000107c61150(param_1,PTR_s_respondsToSelector__11262c7e0,
                      PTR_s_prepareForActivationFromARBar_ac_11261ff38);
  if ((uVar3 & 1) != 0) {
    func_0x000107c4ede0(param_1);
  }
  uVar3 = param_1;
  func_0x000107c61150(param_1,PTR_s_respondsToSelector__11262c7e0,PTR_s_restoreFromARBar__11262cb20)
  ;
  if ((uVar3 & 1) != 0) {
    func_0x000107c50698(param_1);
  }
  uVar8 = *(undefined8 *)(unaff_x20 + lVar9);
  func_0x000107c6157c(uVar8);
  func_0x000107c41ce0();
  func_0x000107c61180();
  puStack_88 = puVar6;
  func_0x0001002a64a8(&puStack_88);
  func_0x000107c61170(puVar6);
  func_0x000107c61574(uVar8);
  return;
}



/* Entry: 103892790; end: 1038927ef; -[_TtC11SCARBarImpl9ARBarImpl init] */

void FUN_103892790(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCARBarImpl.ARBarImpl",0x15,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038927bc);
  (*pcVar1)();
}



/* Entry: 1038927f0; end: 1038928ab; -[_TtC11SCARBarImpl9ARBarImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038927f0(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fa5ca0));
  func_0x000103894070(param_1 + _DAT_112fa5ca8);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fa5cb0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fa5cb8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fa5cc0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fa5c78));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fa5c80));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fa5c88));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112fa5c90));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112fa5c98 + 8))
  ;
  return;
}



/* Entry: 1038928ac; end: 103892abf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038928ac(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long extraout_x8;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_a0 [24];
  undefined8 uStack_88;
  long lStack_80;
  long lStack_70;
  long lStack_68;
  
  func_0x0001000d224c(&uStack_88);
  uVar3 = uStack_88;
  func_0x000107c614f0();
  lVar4 = param_1;
  (**(code **)(lStack_80 + 0x38))(param_1,uVar3,lStack_80);
  if (lVar4 == 0) {
    (**(code **)(lStack_80 + 0x30))(param_1,uVar3,lStack_80);
    if ((((uint)uVar3 & 0xff) != 1) &&
       (lVar4 = param_1, (**(code **)(lStack_80 + 0x20))(), lVar4 != 0)) {
      FUN_103891a3c();
      lVar5 = unaff_x20 + _DAT_112fa5ca8;
      func_0x000107c61428(lVar5,auStack_a0,0,0);
      lVar1 = *(long *)(lVar5 + 0x18);
      lVar2 = *(long *)(lVar5 + 0x20);
      FUN_103893948(lVar5,lVar1);
      lVar5 = *(long *)(lVar1 + -8);
      (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0)
      ;
      (**(code **)(lVar5 + 0x10))(auStack_a0 + -extraout_x8);
      (**(code **)(lVar2 + 0x20))(&uStack_88,lVar1,lVar2);
      (**(code **)(lVar5 + 8))(auStack_a0 + -extraout_x8,lVar1);
      if (lStack_70 != 0) {
        FUN_103893948(&uStack_88,lStack_70);
        (**(code **)(lStack_68 + 8))(param_1,param_2 & 1,lStack_70,lStack_68);
        func_0x000107c615e8(uStack_88);
        func_0x000107c615e8(lVar4);
        func_0x000103894070(&uStack_88);
        return;
      }
      func_0x000107c615e8(uStack_88);
      func_0x000107c615e8(lVar4);
      FUN_103892ac0(&uStack_88);
      return;
    }
  }
  else {
    func_0x000107c615f0();
    FUN_103891a3c();
    func_0x000107c615ec(lVar4,2);
  }
  func_0x000107c615e8(uStack_88);
  return;
}



/* Entry: 103892ac0; end: 103892b07;  */

undefined8 FUN_103892ac0(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112fa5cd0;
  func_0x0001000285a8(0x112fa5cd0,&UNK_10dc18ea0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 103892b08; end: 103892b4f; -[_TtC11SCARBarImpl9ARBarImpl activateFeatureWithType:animated:] */

void FUN_103892b08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174();
  FUN_1038928ac(param_3,param_4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103892b50; end: 103892b9b; -[_TtC11SCARBarImpl9ARBarImpl activateFeatureWithType:animated:activationType:] */

void FUN_103892b50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174();
  FUN_1038928ac(param_3,param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103892b9c; end: 103892cd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103892b9c(void)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  ulong uVar4;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  uVar4 = *(ulong *)(unaff_x20 + _DAT_112fa5c90);
  uVar3 = uVar4;
  if (uVar4 == 0) {
    func_0x0001000d224c(&uStack_60);
    func_0x0001000d224c(&uStack_70);
    uVar1 = uStack_70;
    func_0x000107c614f0();
    uVar2 = 3;
    (**(code **)(lStack_68 + 0x30))(3,uVar1,lStack_68);
    func_0x000107c615e8(uStack_70);
    uVar3 = 0;
    if (((uint)uVar1 & 0xff) != 1) {
      uVar3 = uVar2;
    }
    uVar1 = uStack_60;
    func_0x000107c614f0(uStack_60);
    (**(code **)(lStack_58 + 0x20))(uVar3,uVar1,lStack_58);
    func_0x000107c615e8(uStack_60);
    if (uVar3 == 0) {
      return 0;
    }
  }
  uVar2 = uVar3;
  func_0x000107c61150(uVar3,PTR_s_respondsToSelector__11262c7e0,
                      PTR_s_prepareForActivationFromARBar_ac_11261ff38);
  func_0x000107c615f0(uVar4);
  if ((uVar2 & 1) != 0) {
    func_0x000107c4ede0(uVar3);
  }
  func_0x000107c3d074(uVar3);
  func_0x000107c615e8(uVar3);
  return 1;
}



/* Entry: 103892cd8; end: 103892d13; -[_TtC11SCARBarImpl9ARBarImpl activateCurrentFeatureWithActivationType:] */

uint FUN_103892cd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_103892b9c(param_3);
  func_0x000107c61170(param_1);
  return (uint)param_3 & 1;
}



/* Entry: 103892d14; end: 103892e97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103892d14(undefined8 param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long extraout_x8;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  long lStack_70;
  long lStack_60;
  long lStack_58;
  
  func_0x0001000d224c(&uStack_78);
  uVar3 = uStack_78;
  func_0x000107c614f0();
  uVar4 = param_1;
  (**(code **)(lStack_70 + 0x28))(param_1,uVar3,lStack_70);
  func_0x000107c615e8(uStack_78);
  if (((uint)uVar3 & 0xff) != 1) {
    FUN_103891a3c(param_1,0);
    lVar5 = unaff_x20 + _DAT_112fa5ca8;
    func_0x000107c61428(lVar5,auStack_90,0,0);
    lVar1 = *(long *)(lVar5 + 0x18);
    lVar2 = *(long *)(lVar5 + 0x20);
    FUN_103893948(lVar5,lVar1);
    lVar5 = *(long *)(lVar1 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar5 + 0x10))(auStack_90 + -extraout_x8);
    (**(code **)(lVar2 + 0x20))(&uStack_78,lVar1,lVar2);
    (**(code **)(lVar5 + 8))(auStack_90 + -extraout_x8,lVar1);
    if (lStack_60 == 0) {
      FUN_103892ac0(&uStack_78);
    }
    else {
      FUN_103893948(&uStack_78,lStack_60);
      (**(code **)(lStack_58 + 8))(uVar4,param_2 & 1,lStack_60,lStack_58);
      func_0x000103894070(&uStack_78);
    }
  }
  return;
}



/* Entry: 103892e98; end: 103892eef; -[_TtC11SCARBarImpl9ARBarImpl activateFeature:animated:] */

void FUN_103892e98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_103892d14(param_3,param_4);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103892ef0; end: 1038930d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103892ef0(ulong param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long extraout_x8;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_a0 [24];
  undefined8 uStack_88;
  long lStack_80;
  long lStack_70;
  long lStack_68;
  
  uVar3 = param_1;
  FUN_103890990();
  if ((uVar3 & 1) != 0) {
    func_0x0001000d224c(&uStack_88);
    uVar4 = uStack_88;
    func_0x000107c614f0(uStack_88);
    (**(code **)(lStack_80 + 0x48))(param_1,param_2,uVar4,lStack_80);
    if ((((uint)param_2 & 0xff) == 1) ||
       (uVar3 = param_1, (**(code **)(lStack_80 + 0x20))(), uVar3 == 0)) {
      func_0x000107c615e8(uStack_88);
    }
    else {
      FUN_103891a3c();
      lVar5 = unaff_x20 + _DAT_112fa5ca8;
      func_0x000107c61428(lVar5,auStack_a0,0,0);
      lVar1 = *(long *)(lVar5 + 0x18);
      lVar2 = *(long *)(lVar5 + 0x20);
      FUN_103893948(lVar5,lVar1);
      lVar5 = *(long *)(lVar1 + -8);
      (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0)
      ;
      (**(code **)(lVar5 + 0x10))(auStack_a0 + -extraout_x8);
      (**(code **)(lVar2 + 0x20))(&uStack_88,lVar1,lVar2);
      (**(code **)(lVar5 + 8))(auStack_a0 + -extraout_x8,lVar1);
      if (lStack_70 == 0) {
        func_0x000107c615e8(uStack_88);
        func_0x000107c615e8(uVar3);
        FUN_103892ac0(&uStack_88);
      }
      else {
        FUN_103893948(&uStack_88,lStack_70);
        (**(code **)(lStack_68 + 8))(param_1,param_3 & 1,lStack_70,lStack_68);
        func_0x000107c615e8(uStack_88);
        func_0x000107c615e8(uVar3);
        func_0x000103894070(&uStack_88);
      }
    }
  }
  return;
}



/* Entry: 1038930d4; end: 103893147; -[_TtC11SCARBarImpl9ARBarImpl activateFeatureWithIdentifier:animated:activationType:] */

void FUN_1038930d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_103892ef0(param_3,param_2,param_4,param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 103893148; end: 10389339f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103893148(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  long unaff_x20;
  long lVar8;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar5 = &puStack_80;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fa5c98);
  uVar2 = puVar1[1];
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  func_0x000107c6142c(uVar2);
  puVar3 = &UNK_1106a1ad0;
  func_0x000107c613fc(&UNK_1106a1ad0,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  lVar8 = *(long *)(unaff_x20 + _DAT_112fa5c90);
  if (lVar8 == 0) {
    func_0x000107c61428(puVar3 + 0x10,&puStack_80,0,0);
    puVar6 = puVar3 + 0x10;
    func_0x000107c61618();
    if (puVar6 == (undefined *)0x0) {
      func_0x000107c61574(puVar3);
    }
    else {
      puVar7 = puVar3;
      func_0x000107c6157c();
      FUN_103890990();
      if (((ulong)puVar7 & 1) != 0) {
        FUN_1038918f0();
      }
      func_0x000107c61170(puVar6);
      func_0x000107c61578(puVar3,2);
    }
  }
  else {
    puVar6 = &UNK_1106a1ad0;
    func_0x000107c613fc(&UNK_1106a1ad0,0x18,7);
    func_0x000107c61614(puVar6 + 0x10);
    puVar7 = &UNK_1106a1af8;
    func_0x000107c613fc(&UNK_1106a1af8,0x38,7);
    *(undefined **)(puVar7 + 0x10) = puVar6;
    *(long *)(puVar7 + 0x18) = lVar8;
    *(undefined8 *)(puVar7 + 0x20) = 0;
    *(code **)(puVar7 + 0x28) = FUN_1038933fc;
    *(undefined **)(puVar7 + 0x30) = puVar3;
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112fa5cb8);
    puVar4 = PTR_PTR_1126de960;
    func_0x000107c61168();
    func_0x000107c615f4(lVar8,4);
    func_0x000107c61580(puVar3,2);
    func_0x000107c6157c(puVar6);
    func_0x000107c6157c(uVar2);
    func_0x000107c5e348();
    func_0x000107c61180();
    puStack_80 = puVar4;
    func_0x0001002a64a8(&puStack_80);
    func_0x000107c61170(puVar4);
    func_0x000107c61574(uVar2);
    func_0x000107c61574(puVar6);
    uStack_60 = 0x103893404;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1000b0c7c;
    puStack_68 = &UNK_1106a1b10;
    puStack_58 = puVar7;
    func_0x000107c60bc4(&puStack_80);
    puVar6 = puStack_58;
    func_0x000107c6157c(puVar7);
    func_0x000107c61574(puVar6);
    func_0x000107c413a4(lVar8);
    func_0x000107c61574(puVar7);
    func_0x000107c615ec(lVar8,2);
    func_0x000107c61578(puVar3,2);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c615e8(lVar8);
  }
  return;
}



/* Entry: 1038933a0; end: 1038933fb;  */

void FUN_1038933a0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  uVar1 = param_1 + 0x10;
  func_0x000107c61618();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    FUN_103890990();
    if ((uVar2 & 1) != 0) {
      FUN_1038918f0();
    }
    func_0x000107c61170(uVar1);
  }
  return;
}



/* Entry: 1038933fc; end: 103893423;  */

void FUN_1038933fc(void)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  uVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    FUN_103890990();
    if ((uVar2 & 1) != 0) {
      FUN_1038918f0();
    }
    func_0x000107c61170(uVar1);
  }
  return;
}



/* Entry: 103893424; end: 10389344b; -[_TtC11SCARBarImpl9ARBarImpl reset] */

void FUN_103893424(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103893148();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10389344c; end: 1038935bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10389344c(long param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x0001000d224c(&uStack_50);
  uVar1 = uStack_50;
  func_0x000107c614f0(uStack_50);
  (**(code **)(lStack_48 + 0x20))(param_1,uVar1,lStack_48);
  func_0x000107c615e8(uStack_50);
  if (param_1 != 0) {
    func_0x000107c615f0(param_1);
    FUN_103891a3c();
    func_0x000107c615ec(param_1,2);
  }
  return;
}



/* Entry: 1038935c0; end: 1038936b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038935c0(void)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x0001000d224c(&uStack_40);
  uVar1 = uStack_40;
  func_0x000107c614f0(uStack_40);
  (**(code **)(lStack_38 + 8))();
  func_0x000107c615e8(uStack_40);
  FUN_103891a3c(uVar1,0);
  func_0x000107c615e8(uVar1);
  return;
}



/* Entry: 1038936b8; end: 1038936bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038936b8(long param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x0001000d224c(&uStack_50);
  uVar1 = uStack_50;
  func_0x000107c614f0(uStack_50);
  (**(code **)(lStack_48 + 0x20))(param_1,uVar1,lStack_48);
  func_0x000107c615e8(uStack_50);
  if (param_1 != 0) {
    func_0x000107c615f0(param_1);
    FUN_103891a3c();
    func_0x000107c615ec(param_1,2);
  }
  return;
}



/* Entry: 1038936c0; end: 103893763; -[_TtC11SCARBarImpl9ARBarImpl isActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1038936c0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + _DAT_112fa5c78);
  func_0x000107c61174();
  func_0x000107c3db80();
  func_0x000107c61180();
  uVar1 = uVar2;
  func_0x000107c5fc54();
  func_0x000107c61170(uVar2);
  if (uVar1 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar1) {
      uVar2 = uVar1;
    }
    func_0x000107c60480(uVar2);
  }
  func_0x000107c6142c(uVar1);
  func_0x000107c61170(param_1);
  return uVar2 != 0;
}



/* Entry: 103893764; end: 103893947;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103893764(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  code *pcVar9;
  long lVar10;
  undefined1 auStack_a0 [24];
  undefined8 uStack_88;
  long lStack_80;
  long lStack_70;
  long lStack_68;
  
  if (*(char *)(unaff_x20 + _DAT_112fa5cc8) == '\x01') {
    uVar5 = param_1;
    FUN_103890990();
    if ((uVar5 & 1) != 0) {
      uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112fa5c78);
      FUN_103893948(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c3d798(uVar6);
      func_0x000107c615e8(param_1);
      if (param_3 == 0) {
        return;
      }
      uVar5 = param_2;
      FUN_103890990();
      if ((uVar5 & 1) != 0) {
        func_0x0001000d224c(&uStack_88);
        uVar6 = uStack_88;
        func_0x000107c614f0(uStack_88);
        (**(code **)(lStack_80 + 0x48))(param_2,param_3,uVar6,lStack_80);
        if ((((uint)param_3 & 0xff) == 1) ||
           (uVar5 = param_2, (**(code **)(lStack_80 + 0x20))(), uVar5 == 0)) {
          func_0x000107c615e8(uStack_88);
        }
        else {
          FUN_103891a3c();
          lVar10 = unaff_x20 + _DAT_112fa5ca8;
          func_0x000107c61428(lVar10,auStack_a0,0,0);
          lVar3 = *(long *)(lVar10 + 0x18);
          lVar4 = *(long *)(lVar10 + 0x20);
          FUN_103893948(lVar10,lVar3);
          lVar10 = *(long *)(lVar3 + -8);
          (*(code *)PTR____chkstk_darwin_11034bd40)
                    (*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
          (**(code **)(lVar10 + 0x10))(auStack_a0 + -extraout_x8);
          (**(code **)(lVar4 + 0x20))(&uStack_88,lVar3,lVar4);
          (**(code **)(lVar10 + 8))(auStack_a0 + -extraout_x8,lVar3);
          if (lStack_70 == 0) {
            func_0x000107c615e8(uStack_88);
            func_0x000107c615e8(uVar5);
            FUN_103892ac0(&uStack_88);
          }
          else {
            FUN_103893948(&uStack_88,lStack_70);
            (**(code **)(lStack_68 + 8))(param_2,0,lStack_70,lStack_68);
            func_0x000107c615e8(uStack_88);
            func_0x000107c615e8(uVar5);
            func_0x000103894070(&uStack_88);
          }
        }
      }
      return;
    }
    uVar5 = 0;
    if (param_3 != 0) {
      uVar5 = param_2;
    }
    puVar1 = (ulong *)(unaff_x20 + _DAT_112fa5c98);
    uVar7 = puVar1[1];
    uVar2 = 0;
    if (param_3 != 0) {
      uVar2 = param_4;
    }
    *puVar1 = uVar5;
    puVar1[1] = param_3;
    puVar1[2] = uVar2;
    func_0x000107c61434(param_3);
    func_0x000107c6142c(uVar7);
    uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112fa5c78);
    uVar8 = *(undefined8 *)(param_1 + 0x18);
  }
  else {
    uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112fa5c78);
    uVar8 = *(undefined8 *)(param_1 + 0x18);
  }
  FUN_103893948(param_1,uVar8);
  func_0x000107c605b0();
  func_0x000107c3d798(uVar6);
  func_0x000107c615e8(param_1);
  lVar10 = unaff_x20 + _DAT_112fa5ca8;
  func_0x000107c61428(lVar10,&stack0xffffffffffffffa8,0x21,0);
  lVar3 = *(long *)(lVar10 + 0x20);
  func_0x0001000c6518(lVar10,*(undefined8 *)(lVar10 + 0x18));
  pcVar9 = *(code **)(lVar3 + 0x10);
  func_0x000107c615f0();
  (*pcVar9)();
  func_0x000107c614a8(&stack0xffffffffffffffa8);
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112fa5cb0);
  func_0x000107c6157c();
  FUN_103890990();
  func_0x000100087c34(&stack0xffffffffffffffa8);
  func_0x000107c61574(uVar6);
  return;
}



/* Entry: 103893948; end: 10389396b;  */

long * FUN_103893948(long *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(*(long *)(param_2 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) != 0) {
    uVar2 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(*param_1 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  }
  return param_1;
}



/* Entry: 10389396c; end: 103893ba3; -[_TtC11SCARBarImpl9ARBarImpl activateWithChallenger:feature:activationType:] */

void FUN_10389396c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined1 auStack_60 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  func_0x000107c60234(auStack_60,param_3);
  func_0x000107c615e8(param_3);
  if (param_4 == 0) {
    lVar1 = 0;
    param_2 = 0;
  }
  else {
    lVar1 = param_4;
    func_0x000107c5faec(param_4);
    func_0x000107c61170(param_4);
  }
  FUN_103893764(auStack_60,lVar1,param_2,param_5);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000103894070(auStack_60);
  return;
}



/* Entry: 103893ba4; end: 103893baf; -[_TtC11SCARBarImpl9ARBarImpl deactivateWithChallenger:] */

void FUN_103893ba4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  (*(code *)0x103893a34)(auStack_50);
  func_0x000107c61170(param_1);
  func_0x000103894070(auStack_50);
  return;
}



/* Entry: 103893bb0; end: 103893caf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103893bb0(long param_1)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  byte abStack_58 [24];
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112fa5c80);
  FUN_103893948(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c3d798(uVar4);
  func_0x000107c615e8(param_1);
  lVar1 = unaff_x20 + _DAT_112fa5ca8;
  func_0x000107c61428(lVar1,abStack_58,0x21,0);
  lVar2 = *(long *)(lVar1 + 0x20);
  func_0x0001000c6518(lVar1,*(undefined8 *)(lVar1 + 0x18));
  pcVar6 = *(code **)(lVar2 + 0x10);
  func_0x000107c615f0();
  (*pcVar6)();
  func_0x000107c614a8(abStack_58);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fa5cb0);
  uVar4 = uVar5;
  func_0x000107c6157c();
  bVar3 = (byte)uVar4;
  FUN_103890990();
  abStack_58[0] = bVar3 & 1;
  func_0x000100087c34(abStack_58);
  func_0x000107c61574(uVar5);
  return;
}



/* Entry: 103893cb0; end: 103893cbb; -[_TtC11SCARBarImpl9ARBarImpl restrictActivationWithChallenger:] */

void FUN_103893cb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  FUN_103893bb0(auStack_50);
  func_0x000107c61170(param_1);
  func_0x000103894070(auStack_50);
  return;
}



/* Entry: 103893cbc; end: 103893d33;  */

void FUN_103893cbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  (*param_4)(auStack_50);
  func_0x000107c61170(param_1);
  func_0x000103894070(auStack_50);
  return;
}



/* Entry: 103893d34; end: 103893e33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103893d34(long param_1)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  byte abStack_58 [24];
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112fa5c80);
  FUN_103893948(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c4ff80(uVar4);
  func_0x000107c615e8(param_1);
  lVar1 = unaff_x20 + _DAT_112fa5ca8;
  func_0x000107c61428(lVar1,abStack_58,0x21,0);
  lVar2 = *(long *)(lVar1 + 0x20);
  func_0x0001000c6518(lVar1,*(undefined8 *)(lVar1 + 0x18));
  pcVar6 = *(code **)(lVar2 + 0x10);
  func_0x000107c615f0();
  (*pcVar6)();
  func_0x000107c614a8(abStack_58);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fa5cb0);
  uVar4 = uVar5;
  func_0x000107c6157c();
  bVar3 = (byte)uVar4;
  FUN_103890990();
  abStack_58[0] = bVar3 & 1;
  func_0x000100087c34(abStack_58);
  func_0x000107c61574(uVar5);
  return;
}



/* Entry: 103893e34; end: 103893e3f; -[_TtC11SCARBarImpl9ARBarImpl allowActivationWithChallenger:] */

void FUN_103893e34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  FUN_103893d34(auStack_50);
  func_0x000107c61170(param_1);
  func_0x000103894070(auStack_50);
  return;
}



/* Entry: 103893e40; end: 103893e5f;  */

void FUN_103893e40(void)

{
  func_0x000107c61168(&PTR_PTR_1128f7830);
  return;
}



/* Entry: 103893e60; end: 103893f0b; -[_TtC11SCARBarImpl9ARBarImpl restrictedWithChallenger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103893e60(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  puVar1 = auStack_50;
  func_0x000107c615f0(param_3);
  func_0x000107c61174();
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fa5c80);
  FUN_103893948(auStack_50,uStack_38);
  func_0x000107c605b0();
  func_0x000107c40404(uVar2);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(puVar1);
  func_0x000103894070(auStack_50);
  return uVar2;
}



/* Entry: 103893f0c; end: 103893f13;  */

void FUN_103893f0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 103893f14; end: 103893f47;  */

undefined8 * FUN_103893f14(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  func_0x000107c61434();
  return param_1;
}



/* Entry: 103893f48; end: 103893f9b;  */

undefined8 * FUN_103893f48(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  return param_1;
}



/* Entry: 103893f9c; end: 103893fd7;  */

undefined8 * FUN_103893f9c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  param_1[2] = param_2[2];
  return param_1;
}



/* Entry: 103893fd8; end: 10389409b;  */

int FUN_103893fd8(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10389409c; end: 1038940d7;  */

void FUN_10389409c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1038940d8; end: 10389410f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038940d8(void)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  pcVar1 = *(code **)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar2 + 0x10,auStack_58,0,0,*(undefined8 *)(unaff_x20 + 0x30));
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    uVar4 = *(undefined8 *)(lVar2 + _DAT_112fa5cb8);
    func_0x000107c6157c(uVar4);
    func_0x000107c61170(lVar2);
    puVar3 = PTR_PTR_1126de960;
    func_0x000107c61168();
    func_0x000107c41adc();
    func_0x000107c61180();
    puStack_60 = puVar3;
    func_0x0001002a64a8(&puStack_60);
    func_0x000107c61170(puVar3);
    func_0x000107c61574(uVar4);
  }
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  return;
}



/* Entry: 103894110; end: 1038941c7; -[_TtC11SCARBarImpl19ARBarBackgroundView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103894110(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  long lStack_50;
  long lStack_48;
  
  plVar3 = &lStack_50;
  lVar2 = param_5;
  func_0x000107c614f0();
  *(undefined8 *)(param_5 + _DAT_112fa5d00) = 0;
  puVar1 = (undefined8 *)(param_5 + _DAT_112fa5d08);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *(undefined1 *)(param_5 + _DAT_112fa5d10) = 1;
  lStack_50 = param_5;
  lStack_48 = lVar2;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&lStack_50,PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  FUN_10389431c();
  func_0x000107c61170(plVar3);
  return (undefined1 *)plVar3;
}



/* Entry: 1038941c8; end: 10389426f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1038941c8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long unaff_x20;
  
  puVar2 = &stack0xffffffffffffffc0;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112fa5d00) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fa5d08);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112fa5d10) = 1;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_initWithCoder__1125dd730,param_1);
  if (puVar2 != (undefined1 *)0x0) {
    puVar3 = puVar2;
    func_0x000107c61174(puVar2);
    FUN_10389431c();
    func_0x000107c61170(puVar3);
  }
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 103894270; end: 103894297; -[_TtC11SCARBarImpl19ARBarBackgroundView initWithCoder:] */

void FUN_103894270(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_1038941c8();
  return;
}



/* Entry: 103894298; end: 10389431b; -[_TtC11SCARBarImpl19ARBarBackgroundView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103894298(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_layoutSubviews_112600e60;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_30,puVar1);
  lVar2 = *(long *)(param_1 + _DAT_112fa5d00);
  if (lVar2 != 0) {
    func_0x000107c61174();
    func_0x000107c3ec60(param_1);
    func_0x000107c54b80(lVar2);
    func_0x000107c61170(lVar2);
  }
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10389431c; end: 1038945f3;  */

/* WARNING: Possible PIC construction at 0x000103894580: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010389459c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038945c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038945d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103894490: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038944ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038944f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010389450c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001038944f4) */
/* WARNING: Removing unreachable block (ram,0x0001038944b0) */
/* WARNING: Removing unreachable block (ram,0x000103894494) */
/* WARNING: Removing unreachable block (ram,0x0001038945a0) */
/* WARNING: Removing unreachable block (ram,0x0001038945c8) */
/* WARNING: Removing unreachable block (ram,0x0001038945a8) */
/* WARNING: Removing unreachable block (ram,0x000103894584) */
/* WARNING: Removing unreachable block (ram,0x000103894510) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10389431c(void)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *unaff_x20;
  long lVar6;
  
  lVar5 = _DAT_112fa5d00;
  lVar2 = *(long *)(unaff_x20 + _DAT_112fa5d00);
  if (lVar2 != 0) {
    func_0x000107c4ff30();
  }
  if (unaff_x20[_DAT_112fa5d10] == '\x01') {
    plVar1 = (long *)(unaff_x20 + _DAT_112fa5d08);
    if ((*plVar1 == 0) || (lVar5 = plVar1[2], lVar5 == 0)) {
      func_0x000100673624();
      func_0x000107c613fc();
      *(undefined8 *)(lVar2 + 0x18) = 5;
      *(undefined8 *)(lVar2 + 0x10) = 2;
      func_0x0001002ed07c(0);
      uVar4 = 0;
      func_0x000107c60110();
      *(undefined8 *)(lVar2 + 0x20) = uVar4;
      lVar5 = 1;
      func_0x000107c60110();
      *(long *)(lVar2 + 0x28) = lVar5;
      func_0x0001028b6d3c();
      func_0x000107c61534();
      *(undefined8 *)(lVar5 + 0x18) = 5;
      *(undefined8 *)(lVar5 + 0x10) = 2;
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
      func_0x000107c5af88();
      func_0x000107c61180();
      func_0x000107c3fdd0(0);
      func_0x000107c61180();
    }
    else {
      lVar6 = plVar1[3];
      func_0x00010388cd64(lVar5,lVar6);
      lVar2 = lVar5;
      FUN_103894688(lVar5,lVar6);
      func_0x000107c6142c(lVar6);
      func_0x000107c6142c(lVar5);
      if (lVar2 == 0) {
        return;
      }
      func_0x000107c61174(lVar2);
      func_0x000107c4aba4();
      func_0x000107c61180();
      func_0x000107c3d894();
      puVar3 = unaff_x20;
    }
  }
  else {
    puVar3 = *(undefined **)(unaff_x20 + lVar5);
    *(undefined8 *)(unaff_x20 + lVar5) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1038945f4; end: 103894627;  */

void FUN_1038945f4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103894628; end: 103894667; -[_TtC11SCARBarImpl19ARBarBackgroundView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010381e524: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010381e528) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103894628(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fa5d00));
  plVar1 = (long *)(param_1 + _DAT_112fa5d08);
  lVar2 = plVar1[2];
  lVar3 = plVar1[3];
  if (*plVar1 == 0) {
    return;
  }
  func_0x000107c61170(*plVar1,plVar1[1]);
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar2,lVar3);
    return;
  }
  return;
}



/* Entry: 103894668; end: 103894687;  */

void FUN_103894668(void)

{
  func_0x000107c61168(&PTR_PTR_1128f7950);
  return;
}



/* Entry: 103894688; end: 10389487b;  */

undefined * FUN_103894688(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
  func_0x000107c610f8(PTR__OBJC_CLASS___CAGradientLayer_1126b2788);
  func_0x000107c453e4();
  FUN_1033d92b8(param_2);
  uVar2 = param_2;
  func_0x000107c5fc48();
  func_0x000107c6142c(param_2);
  func_0x000107c535a0(puVar1);
  func_0x000107c61170(uVar2);
  uVar2 = 0;
  func_0x0001002ed07c(0);
  func_0x000107c5fc48(param_1,uVar2);
  func_0x000107c56084(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c597c4(0x3fe0000000000000,0,puVar1);
  func_0x000107c54598(0x3fe0000000000000,0x3ff0000000000000,puVar1);
  func_0x000107c59190(puVar1);
  return puVar1;
}


