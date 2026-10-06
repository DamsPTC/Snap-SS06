/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103172c2c; end: 103172da3;  */

/* WARNING: Possible PIC construction at 0x000103172d08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103172d0c) */
/* WARNING: Removing unreachable block (ram,0x000103172d78) */
/* WARNING: Removing unreachable block (ram,0x000103172d24) */

void FUN_103172c2c(ulong param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = param_1;
  uVar3 = param_2;
  func_0x000107c4b1dc();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5faec();
  uVar4 = uVar3;
  func_0x000107c61170(uVar1);
  func_0x000107c4b1dc();
  func_0x000107c61180();
  uVar1 = param_2;
  func_0x000107c5faec();
  func_0x000107c61170(param_2);
  if ((uVar2 == uVar1) && (uVar3 == uVar4)) {
    func_0x000107c6142c(uVar3);
    func_0x000107c6142c(uVar4);
  }
  else {
    func_0x000107c605b8(uVar2,uVar3,uVar1,uVar4,0);
    func_0x000107c6142c(uVar3);
    func_0x000107c6142c(uVar4);
    if ((uVar2 & 1) == 0) goto code_r0x000107c61174;
  }
  func_0x000107c61434(param_4);
code_r0x000107c61174:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_1);
  return;
}



/* Entry: 103172da4; end: 103172dc3; -[_TtC19LensGamesChatDrawer23GamesExplorerChatDrawer inputController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103172da4(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112f46e38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103172dc4; end: 103172dd7; -[_TtC19LensGamesChatDrawer23GamesExplorerChatDrawer setInputController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103172dc4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112f46e38,param_3);
  return;
}



/* Entry: 103172dd8; end: 103172df7; -[_TtC19LensGamesChatDrawer23GamesExplorerChatDrawer inputItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103172dd8(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112f46e40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103172df8; end: 103172e0b; -[_TtC19LensGamesChatDrawer23GamesExplorerChatDrawer setInputItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103172df8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112f46e40,param_3);
  return;
}



/* Entry: 103172e0c; end: 103172eb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103172e0c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined *puVar2;
  long unaff_x20;
  long lVar3;
  
  plVar1 = (long *)(unaff_x20 + _DAT_112f46e50);
  if ((char)plVar1[1] == '\x01') {
    puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
    func_0x000107c4c194();
    func_0x000107c61180();
    func_0x000107c51724();
    func_0x000107c61170(puVar2);
    func_0x000107c609b0(param_1,param_2,param_3,param_4);
    lVar3 = (long)((param_1 + param_1) / 3.0);
    *plVar1 = lVar3;
    *(undefined1 *)(plVar1 + 1) = 0;
  }
  else {
    lVar3 = *plVar1;
  }
  return lVar3;
}



/* Entry: 103172eb8; end: 103172ec7; -[_TtC19LensGamesChatDrawer23GamesExplorerChatDrawer setDefaultDrawerHeight:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103172eb8(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_112f46e48) = param_1;
  return;
}



/* Entry: 103172ec8; end: 103172efb; -[_TtC19LensGamesChatDrawer23GamesExplorerChatDrawer initWithCoder:] */

undefined8 FUN_103172ec8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_103174a74();
  func_0x000107c61174(param_3);
  return param_1;
}



/* Entry: 103172efc; end: 10317357b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103172efc(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  code *pcVar17;
  long unaff_x20;
  long lVar18;
  undefined1 auStack_b0 [24];
  undefined8 uStack_98;
  long lStack_90;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  long lStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar17 = (code *)SoftwareBreakpoint(1,0x10317355c);
    (*pcVar17)();
  }
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5c5e8();
  func_0x000107c61180();
  func_0x000107c52b50(lVar2);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(puVar1);
  lVar2 = *(long *)(*(long *)(unaff_x20 + _DAT_112f46e58) + _DAT_113071320);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar18 = *(long *)(unaff_x20 + _DAT_112f46e60);
    uVar3 = *(undefined8 *)(lVar18 + 0x18);
    lVar4 = *(long *)(lVar18 + 0x20);
    func_0x000107c614f0();
    (**(code **)(lVar4 + 8))();
    lVar4 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(1,0x103173560);
      (*pcVar17)();
    }
    func_0x000107c5a050();
    func_0x000107c61170(lVar4);
    puVar1 = PTR_PTR_1126b0870;
    func_0x000107c610f8();
    func_0x000107c47da4();
    func_0x000107c61180();
    func_0x000107c5a050();
    lVar4 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(1,0x103173564);
      (*pcVar17)();
    }
    func_0x000107c3d89c();
    func_0x000107c61170();
    func_0x0001008478a8();
    func_0x000107c613fc();
    *(undefined8 *)(lVar4 + 0x18) = 9;
    *(undefined8 *)(lVar4 + 0x10) = 4;
    puVar5 = puVar1;
    func_0x000107c4acb0();
    func_0x000107c61180();
    lVar6 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(1,0x103173568);
      (*pcVar17)();
    }
    lVar7 = lVar6;
    func_0x000107c4acb0();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    puVar8 = puVar5;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    func_0x000107c61170(lVar7);
    *(undefined **)(lVar4 + 0x20) = puVar8;
    puVar5 = puVar1;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    lVar6 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(1,0x10317356c);
      (*pcVar17)();
    }
    lVar7 = lVar6;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    puVar8 = puVar5;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    func_0x000107c61170(lVar7);
    *(undefined **)(lVar4 + 0x28) = puVar8;
    puVar5 = puVar1;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    lVar6 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(1,0x103173570);
      (*pcVar17)();
    }
    lVar7 = lVar6;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    puVar8 = puVar5;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    func_0x000107c61170(lVar7);
    *(undefined **)(lVar4 + 0x30) = puVar8;
    puVar5 = puVar1;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    func_0x000107c61170(puVar1);
    lVar6 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(1,0x103173574);
      (*pcVar17)();
    }
    puVar8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    lVar7 = lVar6;
    func_0x000107c3ec1c(lVar6);
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    puVar9 = puVar5;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    func_0x000107c61170(lVar7);
    *(undefined **)(lVar4 + 0x38) = puVar9;
    uVar10 = 0;
    func_0x000100847984(0);
    lVar6 = lVar4;
    func_0x000107c5fc48(lVar4,uVar10);
    func_0x000107c61574(lVar4);
    func_0x000107c3d048(puVar8);
    func_0x000107c61170(lVar6);
    func_0x00010436fe50(0);
    func_0x000107c610f8();
    uVar11 = 0;
    func_0x00010436fbe4(0,1,0,0,0);
    puVar5 = PTR_PTR_1126b1b50;
    func_0x000107c61168(PTR_PTR_1126b1b50);
    func_0x000107c61174(puVar1);
    func_0x000107c41638(puVar5);
    func_0x000107c61180();
    uVar10 = 0x6172645f74616863;
    func_0x000107c5fadc(0x6172645f74616863,0xeb00000000726577);
    func_0x000107c4ef0c(lVar2);
    func_0x000107c61170(puVar1);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(uVar10);
    uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112f46e90);
    lVar4 = ((undefined8 *)(unaff_x20 + _DAT_112f46e90))[1];
    lVar6 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(1,0x103173578);
      (*pcVar17)();
    }
    lVar7 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(1,0x10317357c);
      (*pcVar17)();
    }
    lVar12 = lVar7;
    func_0x000107c515ac();
    func_0x000107c61180();
    func_0x000107c61170(lVar7);
    lVar13 = lVar12;
    func_0x000107c5cbe4(lVar12);
    func_0x000107c61180();
    func_0x000107c61170(lVar12);
    uVar16 = *(undefined8 *)(lVar18 + 0x18);
    lVar7 = *(long *)(lVar18 + 0x20);
    uVar14 = uVar16;
    func_0x000107c614f0(uVar16);
    pcVar17 = *(code **)(lVar7 + 0x10);
    func_0x000107c615f0(uVar16);
    (*pcVar17)(auStack_88,uVar14,lVar7);
    func_0x000107c615e8(uVar16);
    func_0x0001000a8868(auStack_88,uStack_70);
    uVar14 = uStack_70;
    (**(code **)(lStack_68 + 8))(uStack_70,lStack_68);
    uVar16 = *(undefined8 *)(lVar18 + 0x18);
    lVar18 = *(long *)(lVar18 + 0x20);
    uVar15 = uVar16;
    func_0x000107c614f0(uVar16);
    pcVar17 = *(code **)(lVar18 + 0x10);
    func_0x000107c615f0(uVar16);
    (*pcVar17)(auStack_b0,uVar15,lVar18);
    func_0x000107c615e8(uVar16);
    func_0x0001000a8868(auStack_b0,uStack_98);
    uVar16 = uStack_98;
    (**(code **)(lStack_90 + 0x10))(uStack_98,lStack_90);
    lVar18 = unaff_x20 + _DAT_112f46e98;
    func_0x000107c61648();
    if (lVar18 == 0) {
      func_0x00010076df58();
      func_0x000107c613fc();
    }
    func_0x000107c614f0();
    (**(code **)(lVar4 + 8))
              (lVar6,lVar13,uVar14,uVar16,0,0,0,lVar18,&PTR_DAT_1106a2cb0,uVar10,lVar4);
    func_0x000107c61170(lVar6);
    func_0x000107c61170(lVar13);
    func_0x000107c61574(uVar14);
    func_0x000107c61574(uVar16);
    func_0x000107c61574(lVar18);
    func_0x000107c61170(puVar1);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar11);
    func_0x0001000834e4(auStack_b0);
    func_0x0001000834e4(auStack_88);
  }
  return;
}



/* Entry: 10317357c; end: 1031735d7; -[_TtC19LensGamesChatDrawer23GamesExplorerChatDrawer viewDidLoad] */

void FUN_10317357c(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_viewDidLoad_112684cd8;
  uStack_30 = param_1;
  uStack_28 = uVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_30,puVar1);
  FUN_103172efc();
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1031735d8; end: 1031736fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031735d8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  func_0x000107c614f0();
  puVar4 = &UNK_10db93f10;
  func_0x0001000c10c0(&UNK_10db93f10);
  func_0x000107c61180();
  lVar3 = _DAT_112f46e90;
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f46ea8);
  uVar2 = ((undefined8 *)(unaff_x20 + _DAT_112f46ea8))[1];
  puVar5 = &UNK_1106170c0;
  func_0x000107c613fc(&UNK_1106170c0,0x30,7);
  uVar7 = *(undefined8 *)(unaff_x20 + lVar3);
  *(undefined8 *)(puVar5 + 0x18) = ((undefined8 *)(unaff_x20 + lVar3))[1];
  *(undefined8 *)(puVar5 + 0x10) = uVar7;
  *(undefined8 *)(puVar5 + 0x20) = uVar1;
  *(undefined8 *)(puVar5 + 0x28) = uVar2;
  pcStack_50 = FUN_103174dd8;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1106170d8;
  ppuVar6 = &puStack_70;
  puStack_48 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  puVar5 = puStack_48;
  func_0x000107c615f0(uVar1);
  func_0x000107c615f0(uVar7);
  func_0x000107c61574(puVar5);
  func_0x000107c4e590(puVar4);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c615e8(puVar4);
  func_0x000107c61154(&stack0xffffffffffffff80,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1031736fc; end: 103173757;  */

void FUN_1031736fc(undefined8 param_1,long param_2,long param_3,long param_4)

{
  func_0x000107c614f0();
  (**(code **)(param_2 + 0x10))();
  if (param_3 != 0) {
    func_0x000107c614f0(param_3);
    (**(code **)(param_4 + 8))();
  }
  return;
}



/* Entry: 103173758; end: 10317377b; -[_TtC19LensGamesChatDrawer23GamesExplorerChatDrawer dealloc] */

void FUN_103173758(void)

{
  func_0x000107c61174();
  FUN_1031735d8();
  return;
}



/* Entry: 10317377c; end: 103173853; -[_TtC19LensGamesChatDrawer23GamesExplorerChatDrawer .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103173828: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010317382c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10317377c(long param_1)

{
  func_0x000100d38c44(param_1 + _DAT_112f46e38);
  func_0x000100d38c44(param_1 + _DAT_112f46e40);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f46e58));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f46e60));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f46e68));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f46e70));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f46e78));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f46e80));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f46e88));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f46e90));
  return;
}



/* Entry: 103173854; end: 10317385b; -[_TtC19LensGamesChatDrawer23GamesExplorerChatDrawer canPanDrawer] */

undefined8 FUN_103173854(void)

{
  return 1;
}



/* Entry: 10317385c; end: 10317385f; -[_TtC19LensGamesChatDrawer23GamesExplorerChatDrawer willBeginPanningFromState:gestureRecognizer:] */

void FUN_10317385c(void)

{
  return;
}



/* Entry: 103173860; end: 103173863; -[_TtC19LensGamesChatDrawer23GamesExplorerChatDrawer didPanFromState:gestureRecognizer:] */

void FUN_103173860(void)

{
  return;
}



/* Entry: 103173864; end: 103173867; -[_TtC19LensGamesChatDrawer23GamesExplorerChatDrawer willEndPanningToState:] */

void FUN_103173864(void)

{
  return;
}



/* Entry: 103173868; end: 10317386b; -[_TtC19LensGamesChatDrawer23GamesExplorerChatDrawer didEndPanningToState:] */

void FUN_103173868(void)

{
  return;
}



/* Entry: 10317386c; end: 10317386f; -[_TtC19LensGamesChatDrawer23GamesExplorerChatDrawer sizeDidChange:] */

void FUN_10317386c(void)

{
  return;
}



/* Entry: 103173870; end: 1031738d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_103173870(double param_1,long param_2)

{
  if ((0 < *(long *)(param_2 + _DAT_112f46ea0)) &&
     (param_1 = *(double *)(param_2 + _DAT_112f46e48), 0.0 < param_1)) {
    return param_1;
  }
  func_0x000107c61174();
  FUN_103172e0c();
  func_0x000107c61170(param_2);
  return param_1;
}



/* Entry: 1031738d8; end: 1031739e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031738d8(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  long lVar4;
  undefined1 auStack_60 [8];
  long lStack_58;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  func_0x0001000d224c(&lStack_58);
  if (lStack_58 != 0) {
    func_0x000107c5eea0(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    func_0x000107c5ee8c();
    (**(code **)(lVar4 + 8))(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c466c0(param_1);
    uVar3 = 0xd00000000000001f;
    func_0x000107c5fadc(0xd00000000000001f,0x800000010f12b280);
    func_0x000107c56bd8(lStack_58);
    func_0x000107c61170(lStack_58);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(uVar3);
  }
  return;
}



/* Entry: 1031739e8; end: 103173b73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031739e8(void)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined *puVar6;
  undefined *puVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  code *pcVar10;
  code *pcVar11;
  long alStack_78 [3];
  undefined8 uStack_60;
  long lStack_58;
  
  func_0x0001000d224c(alStack_78);
  if (alStack_78[0] != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112f46ea8);
    lVar8 = *plVar1;
    if (lVar8 != 0) {
      lVar9 = plVar1[1];
      lVar2 = lVar8;
      func_0x000107c614f0(lVar8);
      pcVar11 = *(code **)(lVar9 + 8);
      func_0x000107c615f0(lVar8);
      (*pcVar11)(lVar2,lVar9);
      func_0x000107c615e8(lVar8);
    }
    uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112f46e60) + 0x18);
    lVar8 = *(long *)(*(long *)(unaff_x20 + _DAT_112f46e60) + 0x20);
    uVar3 = uVar4;
    func_0x000107c614f0(uVar4);
    pcVar11 = *(code **)(lVar8 + 0x10);
    func_0x000107c615f0(uVar4);
    (*pcVar11)(alStack_78,uVar3,lVar8);
    func_0x000107c615e8(uVar4);
    func_0x0001000a8868(alStack_78,uStack_60);
    uVar4 = uStack_60;
    (**(code **)(lStack_58 + 8))(uStack_60,lStack_58);
    plVar5 = (long *)0x1;
    func_0x00010061b458();
    func_0x000107c61574(uVar4);
    func_0x0001000834e4(alStack_78);
    puVar6 = &UNK_110616f30;
    func_0x000107c613fc(&UNK_110616f30,0x18,7);
    *(long *)(puVar6 + 0x10) = alStack_78[0];
    pcVar10 = *(code **)(*plVar5 + 0x60);
    func_0x000107c615f0(alStack_78[0]);
    pcVar11 = FUN_103174d9c;
    puVar7 = puVar6;
    (*pcVar10)();
    func_0x000107c61574(plVar5);
    func_0x000107c61574(puVar6);
    func_0x000107c615e8(alStack_78[0]);
    lVar8 = *plVar1;
    *plVar1 = (long)pcVar11;
    plVar1[1] = (long)puVar7;
    func_0x000107c615e8(lVar8);
  }
  return;
}



/* Entry: 103173b74; end: 103173bf3; -[_TtC19LensGamesChatDrawer23GamesExplorerChatDrawer willBecomeActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103173b74(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + _DAT_112f46e60) + 0x18);
  lVar1 = *(long *)(*(long *)(param_1 + _DAT_112f46e60) + 0x20);
  func_0x000107c614f0(uVar2);
  pcVar3 = *(code **)(lVar1 + 0x20);
  func_0x000107c61174();
  (*pcVar3)(uVar2,lVar1);
  *(undefined8 *)(param_1 + _DAT_112f46ea0) = 0;
  FUN_1031738d8();
  FUN_1031739e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103173bf4; end: 103173bf7; -[_TtC19LensGamesChatDrawer23GamesExplorerChatDrawer didBecomeActive] */

void FUN_103173bf4(void)

{
  return;
}



/* Entry: 103173bf8; end: 103173bfb; -[_TtC19LensGamesChatDrawer23GamesExplorerChatDrawer willResignActive] */

void FUN_103173bf8(void)

{
  return;
}



/* Entry: 103173bfc; end: 103173bff; -[_TtC19LensGamesChatDrawer23GamesExplorerChatDrawer didResignActive] */

void FUN_103173bfc(void)

{
  return;
}



/* Entry: 103173c00; end: 103173c03; -[_TtC19LensGamesChatDrawer23GamesExplorerChatDrawer willResumeActive] */

void FUN_103173c00(void)

{
  return;
}



/* Entry: 103173c04; end: 103173c07; -[_TtC19LensGamesChatDrawer23GamesExplorerChatDrawer willSuspendActive] */

void FUN_103173c04(void)

{
  return;
}



/* Entry: 103173c08; end: 103173c0b; -[_TtC19LensGamesChatDrawer23GamesExplorerChatDrawer didActivateDrawerWithDeeplinkIdentifier:subitemDeeplinkIdentifier:] */

void FUN_103173c08(void)

{
  return;
}



/* Entry: 103173c0c; end: 103173c23; -[_TtC19LensGamesChatDrawer23GamesExplorerChatDrawer shouldForceMaximumHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_103173c0c(long param_1)

{
  return *(long *)(param_1 + _DAT_112f46ea0) == 0;
}



/* Entry: 103173c24; end: 103173e13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103173c24(uint param_1,long param_2)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  ppuVar6 = &puStack_90;
  uVar1 = (param_1 >> 8 & 1) + (param_1 & 1);
  if (uVar1 != 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
    lVar3 = param_2 + 0x10;
    func_0x000107c61618();
    if (lVar3 != 0) {
      if (SCARRY8(*(long *)(lVar3 + _DAT_112f46ea0),(ulong)uVar1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103173d68);
        (*pcVar2)();
      }
      *(ulong *)(lVar3 + _DAT_112f46ea0) = *(long *)(lVar3 + _DAT_112f46ea0) + (ulong)uVar1;
      func_0x000107c61170();
    }
    puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar5 = &UNK_110616e68;
    func_0x000107c613fc(&UNK_110616e68,0x18,7);
    func_0x000107c61428(param_2 + 0x10,auStack_60,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618(param_2);
    func_0x000107c61614(puVar5 + 0x10,param_2);
    func_0x000107c61170(param_2);
    uStack_70 = 0x103174d68;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_110616ef8;
    puStack_68 = puVar5;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c61574(puStack_68);
    func_0x000107c3dccc(0x3fd3333333333333,puVar4);
    func_0x000107c60bd0(ppuVar6);
  }
  return;
}



/* Entry: 103173e14; end: 103173eb7;  */

/* WARNING: Possible PIC construction at 0x000102e021d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e021d4) */
/* WARNING: Removing unreachable block (ram,0x000102e021ec) */
/* WARNING: Removing unreachable block (ram,0x000102e021dc) */

void FUN_103173e14(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = param_2;
  func_0x000107c40674();
  func_0x000107c61180();
  uVar5 = param_4;
  func_0x000107c5faec();
  func_0x000107c61170(param_4);
  uVar2 = param_3[1];
  uVar1 = param_3[2];
  uVar3 = param_3[3];
  *param_3 = uVar5;
  param_3[1] = uVar6;
  param_3[2] = param_1;
  param_3[3] = param_2;
  uVar4 = *(undefined1 *)(param_3 + 4);
  *(undefined1 *)(param_3 + 4) = 1;
  func_0x000107c61434(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2,uVar2,uVar1,uVar3,uVar4);
  return;
}



/* Entry: 103173eb8; end: 103173ebb;  */

void FUN_103173eb8(void)

{
  return;
}



/* Entry: 103173ebc; end: 10317419b;  */

/* WARNING: Possible PIC construction at 0x000103174120: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010317413c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103174124) */
/* WARNING: Removing unreachable block (ram,0x000103174140) */

void FUN_103173ebc(long param_1,undefined8 param_2)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  ulong uStack_68;
  
  uVar10 = *(ulong *)(param_1 + 0x10);
  if (uVar10 >> 0x3e == 0) {
    uVar8 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar8 = uVar10 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar10) {
      uVar8 = uVar10;
    }
    func_0x000107c60480();
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar5;
  if (uVar8 != 0) {
    uVar9 = 0;
    do {
      if ((uVar10 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103174008);
          (*pcVar2)();
        }
        uVar3 = *(ulong *)(uVar10 + uVar9 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar3 = uVar9;
        func_0x0001020a4b50(uVar9,uVar10);
      }
      if (SCARRY8(uVar9,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103174004);
        (*pcVar2)();
      }
      uVar11 = uVar9 + 1;
      uStack_68 = uVar3;
      FUN_10317419c(&puStack_a0,&uStack_68);
      func_0x000107c61170(uVar3);
      lVar1 = lStack_98;
      puVar7 = puStack_a0;
      if (lStack_98 != 0) {
        puVar4 = puVar5;
        func_0x000107c61558();
        puVar6 = puVar5;
        if (((ulong)puVar4 & 1) == 0) {
          puVar6 = (undefined *)0x0;
          func_0x0001000d182c(0,*(long *)(puVar5 + 0x10) + 1,1,puVar5);
        }
        uVar3 = *(ulong *)(puVar6 + 0x10);
        puVar5 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar3) {
          puVar5 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
          func_0x0001000d182c(puVar5,uVar3 + 1,1,puVar6);
        }
        *(ulong *)(puVar5 + 0x10) = uVar3 + 1;
        *(undefined **)(puVar5 + uVar3 * 0x10 + 0x20) = puVar7;
        *(long *)(puVar5 + uVar3 * 0x10 + 0x28) = lVar1;
      }
      uVar9 = uVar9 + 1;
    } while (uVar11 != uVar8);
  }
  uVar10 = *(ulong *)(puVar5 + 0x10);
  puVar7 = puVar5;
  if (10 < uVar10) {
    func_0x000101994330(puVar5,puVar5 + 0x20,0,0x15);
    func_0x000107c6142c(puVar5);
    uVar10 = *(ulong *)(puVar7 + 0x10);
  }
  if (uVar10 != 0) {
    func_0x000103e94bdc(0);
    func_0x000107c610f8();
    func_0x000107c61580(puVar7,2);
    func_0x000103e949a8();
    func_0x000107c4ed20(param_2);
    func_0x000107c61180();
    puVar5 = &UNK_110616f58;
    func_0x000107c613fc(&UNK_110616f58,0x30,7);
    *(undefined8 *)(puVar5 + 0x10) = 0x61724473656d6147;
    *(undefined8 *)(puVar5 + 0x18) = 0xeb00000000726577;
    *(undefined8 *)(puVar5 + 0x20) = 0;
    *(undefined8 *)(puVar5 + 0x28) = 0;
    uStack_80 = 0x103174da4;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    lStack_98 = 0x42000000;
    puStack_90 = &UNK_100bcda3c;
    puStack_88 = &UNK_110616f70;
    puStack_78 = puVar5;
    func_0x000107c60bc4(&puStack_a0);
    puVar7 = puStack_78;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar7);
  return;
}



/* Entry: 10317419c; end: 10317449f;  */

void FUN_10317419c(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar6 = &puStack_90;
  ppuVar7 = &puStack_90;
  ppuVar8 = &puStack_90;
  ppuVar9 = &puStack_90;
  ppuVar10 = &puStack_90;
  uVar12 = *param_2;
  *param_1 = 0;
  param_1[1] = 0;
  puVar4 = &UNK_110616fa8;
  func_0x000107c613fc(&UNK_110616fa8,0x18,7);
  *(undefined8 **)(puVar4 + 0x10) = param_1;
  puVar5 = &UNK_110616fd0;
  func_0x000107c613fc(&UNK_110616fd0,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = 0x103174db0;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_70 = FUN_103174db8;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1020995dc;
  puStack_78 = &UNK_110616fe8;
  puStack_68 = puVar5;
  func_0x000107c60bc4(&puStack_90);
  puVar2 = puStack_68;
  func_0x000107c6157c(puVar5);
  func_0x000107c61574(puVar2);
  pcStack_70 = FUN_103174500;
  puStack_68 = (undefined *)0x0;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  puStack_80 = (undefined *)0x103174de4;
  puStack_78 = &UNK_110617010;
  func_0x000107c60bc4(&puStack_90);
  func_0x000107c61574(puStack_68);
  pcStack_70 = (code *)0x103174504;
  puStack_68 = (undefined *)0x0;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  puStack_80 = (undefined *)0x103174de8;
  puStack_78 = &UNK_110617038;
  func_0x000107c60bc4(&puStack_90);
  func_0x000107c61574(puStack_68);
  pcStack_70 = (code *)0x103174508;
  puStack_68 = (undefined *)0x0;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_102500714;
  puStack_78 = &UNK_110617060;
  func_0x000107c60bc4(&puStack_90);
  func_0x000107c61574(puStack_68);
  pcStack_70 = (code *)0x10317450c;
  puStack_68 = (undefined *)0x0;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  puStack_80 = (undefined *)0x103174dec;
  puStack_78 = &UNK_110617088;
  func_0x000107c60bc4(&puStack_90);
  func_0x000107c61574(puStack_68);
  func_0x000107c4c684(uVar12);
  func_0x000107c60bd0(ppuVar10);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61574(puVar4);
  puVar4 = puVar5;
  func_0x000107c61544(puVar5,"",0x4f,0x100,0x21,1);
  func_0x000107c61574(puVar5);
  if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103174490);
    (*pcVar3)();
  }
  uVar11 = 0;
  func_0x000107c61544(0,"",0x4f,0x101,0x2c,1);
  if ((uVar11 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103174494);
    (*pcVar3)();
  }
  uVar11 = 0;
  func_0x000107c61544(0,"",0x4f,0x102,0x2e,1);
  if ((uVar11 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103174498);
    (*pcVar3)();
  }
  uVar11 = 0;
  func_0x000107c61544(0,"",0x4f,0x103,0x30,1);
  if ((uVar11 & 1) == 0) {
    uVar11 = 0;
    func_0x000107c61544(0,"",0x4f,0x104,0x2b,1);
    if ((uVar11 & 1) == 0) {
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1031744a0);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10317449c);
  (*pcVar3)();
}



/* Entry: 1031744a0; end: 1031744ff;  */

void FUN_1031744a0(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = param_2;
  func_0x000107c5d2ac();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar2 = 0;
    plVar3 = (long *)0x0;
  }
  else {
    lVar2 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
  }
  lVar1 = param_2[1];
  *param_2 = lVar2;
  param_2[1] = (long)plVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar1);
  return;
}



/* Entry: 103174500; end: 103174513;  */

void FUN_103174500(void)

{
  return;
}



/* Entry: 103174514; end: 1031745e7;  */

void FUN_103174514(long param_1,long param_2,long param_3,long param_4,long *param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = *param_5;
  lVar3 = param_5[1];
  lVar2 = param_5[2];
  lVar4 = param_5[3];
  lVar5 = param_5[4];
  *param_5 = param_1;
  param_5[1] = param_4;
  param_5[2] = 0;
  param_5[3] = param_2;
  param_5[4] = param_3;
  func_0x000107c61434(param_3);
  func_0x000107c61174(param_1);
  if (lVar1 != 0) {
    func_0x000107c61170(lVar1,lVar3,lVar2,lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar5);
    return;
  }
  return;
}



/* Entry: 1031745e8; end: 103174633; -[_TtC19LensGamesChatDrawer23GamesExplorerChatDrawer initWithNibName:bundle:] */

void FUN_1031745e8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensGamesChatDrawer.GamesExplorerChatDrawer",0x2b,"init(nibName:bundle:)",
                      0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103174614);
  (*pcVar1)();
}



/* Entry: 103174634; end: 103174637; -[_TtC19LensGamesChatDrawer23GamesExplorerChatDrawer lensExplorerRouterDidPresentLensExplorer:] */

void FUN_103174634(void)

{
  return;
}



/* Entry: 103174638; end: 10317463b; -[_TtC19LensGamesChatDrawer23GamesExplorerChatDrawer lensExplorerRouterBeginDismissingLensExplorer:] */

void FUN_103174638(void)

{
  return;
}



/* Entry: 10317463c; end: 10317463f; -[_TtC19LensGamesChatDrawer23GamesExplorerChatDrawer lensExplorerRouterDidDismissLensExplorer:] */

void FUN_10317463c(void)

{
  return;
}



/* Entry: 103174640; end: 103174647; -[_TtC19LensGamesChatDrawer23GamesExplorerChatDrawer lensExplorerRouterReplyParameters:] */

void FUN_103174640(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 103174648; end: 1031747af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103174648(long param_1,long param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x000107c4dfe8();
    func_0x000107c61180();
    if (param_1 == 0) {
      func_0x000107c61170(param_2);
    }
    else {
      uVar1 = *param_3;
      uVar3 = param_3[1];
      uVar2 = param_3[3];
      uVar4 = param_3[4];
      uVar5 = *(undefined1 *)(param_3 + 2);
      puVar6 = &UNK_110616e68;
      func_0x000107c613fc(&UNK_110616e68,0x18,7);
      func_0x000107c61614(puVar6 + 0x10,param_2);
      puVar7 = &UNK_110616ee0;
      func_0x000107c613fc(&UNK_110616ee0,0x20,7);
      *(undefined **)(puVar7 + 0x10) = puVar6;
      *(long *)(puVar7 + 0x18) = param_1;
      func_0x000107c6157c(puVar6);
      func_0x000107c61174(param_1);
      func_0x0001000d224c(&uStack_80);
      FUN_103172710(uVar1,uVar3,uVar5,param_4,uVar2,uVar4,0x103174d48,puVar7);
      func_0x000107c61574(puVar6);
      func_0x000107c61574(uStack_80);
      func_0x000107c61170(param_1);
      func_0x000107c61170(param_2);
      func_0x000107c61574(puVar7);
    }
  }
  return;
}



/* Entry: 1031747b0; end: 103174983;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031747b0(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  code *pcVar7;
  undefined8 uStack_c0;
  undefined1 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  undefined1 auStack_98 [24];
  undefined8 uStack_80;
  undefined1 *puStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  
  puVar6 = auStack_98;
  func_0x000107c61428(param_2 + 0x10,puVar6,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar2 = param_2 + _DAT_112f46e38;
    func_0x000107c61618();
    if (lVar2 != 0) {
      uVar3 = param_3;
      func_0x000107c40674();
      func_0x000107c61180();
      uVar4 = uVar3;
      func_0x000107c5faec();
      func_0x000107c61170(uVar3);
      uStack_b0 = 0;
      uStack_a8 = 0;
      uStack_a0 = 0;
      uVar3 = param_3;
      uStack_c0 = uVar4;
      puStack_b8 = puVar6;
      func_0x000107c3f894(param_3);
      func_0x000107c61180();
      puStack_70 = &uStack_c0;
      uStack_68 = param_3;
      func_0x000104522a44(0x103174d50,&uStack_80,FUN_103173eb8,0);
      func_0x000107c61170(uVar3);
      puStack_78 = puStack_b8;
      uStack_80 = uStack_c0;
      uStack_68 = uStack_a8;
      puStack_70 = (undefined8 *)uStack_b0;
      uStack_60 = uStack_a0;
      func_0x0001000d224c(&uStack_c0);
      uVar3 = uStack_a8;
      lVar1 = CONCAT71(uStack_9f,uStack_a0);
      func_0x0001000a8868(&uStack_c0,uStack_a8);
      puVar5 = &UNK_110616e68;
      func_0x000107c613fc(&UNK_110616e68,0x18,7);
      func_0x000107c61614(puVar5 + 0x10,param_2);
      pcVar7 = *(code **)(lVar1 + 8);
      func_0x000107c61174(lVar2);
      func_0x000107c6157c(puVar5);
      (*pcVar7)(lVar2,param_1,&uStack_80,0,0,0,0x103174d58,puVar5,uVar3,lVar1);
      func_0x000107c61574(puVar5);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar2);
      func_0x0001020bf360(&uStack_80);
      func_0x000107c61574(puVar5);
      func_0x0001000834e4(&uStack_c0);
    }
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 103174984; end: 1031749cf;  */

void FUN_103174984(long param_1,undefined8 param_2)

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



/* Entry: 1031749d0; end: 103174a47; -[_TtC19LensGamesChatDrawer23GamesExplorerChatDrawer lensExplorerRouter:didPickItem:selectionTrigger:] */

/* WARNING: Possible PIC construction at 0x000103174a2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103174a30) */

void FUN_1031749d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_103174b54(param_4,param_5);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 103174a48; end: 103174a4b; -[_TtC19LensGamesChatDrawer23GamesExplorerChatDrawer lensExplorerRouterDidToggleCamera:] */

void FUN_103174a48(void)

{
  return;
}



/* Entry: 103174a4c; end: 103174a53; -[_TtC19LensGamesChatDrawer23GamesExplorerChatDrawer drawerType] */

undefined8 FUN_103174a4c(void)

{
  return 2;
}



/* Entry: 103174a54; end: 103174a63; -[_TtC19LensGamesChatDrawer23GamesExplorerChatDrawer sentItemCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103174a54(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f46ea0);
}



/* Entry: 103174a64; end: 103174a6b; -[_TtC19LensGamesChatDrawer23GamesExplorerChatDrawer openedWithSearch] */

undefined8 FUN_103174a64(void)

{
  return 0;
}



/* Entry: 103174a6c; end: 103174a73; -[_TtC19LensGamesChatDrawer23GamesExplorerChatDrawer suggestionSource] */

undefined8 FUN_103174a6c(void)

{
  return 0xffffffffffffffff;
}



/* Entry: 103174a74; end: 103174b53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103174a74(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  long unaff_x20;
  
  func_0x000107c61614(unaff_x20 + _DAT_112f46e38,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f46e40,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f46e48) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f46e50);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112f46e70) = 0;
  func_0x000107c61644(unaff_x20 + _DAT_112f46e98,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f46ea0) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f46ea8);
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "LensGamesChatDrawer/GamesExplorerChatDrawer.swift",0x31,2,0x5d,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103174b54);
  (*pcVar2)();
}



/* Entry: 103174b54; end: 103174d0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103174b54(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [16];
  undefined1 *puStack_90;
  undefined1 auStack_80 [16];
  undefined1 *puStack_70;
  
  puStack_70 = (undefined1 *)&puStack_d0;
  puStack_90 = (undefined1 *)&puStack_d0;
  ppuVar6 = &puStack_d0;
  uStack_b0 = 0;
  uStack_c8 = 0;
  puStack_d0 = (undefined *)0x0;
  puStack_b8 = (undefined *)0x0;
  pcStack_c0 = (code *)0x0;
  func_0x00010436efc4(0x103174510,0,FUN_103174d0c,auStack_80,0x103174d14,auStack_a0);
  uVar9 = uStack_b0;
  puVar2 = puStack_b8;
  pcVar1 = pcStack_c0;
  uVar8 = uStack_c8;
  puVar7 = puStack_d0;
  if (puStack_d0 != (undefined *)0x0) {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f46e68);
    func_0x000107c5c6c0();
    func_0x000107c61180();
    puVar4 = &UNK_110616e68;
    func_0x000107c613fc(&UNK_110616e68,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    puVar5 = &UNK_110616e90;
    func_0x000107c613fc(&UNK_110616e90,0x48,7);
    *(undefined **)(puVar5 + 0x10) = puVar4;
    *(undefined **)(puVar5 + 0x18) = puVar7;
    *(undefined8 *)(puVar5 + 0x20) = uVar8;
    puVar5[0x28] = (char)pcVar1;
    *(undefined **)(puVar5 + 0x30) = puVar2;
    *(undefined8 *)(puVar5 + 0x38) = uVar9;
    *(undefined8 *)(puVar5 + 0x40) = param_2;
    uStack_b0 = 0x103174d1c;
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0x42000000;
    pcStack_c0 = FUN_103174984;
    puStack_b8 = &UNK_110616ea8;
    puStack_a8 = puVar5;
    func_0x000107c60bc4(&puStack_d0);
    puVar2 = puStack_a8;
    func_0x000107c61434(uVar9);
    func_0x000107c61174(puVar7);
    func_0x000107c61574(puVar2);
    uVar8 = uVar3;
    func_0x000107c5c320();
    func_0x000107c61180();
    func_0x000107c6142c(uVar9);
    func_0x000107c61170(puVar7);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(uVar3);
    uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112f46e70);
    *(undefined8 *)(unaff_x20 + _DAT_112f46e70) = uVar8;
    func_0x000107c61170(uVar9);
  }
  return;
}



/* Entry: 103174d0c; end: 103174d6f;  */

void FUN_103174d0c(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long lVar6;
  
  plVar5 = *(long **)(unaff_x20 + 0x10);
  lVar1 = *plVar5;
  lVar3 = plVar5[1];
  lVar2 = plVar5[2];
  lVar4 = plVar5[3];
  lVar6 = plVar5[4];
  *plVar5 = param_1;
  plVar5[1] = param_4;
  plVar5[2] = 0;
  plVar5[3] = param_2;
  plVar5[4] = param_3;
  func_0x000107c61434(param_3);
  func_0x000107c61174(param_1);
  if (lVar1 != 0) {
    func_0x000107c61170(lVar1,lVar3,lVar2,lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar6);
    return;
  }
  return;
}



/* Entry: 103174d70; end: 103174d9b;  */

void FUN_103174d70(long param_1)

{
  undefined8 in_x4;
  
  if (param_1 != 0) {
    func_0x000107c61170();
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(in_x4);
    return;
  }
  return;
}



/* Entry: 103174d9c; end: 103174db7;  */

/* WARNING: Possible PIC construction at 0x000103174120: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010317413c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103174124) */
/* WARNING: Removing unreachable block (ram,0x000103174140) */

void FUN_103174d9c(long param_1)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long unaff_x20;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  ulong uStack_68;
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar11 = *(ulong *)(param_1 + 0x10);
  if (uVar11 >> 0x3e == 0) {
    uVar9 = *(ulong *)((uVar11 & 0xffffffffffffff8) + 0x10);
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar9 = uVar11 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar11) {
      uVar9 = uVar11;
    }
    func_0x000107c60480();
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar5;
  if (uVar9 != 0) {
    uVar10 = 0;
    do {
      if ((uVar11 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar11 & 0xffffffffffffff8) + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103174008);
          (*pcVar2)();
        }
        uVar3 = *(ulong *)(uVar11 + uVar10 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar3 = uVar10;
        func_0x0001020a4b50(uVar10,uVar11);
      }
      if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103174004);
        (*pcVar2)();
      }
      uVar12 = uVar10 + 1;
      uStack_68 = uVar3;
      FUN_10317419c(&puStack_a0,&uStack_68);
      func_0x000107c61170(uVar3);
      lVar1 = lStack_98;
      puVar7 = puStack_a0;
      if (lStack_98 != 0) {
        puVar4 = puVar5;
        func_0x000107c61558();
        puVar6 = puVar5;
        if (((ulong)puVar4 & 1) == 0) {
          puVar6 = (undefined *)0x0;
          func_0x0001000d182c(0,*(long *)(puVar5 + 0x10) + 1,1,puVar5);
        }
        uVar3 = *(ulong *)(puVar6 + 0x10);
        puVar5 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar3) {
          puVar5 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
          func_0x0001000d182c(puVar5,uVar3 + 1,1,puVar6);
        }
        *(ulong *)(puVar5 + 0x10) = uVar3 + 1;
        *(undefined **)(puVar5 + uVar3 * 0x10 + 0x20) = puVar7;
        *(long *)(puVar5 + uVar3 * 0x10 + 0x28) = lVar1;
      }
      uVar10 = uVar10 + 1;
    } while (uVar12 != uVar9);
  }
  uVar11 = *(ulong *)(puVar5 + 0x10);
  puVar7 = puVar5;
  if (10 < uVar11) {
    func_0x000101994330(puVar5,puVar5 + 0x20,0,0x15);
    func_0x000107c6142c(puVar5);
    uVar11 = *(ulong *)(puVar7 + 0x10);
  }
  if (uVar11 != 0) {
    func_0x000103e94bdc(0);
    func_0x000107c610f8();
    func_0x000107c61580(puVar7,2);
    func_0x000103e949a8();
    func_0x000107c4ed20(uVar8);
    func_0x000107c61180();
    puVar5 = &UNK_110616f58;
    func_0x000107c613fc(&UNK_110616f58,0x30,7);
    *(undefined8 *)(puVar5 + 0x10) = 0x61724473656d6147;
    *(undefined8 *)(puVar5 + 0x18) = 0xeb00000000726577;
    *(undefined8 *)(puVar5 + 0x20) = 0;
    *(undefined8 *)(puVar5 + 0x28) = 0;
    uStack_80 = 0x103174da4;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    lStack_98 = 0x42000000;
    puStack_90 = &UNK_100bcda3c;
    puStack_88 = &UNK_110616f70;
    puStack_78 = puVar5;
    func_0x000107c60bc4(&puStack_a0);
    puVar7 = puStack_78;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar7);
  return;
}



/* Entry: 103174db8; end: 103174dd7;  */

void FUN_103174db8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103174dd8; end: 103174e2f;  */

void FUN_103174dd8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  func_0x000107c614f0(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar2 + 0x10))();
  if (lVar1 != 0) {
    func_0x000107c614f0(lVar1);
    (**(code **)(lVar3 + 8))();
  }
  return;
}



/* Entry: 103174e30; end: 103174e33; -[_TtC19LensGamesChatDrawer23GamesExplorerChatDrawer maximumDrawerHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_103174e30(double param_1,long param_2)

{
  if ((0 < *(long *)(param_2 + _DAT_112f46ea0)) &&
     (param_1 = *(double *)(param_2 + _DAT_112f46e48), 0.0 < param_1)) {
    return param_1;
  }
  func_0x000107c61174();
  FUN_103172e0c();
  func_0x000107c61170(param_2);
  return param_1;
}



/* Entry: 103174e34; end: 103174e37; -[_TtC19LensGamesChatDrawer23GamesExplorerChatDrawer defaultDrawerHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_103174e34(double param_1,long param_2)

{
  if ((0 < *(long *)(param_2 + _DAT_112f46ea0)) &&
     (param_1 = *(double *)(param_2 + _DAT_112f46e48), 0.0 < param_1)) {
    return param_1;
  }
  func_0x000107c61174();
  FUN_103172e0c();
  func_0x000107c61170(param_2);
  return param_1;
}



/* Entry: 103174e38; end: 103174ecf;  */

void FUN_103174e38(long param_1,long param_2,undefined8 param_3,undefined8 param_4,code *param_5)

{
  long lStack_38;
  
  if (param_2 == 0) {
    if (param_1 != 0) {
      lStack_38 = 0;
      func_0x000107c5fc50(param_1,&lStack_38,PTR___sypN_11034f1a8 + 8);
      if (lStack_38 != 0) {
        func_0x000107c6142c();
      }
    }
    if (param_5 != (code *)0x0) {
      (*param_5)(1);
    }
  }
  else if (param_5 != (code *)0x0) {
    func_0x000107c614b0(param_2);
    (*param_5)(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)(param_2);
    return;
  }
  return;
}



/* Entry: 103174ed0; end: 103174ee3;  */

ulong FUN_103174ed0(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10317501c);
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
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  (*(code *)0x103176c9c)(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103175018);
      (*pcVar1)();
    }
    FUN_10317501c(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 103174ee4; end: 10317501b;  */

ulong FUN_103174ee4(ulong param_1,ulong param_2,ulong param_3,ulong param_4,code *param_5,
                   code *param_6)

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
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10317501c);
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
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  (*param_5)(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103175018);
      (*pcVar1)();
    }
    (*param_6)(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 10317501c; end: 103175133;  */

long FUN_10317501c(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103175130);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103175134);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_103175438(0,0x112e56278,&PTR_PTR_1126ccc20);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_103175438(0,0x112e56278,&PTR_PTR_1126ccc20);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10317512c);
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



/* Entry: 103175134; end: 10317540f;  */

/* WARNING: Possible PIC construction at 0x000103175398: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010317539c) */

void FUN_103175134(ulong param_1,ulong param_2,undefined8 param_3,undefined8 param_4,code *param_5,
                  undefined8 param_6)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  uVar9 = param_2;
  if (param_1 >> 0x3e == 0) {
    uVar11 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
    if (uVar11 != 0) goto LAB_103175178;
LAB_1031752a4:
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (*(long *)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10) == 0) {
      if (param_5 != (code *)0x0) {
        (*param_5)(1);
        puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      goto code_r0x000107c6142c;
    }
  }
  else {
    uVar11 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar11 = param_1;
    }
    func_0x000107c60480();
    if (uVar11 == 0) goto LAB_1031752a4;
LAB_103175178:
    uVar12 = 0;
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10317528c);
          (*pcVar1)();
        }
        uVar2 = *(ulong *)(param_1 + uVar12 * 8 + 0x20);
        func_0x000107c61174();
        uVar8 = uVar9;
      }
      else {
        uVar2 = uVar12;
        uVar8 = param_1;
        func_0x000100ff3f88();
      }
      if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103175288);
        (*pcVar1)();
      }
      uVar10 = uVar12 + 1;
      func_0x000107c61174();
      uVar3 = uVar2;
      func_0x000107c4b1dc();
      func_0x000107c61180();
      uVar4 = uVar3;
      func_0x000107c5faec();
      uVar9 = uVar8;
      func_0x000107c61170(uVar2);
      func_0x000107c61170(uVar2);
      func_0x000107c61170(uVar3);
      puVar5 = puVar7;
      func_0x000107c61558();
      puVar6 = puVar7;
      if (((ulong)puVar5 & 1) == 0) {
        uVar9 = *(long *)(puVar7 + 0x10) + 1;
        puVar6 = (undefined *)0x0;
        func_0x0001000d182c(0,uVar9,1,puVar7);
      }
      uVar3 = *(ulong *)(puVar6 + 0x10);
      uVar2 = uVar3 + 1;
      puVar7 = puVar6;
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar3) {
        puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
        uVar9 = uVar2;
        func_0x0001000d182c(puVar7,uVar2,1,puVar6);
      }
      *(ulong *)(puVar7 + 0x10) = uVar2;
      *(ulong *)(puVar7 + uVar3 * 0x10 + 0x20) = uVar4;
      *(ulong *)(puVar7 + uVar3 * 0x10 + 0x28) = uVar8;
      uVar12 = uVar12 + 1;
    } while (uVar10 != uVar11);
  }
  func_0x000103e94bdc(0);
  func_0x000107c610f8();
  func_0x000107c61438(puVar7,2);
  func_0x000103e949a8(puVar7,puVar7);
  func_0x000107c4ed20(param_2);
  func_0x000107c61180();
  puVar5 = &UNK_110617110;
  func_0x000107c613fc(&UNK_110617110,0x30,7);
  *(undefined8 *)(puVar5 + 0x10) = param_3;
  *(undefined8 *)(puVar5 + 0x18) = param_4;
  *(code **)(puVar5 + 0x20) = param_5;
  *(undefined8 *)(puVar5 + 0x28) = param_6;
  pcStack_70 = FUN_103175410;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100bcda3c;
  puStack_78 = &UNK_110617128;
  puStack_68 = puVar5;
  func_0x000107c60bc4(&puStack_90);
  puVar5 = puStack_68;
  func_0x000107c61434(param_4);
  func_0x000101237340(param_5,param_6);
  func_0x000107c61574(puVar5);
  func_0x000107c5dc68(param_2);
code_r0x000107c6142c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(puVar7);
  return;
}



/* Entry: 103175410; end: 103175437;  */

void FUN_103175410(long param_1,long param_2)

{
  code *pcVar1;
  long unaff_x20;
  long lStack_38;
  
  pcVar1 = *(code **)(unaff_x20 + 0x20);
  if (param_2 == 0) {
    if (param_1 != 0) {
      lStack_38 = 0;
      func_0x000107c5fc50(param_1,&lStack_38,PTR___sypN_11034f1a8 + 8,
                          *(undefined8 *)(unaff_x20 + 0x18),pcVar1,*(undefined8 *)(unaff_x20 + 0x28)
                         );
      if (lStack_38 != 0) {
        func_0x000107c6142c();
      }
    }
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(1);
    }
  }
  else if (pcVar1 != (code *)0x0) {
    func_0x000107c614b0(param_2,param_2,*(undefined8 *)(unaff_x20 + 0x10));
    (*pcVar1)(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)(param_2);
    return;
  }
  return;
}



/* Entry: 103175438; end: 103175477;  */

void FUN_103175438(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 103175478; end: 1031754a3;  */

void FUN_103175478(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1031754a4; end: 1031754c3; -[_TtC19LensGamesChatDrawer22LensExplorerChatDrawer inputController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031754a4(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112f46ed8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1031754c4; end: 1031754d7; -[_TtC19LensGamesChatDrawer22LensExplorerChatDrawer setInputController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031754c4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112f46ed8,param_3);
  return;
}



/* Entry: 1031754d8; end: 1031754f7; -[_TtC19LensGamesChatDrawer22LensExplorerChatDrawer inputItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031754d8(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112f46ee0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1031754f8; end: 10317550b; -[_TtC19LensGamesChatDrawer22LensExplorerChatDrawer setInputItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031754f8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112f46ee0,param_3);
  return;
}



/* Entry: 10317550c; end: 1031755b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10317550c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined *puVar2;
  long unaff_x20;
  long lVar3;
  
  plVar1 = (long *)(unaff_x20 + _DAT_112f46ef0);
  if ((char)plVar1[1] == '\x01') {
    puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
    func_0x000107c4c194();
    func_0x000107c61180();
    func_0x000107c51724();
    func_0x000107c61170(puVar2);
    func_0x000107c609b0(param_1,param_2,param_3,param_4);
    lVar3 = (long)((param_1 + param_1) / 3.0);
    *plVar1 = lVar3;
    *(undefined1 *)(plVar1 + 1) = 0;
  }
  else {
    lVar3 = *plVar1;
  }
  return lVar3;
}



/* Entry: 1031755b8; end: 1031755c7; -[_TtC19LensGamesChatDrawer22LensExplorerChatDrawer setDefaultDrawerHeight:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031755b8(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_112f46ee8) = param_1;
  return;
}



/* Entry: 1031755c8; end: 1031755fb; -[_TtC19LensGamesChatDrawer22LensExplorerChatDrawer initWithCoder:] */

undefined8 FUN_1031755c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_103176e50();
  func_0x000107c61174(param_3);
  return param_1;
}



/* Entry: 1031755fc; end: 103175a7b;  */

/* WARNING: Possible PIC construction at 0x000103175660: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031756e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103175730: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031757a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031757c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103175814: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103175834: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103175884: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031758a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031758cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103175914: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103175934: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103175980: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031759ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031759fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031759f0) */
/* WARNING: Removing unreachable block (ram,0x000103175984) */
/* WARNING: Removing unreachable block (ram,0x000103175938) */
/* WARNING: Removing unreachable block (ram,0x000103175918) */
/* WARNING: Removing unreachable block (ram,0x0001031758d0) */
/* WARNING: Removing unreachable block (ram,0x000103175a78) */
/* WARNING: Removing unreachable block (ram,0x0001031758e4) */
/* WARNING: Removing unreachable block (ram,0x0001031758a8) */
/* WARNING: Removing unreachable block (ram,0x000103175888) */
/* WARNING: Removing unreachable block (ram,0x000103175838) */
/* WARNING: Removing unreachable block (ram,0x000103175a74) */
/* WARNING: Removing unreachable block (ram,0x00010317586c) */
/* WARNING: Removing unreachable block (ram,0x000103175818) */
/* WARNING: Removing unreachable block (ram,0x0001031757c8) */
/* WARNING: Removing unreachable block (ram,0x000103175a70) */
/* WARNING: Removing unreachable block (ram,0x0001031757fc) */
/* WARNING: Removing unreachable block (ram,0x0001031757a8) */
/* WARNING: Removing unreachable block (ram,0x000103175734) */
/* WARNING: Removing unreachable block (ram,0x000103175a6c) */
/* WARNING: Removing unreachable block (ram,0x00010317578c) */
/* WARNING: Removing unreachable block (ram,0x0001031756e4) */
/* WARNING: Removing unreachable block (ram,0x000103175a68) */
/* WARNING: Removing unreachable block (ram,0x000103175720) */
/* WARNING: Removing unreachable block (ram,0x000103175664) */
/* WARNING: Removing unreachable block (ram,0x000103175a28) */
/* WARNING: Removing unreachable block (ram,0x000103175698) */
/* WARNING: Removing unreachable block (ram,0x000103175a44) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Removing unreachable block (ram,0x0001031756ac) */
/* WARNING: Removing unreachable block (ram,0x000103175a64) */
/* WARNING: Removing unreachable block (ram,0x0001031756d0) */
/* WARNING: Removing unreachable block (ram,0x000103175a00) */

void FUN_1031755fc(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  long unaff_x20;
  
  func_0x000107c5de64();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5c5e8();
    func_0x000107c61180();
    func_0x000107c52b50(unaff_x20,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103175a64);
  (*pcVar1)();
}



/* Entry: 103175a7c; end: 103175ad7; -[_TtC19LensGamesChatDrawer22LensExplorerChatDrawer viewDidLoad] */

void FUN_103175a7c(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_viewDidLoad_112684cd8;
  uStack_30 = param_1;
  uStack_28 = uVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_30,puVar1);
  FUN_1031755fc();
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 103175ad8; end: 103175adf; -[_TtC19LensGamesChatDrawer22LensExplorerChatDrawer canPanDrawer] */

undefined8 FUN_103175ad8(void)

{
  return 1;
}



/* Entry: 103175ae0; end: 103175ae3; -[_TtC19LensGamesChatDrawer22LensExplorerChatDrawer willBeginPanningFromState:gestureRecognizer:] */

void FUN_103175ae0(void)

{
  return;
}



/* Entry: 103175ae4; end: 103175ae7; -[_TtC19LensGamesChatDrawer22LensExplorerChatDrawer didPanFromState:gestureRecognizer:] */

void FUN_103175ae4(void)

{
  return;
}



/* Entry: 103175ae8; end: 103175aeb; -[_TtC19LensGamesChatDrawer22LensExplorerChatDrawer willEndPanningToState:] */

void FUN_103175ae8(void)

{
  return;
}



/* Entry: 103175aec; end: 103175aef; -[_TtC19LensGamesChatDrawer22LensExplorerChatDrawer didEndPanningToState:] */

void FUN_103175aec(void)

{
  return;
}



/* Entry: 103175af0; end: 103175af3; -[_TtC19LensGamesChatDrawer22LensExplorerChatDrawer sizeDidChange:] */

void FUN_103175af0(void)

{
  return;
}



/* Entry: 103175af4; end: 103175b5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_103175af4(double param_1,long param_2)

{
  if ((0 < *(long *)(param_2 + _DAT_112f46f30)) &&
     (param_1 = *(double *)(param_2 + _DAT_112f46ee8), 0.0 < param_1)) {
    return param_1;
  }
  func_0x000107c61174();
  FUN_10317550c();
  func_0x000107c61170(param_2);
  return param_1;
}



/* Entry: 103175b5c; end: 103175c6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103175b5c(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  long lVar4;
  undefined1 auStack_60 [8];
  long lStack_58;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  func_0x0001000d224c(&lStack_58);
  if (lStack_58 != 0) {
    func_0x000107c5eea0(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    func_0x000107c5ee8c();
    (**(code **)(lVar4 + 8))(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c466c0(param_1);
    uVar3 = 0xd00000000000001f;
    func_0x000107c5fadc(0xd00000000000001f,0x800000010f12b280);
    func_0x000107c56bd8(lStack_58);
    func_0x000107c61170(lStack_58);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(uVar3);
  }
  return;
}



/* Entry: 103175c6c; end: 103175d9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103175c6c(void)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long unaff_x20;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  code *pcVar9;
  long lStack_58;
  
  func_0x0001000d224c(&lStack_58);
  if (lStack_58 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112f46f38);
    lVar6 = *plVar1;
    if (lVar6 != 0) {
      lVar8 = plVar1[1];
      lVar4 = lVar6;
      func_0x000107c614f0(lVar6);
      pcVar9 = *(code **)(lVar8 + 8);
      func_0x000107c615f0(lVar6);
      (*pcVar9)(lVar4,lVar8);
      func_0x000107c615e8(lVar6);
    }
    uVar7 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112f46f00) + 0x18);
    func_0x000107c6157c(uVar7);
    plVar2 = (long *)0x1;
    func_0x00010061b458();
    func_0x000107c61574(uVar7);
    puVar3 = &UNK_110617250;
    func_0x000107c613fc(&UNK_110617250,0x18,7);
    *(long *)(puVar3 + 0x10) = lStack_58;
    pcVar9 = *(code **)(*plVar2 + 0x60);
    func_0x000107c615f0(lStack_58);
    lVar6 = 0x1031772d8;
    puVar5 = puVar3;
    (*pcVar9)();
    func_0x000107c61574(plVar2);
    func_0x000107c61574(puVar3);
    func_0x000107c615e8(lStack_58);
    lVar4 = *plVar1;
    *plVar1 = lVar6;
    plVar1[1] = (long)puVar5;
    func_0x000107c615e8(lVar4);
  }
  return;
}



/* Entry: 103175da0; end: 103175def; -[_TtC19LensGamesChatDrawer22LensExplorerChatDrawer willBecomeActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103175da0(long param_1)

{
  func_0x000107c61174();
  FUN_103171958();
  *(undefined8 *)(param_1 + _DAT_112f46f30) = 0;
  FUN_103175b5c();
  FUN_103175c6c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103175df0; end: 103175df3; -[_TtC19LensGamesChatDrawer22LensExplorerChatDrawer didBecomeActive] */

void FUN_103175df0(void)

{
  return;
}



/* Entry: 103175df4; end: 103175df7; -[_TtC19LensGamesChatDrawer22LensExplorerChatDrawer willResignActive] */

void FUN_103175df4(void)

{
  return;
}



/* Entry: 103175df8; end: 103175e53; -[_TtC19LensGamesChatDrawer22LensExplorerChatDrawer didResignActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103175df8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + _DAT_112f46f00) + 0x20);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = 0;
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(lVar2 + 0x30);
  *(undefined8 *)(lVar2 + 0x30) = 0;
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 103175e54; end: 103175e57; -[_TtC19LensGamesChatDrawer22LensExplorerChatDrawer willResumeActive] */

void FUN_103175e54(void)

{
  return;
}



/* Entry: 103175e58; end: 103175e5b; -[_TtC19LensGamesChatDrawer22LensExplorerChatDrawer willSuspendActive] */

void FUN_103175e58(void)

{
  return;
}



/* Entry: 103175e5c; end: 103175e5f; -[_TtC19LensGamesChatDrawer22LensExplorerChatDrawer didActivateDrawerWithDeeplinkIdentifier:subitemDeeplinkIdentifier:] */

void FUN_103175e5c(void)

{
  return;
}



/* Entry: 103175e60; end: 103175e77; -[_TtC19LensGamesChatDrawer22LensExplorerChatDrawer shouldForceMaximumHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_103175e60(long param_1)

{
  return *(long *)(param_1 + _DAT_112f46f30) < 1;
}



/* Entry: 103175e78; end: 103176247;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103175e78(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long unaff_x20;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  code *pcVar18;
  undefined8 uStack_d0;
  ulong uStack_c8;
  ulong *puStack_c0;
  undefined8 *puStack_b8;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  ulong *puStack_80;
  undefined8 *puStack_78;
  undefined1 uStack_70;
  
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  puStack_c0 = &uStack_98;
  puStack_b8 = &uStack_a8;
  uVar12 = 0;
  puStack_80 = puStack_c0;
  func_0x00010436efc4(FUN_103176248,0,0x10317723c,&uStack_d0,FUN_103177244,&uStack_90);
  uVar3 = uStack_98;
  if (uStack_98 != 0) {
    if (param_3 >> 0x3e == 0) {
      uVar16 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar16 = param_3 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < param_3) {
        uVar16 = param_3;
      }
      func_0x000107c60480();
    }
    uVar4 = uVar3;
    func_0x000107c61174();
    if (uVar16 != 0) {
      uVar17 = 0;
      do {
        if ((param_3 & 0xc000000000000001) == 0) {
          if (*(ulong *)((param_3 & 0xffffffffffffff8) + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
            pcVar18 = (code *)SoftwareBreakpoint(1,0x103176228);
            (*pcVar18)();
          }
          uVar5 = *(ulong *)(param_3 + uVar17 * 8 + 0x20);
          func_0x000107c61174();
          uVar14 = uVar12;
        }
        else {
          uVar5 = uVar17;
          uVar14 = param_3;
          func_0x000100ff3f88();
        }
        if (SCARRY8(uVar17,1)) {
                    /* WARNING: Does not return */
          pcVar18 = (code *)SoftwareBreakpoint(1,0x103176018);
          (*pcVar18)();
        }
        uVar15 = uVar17 + 1;
        uVar12 = uVar5;
        func_0x000107c4b1dc();
        func_0x000107c61180();
        uVar6 = uVar12;
        func_0x000107c5faec();
        uVar13 = uVar14;
        func_0x000107c61170(uVar12);
        uVar12 = uVar4;
        func_0x000107c4b1dc();
        func_0x000107c61180();
        uVar7 = uVar12;
        func_0x000107c5faec();
        func_0x000107c61170(uVar12);
        if ((uVar6 == uVar7) && (uVar14 == uVar13)) {
          func_0x000107c6142c(uVar14);
          func_0x000107c6142c(uVar13);
          goto LAB_103176040;
        }
        uVar12 = uVar14;
        func_0x000107c605b8(uVar6,uVar14,uVar7,uVar13,0);
        func_0x000107c6142c(uVar14);
        func_0x000107c6142c(uVar13);
        if ((uVar6 & 1) != 0) goto LAB_103176040;
        func_0x000107c61170(uVar5);
        uVar17 = uVar17 + 1;
      } while (uVar15 != uVar16);
    }
    uVar5 = uVar4;
    func_0x000107c61174();
LAB_103176040:
    uVar12 = uVar4;
    uVar16 = uVar5;
    FUN_103172c2c(uVar4,uVar5,uStack_a8,uStack_a0);
    lVar8 = unaff_x20 + _DAT_112f46ed8;
    func_0x000107c61618();
    if (lVar8 == 0) {
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar12);
    }
    else {
      uVar9 = param_2;
      func_0x000107c40674();
      func_0x000107c61180();
      uVar10 = uVar9;
      func_0x000107c5faec();
      func_0x000107c61170(uVar9);
      puStack_c0 = (ulong *)0x0;
      puStack_b8 = (undefined8 *)0x0;
      uStack_b0 = 0;
      uVar9 = param_2;
      uStack_d0 = uVar10;
      uStack_c8 = uVar16;
      func_0x000107c3f894(param_2);
      func_0x000107c61180();
      puStack_80 = &uStack_d0;
      puStack_78 = (undefined8 *)param_2;
      func_0x000104522a44(0x103177274,&uStack_90,FUN_103176520,0);
      func_0x000107c61170(uVar9);
      uStack_88 = uStack_c8;
      uStack_90 = uStack_d0;
      puStack_78 = puStack_b8;
      puStack_80 = puStack_c0;
      uStack_70 = uStack_b0;
      func_0x0001000d224c(&uStack_d0);
      puVar2 = puStack_b8;
      lVar1 = CONCAT71(uStack_af,uStack_b0);
      func_0x000103177294(&uStack_d0,puStack_b8);
      puVar11 = &UNK_1106171b0;
      func_0x000107c613fc(&UNK_1106171b0,0x18,7);
      func_0x000107c61614(puVar11 + 0x10,unaff_x20);
      pcVar18 = *(code **)(lVar1 + 8);
      func_0x000107c61174(lVar8);
      func_0x000107c6157c(puVar11);
      (*pcVar18)(lVar8,uVar12,&uStack_90,0,0,0,0x10317727c,puVar11,puVar2,lVar1);
      func_0x000107c61574(puVar11);
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar12);
      func_0x000107c61170(lVar8);
      func_0x000107c61170(lVar8);
      func_0x000107c61170(uVar4);
      func_0x0001020bf360(&uStack_90);
      func_0x000107c61574(puVar11);
      func_0x0001031772b8(&uStack_d0);
    }
  }
  uVar9 = uStack_a0;
  func_0x000107c61170(uVar3);
  func_0x000107c6142c(uVar9);
  return;
}



/* Entry: 103176248; end: 10317624b;  */

void FUN_103176248(void)

{
  return;
}



/* Entry: 10317624c; end: 10317647b;  */

void FUN_10317624c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  
  uVar1 = *param_5;
  *param_5 = param_1;
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_6[1];
  *param_6 = param_2;
  param_6[1] = param_3;
  func_0x000107c61434(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 10317647c; end: 10317651f;  */

/* WARNING: Possible PIC construction at 0x000102e021d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e021d4) */
/* WARNING: Removing unreachable block (ram,0x000102e021ec) */
/* WARNING: Removing unreachable block (ram,0x000102e021dc) */

void FUN_10317647c(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = param_2;
  func_0x000107c40674();
  func_0x000107c61180();
  uVar5 = param_4;
  func_0x000107c5faec();
  func_0x000107c61170(param_4);
  uVar2 = param_3[1];
  uVar1 = param_3[2];
  uVar3 = param_3[3];
  *param_3 = uVar5;
  param_3[1] = uVar6;
  param_3[2] = param_1;
  param_3[3] = param_2;
  uVar4 = *(undefined1 *)(param_3 + 4);
  *(undefined1 *)(param_3 + 4) = 1;
  func_0x000107c61434(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2,uVar2,uVar1,uVar3,uVar4);
  return;
}


