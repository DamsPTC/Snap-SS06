/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10264e94c; end: 10264e97b;  */

void FUN_10264e94c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000101107184(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined1 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10264e97c; end: 10264e9f7;  */

void FUN_10264e97c(void)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  long lVar5;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  plVar4 = (long *)0x80;
  uVar1 = *(undefined1 *)(unaff_x20 + 0x28);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x10264ead8;
  *(undefined1 *)(plVar4 + 0xf) = uVar1;
  plVar4[8] = lVar2;
  plVar4[9] = lVar5;
  plVar4[7] = lVar3;
  lVar2 = 0;
  func_0x000107c5fcec();
  lVar3 = lVar2;
  func_0x000107c5fce8();
  plVar4[10] = lVar3;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar4[0xb] = lVar2;
  plVar4[0xc] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10264d6bc,lVar2,lVar3);
  return;
}



/* Entry: 10264e9f8; end: 10264ea03;  */

void FUN_10264e9f8(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    FUN_10264d970(param_1,uVar1,uVar3);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 10264ea04; end: 10264ea67;  */

void FUN_10264ea04(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x10264eadc;
  plVar3[0xb] = lVar2;
  plVar3[0xc] = lVar1;
  plVar3[10] = param_1;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[0xd] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar3[0xe] = lVar1;
  plVar3[0xf] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10264dd58,lVar1,lVar2);
  return;
}



/* Entry: 10264ea68; end: 10264eaa7;  */

void FUN_10264ea68(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10264eaa8; end: 10264eadf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10264eaa8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    if (param_3 != 0) {
      puVar1 = (undefined8 *)(lVar2 + _DAT_112eb1488);
      func_0x000107c61428(puVar1,auStack_70,1,0);
      uVar3 = puVar1[1];
      *puVar1 = param_2;
      puVar1[1] = param_3;
      func_0x000107c61434(param_3);
      func_0x000107c61170(lVar2);
      func_0x000107c6142c(uVar3);
      return 1;
    }
    func_0x000107c61170();
  }
  return 0;
}



/* Entry: 10264eae0; end: 10264eda7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10264eae0(void)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long unaff_x20;
  
  puVar2 = &stack0xffffffffffffffa0;
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb1570);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 0xff;
  func_0x000107c61154(0,0,0,0,&stack0xffffffffffffffa0,PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  func_0x000107c61174();
  puVar3 = puVar2;
  func_0x000107c5e308();
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c40290(0x4049000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  puVar3 = puVar2;
  func_0x000107c44d9c();
  func_0x000107c61180();
  puVar5 = puVar3;
  func_0x000107c40290(0x4044000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  puVar7 = puVar6;
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar7 + 0x18) = 5;
  *(undefined8 *)(puVar7 + 0x10) = 2;
  *(undefined1 **)(puVar7 + 0x20) = puVar4;
  *(undefined1 **)(puVar7 + 0x28) = puVar5;
  uVar8 = 0;
  FUN_10264f238(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  func_0x000107c61174(puVar4);
  func_0x000107c61174(puVar5);
  puVar9 = puVar7;
  func_0x000107c5fc48(puVar7,uVar8);
  func_0x000107c61574(puVar7);
  func_0x000107c3d048(puVar6);
  func_0x000107c61170(puVar9);
  func_0x000107c61174();
  func_0x000107c53840();
  puVar3 = puVar2;
  func_0x000107c45130();
  func_0x000107c61180();
  if (puVar3 != (undefined1 *)0x0) {
    func_0x000107c53840();
    func_0x000107c61170(puVar3);
  }
  puVar3 = puVar2;
  func_0x000107c5cac0();
  func_0x000107c61180();
  if (puVar3 != (undefined1 *)0x0) {
    puVar6 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x000107c61168(PTR__OBJC_CLASS___UIFont_1126aec38);
    func_0x000107c5c5fc(0x4040000000000000);
    func_0x000107c61180();
    func_0x000107c54adc(puVar3);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar6);
  }
  func_0x000107c55268(0x4008000000000000,0x4024000000000000,0x4008000000000000,0x4024000000000000,
                      puVar2);
  func_0x000107c61170(puVar2);
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c52b50(puVar2);
  func_0x000107c61170(puVar6);
  puVar3 = puVar2;
  func_0x000107c4aba4(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c539d4(0x4034000000000000,puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar3);
  return puVar2;
}



/* Entry: 10264eda8; end: 10264edc7; -[_TtC27MapFocusCardsImplementation14ReactionButton init] */

void FUN_10264eda8(void)

{
  FUN_10264eae0();
  return;
}



/* Entry: 10264edc8; end: 10264ee37; -[_TtC27MapFocusCardsImplementation14ReactionButton initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10264edc8(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112eb1570);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 0xff;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "MapFocusCardsImplementation/ReactionButton.swift",0x30,2,0x25,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10264ee38);
  (*pcVar2)();
}



/* Entry: 10264ee38; end: 10264eef3; -[_TtC27MapFocusCardsImplementation14ReactionButton layoutSubviews] */

void FUN_10264ee38(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  puVar2 = PTR_s_layoutSubviews_112600e60;
  uStack_40 = param_1;
  uStack_38 = uVar1;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_40,puVar2);
  puVar2 = PTR_PTR_1126b08d8;
  func_0x000107c61168(PTR_PTR_1126b08d8);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x00010085b3c8(0x4028000000000000,0x3fc3333333333333,0,0x4000000000000000,puVar2,param_1,
                      puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10264eef4; end: 10264ef47;  */

void FUN_10264eef4(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_50 [48];
  
  func_0x000107c6088c(auStack_50,0x3fe999999999999a,0x3fe999999999999a);
  func_0x000107c5a03c(param_1,param_2,auStack_50);
  return;
}



/* Entry: 10264ef48; end: 10264ef6b; -[_TtC27MapFocusCardsImplementation14ReactionButton touchesBegan:withEvent:] */

void FUN_10264ef48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar6 = &UNK_11052dea0;
  ppuVar7 = &puStack_a0;
  uVar1 = param_1;
  func_0x000107c614f0();
  uVar2 = 0;
  FUN_10264f238(0,0x112d5e570,&PTR__OBJC_CLASS___UITouch_1126a6378);
  uVar3 = uVar2;
  func_0x000101107df4();
  func_0x000107c5fe10(param_3,uVar2,uVar3);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  uVar4 = param_3;
  func_0x000107c5fe08(param_3,uVar2,uVar3);
  uStack_70 = param_1;
  uStack_68 = uVar1;
  func_0x000107c61154(&uStack_70,PTR_s_touchesBegan_withEvent__11267b780,uVar4,param_4);
  func_0x000107c61170(uVar4);
  puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x000107c613fc(&UNK_11052dea0,0x18,7);
  *(undefined8 *)(puVar6 + 0x10) = param_1;
  pcStack_80 = FUN_10264f230;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_11052deb8;
  puStack_78 = puVar6;
  func_0x000107c60bc4(&puStack_a0);
  puVar6 = puStack_78;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar6);
  func_0x000107c3dccc(0x3fd0000000000000,puVar5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_3);
  func_0x000107c60bd0(ppuVar7);
  return;
}



/* Entry: 10264ef6c; end: 10264ef8f; -[_TtC27MapFocusCardsImplementation14ReactionButton touchesEnded:withEvent:] */

void FUN_10264ef6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar6 = &UNK_11052de50;
  ppuVar7 = &puStack_a0;
  uVar1 = param_1;
  func_0x000107c614f0();
  uVar2 = 0;
  FUN_10264f238(0,0x112d5e570,&PTR__OBJC_CLASS___UITouch_1126a6378);
  uVar3 = uVar2;
  func_0x000101107df4();
  func_0x000107c5fe10(param_3,uVar2,uVar3);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  uVar4 = param_3;
  func_0x000107c5fe08(param_3,uVar2,uVar3);
  uStack_70 = param_1;
  uStack_68 = uVar1;
  func_0x000107c61154(&uStack_70,PTR_s_touchesEnded_withEvent__11267b788,uVar4,param_4);
  func_0x000107c61170(uVar4);
  puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x000107c613fc(&UNK_11052de50,0x18,7);
  *(undefined8 *)(puVar6 + 0x10) = param_1;
  uStack_80 = 0x10264f1f0;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_11052de68;
  puStack_78 = puVar6;
  func_0x000107c60bc4(&puStack_a0);
  puVar6 = puStack_78;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar6);
  func_0x000107c3dccc(0x3fd0000000000000,puVar5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_3);
  func_0x000107c60bd0(ppuVar7);
  return;
}



/* Entry: 10264ef90; end: 10264f117;  */

void FUN_10264ef90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  ppuVar7 = &puStack_a0;
  uVar2 = param_1;
  func_0x000107c614f0();
  uVar3 = 0;
  FUN_10264f238(0,0x112d5e570,&PTR__OBJC_CLASS___UITouch_1126a6378);
  uVar4 = uVar3;
  func_0x000101107df4();
  func_0x000107c5fe10(param_3,uVar3,uVar4);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  uVar5 = param_3;
  func_0x000107c5fe08(param_3,uVar3,uVar4);
  uStack_70 = param_1;
  uStack_68 = uVar2;
  func_0x000107c61154(&uStack_70,*param_5,uVar5,param_4);
  func_0x000107c61170(uVar5);
  puVar6 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x000107c613fc(param_6,0x18,7);
  *(undefined8 *)(param_6 + 0x10) = param_1;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  uStack_88 = param_8;
  uStack_80 = param_7;
  lStack_78 = param_6;
  func_0x000107c60bc4(&puStack_a0);
  lVar1 = lStack_78;
  func_0x000107c61174(param_1);
  func_0x000107c61574(lVar1);
  func_0x000107c3dccc(0x3fd0000000000000,puVar6);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_3);
  func_0x000107c60bd0(ppuVar7);
  return;
}



/* Entry: 10264f118; end: 10264f13b; -[_TtC27MapFocusCardsImplementation14ReactionButton touchesCancelled:withEvent:] */

void FUN_10264f118(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar6 = &UNK_11052de00;
  ppuVar7 = &puStack_a0;
  uVar1 = param_1;
  func_0x000107c614f0();
  uVar2 = 0;
  FUN_10264f238(0,0x112d5e570,&PTR__OBJC_CLASS___UITouch_1126a6378);
  uVar3 = uVar2;
  func_0x000101107df4();
  func_0x000107c5fe10(param_3,uVar2,uVar3);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  uVar4 = param_3;
  func_0x000107c5fe08(param_3,uVar2,uVar3);
  uStack_70 = param_1;
  uStack_68 = uVar1;
  func_0x000107c61154(&uStack_70,PTR_s_touchesCancelled_withEvent__112526c90,uVar4,param_4);
  func_0x000107c61170(uVar4);
  puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x000107c613fc(&UNK_11052de00,0x18,7);
  *(undefined8 *)(puVar6 + 0x10) = param_1;
  uStack_80 = 0x10264f288;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_11052de18;
  puStack_78 = puVar6;
  func_0x000107c60bc4(&puStack_a0);
  puVar6 = puStack_78;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar6);
  func_0x000107c3dccc(0x3fd0000000000000,puVar5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_3);
  func_0x000107c60bd0(ppuVar7);
  return;
}



/* Entry: 10264f13c; end: 10264f19b; -[_TtC27MapFocusCardsImplementation14ReactionButton initWithFrame:] */

void FUN_10264f13c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapFocusCardsImplementation.ReactionButton",0x2a,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10264f168);
  (*pcVar1)();
}



/* Entry: 10264f19c; end: 10264f1b3; -[_TtC27MapFocusCardsImplementation14ReactionButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10264f19c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112eb1570);
  uVar2 = puVar1[1];
  if (*(char *)(puVar1 + 2) == -1) {
    return *puVar1;
  }
  if (*(char *)(puVar1 + 2) != '\0') {
    return *puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return uVar2;
}



/* Entry: 10264f1b4; end: 10264f1d3;  */

void FUN_10264f1b4(void)

{
  func_0x000107c61168(&PTR_PTR_112855820);
  return;
}



/* Entry: 10264f1d4; end: 10264f1f3;  */

void FUN_10264f1d4(long param_1,long param_2)

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



/* Entry: 10264f1f4; end: 10264f22f;  */

void FUN_10264f1f4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_40 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_28 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_30 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_18 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_20 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x000107c5a03c(*(undefined8 *)(unaff_x20 + 0x10),param_2,&uStack_40);
  return;
}



/* Entry: 10264f230; end: 10264f237;  */

void FUN_10264f230(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_50 [48];
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6088c(auStack_50,0x3fe999999999999a,0x3fe999999999999a);
  func_0x000107c5a03c(uVar1,param_2,auStack_50);
  return;
}



/* Entry: 10264f238; end: 10264f277;  */

void FUN_10264f238(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10264f278; end: 10264f28b;  */

void FUN_10264f278(long param_1,long param_2)

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



/* Entry: 10264f28c; end: 10264f393;  */

void FUN_10264f28c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb15a0,&UNK_10dac5f20);
  puVar1 = &UNK_11052def0;
  func_0x000107c613fc(&UNK_11052def0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_10264f394,puVar1);
  return;
}



/* Entry: 10264f394; end: 10264f3bf;  */

void FUN_10264f394(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_38,uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  uVar2 = uStack_38;
  func_0x000103a7f854();
  func_0x000107c61170(uVar2);
  uVar2 = uVar1;
  func_0x000107c4c47c();
  if ((int)uVar2 == 0) {
    func_0x000107c615e8(uVar1);
    uStack_38 = 0;
  }
  else {
    func_0x000100083b20(&uStack_38);
    func_0x000107c615e8(uVar1);
  }
  *param_1 = uStack_38;
  return;
}



/* Entry: 10264f3c0; end: 10264f46b;  */

void FUN_10264f3c0(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 10264f46c; end: 10264f46f;  */

void FUN_10264f46c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb15a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dac5f60;
  func_0x000107c61520(&UNK_10dac5f60,&UNK_11052dfa8);
  puRam0000000112eb15a8 = puVar1;
  return;
}



/* Entry: 10264f470; end: 10264f4af;  */

void FUN_10264f470(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb15a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dac5f60;
  func_0x000107c61520(&UNK_10dac5f60,&UNK_11052dfa8);
  puRam0000000112eb15a8 = puVar1;
  return;
}



/* Entry: 10264f4b0; end: 10264f613;  */

int FUN_10264f4b0(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10264f52c;
        goto LAB_10264f510;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10264f510:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_10264f52c:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10264f614; end: 10264f7ab;  */

void FUN_10264f614(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb15b0,&UNK_10dac5ff0);
  puVar1 = &UNK_11052e000;
  func_0x000107c613fc(&UNK_11052e000,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x0001000823a8(FUN_10264f7ac,puVar1);
  return;
}



/* Entry: 10264f7ac; end: 10264f7bb;  */

void FUN_10264f7ac(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [40];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(auStack_78,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  FUN_102650524();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x50) = 0;
  FUN_102650298(auStack_78,lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x18) = uStack_90;
  *(undefined8 *)(lVar2 + 0x20) = uStack_88;
  *(undefined8 *)(lVar2 + 0x10) = uStack_80;
  *(undefined8 *)(lVar2 + 0x58) = uStack_98;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_11052e018;
  *param_1 = lVar2;
  return;
}



/* Entry: 10264f7bc; end: 10264f82b;  */

long FUN_10264f7bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  FUN_102650298(param_1,unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x18) = param_4;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x58) = param_5;
  return unaff_x20;
}



/* Entry: 10264f82c; end: 10264fa27;  */

void FUN_10264f82c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long unaff_x20;
  ulong uVar13;
  
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar11 = *(ulong *)(param_2 + 0x10);
  if (uVar11 != 0) {
    uVar13 = 0;
    lVar10 = *(long *)(unaff_x20 + 0x20);
LAB_10264f884:
    uVar2 = uVar13;
    if (uVar13 <= uVar11) {
      uVar2 = uVar11;
    }
    puVar12 = (undefined8 *)(param_2 + 0x28 + uVar13 * 0x10);
    uVar13 = uVar13 + 1;
    do {
      if (uVar13 - uVar2 == 1) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10264fa28);
        (*pcVar5)();
      }
      uVar1 = puVar12[-1];
      uVar3 = *puVar12;
      func_0x000107c61434(uVar3);
      lVar6 = lVar10;
      func_0x000107c4c3ac();
      func_0x000107c61180();
      lVar7 = lVar6;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar6);
      if (lVar7 != 0) {
        uVar8 = uVar1;
        func_0x000107c5fadc(uVar1,uVar3);
        lVar6 = lVar7;
        func_0x000107c4e680();
        func_0x000107c61180();
        func_0x000107c615e8(lVar7);
        func_0x000107c61170(uVar8);
        if (lVar6 != 0) goto code_r0x00010264f940;
      }
      func_0x000107c6142c(uVar3);
      uVar13 = uVar13 + 1;
      puVar12 = puVar12 + 2;
      if (uVar13 - uVar11 == 1) goto LAB_10264f9c8;
    } while( true );
  }
  lVar10 = *(long *)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
joined_r0x00010264f9cc:
  if (lVar10 != 0) {
    FUN_10264fea8(param_1,puVar4);
    FUN_10264ffd0(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar4);
  return;
code_r0x00010264f940:
  func_0x000107c61170(lVar6);
  puVar9 = puVar4;
  func_0x000107c61558();
  if (((ulong)puVar9 & 1) == 0) {
    func_0x000100403514(0,*(long *)(puVar4 + 0x10) + 1,1);
  }
  uVar2 = *(ulong *)(puVar4 + 0x10);
  if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar2) {
    func_0x000100403514(1 < *(ulong *)(puVar4 + 0x18),uVar2 + 1,1);
  }
  *(ulong *)(puVar4 + 0x10) = uVar2 + 1;
  *(undefined8 *)(puVar4 + uVar2 * 0x10 + 0x20) = uVar1;
  *(undefined8 *)(puVar4 + uVar2 * 0x10 + 0x28) = uVar3;
  if (uVar13 == uVar11) goto LAB_10264f9c8;
  goto LAB_10264f884;
LAB_10264f9c8:
  lVar10 = *(long *)(puVar4 + 0x10);
  goto joined_r0x00010264f9cc;
}



/* Entry: 10264fa28; end: 10264fb0f;  */

/* WARNING: Possible PIC construction at 0x00010264fa80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010264fa84) */
/* WARNING: Removing unreachable block (ram,0x00010264fa9c) */
/* WARNING: Removing unreachable block (ram,0x00010264fab4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10264fa28(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_1026500b0();
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x18) + _DAT_112fecfb0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c3eca4();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 10264fb10; end: 10264fea7;  */

/* WARNING: Possible PIC construction at 0x00010264fb94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010264fbd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010264fbe8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010264fc10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010264fcb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010264fc84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010264fc44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010264fcb4) */
/* WARNING: Removing unreachable block (ram,0x00010264fc14) */
/* WARNING: Removing unreachable block (ram,0x00010264fc48) */
/* WARNING: Removing unreachable block (ram,0x00010264fc20) */
/* WARNING: Removing unreachable block (ram,0x00010264fbec) */
/* WARNING: Removing unreachable block (ram,0x00010264fc40) */
/* WARNING: Removing unreachable block (ram,0x00010264fbf4) */
/* WARNING: Removing unreachable block (ram,0x00010264fbd4) */
/* WARNING: Removing unreachable block (ram,0x00010264fb98) */
/* WARNING: Removing unreachable block (ram,0x00010264fb9c) */
/* WARNING: Removing unreachable block (ram,0x00010264fc88) */
/* WARNING: Removing unreachable block (ram,0x00010264fc94) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10264fb10(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & **(ulong **)(unaff_x20 + 0x58)) + 0x88))();
  uVar1 = 0;
  FUN_1026e42dc(0);
  lVar2 = param_1;
  func_0x000107c61480(param_1,uVar1);
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(lVar2 + _DAT_112eb7b70);
    func_0x000107c61434(uVar1);
    func_0x00010264fcd8();
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10264fea8; end: 10264ffcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10264fea8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar2 = *(long *)(*(long *)(unaff_x20 + 0x18) + _DAT_112fecfb0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c4c458();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    uStack_58 = param_2;
    uStack_50 = param_1;
    func_0x00010008a7c8(&uStack_48,&uStack_58);
    func_0x000100083b20(&uStack_58);
    func_0x000107c61574(uStack_48);
    uVar1 = uStack_58;
    func_0x000107c615f0(uStack_58);
    uVar4 = 0x73696a6f6d746962;
    func_0x000107c5fadc(0x73696a6f6d746962,0xee00726579616c2d);
    uVar5 = uVar1;
    func_0x000107c5cf38(uVar1);
    func_0x000107c61180();
    func_0x000107c59c10(lVar3);
    func_0x000107c615e8(lVar3);
    func_0x000107c615ec(uVar1,2);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
  }
  return;
}



/* Entry: 10264ffd0; end: 1026500af;  */

/* WARNING: Possible PIC construction at 0x000102650028: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010265005c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102650098: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102650060) */
/* WARNING: Removing unreachable block (ram,0x00010265002c) */
/* WARNING: Removing unreachable block (ram,0x000102650094) */
/* WARNING: Removing unreachable block (ram,0x000102650040) */
/* WARNING: Removing unreachable block (ram,0x00010265009c) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10264ffd0(long param_1)

{
  long lVar1;
  long unaff_x20;
  
  func_0x00010264fcd8();
  if (param_1 == 0) {
    return;
  }
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x18) + _DAT_112fecfb0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c3eca4();
    func_0x000107c61180();
    param_1 = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1026500b0; end: 102650297;  */

/* WARNING: Possible PIC construction at 0x000102650170: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026501d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102650200: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102650210: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102650274: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102650214) */
/* WARNING: Removing unreachable block (ram,0x000102650204) */
/* WARNING: Removing unreachable block (ram,0x0001026501d8) */
/* WARNING: Removing unreachable block (ram,0x000102650174) */
/* WARNING: Removing unreachable block (ram,0x000102650258) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Removing unreachable block (ram,0x000102650178) */
/* WARNING: Removing unreachable block (ram,0x000102650278) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026500b0(double param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x18) + _DAT_112fecfb0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c4c458();
    func_0x000107c61180();
    func_0x000107c59c08();
    func_0x000107c4ab14(param_2);
    func_0x000107c4c0e4(param_2);
    func_0x000107c5ea20(lVar2);
    if (16.25 < param_1) {
      func_0x000107c5ea20(lVar2);
    }
    func_0x000107c3f140(lVar1);
    func_0x000107c61180();
    func_0x000107c49cd8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 102650298; end: 1026502af;  */

undefined8 * FUN_102650298(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 1026502b0; end: 1026502fb;  */

void FUN_1026502b0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x0001000834e4(unaff_x20 + 0x28);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1026502fc; end: 102650343;  */

void FUN_1026502fc(long param_1,undefined8 param_2)

{
  FUN_102650344(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),param_2);
  return;
}



/* Entry: 102650344; end: 102650513;  */

/* WARNING: Possible PIC construction at 0x000102650394: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026503b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026503d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026504b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026504e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026504f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102650498: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010265044c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102650408: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010265049c) */
/* WARNING: Removing unreachable block (ram,0x0001026504f8) */
/* WARNING: Removing unreachable block (ram,0x0001026504e4) */
/* WARNING: Removing unreachable block (ram,0x0001026504b8) */
/* WARNING: Removing unreachable block (ram,0x0001026503dc) */
/* WARNING: Removing unreachable block (ram,0x000102650450) */
/* WARNING: Removing unreachable block (ram,0x0001026503e8) */
/* WARNING: Removing unreachable block (ram,0x0001026503b4) */
/* WARNING: Removing unreachable block (ram,0x000102650448) */
/* WARNING: Removing unreachable block (ram,0x0001026503bc) */
/* WARNING: Removing unreachable block (ram,0x000102650398) */
/* WARNING: Removing unreachable block (ram,0x0001026504b0) */
/* WARNING: Removing unreachable block (ram,0x00010265039c) */
/* WARNING: Removing unreachable block (ram,0x00010265040c) */

void FUN_102650344(long param_1,long param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  if (param_1 != 0) {
    func_0x000107c61174();
    func_0x000107c439a4();
    func_0x000107c61180();
    func_0x000107c5fc54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x50);
    *(undefined8 *)(unaff_x20 + 0x50) = 0;
    func_0x000107c61174(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
    return;
  }
  return;
}



/* Entry: 102650514; end: 102650523;  */

undefined1  [16] FUN_102650514(void)

{
  return ZEXT816(0x11052e040);
}



/* Entry: 102650524; end: 102650543;  */

void FUN_102650524(void)

{
  func_0x000107c61168(&PTR_PTR_112eb15f8);
  return;
}



/* Entry: 102650544; end: 1026507b3;  */

undefined * FUN_102650544(long param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong unaff_x20;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  
  func_0x000107c4e684();
  func_0x000107c61180();
  uVar3 = 0;
  func_0x000101b7ea04();
  uVar4 = unaff_x20;
  func_0x000107c5fc54();
  func_0x000107c61170(unaff_x20);
  if (uVar4 >> 0x3e == 0) {
    uVar13 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar13 = uVar4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar4) {
      uVar13 = uVar4;
    }
    func_0x000107c60480();
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar10;
  if (uVar13 != 0) {
    uVar14 = 0;
LAB_102650608:
    do {
      if ((uVar4 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102650764);
          (*pcVar1)();
        }
        uVar5 = *(ulong *)(uVar4 + 0x20 + uVar14 * 8);
        func_0x000107c61174();
        uVar11 = uVar3;
      }
      else {
        uVar5 = uVar14;
        uVar11 = uVar4;
        func_0x00010111c1ac();
      }
      bVar2 = SCARRY8(uVar14,1);
      uVar14 = uVar14 + 1;
      if (bVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102650760);
        (*pcVar1)();
      }
      uVar3 = uVar11;
      if (((param_2 ^ 1 | param_3) & 1) == 0) {
        uVar6 = uVar5;
        func_0x000107c5d984();
        func_0x000107c61180();
        uVar7 = uVar6;
        func_0x000107c5faec();
        uVar3 = uVar11;
        func_0x000107c61170(uVar6);
        lVar15 = *(long *)(param_1 + 0x10) + 1;
        puVar12 = (ulong *)(param_1 + 0x28);
        do {
          lVar15 = lVar15 + -1;
          if (lVar15 == 0) {
            func_0x000107c6142c(uVar11);
            func_0x000107c61170(uVar5);
            if (uVar14 == uVar13) goto LAB_102650788;
            goto LAB_102650608;
          }
          uVar6 = puVar12[-1];
          uVar3 = *puVar12;
          if (uVar6 == uVar7 && uVar3 == uVar11) break;
          puVar12 = puVar12 + 2;
          func_0x000107c605b8(uVar6,uVar3,uVar7,uVar11,0);
        } while ((uVar6 & 1) == 0);
        func_0x000107c6142c(uVar11);
      }
      uVar6 = uVar5;
      func_0x000107c5d984();
      func_0x000107c61180();
      uVar7 = uVar6;
      func_0x000107c5faec();
      uVar11 = uVar3;
      func_0x000107c61170(uVar6);
      func_0x000107c61170(uVar5);
      puVar8 = puVar10;
      func_0x000107c61558();
      puVar9 = puVar10;
      if (((ulong)puVar8 & 1) == 0) {
        uVar11 = *(long *)(puVar10 + 0x10) + 1;
        puVar9 = (undefined *)0x0;
        func_0x0001000d182c(0,uVar11,1,puVar10);
      }
      uVar6 = *(ulong *)(puVar9 + 0x10);
      uVar5 = uVar6 + 1;
      puVar10 = puVar9;
      if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar6) {
        puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
        uVar11 = uVar5;
        func_0x0001000d182c(puVar10,uVar5,1,puVar9);
      }
      *(ulong *)(puVar10 + 0x10) = uVar5;
      *(ulong *)(puVar10 + uVar6 * 0x10 + 0x20) = uVar7;
      *(ulong *)(puVar10 + uVar6 * 0x10 + 0x28) = uVar3;
      uVar3 = uVar11;
    } while (uVar14 != uVar13);
  }
LAB_102650788:
  func_0x000107c6142c(uVar4);
  return puVar10;
}



/* Entry: 1026507b4; end: 1026508af;  */

long FUN_1026507b4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lVar5 = *(long *)(param_1 + 0x10);
  func_0x000107c615f0();
  func_0x000107c61434(param_1);
  if (lVar5 != 0) {
    puVar6 = (undefined8 *)(param_1 + 0x28);
    do {
      uVar1 = puVar6[-1];
      uVar2 = *puVar6;
      uStack_68 = uVar1;
      uStack_60 = uVar2;
      func_0x000107c61434(uVar2);
      FUN_1026508b0(&lStack_58,&uStack_68);
      func_0x000107c6142c(uVar2);
      lVar3 = lStack_58;
      func_0x000107c61170(lStack_58);
      if (lVar3 != 0) {
        uStack_68 = uVar1;
        uStack_60 = uVar2;
        func_0x000107c61434(uVar2);
        FUN_1026508b0(&lStack_58,&uStack_68);
        func_0x000107c6142c(uVar2);
        func_0x000107c615e8();
        if (lStack_58 == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1026508b0);
          (*pcVar4)();
        }
        goto LAB_102650884;
      }
      puVar6 = puVar6 + 2;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  func_0x000107c615e8();
  lStack_58 = 0;
LAB_102650884:
  func_0x000107c6142c(param_1);
  return lStack_58;
}



/* Entry: 1026508b0; end: 10265090b;  */

void FUN_1026508b0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x000107c5fadc(uVar1,param_2[1]);
  func_0x000107c4e67c();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  *param_1 = param_3;
  return;
}



/* Entry: 10265090c; end: 102650ae7;  */

undefined1  [16] FUN_10265090c(double param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102650ad8);
    (*pcVar1)();
  }
  if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102650adc);
    (*pcVar1)();
  }
  if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102650ae0);
    (*pcVar1)();
  }
  lVar6 = (long)param_1;
  if (lVar6 < 0xe10) {
    if ((lVar6 / 0x3c) % 0x3c < 1) {
      if (lVar6 % 0x3c < 1) {
        lVar6 = 0;
        uVar7 = 0xe000000000000000;
        goto LAB_102650aa8;
      }
      func_0x000106875064();
      func_0x000107c61180();
      if (param_2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102650ae8);
        (*pcVar1)();
      }
    }
    else {
      func_0x00010687504c();
      func_0x000107c61180();
      if (param_2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1026509e4);
        (*pcVar1)();
      }
    }
  }
  else {
    func_0x000106875034();
    func_0x000107c61180();
    if (param_2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102650ae4);
      (*pcVar1)();
    }
  }
  lVar6 = param_2;
  func_0x000107c5faec();
  func_0x000107c61170(param_2);
  lVar2 = 0x112d36008;
  func_0x0001000285a8(0x112d36008,&UNK_10d900720);
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  puVar3 = PTR___sSiN_11034deb0;
  puVar5 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c();
  *(undefined **)(lVar2 + 0x38) = PTR___sSSN_11034da80;
  puVar4 = puVar3;
  func_0x00010075bbf0();
  *(undefined **)(lVar2 + 0x40) = puVar4;
  *(undefined **)(lVar2 + 0x20) = puVar3;
  *(undefined **)(lVar2 + 0x28) = puVar5;
  uVar7 = param_3;
  func_0x000107c5fb00(lVar6,param_3,lVar2);
  func_0x000107c6142c(param_3);
LAB_102650aa8:
  auVar8._8_8_ = uVar7;
  auVar8._0_8_ = lVar6;
  return auVar8;
}



/* Entry: 102650ae8; end: 102650ccf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102650ae8(long param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  double dVar7;
  undefined8 uVar8;
  
  uVar6 = *(ulong *)(param_1 + _DAT_112fa97b8);
  uVar5 = param_2;
  if (uVar6 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar6 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar6) {
      uVar2 = uVar6;
    }
    func_0x000107c60480();
  }
  if (uVar2 != 0) {
    if ((uVar6 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar6 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102650cc4);
        (*pcVar1)();
      }
      lVar3 = *(long *)(uVar6 + 0x20);
      func_0x000107c61174();
    }
    else {
      lVar3 = 0;
      uVar5 = uVar6;
      func_0x00010111c37c(0,uVar6);
    }
    lVar4 = *(long *)(lVar3 + _DAT_112fa9758);
    func_0x000107c61174();
    func_0x000107c61170(lVar3);
    lVar3 = *(long *)(lVar4 + _DAT_112fa98a8);
    func_0x000107c61174();
    func_0x000107c61170(lVar4);
    dVar7 = *(double *)(lVar3 + _DAT_112fa98e8);
    func_0x000107c61170(lVar3);
    dVar7 = dVar7 / 60.0;
    if (0x7fefffffffffffff < (ulong)ABS(dVar7)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102650cc0);
      (*pcVar1)();
    }
    if (dVar7 <= -1.0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102650cc8);
      (*pcVar1)();
    }
    if (1.8446744073709552e+19 <= dVar7) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102650ccc);
      (*pcVar1)();
    }
    if ((uVar6 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar6 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102650cd0);
        (*pcVar1)();
      }
      lVar3 = *(long *)(uVar6 + 0x20);
      func_0x000107c61174();
    }
    else {
      lVar3 = 0;
      func_0x00010111c37c(0,uVar6);
      uVar5 = uVar6;
    }
    lVar4 = *(long *)(lVar3 + _DAT_112fa9758);
    func_0x000107c61174();
    func_0x000107c61170(lVar3);
    lVar3 = *(long *)(lVar4 + _DAT_112fa98a8);
    func_0x000107c61174();
    func_0x000107c61170(lVar4);
    uVar8 = *(undefined8 *)(lVar3 + _DAT_112fa98e8);
    func_0x000107c61170(lVar3);
    FUN_10265090c(uVar8);
    if (((param_2 & 0xff) == 0) && (0x2d < (ulong)(long)dVar7)) {
      func_0x000107c6142c(uVar5);
    }
  }
  return;
}



/* Entry: 102650cd0; end: 102651033;  */

void FUN_102650cd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb1680,&UNK_10dac6090);
  puVar1 = &UNK_11052e068;
  func_0x000107c613fc(&UNK_11052e068,0x50,7);
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
  func_0x0001000823a8(FUN_102651034,puVar1);
  return;
}



/* Entry: 102651034; end: 102651047;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102651034(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long *plVar6;
  long unaff_x20;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_68,lVar2,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  FUN_102653434();
  lVar3 = lVar2;
  func_0x000107c610f8();
  lVar1 = _DAT_112eb1688;
  uVar4 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(lVar3 + lVar1) = uVar4;
  lVar1 = _DAT_112eb1690;
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_102653478(PTR___swiftEmptyArrayStorage_11034f1c8,0x112d5f6d0,&UNK_10d926250);
  *(undefined **)(lVar3 + lVar1) = puVar5;
  *(undefined **)(lVar3 + _DAT_112eb1698) = PTR___swiftEmptySetSingleton_11034f1d8;
  lVar1 = _DAT_112eb16a0;
  uVar4 = 0x112eb0ed8;
  func_0x0001000285a8(0x112eb0ed8,&UNK_10dac5760);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(lVar3 + lVar1) = uVar4;
  lVar1 = _DAT_112eb16a8;
  uVar4 = 0x112eb0ee0;
  func_0x0001000285a8(0x112eb0ee0,&UNK_10dac60a0);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(lVar3 + lVar1) = uVar4;
  lVar1 = lVar3 + _DAT_112eb16b0;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  *(undefined8 *)(lVar3 + _DAT_112eb16b8) = 0;
  *(undefined8 *)(lVar3 + _DAT_112eb16c0) = uStack_68;
  *(undefined8 *)(lVar3 + _DAT_112eb16c8) = uStack_70;
  *(undefined8 *)(lVar3 + _DAT_112eb16d0) = uStack_78;
  *(undefined8 *)(lVar3 + _DAT_112eb16d8) = uStack_80;
  *(undefined8 *)(lVar3 + _DAT_112eb16e0) = uStack_88;
  *(undefined8 *)(lVar3 + _DAT_112eb16e8) = uStack_90;
  *(undefined8 *)(lVar3 + _DAT_112eb16f0) = uStack_98;
  *(undefined8 *)(lVar3 + _DAT_112eb16f8) = uStack_a0;
  plVar6 = &lStack_b0;
  lStack_b0 = lVar3;
  lStack_a8 = lVar2;
  func_0x000107c61154(plVar6,PTR_s_init_1125d9248);
  param_1[3] = lVar2;
  param_1[4] = (long)&PTR_DAT_11052e0f8;
  *param_1 = (long)plVar6;
  return;
}



/* Entry: 102651048; end: 10265121b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102651048(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  lVar1 = _DAT_112eb1688;
  uVar2 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  lVar1 = _DAT_112eb1690;
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_102653478(PTR___swiftEmptyArrayStorage_11034f1c8,0x112d5f6d0,&UNK_10d926250);
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  *(undefined **)(unaff_x20 + _DAT_112eb1698) = PTR___swiftEmptySetSingleton_11034f1d8;
  lVar1 = _DAT_112eb16a0;
  uVar2 = 0x112eb0ed8;
  func_0x0001000285a8(0x112eb0ed8,&UNK_10dac5760);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  lVar1 = _DAT_112eb16a8;
  uVar2 = 0x112eb0ee0;
  func_0x0001000285a8(0x112eb0ee0,&UNK_10dac60a0);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  lVar1 = unaff_x20 + _DAT_112eb16b0;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  *(undefined8 *)(unaff_x20 + _DAT_112eb16b8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eb16c0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112eb16c8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112eb16d0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112eb16d8) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112eb16e0) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112eb16e8) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112eb16f0) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112eb16f8) = param_8;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10265121c; end: 1026517cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10265121c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112eb16b8;
  lVar2 = *(long *)(unaff_x20 + _DAT_112eb16b8);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    func_0x000102651280();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c6157c();
    func_0x000107c61574(uVar4);
    lVar2 = 0;
  }
  func_0x000107c6157c(lVar2);
  return lVar3;
}



/* Entry: 1026517d0; end: 102651af3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026517d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar1 = PTR_PTR_1126a63a0;
  func_0x000107c610f8(PTR_PTR_1126a63a0);
  func_0x000107c453e4();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ecc();
  func_0x000107c579d4(puVar1);
  func_0x000107c61170(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c55800(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c5a390(param_4);
  uStack_68 = param_1;
  uStack_60 = param_2;
  uStack_58 = param_4;
  func_0x000107c61434(param_2);
  func_0x000107c61174(param_4);
  func_0x0001002a64a8(&uStack_68);
  func_0x000107c61170(param_4);
  func_0x000107c6142c(param_2);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 102651af4; end: 102651f5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102651af4(long param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long unaff_x20;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined *puVar16;
  ulong *puVar17;
  undefined1 auStack_d0 [72];
  undefined *puStack_88;
  undefined1 auStack_80 [32];
  
  func_0x00010006c804();
  lVar10 = _DAT_112eb1690;
  lVar15 = *(long *)(unaff_x20 + _DAT_112eb1698);
  func_0x000107c61428(unaff_x20 + _DAT_112eb1690,auStack_80,0,0);
  lVar10 = *(long *)(unaff_x20 + lVar10);
  func_0x000107c61434(lVar15);
  func_0x000107c61434(lVar10);
  func_0x000100070bfc();
  uVar11 = *(ulong *)(param_1 + 0x10);
  puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar11 != 0) {
    uVar14 = 0;
    do {
      uVar1 = uVar14;
      if (uVar14 <= uVar11) {
        uVar1 = uVar11;
      }
      while( true ) {
        if (uVar14 == uVar1) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102651f60);
          (*pcVar3)();
        }
        puVar17 = (ulong *)(param_1 + 0x20 + uVar14 * 0x10);
        uVar7 = *puVar17;
        uVar8 = puVar17[1];
        uVar14 = uVar14 + 1;
        if (*(long *)(lVar15 + 0x10) == 0) break;
        func_0x000107c6068c(auStack_d0,*(undefined8 *)(lVar15 + 0x28));
        func_0x000107c61434(uVar8);
        puVar4 = auStack_d0;
        func_0x000107c5fb58(puVar4,uVar7,uVar8);
        func_0x000107c606a8();
        uVar9 = -1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
        uVar12 = (ulong)puVar4 & (uVar9 ^ 0xffffffffffffffff);
        if ((*(ulong *)(lVar15 + 0x38 + (uVar12 >> 6) * 8) >> (uVar12 & 0x3f) & 1) == 0)
        goto LAB_102651c70;
        while( true ) {
          puVar17 = (ulong *)(*(long *)(lVar15 + 0x30) + uVar12 * 0x10);
          uVar5 = *puVar17;
          uVar2 = puVar17[1];
          if ((uVar5 == uVar7 && uVar2 == uVar8) ||
             (func_0x000107c605b8(uVar5,uVar2,uVar7,uVar8,0), (uVar5 & 1) != 0)) break;
          uVar12 = uVar12 + 1 & ~uVar9;
          if ((*(ulong *)(lVar15 + 0x38 + (uVar12 >> 6) * 8) >> (uVar12 & 0x3f) & 1) == 0)
          goto LAB_102651c70;
        }
        func_0x000107c6142c(uVar8);
        if (uVar14 == uVar11) goto LAB_102651cf8;
      }
      func_0x000107c61434(uVar8);
LAB_102651c70:
      puVar6 = puVar16;
      func_0x000107c61558();
      puStack_88 = puVar16;
      if (((ulong)puVar6 & 1) == 0) {
        func_0x000100403514(0,*(long *)(puVar16 + 0x10) + 1,1);
      }
      uVar1 = *(ulong *)(puStack_88 + 0x10);
      if (*(ulong *)(puStack_88 + 0x18) >> 1 <= uVar1) {
        func_0x000100403514(1 < *(ulong *)(puStack_88 + 0x18),uVar1 + 1,1);
      }
      *(ulong *)(puStack_88 + 0x10) = uVar1 + 1;
      *(ulong *)(puStack_88 + uVar1 * 0x10 + 0x20) = uVar7;
      *(ulong *)(puStack_88 + uVar1 * 0x10 + 0x28) = uVar8;
      puVar16 = puStack_88;
    } while (uVar14 != uVar11);
  }
LAB_102651cf8:
  func_0x000107c6142c(lVar15);
  lVar13 = *(long *)(puVar16 + 0x10);
  func_0x000107c61574(puVar16);
  lVar15 = _DAT_112eb16e8;
  if ((lVar13 == 0) && ((param_2 & 1) == 0)) {
    func_0x000107c6142c(lVar10);
    lVar10 = unaff_x20 + _DAT_112eb16b0;
    func_0x000107c61428(lVar10,auStack_d0,0,0);
    lVar15 = lVar10;
    func_0x000107c61618();
    if (lVar15 != 0) {
      lVar13 = *(long *)(lVar10 + 8);
      lVar10 = lVar15;
      func_0x000107c614f0();
      (**(code **)(lVar13 + 8))(param_3,param_4,lVar10,lVar13);
      func_0x000107c615e8(lVar15);
    }
  }
  else {
    if (uVar11 != 0) {
      puVar17 = (ulong *)(param_1 + 0x28);
      do {
        uVar14 = puVar17[-1];
        uVar1 = *puVar17;
        if (*(long *)(lVar10 + 0x10) == 0) {
          func_0x000107c61434(uVar1);
LAB_102651e18:
          lVar13 = 0;
        }
        else {
          func_0x000107c61434(lVar10);
          func_0x000107c61434(uVar1);
          uVar7 = uVar14;
          uVar8 = uVar1;
          func_0x000100029284();
          if ((uVar8 & 1) == 0) {
            func_0x000107c6142c(lVar10);
            goto LAB_102651e18;
          }
          lVar13 = *(long *)(*(long *)(lVar10 + 0x38) + uVar7 * 8);
          func_0x000107c61174(lVar13);
          func_0x000107c6142c(lVar10);
        }
        uVar8 = *(ulong *)(unaff_x20 + lVar15);
        func_0x000107c4c3ac();
        func_0x000107c61180();
        uVar7 = uVar8;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(uVar8);
        if (uVar7 == 0) {
          if (lVar13 != 0) {
LAB_102651f14:
            func_0x000107c6142c(lVar10);
            func_0x000107c6142c(uVar1);
            func_0x000107c61170(lVar13);
            return;
          }
LAB_102651da4:
          func_0x000107c6142c(uVar1);
        }
        else {
          func_0x000107c5fadc(uVar14,uVar1);
          uVar8 = uVar7;
          func_0x000107c4e680();
          func_0x000107c61180();
          func_0x000107c615e8(uVar7);
          func_0x000107c61170(uVar14);
          if (lVar13 == 0) {
            if (uVar8 != 0) {
              func_0x000107c6142c(lVar10);
              func_0x000107c6142c(uVar1);
              func_0x000107c61170(uVar8);
              return;
            }
            goto LAB_102651da4;
          }
          if (uVar8 == 0) goto LAB_102651f14;
          func_0x000107c61174(lVar13);
          func_0x000107c61174();
          uVar14 = uVar8;
          FUN_102657368();
          func_0x000107c6142c(uVar1);
          func_0x000107c61170(lVar13);
          func_0x000107c61170(lVar13);
          func_0x000107c61170(uVar8);
          func_0x000107c61170(uVar8);
          if ((uVar14 & 1) != 0) {
            func_0x000107c6142c(lVar10);
            return;
          }
        }
        puVar17 = puVar17 + 2;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    func_0x000107c6142c(lVar10);
  }
  return;
}



/* Entry: 102651f60; end: 10265209f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102651f60(long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    lVar4 = *(long *)(param_3 + _DAT_112eb16c0);
    func_0x000107c6157c(lVar4);
    func_0x000107c61170(param_3);
    func_0x000107c61428(lVar4 + 200,auStack_70,0,0);
    lVar2 = *(long *)(lVar4 + 0xd0);
    lVar1 = *(long *)(lVar4 + 0xe0);
    uVar3 = *(undefined8 *)(lVar4 + 0xe8);
    func_0x000102637df4(*(undefined8 *)(lVar4 + 200),lVar2,*(undefined8 *)(lVar4 + 0xd8),lVar1,uVar3
                       );
    func_0x000107c61574(lVar4);
    if (lVar2 != 0) {
      func_0x000107c6142c(lVar2);
      func_0x000107c61170(uVar3);
      if (lVar1 != 0) {
        lVar2 = lVar1;
        func_0x000107c49b64();
        if ((int)lVar2 != 0) {
          lVar2 = lVar1;
          func_0x000107c439a4();
          func_0x000107c61180();
          lVar4 = lVar2;
          func_0x000107c5fc54();
          func_0x000107c61170(lVar2);
          lVar2 = 0x112eb1030;
          func_0x0001000285a8(0x112eb1030,&UNK_10dac5890);
          func_0x000107c61538();
          func_0x000107c61170(lVar1);
          *param_1 = lVar4;
          param_1[1] = lVar2;
          return;
        }
        func_0x000107c61170(lVar1);
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 1026520a0; end: 10265211b;  */

void FUN_1026520a0(long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [24];
  
  puVar2 = auStack_48;
  func_0x000107c61428(param_3 + 0x10,puVar2,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 == 0) {
    lVar1 = 0;
    puVar2 = (undefined1 *)0x0;
  }
  else {
    lVar1 = param_3;
    FUN_10265211c();
    func_0x000107c61170(param_3);
  }
  *param_1 = lVar1;
  param_1[1] = (long)puVar2;
  return;
}



/* Entry: 10265211c; end: 102652373;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10265211c(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long unaff_x20;
  ulong uVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_68 [24];
  
  lVar7 = *(long *)(unaff_x20 + _DAT_112eb16c0);
  func_0x000107c61428(lVar7 + 200,auStack_68,0,0);
  if (*(long *)(lVar7 + 0xd0) == 0) {
LAB_1026522d8:
    uVar8 = 0;
  }
  else {
    uVar8 = *(ulong *)(lVar7 + 0xe0);
    uVar1 = uVar8;
    func_0x000107c61174();
    if (uVar8 != 0) {
      uVar2 = uVar1;
      func_0x000107c439a4();
      func_0x000107c61180();
      uVar8 = uVar2;
      puVar6 = PTR___sSSN_11034da80;
      func_0x000107c5fc54();
      func_0x000107c61170(uVar2);
      uVar2 = uVar1;
      func_0x000107c49e0c();
      func_0x000107c61180();
      if (uVar2 == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = uVar2;
        func_0x000107c3ebcc();
        func_0x000107c61170(uVar2);
      }
      uVar2 = uVar1;
      func_0x000107c44fdc(uVar1);
      func_0x000107c61180();
      uVar3 = uVar2;
      func_0x000107c5faec();
      func_0x000107c61170(uVar2);
      uVar2 = uVar8;
      FUN_102651af4(uVar8,uVar9,uVar3,puVar6);
      func_0x000107c6142c(puVar6);
      puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if ((uVar2 & 1) != 0) {
        puVar4 = (undefined *)0x0;
        FUN_10264987c(0,1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
        uVar2 = *(ulong *)(puVar4 + 0x10);
        puVar6 = puVar4;
        if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar2) {
          puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
          FUN_10264987c(puVar6,uVar2 + 1,1,puVar4);
        }
        *(ulong *)(puVar6 + 0x10) = uVar2 + 1;
        puVar6[uVar2 + 0x20] = 0;
      }
      uVar2 = uVar1;
      func_0x000107c4a3bc(uVar1);
      uVar9 = uVar8;
      func_0x000102652620(uVar8,uVar2);
      if ((uVar9 & 1) == 0) {
        if (*(long *)(puVar6 + 0x10) == 0) {
          func_0x000107c6142c(puVar6);
          func_0x000107c6142c(uVar8);
          func_0x000107c61170(uVar1);
          goto LAB_1026522d8;
        }
      }
      else {
        puVar4 = puVar6;
        func_0x000107c61558();
        puVar5 = puVar6;
        if (((ulong)puVar4 & 1) == 0) {
          puVar5 = (undefined *)0x0;
          FUN_10264987c(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
        }
        uVar2 = *(ulong *)(puVar5 + 0x10);
        puVar6 = puVar5;
        if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar2) {
          puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
          FUN_10264987c(puVar6,uVar2 + 1,1,puVar5);
        }
        *(ulong *)(puVar6 + 0x10) = uVar2 + 1;
        puVar6[uVar2 + 0x20] = 1;
      }
      FUN_102652868(uVar8);
      func_0x000107c61170(uVar1);
      goto LAB_1026522e0;
    }
  }
  puVar6 = (undefined *)0x0;
LAB_1026522e0:
  auVar10._8_8_ = puVar6;
  auVar10._0_8_ = uVar8;
  return auVar10;
}



/* Entry: 102652374; end: 10265237b;  */

void FUN_102652374(void)

{
  return;
}



/* Entry: 10265237c; end: 1026523ff;  */

void FUN_10265237c(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 auStack_48 [24];
  
  puVar4 = auStack_48;
  func_0x000107c61428(param_2 + 0x10,puVar4,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    lVar3 = 0;
    puVar4 = (undefined1 *)0x0;
  }
  else {
    lVar3 = param_2;
    FUN_102652400();
    func_0x000107c61170(param_2);
  }
  lVar1 = *param_1;
  lVar2 = param_1[1];
  *param_1 = lVar3;
  param_1[1] = (long)puVar4;
  FUN_1026535d0(lVar1,lVar2);
  return;
}



/* Entry: 102652400; end: 1026526e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102652400(void)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x20;
  ulong uVar8;
  undefined1 auVar9 [16];
  undefined1 auStack_58 [24];
  
  lVar7 = *(long *)(unaff_x20 + _DAT_112eb16c0);
  func_0x000107c61428(lVar7 + 200,auStack_58,0,0);
  if (*(long *)(lVar7 + 0xd0) != 0) {
    uVar8 = *(ulong *)(lVar7 + 0xe0);
    uVar2 = uVar8;
    func_0x000107c61174();
    if (uVar8 != 0) {
      uVar8 = uVar2;
      func_0x000107c49b64();
      if ((uVar8 & 1) == 0) {
        uVar3 = *(ulong *)(unaff_x20 + _DAT_112eb16c8);
        func_0x000107c43a80();
        func_0x000107c61180();
        uVar8 = uVar3;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(uVar3);
        if (uVar8 != 0) {
          uVar3 = uVar2;
          func_0x000107c439a4();
          func_0x000107c61180();
          uVar4 = uVar3;
          func_0x000107c5fc54();
          func_0x000107c61170(uVar3);
          if (*(long *)(uVar4 + 0x10) == 0) {
            func_0x000107c6142c(uVar4);
          }
          else {
            uVar6 = *(undefined8 *)(uVar4 + 0x20);
            uVar1 = *(undefined8 *)(uVar4 + 0x28);
            func_0x000107c61434(uVar1);
            func_0x000107c6142c(uVar4);
            func_0x000107c5fadc(uVar6,uVar1);
            func_0x000107c6142c(uVar1);
            uVar3 = uVar8;
            func_0x000107c43aa0();
            func_0x000107c61180();
            func_0x000107c61170(uVar6);
            if (uVar3 != 0) {
              uVar4 = uVar3;
              func_0x000107c3d15c();
              func_0x000107c61180();
              if (uVar4 != 0) {
                uVar5 = uVar4;
                func_0x000107c4cde4();
                func_0x000107c61180();
                func_0x000107c61170(uVar4);
                if (uVar5 != 0) {
                  uVar4 = uVar5;
                  func_0x000107cff030();
                  func_0x000107c61170(uVar5);
                  if ((uVar4 & 1) == 0) {
                    uVar4 = uVar2;
                    func_0x000107c439a4(uVar2);
                    func_0x000107c61180();
                    uVar5 = uVar4;
                    func_0x000107c5fc54();
                    func_0x000107c615e8(uVar8);
                    func_0x000107c61170(uVar3);
                    func_0x000107c61170(uVar2);
                    func_0x000107c61170(uVar4);
                    uVar6 = 0x112eb1030;
                    func_0x0001000285a8(0x112eb1030,&UNK_10dac5890);
                    func_0x000107c61538();
                    goto LAB_102652598;
                  }
                }
              }
              func_0x000107c615e8(uVar8);
              func_0x000107c61170(uVar3);
              goto LAB_102652588;
            }
          }
          func_0x000107c615e8(uVar8);
        }
      }
LAB_102652588:
      func_0x000107c61170(uVar2);
    }
  }
  uVar5 = 0;
  uVar6 = 0;
LAB_102652598:
  auVar9._8_8_ = uVar6;
  auVar9._0_8_ = uVar5;
  return auVar9;
}



/* Entry: 1026526e4; end: 102652867;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1026526e4(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  long unaff_x20;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_78 [24];
  
  lVar5 = _DAT_112eb1690;
  func_0x000107c61428(unaff_x20 + _DAT_112eb1690,auStack_78,0x20,0);
  lVar5 = *(long *)(unaff_x20 + lVar5);
  if (*(long *)(lVar5 + 0x10) == 0) {
LAB_102652838:
    func_0x000107c614a8(auStack_78);
  }
  else {
    func_0x000107c61434(lVar5);
    lVar2 = param_3;
    uVar3 = param_4;
    func_0x000100029284();
    if ((uVar3 & 1) == 0) {
      func_0x000107c6142c(lVar5);
      goto LAB_102652838;
    }
    uVar1 = *(undefined8 *)(*(long *)(lVar5 + 0x38) + lVar2 * 8);
    func_0x000107c61174(uVar1);
    func_0x000107c614a8(auStack_78);
    func_0x000107c6142c(lVar5);
    func_0x000107c3fc68(uVar1);
    uVar6 = param_1;
    uVar7 = param_2;
    func_0x000107c61170(uVar1);
    lVar2 = *(long *)(unaff_x20 + _DAT_112eb16e8);
    func_0x000107c4c3ac();
    func_0x000107c61180();
    lVar5 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar5 != 0) {
      func_0x000107c5fadc(param_3,param_4);
      lVar2 = lVar5;
      func_0x000107c4e680();
      func_0x000107c61180();
      func_0x000107c615e8(lVar5);
      func_0x000107c61170(param_3);
      if (lVar2 != 0) {
        func_0x000107c3fc68(lVar2);
        func_0x000107c61170(lVar2);
        uVar4 = (uint)lVar2;
        func_0x000103b3e24c(param_1,param_2,uVar6,uVar7);
        uVar4 = uVar4 ^ 1;
        goto LAB_102652844;
      }
    }
  }
  uVar4 = 0;
LAB_102652844:
  return uVar4 & 1;
}



/* Entry: 102652868; end: 102652e0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102652868(long param_1,ulong param_2)

{
  undefined *puVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long unaff_x20;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  ulong *puVar18;
  long *plVar19;
  ulong uVar20;
  long lVar21;
  long lStack_a8;
  undefined *puStack_88;
  undefined *apuStack_78 [3];
  
  uVar20 = *(ulong *)(param_1 + 0x10);
  if (uVar20 == 0) {
    puStack_88 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    apuStack_78[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
    param_2 = uVar20;
    func_0x0001011453a4(0,uVar20,0);
    lVar21 = *(long *)(unaff_x20 + _DAT_112eb16e8);
    puVar18 = (ulong *)(param_1 + 0x28);
    do {
      puVar1 = apuStack_78[0];
      uVar14 = puVar18[-1];
      uVar8 = *puVar18;
      func_0x000107c61434(uVar8);
      lVar6 = lVar21;
      func_0x000107c4c3ac();
      func_0x000107c61180();
      lVar4 = lVar6;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar6);
      if (lVar4 == 0) {
        lVar6 = 0;
      }
      else {
        uVar5 = uVar14;
        param_2 = uVar8;
        func_0x000107c5fadc(uVar14,uVar8);
        lVar6 = lVar4;
        func_0x000107c4e680();
        func_0x000107c61180();
        func_0x000107c615e8(lVar4);
        func_0x000107c61170(uVar5);
      }
      uVar13 = *(ulong *)(puVar1 + 0x10);
      uVar5 = uVar13 + 1;
      apuStack_78[0] = puVar1;
      if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar13) {
        param_2 = uVar5;
        func_0x0001011453a4(1 < *(ulong *)(puVar1 + 0x18),uVar5,1);
      }
      puVar18 = puVar18 + 2;
      *(ulong *)(apuStack_78[0] + 0x10) = uVar5;
      *(ulong *)(apuStack_78[0] + uVar13 * 0x18 + 0x20) = uVar14;
      *(ulong *)(apuStack_78[0] + uVar13 * 0x18 + 0x28) = uVar8;
      *(long *)(apuStack_78[0] + uVar13 * 0x18 + 0x30) = lVar6;
      uVar20 = uVar20 - 1;
      puStack_88 = apuStack_78[0];
    } while (uVar20 != 0);
  }
  lVar6 = *(long *)(unaff_x20 + _DAT_112eb16e8);
  func_0x000107c4c3ac();
  func_0x000107c61180();
  lVar21 = lVar6;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  if (lVar21 == 0) {
    lStack_a8 = 0;
  }
  else {
    lVar6 = *(long *)(*(long *)(unaff_x20 + _DAT_112eb16f8) + _DAT_113083f78);
    func_0x000107c5d984();
    func_0x000107c61180();
    if (lVar6 == 0) {
      func_0x000107c5faec();
      uVar20 = param_2;
      func_0x000107c5fadc();
      func_0x000107c6142c(param_2);
      param_2 = uVar20;
    }
    lStack_a8 = lVar21;
    func_0x000107c4e680();
    func_0x000107c61180();
    func_0x000107c615e8(lVar21);
    func_0x000107c61170(lVar6);
  }
  func_0x00010006c804();
  lVar21 = _DAT_112eb1690;
  uVar20 = *(ulong *)(puStack_88 + 0x10);
  if (uVar20 != 0) {
    uVar14 = 0;
    plVar19 = (long *)(puStack_88 + 0x30);
    do {
      if (*(ulong *)(puStack_88 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102652df4);
        (*pcVar2)();
      }
      uVar8 = plVar19[-2];
      uVar5 = plVar19[-1];
      lVar6 = *plVar19;
      func_0x000107c61428(unaff_x20 + lVar21,apuStack_78,0x21,0);
      if (lVar6 == 0) {
        uVar15 = *(undefined8 *)(unaff_x20 + lVar21);
        func_0x000107c61438(uVar5,2);
        func_0x000107c61434(uVar15);
        uVar13 = uVar5;
        func_0x000100029284();
        param_2 = uVar13;
        func_0x000107c6142c(uVar15);
        if ((uVar13 & 1) == 0) {
          func_0x000107c6142c(uVar5);
        }
        else {
          iVar3 = (int)*(undefined8 *)(unaff_x20 + lVar21);
          func_0x000107c61558();
          uVar13 = *(ulong *)(unaff_x20 + lVar21);
          *(undefined8 *)(unaff_x20 + lVar21) = 0x8000000000000000;
          if (iVar3 == 0) {
            func_0x0001011361f4();
          }
          func_0x000107c6142c(*(undefined8 *)(*(long *)(uVar13 + 0x30) + uVar8 * 0x10 + 8));
          func_0x000107c61170(*(undefined8 *)(*(long *)(uVar13 + 0x38) + uVar8 * 8));
          param_2 = uVar13;
          func_0x00010111ca90(uVar8,uVar13);
          func_0x000107c6142c(uVar5);
          *(ulong *)(unaff_x20 + lVar21) = uVar13;
        }
      }
      else {
        lVar7 = lVar6;
        func_0x000107c61174();
        func_0x000107c61434(uVar5);
        func_0x000107c61174();
        uVar16 = *(ulong *)(unaff_x20 + lVar21);
        func_0x000107c61434(uVar5);
        func_0x000107c61558();
        lVar17 = *(long *)(unaff_x20 + lVar21);
        *(undefined8 *)(unaff_x20 + lVar21) = 0x8000000000000000;
        uVar13 = uVar8;
        uVar10 = uVar5;
        func_0x000100029284();
        uVar12 = (ulong)~(uint)uVar10 & 1;
        lVar4 = *(long *)(lVar17 + 0x10) + uVar12;
        if (SCARRY8(*(long *)(lVar17 + 0x10),uVar12)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102652df8);
          (*pcVar2)();
        }
        if (*(long *)(lVar17 + 0x18) < lVar4) {
          func_0x0001011364e4(lVar4,uVar16);
          uVar13 = uVar8;
          param_2 = uVar5;
          func_0x000100029284();
          if (((uint)uVar10 & 1) != ((uint)param_2 & 1)) {
            func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102652e0c);
            (*pcVar2)();
          }
LAB_102652c60:
          if ((uVar10 & 1) != 0) goto LAB_102652aa8;
LAB_102652c68:
          lVar4 = lVar17 + (uVar13 >> 6) * 8;
          *(ulong *)(lVar4 + 0x40) = *(ulong *)(lVar4 + 0x40) | 1L << (uVar13 & 0x3f);
          puVar18 = (ulong *)(*(long *)(lVar17 + 0x30) + uVar13 * 0x10);
          *puVar18 = uVar8;
          puVar18[1] = uVar5;
          *(long *)(*(long *)(lVar17 + 0x38) + uVar13 * 8) = lVar7;
          if (SCARRY8(*(long *)(lVar17 + 0x10),1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102652dfc);
            (*pcVar2)();
          }
          *(long *)(lVar17 + 0x10) = *(long *)(lVar17 + 0x10) + 1;
        }
        else {
          param_2 = uVar10;
          if ((uVar16 & 1) != 0) goto LAB_102652c60;
          func_0x0001011361f4();
          if ((uVar10 & 1) == 0) goto LAB_102652c68;
LAB_102652aa8:
          uVar15 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar13 * 8);
          *(long *)(*(long *)(lVar17 + 0x38) + uVar13 * 8) = lVar7;
          func_0x000107c6142c(uVar5);
          func_0x000107c61170(uVar15);
        }
        *(long *)(unaff_x20 + lVar21) = lVar17;
      }
      uVar14 = uVar14 + 1;
      func_0x000107c614a8(apuStack_78);
      func_0x000107c6142c(uVar5);
      func_0x000107c61170(lVar6);
      plVar19 = plVar19 + 3;
    } while (uVar20 != uVar14);
  }
  func_0x000107c6142c();
  uVar9 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112eb16f8) + _DAT_113083f78);
  func_0x000107c5d984(uVar9);
  func_0x000107c61180();
  uVar15 = uVar9;
  func_0x000107c5faec();
  func_0x000107c61170(uVar9);
  func_0x000107c61428(unaff_x20 + lVar21,apuStack_78,0x21,0);
  if (lStack_a8 == 0) {
    func_0x00010111c844(uVar15,param_2);
    func_0x000107c6142c(param_2);
    func_0x000107c61170(uVar15);
    lStack_a8 = 0;
  }
  else {
    func_0x000107c61174();
    uVar9 = *(undefined8 *)(unaff_x20 + lVar21);
    func_0x000107c61558(uVar9);
    uVar11 = *(undefined8 *)(unaff_x20 + lVar21);
    *(undefined8 *)(unaff_x20 + lVar21) = 0x8000000000000000;
    func_0x00010111c918(lStack_a8,uVar15,param_2,uVar9);
    func_0x000107c6142c(param_2);
    *(undefined8 *)(unaff_x20 + lVar21) = uVar11;
  }
  func_0x000107c614a8(apuStack_78);
  func_0x000100070bfc();
  func_0x000107c61170(lStack_a8);
  return;
}



/* Entry: 102652e0c; end: 102652e6b; -[_TtC27MapFocusCardsImplementation24MapFocusCardsDataUpdater init] */

void FUN_102652e0c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapFocusCardsImplementation.MapFocusCardsDataUpdater",0x34,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102652e38);
  (*pcVar1)();
}



/* Entry: 102652e6c; end: 102652f93; -[_TtC27MapFocusCardsImplementation24MapFocusCardsDataUpdater .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102652e88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102652f08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102652f38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102652f0c) */
/* WARNING: Removing unreachable block (ram,0x000102652e8c) */
/* WARNING: Removing unreachable block (ram,0x000102652f3c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102652e6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112eb16c0));
  return;
}



/* Entry: 102652f94; end: 102652fa7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102652f94(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(*(undefined8 *)(*unaff_x20 + _DAT_112eb16a8));
  return;
}



/* Entry: 102652fa8; end: 102653017;  */

void FUN_102652fa8(void)

{
  FUN_1026517d0();
  return;
}



/* Entry: 102653018; end: 102653113;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102653018(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = *unaff_x20 + _DAT_112eb16b0;
  func_0x000107c61428(lVar1,auStack_48,1,0);
  *(undefined8 *)(lVar1 + 8) = param_2;
  func_0x000107c61604(lVar1,param_1);
  func_0x000107c615e8(param_1);
  return;
}



/* Entry: 102653114; end: 102653117;  */

void FUN_102653114(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *param_1;
  uVar3 = *(undefined8 *)(lVar2 + 0x18);
  lVar1 = *(long *)(lVar2 + 0x28) + *(long *)(lVar2 + 0x30);
  *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(lVar2 + 0x20);
  func_0x000107c61604(lVar1,uVar3);
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



/* Entry: 102653118; end: 10265318b;  */

void FUN_102653118(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *param_1;
  uVar3 = *(undefined8 *)(lVar2 + 0x18);
  lVar1 = *(long *)(lVar2 + 0x28) + *(long *)(lVar2 + 0x30);
  *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(lVar2 + 0x20);
  func_0x000107c61604(lVar1,uVar3);
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



/* Entry: 10265318c; end: 1026532b7;  */

void FUN_10265318c(undefined8 param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  puVar3 = &UNK_11052e090;
  func_0x000107c613fc(&UNK_11052e090,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = unaff_x20;
  puVar4 = &UNK_11052e0b8;
  func_0x000107c613fc(&UNK_11052e0b8,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_1026533e0;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  pcStack_50 = FUN_1026533e8;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_10006eb60;
  puStack_58 = &UNK_11052e0d0;
  puStack_48 = puVar4;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c61174();
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar1);
  func_0x000107c4c6e4(param_1);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puVar3);
  puVar3 = puVar4;
  func_0x000107c61544(puVar4,"",0x6e,0x11e,0x38,1);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar3 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1026532b8);
  (*pcVar2)();
}



/* Entry: 1026532b8; end: 10265338f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026532b8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  lVar3 = *(long *)(param_1 + _DAT_112eb16c0);
  func_0x000107c61428(lVar3 + 200,auStack_48,0,0);
  if (*(long *)(lVar3 + 0xd0) != 0) {
    lVar4 = *(long *)(lVar3 + 0xe0);
    lVar3 = lVar4;
    func_0x000107c61174();
    if (lVar4 != 0) {
      lVar4 = lVar3;
      func_0x000107c439a4();
      func_0x000107c61180();
      lVar1 = lVar4;
      func_0x000107c5fc54();
      func_0x000107c61170(lVar4);
      uVar2 = 0x112eb1030;
      func_0x0001000285a8(0x112eb1030,&UNK_10dac5890);
      func_0x000107c61538();
      lStack_58 = lVar1;
      uStack_50 = uVar2;
      func_0x0001002a64a8(&lStack_58);
      func_0x000107c6142c(lVar1);
      func_0x000107c61170(lVar3);
    }
  }
  return;
}



/* Entry: 102653390; end: 1026533df; -[_TtC27MapFocusCardsImplementation24MapFocusCardsDataUpdater didUpdateSummaryInfo:] */

/* WARNING: Possible PIC construction at 0x0001026533c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026533cc) */

void FUN_102653390(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10265318c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1026533e0; end: 1026533e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026533e0(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long lStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  lVar3 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_112eb16c0);
  func_0x000107c61428(lVar3 + 200,auStack_48,0,0);
  if (*(long *)(lVar3 + 0xd0) != 0) {
    lVar4 = *(long *)(lVar3 + 0xe0);
    lVar3 = lVar4;
    func_0x000107c61174();
    if (lVar4 != 0) {
      lVar4 = lVar3;
      func_0x000107c439a4();
      func_0x000107c61180();
      lVar1 = lVar4;
      func_0x000107c5fc54();
      func_0x000107c61170(lVar4);
      uVar2 = 0x112eb1030;
      func_0x0001000285a8(0x112eb1030,&UNK_10dac5890);
      func_0x000107c61538();
      lStack_58 = lVar1;
      uStack_50 = uVar2;
      func_0x0001002a64a8(&lStack_58);
      func_0x000107c6142c(lVar1);
      func_0x000107c61170(lVar3);
    }
  }
  return;
}



/* Entry: 1026533e8; end: 102653407;  */

void FUN_1026533e8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102653408; end: 102653433;  */

void FUN_102653408(long param_1,long param_2)

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



/* Entry: 102653434; end: 102653453;  */

void FUN_102653434(void)

{
  func_0x000107c61168(&PTR_PTR_1128558d8);
  return;
}



/* Entry: 102653454; end: 102653477;  */

undefined8 FUN_102653454(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102653478; end: 10265356f;  */

undefined * FUN_102653478(long param_1,undefined8 param_2,undefined8 param_3)

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
    func_0x0001000285a8(param_2,param_3);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c61174();
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10265356c);
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
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102653570);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 102653570; end: 1026535c7;  */

void FUN_102653570(undefined8 *param_1)

{
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  
  *param_1 = 0;
  param_1[1] = 0;
  puStack_30 = param_1;
  func_0x000103a2e590(FUN_102652374,0,0x102652378,0,FUN_1026535c8,auStack_40);
  return;
}



/* Entry: 1026535c8; end: 1026535cf;  */

void FUN_1026535c8(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined1 *puVar5;
  undefined1 auStack_48 [24];
  
  plVar1 = *(long **)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  puVar5 = auStack_48;
  func_0x000107c61428(lVar3 + 0x10,puVar5,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 == 0) {
    lVar4 = 0;
    puVar5 = (undefined1 *)0x0;
  }
  else {
    lVar4 = lVar3;
    FUN_102652400();
    func_0x000107c61170(lVar3);
  }
  lVar3 = *plVar1;
  lVar2 = plVar1[1];
  *plVar1 = lVar4;
  plVar1[1] = (long)puVar5;
  FUN_1026535d0(lVar3,lVar2);
  return;
}



/* Entry: 1026535d0; end: 1026535fb;  */

/* WARNING: Possible PIC construction at 0x0001026535e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026535e8) */

void FUN_1026535d0(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
    return;
  }
  return;
}



/* Entry: 1026535fc; end: 102653613;  */

void FUN_1026535fc(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 *puVar3;
  undefined1 auStack_48 [24];
  
  puVar3 = auStack_48;
  func_0x000107c61428(unaff_x20 + 0x10,puVar3,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    lVar2 = 0;
    puVar3 = (undefined1 *)0x0;
  }
  else {
    lVar2 = lVar1;
    FUN_10265211c();
    func_0x000107c61170(lVar1);
  }
  *param_1 = lVar2;
  param_1[1] = (long)puVar3;
  return;
}



/* Entry: 102653614; end: 102653837;  */

void FUN_102653614(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb17f8,&UNK_10dac6150);
  puVar1 = &UNK_11052e190;
  func_0x000107c613fc(&UNK_11052e190,0x48,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x0001000823a8(FUN_102653838,puVar1);
  return;
}



/* Entry: 102653838; end: 10265384b;  */

void FUN_102653838(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40));
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  FUN_102655808();
  lVar2 = lVar1;
  func_0x000107c613fc();
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000101136fe0();
  *(undefined **)(lVar2 + 0x48) = puVar3;
  *(undefined8 *)(lVar2 + 0x50) = 0;
  *(undefined8 *)(lVar2 + 0x58) = 0;
  *(undefined8 *)(lVar2 + 0x60) = 0;
  *(undefined1 *)(lVar2 + 0x68) = 2;
  *(undefined8 *)(lVar2 + 0x78) = 0;
  *(undefined8 *)(lVar2 + 0x80) = 0;
  *(undefined8 *)(lVar2 + 0x70) = 0;
  *(undefined8 *)(lVar2 + 0x90) = 0;
  *(undefined8 *)(lVar2 + 0x88) = 1;
  *(undefined8 *)(lVar2 + 0xa0) = 0;
  func_0x000107c61614(lVar2 + 0x98,0);
  *(undefined8 *)(lVar2 + 0x30) = uStack_78;
  *(undefined8 *)(lVar2 + 0x38) = uStack_68;
  *(undefined8 *)(lVar2 + 0x20) = uStack_88;
  *(undefined8 *)(lVar2 + 0x28) = uStack_70;
  *(undefined8 *)(lVar2 + 0x40) = uStack_90;
  *(undefined8 *)(lVar2 + 0x10) = uStack_80;
  *(undefined8 *)(lVar2 + 0x18) = uStack_98;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_11052e220;
  *param_1 = lVar2;
  return;
}



/* Entry: 10265384c; end: 1026538ff;  */

long FUN_10265384c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000101136fe0();
  *(undefined **)(unaff_x20 + 0x48) = puVar1;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined1 *)(unaff_x20 + 0x68) = 2;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  *(undefined8 *)(unaff_x20 + 0x88) = 1;
  *(undefined8 *)(unaff_x20 + 0xa0) = 0;
  func_0x000107c61614(unaff_x20 + 0x98,0);
  *(undefined8 *)(unaff_x20 + 0x30) = param_3;
  *(undefined8 *)(unaff_x20 + 0x38) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_5;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  *(undefined8 *)(unaff_x20 + 0x40) = param_6;
  *(undefined8 *)(unaff_x20 + 0x10) = param_4;
  *(undefined8 *)(unaff_x20 + 0x18) = param_7;
  return unaff_x20;
}



/* Entry: 102653900; end: 10265395f;  */

uint FUN_102653900(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long unaff_x20;
  
  uVar4 = (uint)*(byte *)(unaff_x20 + 0x68);
  if (*(byte *)(unaff_x20 + 0x68) == 2) {
    lVar2 = *(long *)(unaff_x20 + 0x38);
    func_0x000107c3fa04();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102653960);
      (*pcVar1)();
    }
    lVar3 = lVar2;
    func_0x000109021b0c();
    uVar4 = (uint)lVar3;
    func_0x000107c615e8(lVar2);
    *(char *)(unaff_x20 + 0x68) = (char)lVar3;
  }
  return uVar4 & 1;
}



/* Entry: 102653960; end: 102653a43;  */

void FUN_102653960(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [48];
  
  func_0x000107c61428(unaff_x20 + 0x70,auStack_68,0,0);
  FUN_102655828(unaff_x20 + 0x70,&uStack_90,0x112eb1800,&UNK_10dac6160);
  if (lStack_78 == 1) {
    FUN_102655794(&uStack_90,0x112eb1800,&UNK_10dac6160);
    FUN_102653a44(param_1);
    FUN_102655828(param_1,auStack_50,0x112d5ece0,&UNK_10d925bf0);
    func_0x000107c61428(unaff_x20 + 0x70,&uStack_90,0x21,0);
    func_0x000102655870(auStack_50,unaff_x20 + 0x70);
    func_0x000107c614a8(&uStack_90);
  }
  else {
    param_1[1] = uStack_88;
    *param_1 = uStack_90;
    param_1[3] = lStack_78;
    param_1[2] = uStack_80;
    param_1[4] = uStack_70;
  }
  return;
}



/* Entry: 102653a44; end: 102653b6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102653a44(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  
  plVar1 = *(long **)(*(long *)(param_2 + 0x20) + _DAT_112fecfb0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (plVar1 != (long *)0x0) {
    plVar2 = plVar1;
    func_0x000107c51a88();
    func_0x000107c61180();
    func_0x000107c61170(plVar1);
    lVar4 = *(long *)(*(long *)(param_2 + 0x28) + _DAT_112eb8a08);
    if (lVar4 != 0) {
      lVar3 = 0;
      FUN_102660d54();
      func_0x000107c613fc();
      func_0x000107c615f4(lVar4,2);
      func_0x000107c61174();
      plVar1 = plVar2;
      func_0x00010265f438();
      pcVar5 = *(code **)(*plVar1 + 0x90);
      func_0x000107c615f0(param_2);
      (*pcVar5)();
      param_1[3] = lVar3;
      param_1[4] = (long)&PTR_DAT_11052efc0;
      func_0x000107c615e8(lVar4);
      func_0x000107c61170(plVar2);
      *param_1 = (long)plVar1;
      return;
    }
    func_0x000107c61170(plVar2);
  }
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 102653b6c; end: 102653e57;  */

/* WARNING: Possible PIC construction at 0x000102653bc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102653be4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102653c0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102653c3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102653ca8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102653cc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102653c40) */
/* WARNING: Removing unreachable block (ram,0x000102653c10) */
/* WARNING: Removing unreachable block (ram,0x000102653c14) */
/* WARNING: Removing unreachable block (ram,0x000102653cf8) */
/* WARNING: Removing unreachable block (ram,0x000102653c28) */
/* WARNING: Removing unreachable block (ram,0x000102653be8) */
/* WARNING: Removing unreachable block (ram,0x000102653bcc) */
/* WARNING: Removing unreachable block (ram,0x000102653cdc) */
/* WARNING: Removing unreachable block (ram,0x000102653bd0) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */
/* WARNING: Removing unreachable block (ram,0x000102653cac) */

void FUN_102653b6c(long param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
    func_0x000107c61434(*(undefined8 *)(param_1 + 0x28));
    func_0x000107c4c3ac(uVar1);
    func_0x000107c61180();
    func_0x000107c5c734();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 102653e58; end: 1026541df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102653e58(long param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  ulong uVar11;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  long lStack_98;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  long lStack_68;
  
  FUN_102653960(auStack_b0);
  if (lStack_98 == 0) {
    FUN_102655794(auStack_b0,0x112d5ece0,&UNK_10d925bf0);
    return;
  }
  func_0x00010111d660(auStack_b0,auStack_88);
  uVar11 = *(ulong *)(param_1 + _DAT_112fa97b8);
  if (uVar11 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar11 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar11 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar11) {
      uVar2 = uVar11;
    }
    func_0x000107c60480();
  }
  if (uVar2 != 0) {
    if ((uVar11 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar11 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1026541e0);
        (*pcVar1)();
      }
      lVar3 = *(long *)(uVar11 + 0x20);
      func_0x000107c61174();
    }
    else {
      lVar3 = 0;
      func_0x00010111c37c(0,uVar11);
    }
    lVar4 = *(long *)(lVar3 + _DAT_112fa9758);
    func_0x000107c61174();
    func_0x000107c61170(lVar3);
    uVar7 = *(undefined8 *)(lVar4 + _DAT_112fa98b0);
    uVar9 = ((undefined8 *)(lVar4 + _DAT_112fa98b0))[1];
    func_0x000107c61434(uVar9);
    func_0x000107c61170(lVar4);
    if (*(long *)(param_2 + 0x10) != 0) {
      uVar5 = *(undefined8 *)(param_2 + 0x20);
      uVar8 = *(undefined8 *)(param_2 + 0x28);
      uVar2 = *(ulong *)(unaff_x20 + 0x10);
      func_0x000107c61434(uVar8);
      func_0x000107c4c3ac();
      func_0x000107c61180();
      uVar11 = uVar2;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(uVar2);
      if (uVar11 == 0) {
        func_0x000107c6142c(uVar8);
      }
      else {
        uVar10 = uVar8;
        func_0x000107c5fadc(uVar5,uVar8);
        func_0x000107c6142c(uVar8);
        uVar2 = uVar11;
        func_0x000107c4e67c();
        func_0x000107c61180();
        func_0x000107c615e8(uVar11);
        func_0x000107c61170(uVar5);
        if (uVar2 != 0) {
          uVar11 = uVar2;
          func_0x000107c3fc6c();
          func_0x000107c61180();
          if (uVar11 == 0) {
            func_0x000107c61170(uVar2);
          }
          else {
            uVar6 = uVar11;
            func_0x000107c5faec();
            func_0x000107c61170(uVar11);
            uVar11 = uVar2;
            func_0x0001026553dc(uVar2,uVar6,uVar10);
            if ((uVar11 & 1) != 0) {
              FUN_102660d54(0);
              uVar5 = uVar9;
              func_0x00010265f298(uVar7,uVar9);
              func_0x000107c6142c(uVar9);
              uVar11 = param_2;
              func_0x000107c61434();
              func_0x000100403a6c();
              func_0x000107c6142c();
              FUN_102653900();
              if ((param_2 & 1) == 0) {
                uVar8 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_113083f78);
                func_0x000107c5d984(uVar8);
                func_0x000107c61180();
                uVar9 = uVar8;
                func_0x000107c5faec();
                func_0x000107c61170(uVar8);
                func_0x000100403b00(auStack_b0,uVar9,uVar5);
                func_0x000107c6142c(uStack_a8);
              }
              func_0x0001000a8868(auStack_88,uStack_70);
              (**(code **)(lStack_68 + 0x28))(uVar7,uVar6,uVar10,uVar11,uStack_70,lStack_68);
              func_0x000107c6142c(uVar7);
              func_0x000107c61428(unaff_x20 + 0x48,auStack_b0,0x21,0);
              FUN_102654bf0(uVar6,uVar10,0x112d5f6c8,&UNK_10dac6110);
              func_0x000107c614a8(auStack_b0);
              func_0x000107c6142c(uVar11);
              func_0x000107c61170(uVar2);
              func_0x000107c6142c(uVar10);
              func_0x000107c61170(uVar6);
              goto LAB_102654174;
            }
            func_0x000107c61170(uVar2);
            func_0x000107c6142c(uVar9);
            uVar9 = uVar10;
          }
        }
      }
    }
    func_0x000107c6142c(uVar9);
  }
LAB_102654174:
  func_0x0001000834e4(auStack_88);
  return;
}



/* Entry: 1026541e0; end: 102654697;  */

/* WARNING: Possible PIC construction at 0x00010265427c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010265429c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026542cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102654308: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102654320: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102654358: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102654434: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102654444: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010265467c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010265468c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102654604: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102654614: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026544d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026544e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026544a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026544e4) */
/* WARNING: Removing unreachable block (ram,0x0001026544d4) */
/* WARNING: Removing unreachable block (ram,0x000102654618) */
/* WARNING: Removing unreachable block (ram,0x000102654608) */
/* WARNING: Removing unreachable block (ram,0x000102654690) */
/* WARNING: Removing unreachable block (ram,0x000102654624) */
/* WARNING: Removing unreachable block (ram,0x000102654680) */
/* WARNING: Removing unreachable block (ram,0x000102654448) */
/* WARNING: Removing unreachable block (ram,0x000102654438) */
/* WARNING: Removing unreachable block (ram,0x00010265435c) */
/* WARNING: Removing unreachable block (ram,0x0001026544ec) */
/* WARNING: Removing unreachable block (ram,0x000102654370) */
/* WARNING: Removing unreachable block (ram,0x00010265450c) */
/* WARNING: Removing unreachable block (ram,0x000102654510) */
/* WARNING: Removing unreachable block (ram,0x00010265441c) */
/* WARNING: Removing unreachable block (ram,0x000102654428) */
/* WARNING: Removing unreachable block (ram,0x00010265464c) */
/* WARNING: Removing unreachable block (ram,0x000102654514) */
/* WARNING: Removing unreachable block (ram,0x000102654678) */
/* WARNING: Removing unreachable block (ram,0x000102654430) */
/* WARNING: Removing unreachable block (ram,0x000102654324) */
/* WARNING: Removing unreachable block (ram,0x000102654330) */
/* WARNING: Removing unreachable block (ram,0x0001026544cc) */
/* WARNING: Removing unreachable block (ram,0x000102654344) */
/* WARNING: Removing unreachable block (ram,0x00010265430c) */
/* WARNING: Removing unreachable block (ram,0x0001026542d0) */
/* WARNING: Removing unreachable block (ram,0x000102654494) */
/* WARNING: Removing unreachable block (ram,0x0001026542d4) */
/* WARNING: Removing unreachable block (ram,0x0001026542a0) */
/* WARNING: Removing unreachable block (ram,0x0001026542a4) */
/* WARNING: Removing unreachable block (ram,0x000102654280) */
/* WARNING: Removing unreachable block (ram,0x000102654464) */
/* WARNING: Removing unreachable block (ram,0x000102654284) */
/* WARNING: Removing unreachable block (ram,0x0001026544a4) */
/* WARNING: Removing unreachable block (ram,0x0001026544a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026541e0(ulong param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  FUN_102653900();
  if ((param_1 & 1) != 0) {
    lVar1 = *(long *)(*(long *)(unaff_x20 + 0x30) + _DAT_112fa96f0);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      if (*(long *)(unaff_x20 + 0x60) != 0) {
        uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
        func_0x000107c61174(*(long *)(unaff_x20 + 0x60));
        func_0x000107c4b8d8(uVar2);
        func_0x000107c61180();
        func_0x000107c5c734();
        func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(uVar2);
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
      return;
    }
  }
  return;
}



/* Entry: 102654698; end: 102654813;  */

void FUN_102654698(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 != 0) {
    if (param_1 == 0) {
      func_0x000107c61574(param_3);
    }
    else {
      func_0x000107c61174(param_1);
      func_0x000107c439a4(param_4);
      func_0x000107c61180();
      uVar1 = param_4;
      func_0x000107c5fc54();
      func_0x000107c61170(param_4);
      FUN_102653b6c(uVar1,param_1);
      lVar2 = *(long *)(param_3 + 0x60);
      if (lVar2 != 0) {
        func_0x000107c61174();
        func_0x000102653d14();
        func_0x000107c61170(lVar2);
      }
      func_0x000107c61574(param_3);
      func_0x000107c61170(param_1);
      func_0x000107c6142c(uVar1);
    }
  }
  return;
}



/* Entry: 102654814; end: 1026548b7;  */

void FUN_102654814(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  FUN_102655794(unaff_x20 + 0x70,0x112eb1800,&UNK_10dac6160);
  func_0x0001026557d4(unaff_x20 + 0x98);
  return;
}



/* Entry: 1026548b8; end: 1026548fb;  */

void FUN_1026548b8(void)

{
  long lVar1;
  long *unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *unaff_x20;
  func_0x000107c61428(lVar1 + 0x98,auStack_38,0,0);
  func_0x000107c61618(lVar1 + 0x98);
  return;
}



/* Entry: 1026548fc; end: 1026549df;  */

void FUN_1026548fc(undefined8 param_1,undefined8 param_2)

{
  long *unaff_x20;
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *unaff_x20;
  func_0x000107c61428(lVar1 + 0x98,auStack_48,1,0);
  *(undefined8 *)(lVar1 + 0xa0) = param_2;
  func_0x000107c61604(lVar1 + 0x98,param_1);
  func_0x000107c615e8(param_1);
  return;
}



/* Entry: 1026549e0; end: 1026549e3;  */

void FUN_1026549e0(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *param_1;
  uVar3 = *(undefined8 *)(lVar2 + 0x18);
  lVar1 = *(long *)(lVar2 + 0x28);
  *(undefined8 *)(lVar1 + 0xa0) = *(undefined8 *)(lVar2 + 0x20);
  func_0x000107c61604(lVar1 + 0x98,uVar3);
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



/* Entry: 1026549e4; end: 102654a53;  */

void FUN_1026549e4(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *param_1;
  uVar3 = *(undefined8 *)(lVar2 + 0x18);
  lVar1 = *(long *)(lVar2 + 0x28);
  *(undefined8 *)(lVar1 + 0xa0) = *(undefined8 *)(lVar2 + 0x20);
  func_0x000107c61604(lVar1 + 0x98,uVar3);
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



/* Entry: 102654a54; end: 102654af7;  */

void FUN_102654a54(void)

{
  long *unaff_x20;
  long lVar1;
  
  lVar1 = *unaff_x20;
  FUN_102653b6c();
  lVar1 = *(long *)(lVar1 + 0x60);
  if (lVar1 != 0) {
    func_0x000107c61174();
    func_0x000102653d14();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 102654af8; end: 102654bef;  */

void FUN_102654af8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x98,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x98;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar3 = *(long *)(unaff_x20 + 0xa0);
    lVar2 = lVar1;
    func_0x000107c614f0();
    (**(code **)(lVar3 + 8))(param_1,param_2,lVar2,lVar3);
    func_0x000107c615e8(lVar1);
  }
  return;
}


