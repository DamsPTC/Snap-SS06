/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10436257c; end: 1043625bf;  */

void FUN_10436257c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000113070c98 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x00010434ba40(0xff);
  puVar2 = &UNK_10dcee348;
  _swift_getWitnessTable(&UNK_10dcee348,uVar1);
  puRam0000000113070c98 = puVar2;
  return;
}



/* Entry: 1043625c0; end: 1043625d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043625c0(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + _DAT_113070b08);
    if (lVar3 != 0) {
      _objc_retain();
      _objc_release(lVar2);
      puVar1 = PTR_PTR_1126adc78;
      _objc_allocWithZone(PTR_PTR_1126adc78);
      func_0x00010c061c80();
      lVar2 = *(long *)(lVar3 + _DAT_113070ca8);
      if (lVar2 != 0) {
        _objc_retain();
        func_0x00010c2226c0();
        _objc_release(lVar2);
      }
      _objc_release(puVar1);
    }
    _objc_release();
  }
  return;
}



/* Entry: 1043625d4; end: 104362803;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1043625d4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  
  puVar6 = &stack0xffffffffffffffa0;
  _swift_getObjectType();
  *(undefined8 *)(unaff_x20 + _DAT_113070ca8) = 0;
  lVar2 = _DAT_113070cc0;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_allocWithZone(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x00010bff91e0();
  puVar4 = PTR_PTR_1126ae820;
  _objc_allocWithZone();
  func_0x00010c060400();
  _objc_release(puVar3);
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  *(undefined8 *)(unaff_x20 + _DAT_113070cc8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113070cd0) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113070ce0);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[8] = 0;
  lVar2 = unaff_x20 + _DAT_113070ce8;
  *(undefined8 *)(lVar2 + 8) = 0;
  _swift_unknownObjectWeakInit(lVar2,0);
  *(undefined8 *)(unaff_x20 + _DAT_113070cb0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113070cb8) = param_2;
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_allocWithZone();
  _swift_unknownObjectRetain(param_1);
  _swift_unknownObjectRetain(param_2);
  func_0x00010bfee200();
  *(undefined **)(unaff_x20 + _DAT_113070ca0) = puVar3;
  _objc_retain();
  puVar4 = puVar3;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf49420(0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  *(undefined **)(unaff_x20 + _DAT_113070cd8) = puVar5;
  _objc_msgSendSuper2(&stack0xffffffffffffffa0,PTR_s_init_1125d9248);
  uVar7 = *(undefined8 *)(puVar6 + _DAT_113070cd8);
  _objc_retain();
  func_0x00010c162480(uVar7);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _objc_opt_self(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x00010bf3ae40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar3);
  _objc_release(puVar4);
  uVar7 = 0xd00000000000001a;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x800000010f1f7ba0);
  func_0x00010c160fc0(puVar3);
  _objc_release(puVar6);
  _swift_unknownObjectRelease(param_1);
  _swift_unknownObjectRelease(param_2);
  _objc_release(puVar3);
  _objc_release(uVar7);
  return puVar6;
}



/* Entry: 104362804; end: 1043628d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104362804(void)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = unaff_x20;
  _swift_getObjectType();
  func_0x0001007d6c6c(1,0xd000000000000028,0x800000010f1f7b10,lVar2,&PTR_DAT_11075e940);
  FUN_1043628d4();
  lVar2 = unaff_x20 + _DAT_113070ce8;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar2 != 0) {
    FUN_104362114(*(undefined8 *)(unaff_x20 + _DAT_113070ca0));
    _swift_unknownObjectRelease(lVar2);
  }
  puVar1 = PTR_PTR_1126adc78;
  _objc_allocWithZone(PTR_PTR_1126adc78);
  func_0x00010c061c80();
  lVar2 = *(long *)(unaff_x20 + _DAT_113070ca8);
  if (lVar2 != 0) {
    _objc_retain();
    func_0x00010c2226c0();
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1043628d4; end: 1043630ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043628d4(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  undefined8 uVar17;
  long unaff_x20;
  undefined8 uVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long lVar22;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  lVar3 = unaff_x20;
  _swift_getObjectType();
  lVar2 = _DAT_113070ca8;
  if (*(long *)(unaff_x20 + _DAT_113070ca8) != 0) {
    return;
  }
  puVar4 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  _objc_opt_self();
  puVar5 = puVar4;
  func_0x00010bf68fa0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  _objc_opt_self();
  puVar7 = puVar6;
  func_0x00010c0b6ba0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = &UNK_11075e998;
  _swift_allocObject(&UNK_11075e998,0x18,7);
  _swift_unknownObjectWeakInit(puVar8 + 0x10);
  uStack_80 = 0x104363d4c;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100ef35e4;
  puStack_88 = &UNK_11075e9b0;
  ppuVar9 = &puStack_a0;
  puStack_78 = puVar8;
  __Block_copy(ppuVar9);
  _swift_release(puStack_78);
  puVar8 = puVar5;
  func_0x00010befa280();
  _objc_retainAutoreleasedReturnValue();
  __Block_release(ppuVar9);
  _objc_release(puVar5);
  _objc_release(puVar7);
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_113070cc8);
  *(undefined **)(unaff_x20 + _DAT_113070cc8) = puVar8;
  _swift_unknownObjectRelease(uVar10);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113070ce0);
  lVar19 = puVar1[1];
  if (lVar19 == 0) {
    uVar20 = 0;
    uVar18 = 0;
    uVar21 = 0;
    uVar17 = 0xe600000000000000;
    uVar10 = 0x4152454d4143;
    lVar16 = -0x2000000000000000;
    lVar19 = -0x2000000000000000;
    lVar22 = -0x2000000000000000;
    goto LAB_104362acc;
  }
  uVar18 = *puVar1;
  lVar16 = puVar1[3];
  _swift_bridgeObjectRetain(lVar19);
  if (lVar16 == 0) {
    uVar20 = 0;
    lVar16 = -0x2000000000000000;
    lVar22 = puVar1[5];
    if (lVar22 != 0) goto LAB_104362a60;
LAB_104362ab0:
    uVar21 = 0;
    lVar22 = -0x2000000000000000;
  }
  else {
    uVar20 = puVar1[2];
    _swift_bridgeObjectRetain(lVar16);
    lVar22 = puVar1[5];
    if (lVar22 == 0) goto LAB_104362ab0;
LAB_104362a60:
    uVar21 = puVar1[4];
    _swift_bridgeObjectRetain(lVar22);
  }
  uVar10 = puVar1[7];
  uVar17 = puVar1[8];
  _swift_bridgeObjectRetain(uVar17);
LAB_104362acc:
  puVar11 = PTR_PTR_1126adc80;
  _objc_allocWithZone(PTR_PTR_1126adc80);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar18,lVar19);
  _swift_bridgeObjectRelease(lVar19);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar20,lVar16);
  _swift_bridgeObjectRelease(lVar16);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar21,lVar22);
  _swift_bridgeObjectRelease(lVar22);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar10,uVar17);
  _swift_bridgeObjectRelease(uVar17);
  func_0x00010c004f80(puVar11);
  _objc_release(uVar18);
  _objc_release(uVar20);
  _objc_release(uVar21);
  _objc_release(uVar10);
  puVar8 = &UNK_11075e998;
  _swift_allocObject(&UNK_11075e998,0x18,7);
  _swift_unknownObjectWeakInit(puVar8 + 0x10);
  puVar5 = &UNK_11075e9e8;
  _swift_allocObject(&UNK_11075e9e8,0x20,7);
  *(undefined **)(puVar5 + 0x10) = puVar8;
  *(long *)(puVar5 + 0x18) = lVar3;
  puVar12 = PTR_PTR_1126adc88;
  _objc_allocWithZone(PTR_PTR_1126adc88);
  uStack_80 = 0x104363d70;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100c75f50;
  puStack_88 = &UNK_11075ea00;
  ppuVar9 = &puStack_a0;
  puStack_78 = puVar5;
  __Block_copy(ppuVar9);
  _swift_retain(puVar8);
  _objc_retain(puVar11);
  func_0x00010c0442e0(puVar12);
  __Block_release(ppuVar9);
  _objc_release(puVar11);
  puVar5 = puStack_78;
  _swift_release(puVar8);
  _swift_release(puVar5);
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_113070cc0);
  func_0x00010c272120(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b0ac0(puVar12);
  _objc_release(uVar10);
  puVar13 = PTR_PTR_1126adc78;
  _objc_allocWithZone();
  func_0x00010c061c80();
  puVar14 = PTR_PTR_1126adc90;
  _objc_allocWithZone();
  func_0x00010c061d40();
  uVar17 = *(undefined8 *)(unaff_x20 + _DAT_113070ca0);
  _objc_retain();
  _objc_retain();
  _objc_retain();
  func_0x00010befbb60(uVar17);
  func_0x00010c219b60(puVar14);
  puVar8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  _objc_opt_self();
  puVar5 = puVar8;
  func_0x0001008478a8();
  _swift_allocObject();
  *(undefined8 *)(puVar5 + 0x18) = 9;
  *(undefined8 *)(puVar5 + 0x10) = 4;
  puVar7 = puVar14;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar17;
  func_0x00010c08de00(uVar17);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(uVar10);
  *(undefined **)(puVar5 + 0x20) = puVar15;
  puVar7 = puVar14;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar14);
  uVar10 = uVar17;
  func_0x00010c2793a0(uVar17);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(uVar10);
  *(undefined **)(puVar5 + 0x28) = puVar15;
  puVar7 = puVar14;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar14);
  uVar10 = uVar17;
  func_0x00010c274200(uVar17);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(uVar10);
  *(undefined **)(puVar5 + 0x30) = puVar15;
  puVar7 = puVar14;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar14);
  func_0x00010bf1ff80(uVar17);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(uVar17);
  *(undefined **)(puVar5 + 0x38) = puVar15;
  uVar10 = 0;
  FUN_104363dd0(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  puVar7 = puVar5;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(puVar5,uVar10);
  _swift_release(puVar5);
  func_0x00010beef8c0(puVar8);
  _objc_release(puVar7);
  puVar8 = &UNK_11075e998;
  puVar15 = puVar8;
  _swift_allocObject(&UNK_11075e998,0x18,7);
  _swift_unknownObjectWeakInit(puVar15 + 0x10);
  puVar5 = &UNK_11075ea38;
  _swift_allocObject(&UNK_11075ea38,0x18,7);
  _swift_unknownObjectWeakInit(puVar5 + 0x10,puVar14);
  puVar7 = &UNK_11075ea60;
  _swift_allocObject(&UNK_11075ea60,0x20,7);
  *(undefined **)(puVar7 + 0x10) = puVar5;
  *(undefined **)(puVar7 + 0x18) = puVar15;
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x104363d78;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_11075ea78;
  ppuVar9 = &puStack_a0;
  puStack_78 = puVar7;
  __Block_copy();
  puVar7 = puStack_78;
  puVar15 = puVar14;
  _objc_retain();
  _swift_release(puVar7);
  func_0x00010c0e4c00(puVar15);
  _objc_release(puVar15);
  __Block_release(ppuVar9);
  func_0x00010bf68fa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b6ba0();
  _objc_retainAutoreleasedReturnValue();
  _swift_allocObject(&UNK_11075e998,0x18,7);
  _swift_unknownObjectWeakInit(puVar8 + 0x10);
  uStack_80 = 0x104363d80;
  puStack_a0 = puVar5;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100ef35e4;
  puStack_88 = &UNK_11075eaa0;
  ppuVar9 = &puStack_a0;
  puStack_78 = puVar8;
  __Block_copy(ppuVar9);
  _swift_release(puStack_78);
  puVar8 = puVar4;
  func_0x00010befa280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar12);
  _objc_release(puVar13);
  _objc_release(puVar11);
  __Block_release(ppuVar9);
  _objc_release(puVar4);
  _objc_release(puVar6);
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_113070cd0);
  *(undefined **)(unaff_x20 + _DAT_113070cd0) = puVar8;
  _swift_unknownObjectRelease(uVar10);
  uVar10 = *(undefined8 *)(unaff_x20 + lVar2);
  *(undefined **)(unaff_x20 + lVar2) = puVar14;
  _objc_release(uVar10);
  return;
}



/* Entry: 104363100; end: 104363177;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104363100(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  _swift_getObjectType();
  func_0x0001007d6c6c(1,0xd000000000000026,0x800000010f1f7ae0,lVar1,&PTR_DAT_11075e940);
  lVar1 = unaff_x20 + _DAT_113070ce8;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    FUN_104361388();
    _swift_unknownObjectRelease(lVar1);
  }
  lVar1 = _DAT_113070cc8;
  lVar4 = *(long *)(unaff_x20 + _DAT_113070cc8);
  if (lVar4 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    _objc_opt_self(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _swift_unknownObjectRetain(lVar4);
    func_0x00010bf68fa0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d560();
    _objc_release(puVar2);
    _swift_unknownObjectRelease(lVar4);
    uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined8 *)(unaff_x20 + lVar1) = 0;
    _swift_unknownObjectRelease(uVar3);
  }
  lVar1 = _DAT_113070cd0;
  lVar4 = *(long *)(unaff_x20 + _DAT_113070cd0);
  if (lVar4 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    _objc_opt_self(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _swift_unknownObjectRetain(lVar4);
    func_0x00010bf68fa0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d560();
    _objc_release(puVar2);
    _swift_unknownObjectRelease(lVar4);
    uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined8 *)(unaff_x20 + lVar1) = 0;
    _swift_unknownObjectRelease(uVar3);
  }
  lVar1 = _DAT_113070ca8;
  uVar3 = 0;
  if (*(long *)(unaff_x20 + _DAT_113070ca8) != 0) {
    func_0x00010c12c960();
    uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
  }
  *(undefined8 *)(unaff_x20 + lVar1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 104363178; end: 104363277;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104363178(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  
  lVar1 = _DAT_113070cc8;
  lVar4 = *(long *)(unaff_x20 + _DAT_113070cc8);
  if (lVar4 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    _objc_opt_self(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _swift_unknownObjectRetain(lVar4);
    func_0x00010bf68fa0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d560();
    _objc_release(puVar2);
    _swift_unknownObjectRelease(lVar4);
    uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined8 *)(unaff_x20 + lVar1) = 0;
    _swift_unknownObjectRelease(uVar3);
  }
  lVar1 = _DAT_113070cd0;
  lVar4 = *(long *)(unaff_x20 + _DAT_113070cd0);
  if (lVar4 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    _objc_opt_self(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _swift_unknownObjectRetain(lVar4);
    func_0x00010bf68fa0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d560();
    _objc_release(puVar2);
    _swift_unknownObjectRelease(lVar4);
    uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined8 *)(unaff_x20 + lVar1) = 0;
    _swift_unknownObjectRelease(uVar3);
  }
  lVar1 = _DAT_113070ca8;
  uVar3 = 0;
  if (*(long *)(unaff_x20 + _DAT_113070ca8) != 0) {
    func_0x00010c12c960();
    uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
  }
  *(undefined8 *)(unaff_x20 + lVar1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 104363278; end: 10436332f;  */

void FUN_104363278(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar3 = &puStack_60;
  pcVar2 = "setupValdiView()";
  func_0x0001000c10c0("setupValdiView()");
  _objc_retainAutoreleasedReturnValue();
  uStack_40 = 0x104363db0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_11075eb18;
  uStack_38 = param_2;
  __Block_copy(&puStack_60);
  uVar1 = uStack_38;
  _swift_retain(param_2);
  _swift_release(uVar1);
  func_0x00010c0f7fc0(pcVar2);
  __Block_release(ppuVar3);
  _swift_unknownObjectRelease(pcVar2);
  return;
}



/* Entry: 104363330; end: 104363667;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104363330(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  long unaff_x20;
  undefined8 *puVar11;
  ulong uVar12;
  byte bStack_a1;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar3 = *(long *)(unaff_x20 + _DAT_113070ca0);
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_113070cc0);
    puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x00010bff91e0();
    func_0x00010c0d9840(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar9);
    return;
  }
  _objc_release();
  puVar11 = (undefined8 *)PTR__OBJC_CLASS___UITextInputMode_1126cb8a0;
  _objc_opt_self();
  func_0x00010bef0960();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 0;
  FUN_104363dd0(0,0x113070ae8,&PTR__OBJC_CLASS___UITextInputMode_1126cb8a0);
  puVar5 = puVar11;
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(puVar11,uVar4);
  _objc_release(puVar11);
  if ((ulong)puVar5 >> 0x3e == 0) {
    puVar11 = *(undefined8 **)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar11 = (undefined8 *)((ulong)puVar5 & 0xffffffffffffff8);
    if ((undefined8 *)0x7fffffffffffffff < puVar5) {
      puVar11 = puVar5;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (puVar11 != (undefined8 *)0x0) {
    uVar12 = 0;
    do {
      if (((ulong)puVar5 & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10436364c);
          (*pcVar2)();
        }
        uVar6 = puVar5[uVar12 + 4];
        _objc_retain();
      }
      else {
        uVar6 = uVar12;
        FUN_10435f04c(uVar12,puVar5);
      }
      puVar1 = (undefined8 *)(uVar12 + 1);
      if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104363648);
        (*pcVar2)();
      }
      uVar4 = 0x616c707369447369;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x616c707369447369,0xeb00000000646579);
      uVar7 = uVar6;
      func_0x00010c296f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      if (uVar7 == 0) {
        uStack_98 = 0;
        uStack_a0 = 0;
        lStack_88 = 0;
        uStack_90 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,uVar7);
        _swift_unknownObjectRelease(uVar7);
      }
      uStack_78 = uStack_98;
      uStack_80 = uStack_a0;
      lStack_68 = lStack_88;
      uStack_70 = uStack_90;
      if (lStack_88 == 0) {
        _objc_release(uVar6);
        func_0x00010006e7f4(&uStack_80);
      }
      else {
        pbVar8 = &bStack_a1;
        puVar10 = &uStack_80;
        _swift_dynamicCast(pbVar8,puVar10,PTR___sypN_11034f1a8 + 8,PTR___sSbN_11034dd40,6);
        if ((((ulong)pbVar8 & 1) != 0) && ((bStack_a1 & 1) != 0)) {
          _swift_bridgeObjectRelease(puVar5);
          uVar12 = uVar6;
          func_0x00010c112f20();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar6);
          if (uVar12 == 0) goto LAB_104363558;
          uVar6 = uVar12;
          __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
          _objc_release(uVar12);
          puVar5 = puVar10;
          if ((uVar6 != 0x696a6f6d65) || (puVar10 != (undefined8 *)0xe500000000000000)) {
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (uVar6,puVar10,0x696a6f6d65,0xe500000000000000,0);
          }
          break;
        }
        _objc_release(uVar6);
      }
      uVar12 = uVar12 + 1;
    } while (puVar1 != puVar11);
  }
  _swift_bridgeObjectRelease(puVar5);
LAB_104363558:
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_113070cc0);
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_allocWithZone(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x00010bff91e0();
  func_0x00010c0d9840(uVar4);
  _objc_release(puVar9);
  return;
}



/* Entry: 104363668; end: 10436378b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104363668(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_3 != 0) {
    __ss11_StringGutsV4growyySiF(0x15);
    _swift_bridgeObjectRelease(0xe000000000000000);
    __sSS6appendyySSF(param_1,param_2);
    func_0x0001007d6c6c(1,0xd000000000000013,0x800000010f1f7b40,param_4,&PTR_DAT_11075e940);
    _swift_bridgeObjectRelease(0x800000010f1f7b40);
    lVar1 = param_3 + _DAT_113070ce8;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar1 != 0) {
      uVar2 = 0;
      FUN_104362360(0);
      (*(code *)(undefined *)0x1043621f8)(param_1,param_2,uVar2,&PTR_DAT_11075e8a8);
      _swift_unknownObjectRelease(lVar1);
    }
    _objc_release(param_3);
  }
  return;
}



/* Entry: 10436378c; end: 104363927;  */

void FUN_10436378c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    lVar2 = param_1;
    func_0x00010c295200();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    if (lVar2 != 0) {
      uStack_58 = 0x104363d88;
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0x42000000;
      puStack_68 = &UNK_1000b0c7c;
      puStack_60 = &UNK_11075eac8;
      ppuVar3 = &puStack_78;
      uStack_50 = param_2;
      __Block_copy(ppuVar3);
      uVar1 = uStack_50;
      _swift_retain(param_2);
      _swift_release(uVar1);
      func_0x00010c2a15a0(lVar2);
      __Block_release(ppuVar3);
      _swift_unknownObjectRelease(lVar2);
    }
  }
  return;
}



/* Entry: 104363928; end: 10436397f;  */

void FUN_104363928(long param_1,code *param_2)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    (*param_2)();
    _objc_release(param_1);
  }
  return;
}



/* Entry: 104363980; end: 104363abf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104363980(double param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lVar4;
  double dVar5;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_113070ca8);
  if (lVar1 == 0) {
    return;
  }
  lVar4 = *(long *)(unaff_x20 + _DAT_113070ca0);
  _objc_retain();
  func_0x00010bf20c00(lVar4);
  _CGRectGetWidth();
  if (param_1 <= 0.0) {
    lVar2 = lVar4;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) goto LAB_104363aa4;
    func_0x00010bf20c00();
    _objc_release(lVar2);
  }
  else {
    func_0x00010bf20c00();
  }
  _CGRectGetWidth();
  if (0.0 < param_1) {
    dVar5 = 1.79769313486232e+308;
    func_0x00010c23d5a0(lVar1);
    if (0.0 < dVar5) {
      uVar3 = *(undefined8 *)(unaff_x20 + _DAT_113070cd8);
      func_0x00010bf49220(uVar3);
      if (param_1 != dVar5) {
        func_0x00010c181140(dVar5,uVar3);
        func_0x00010c262ca0(lVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1cbe20();
        _objc_release(lVar4);
      }
    }
  }
LAB_104363aa4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104363ac0; end: 104363baf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104363ac0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long lStack_70;
  undefined1 auStack_68 [24];
  long lStack_50;
  undefined1 auStack_48 [24];
  
  uVar2 = 0;
  _swift_beginAccess(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    __s10Foundation12NotificationV6objectypSgvg(auStack_68);
    if (lStack_50 == 0) {
      _objc_release(param_2);
      func_0x00010006e7f4(auStack_68);
    }
    else {
      uVar1 = 0;
      FUN_104363dd0(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
      _swift_dynamicCast(&lStack_70,auStack_68,PTR___sypN_11034f1a8 + 8,uVar1,6);
      if ((uVar2 & 1) != 0) {
        lVar3 = lStack_70;
        func_0x00010c070780();
        if ((int)lVar3 != 0) {
          FUN_104363980();
        }
        _objc_release(param_2);
        param_2 = lStack_70;
      }
      _objc_release(param_2);
    }
  }
  return;
}



/* Entry: 104363bb0; end: 104363c0f; -[_TtC15GamesUIServices33FullScreenChatInputPrimaryContent init] */

void FUN_104363bb0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("GamesUIServices.FullScreenChatInputPrimaryContent",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104363bdc);
  (*pcVar1)();
}



/* Entry: 104363c10; end: 104363ce7; -[_TtC15GamesUIServices33FullScreenChatInputPrimaryContent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104363c10(long param_1)

{
  undefined8 *puVar1;
  
  _objc_release(*(undefined8 *)(param_1 + _DAT_113070ca0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113070ca8));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113070cb0));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113070cb8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113070cc0));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113070cc8));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113070cd0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113070cd8));
  puVar1 = (undefined8 *)(param_1 + _DAT_113070ce0);
  FUN_10436242c(*puVar1,puVar1[1],puVar1[2],puVar1[3],puVar1[4],puVar1[5],puVar1[6],puVar1[7],
                puVar1[8]);
  param_1 = param_1 + _DAT_113070ce8;
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 104363ce8; end: 104363d07;  */

void FUN_104363ce8(void)

{
  _objc_opt_self(&PTR_PTR_1129a0858);
  return;
}



/* Entry: 104363d08; end: 104363d8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104363d08(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + _DAT_113070ca0));
  return;
}



/* Entry: 104363d90; end: 104363dcf;  */

void FUN_104363d90(void)

{
  FUN_104363928();
  return;
}



/* Entry: 104363dd0; end: 104363e33;  */

void FUN_104363dd0(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 104363e34; end: 104363e63;  */

void FUN_104363e34(long param_1,long param_2)

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



/* Entry: 104363e64; end: 104364023;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104363e64(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  code *pcVar7;
  
  lVar2 = _DAT_113070d80;
  if (*(char *)(unaff_x20 + _DAT_113070d80) == '\x01') {
    plVar1 = (long *)(unaff_x20 + _DAT_113070d78);
    lVar5 = *plVar1;
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      lVar6 = plVar1[1];
      lVar3 = lVar5;
      _swift_getObjectType(lVar5);
      pcVar7 = *(code **)(lVar6 + 8);
      _swift_unknownObjectRetain(lVar5);
      (*pcVar7)(lVar3,lVar6);
      _swift_unknownObjectRelease(lVar5);
      lVar5 = *plVar1;
    }
    *plVar1 = 0;
    plVar1[1] = 0;
    _swift_unknownObjectRelease(lVar5);
    lVar5 = _DAT_113070d58;
    lVar3 = *(long *)(unaff_x20 + _DAT_113070d58);
    uVar4 = 0;
    if (lVar3 != 0) {
      _objc_retain();
      lVar6 = lVar3;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12c9c0();
      _objc_release(lVar6);
      _objc_release(lVar3);
      uVar4 = *(undefined8 *)(unaff_x20 + lVar5);
    }
    *(undefined8 *)(unaff_x20 + lVar5) = 0;
    _objc_release(uVar4);
    _swift_unknownObjectWeakAssign(unaff_x20 + _DAT_113070d48,0);
    lVar5 = _DAT_113070d68;
    uVar4 = 0;
    if (*(long *)(unaff_x20 + _DAT_113070d68) != 0) {
      func_0x00010c12c960();
      uVar4 = *(undefined8 *)(unaff_x20 + lVar5);
    }
    *(undefined8 *)(unaff_x20 + lVar5) = 0;
    _objc_release(uVar4);
    func_0x00010c12c960(*(undefined8 *)(unaff_x20 + _DAT_113070d60));
    lVar5 = _DAT_113070d70;
    lVar3 = *(long *)(unaff_x20 + _DAT_113070d70);
    if (lVar3 == 0) {
      uVar4 = 0;
    }
    else {
      lVar6 = unaff_x20 + _DAT_113070d40;
      _swift_unknownObjectWeakLoadStrong(lVar6);
      _objc_retain(lVar3);
      func_0x00010c12cdc0(lVar6);
      _objc_release(lVar3);
      _objc_release(lVar6);
      uVar4 = *(undefined8 *)(unaff_x20 + lVar5);
    }
    *(undefined8 *)(unaff_x20 + lVar5) = 0;
    _objc_release(uVar4);
    _swift_unknownObjectWeakAssign(unaff_x20 + _DAT_113070d40,0);
    _swift_unknownObjectWeakAssign(unaff_x20 + _DAT_113070d50,0);
    *(undefined1 *)(unaff_x20 + lVar2) = 0;
  }
  return;
}



/* Entry: 104364024; end: 104364a97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104364024(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  long *plVar16;
  undefined *puVar17;
  undefined8 uVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  undefined *puVar24;
  long lVar25;
  long unaff_x20;
  undefined8 uVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  code *pcVar30;
  long lVar31;
  long *plVar32;
  undefined8 uStack_80;
  
  if ((*(byte *)(unaff_x20 + _DAT_113070d80) & 1) == 0) {
    *(undefined1 *)(unaff_x20 + _DAT_113070d80) = 1;
    _swift_unknownObjectWeakAssign(unaff_x20 + _DAT_113070d40,param_1);
    _swift_unknownObjectWeakAssign(unaff_x20 + _DAT_113070d50,param_2);
    FUN_104364a98();
    lVar25 = *(long *)(unaff_x20 + _DAT_113070d20);
    uVar26 = *(undefined8 *)(lVar25 + 0x18);
    uVar6 = 0;
    FUN_1043653cc(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
    _swift_retain(uVar26);
    pcVar30 = FUN_104364ba8;
    func_0x0001000bfde0(FUN_104364ba8,0,uVar6);
    _swift_release();
    func_0x0001004575f0();
    _swift_release(pcVar30);
    uVar6 = uVar26;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar26);
    lVar28 = param_3[3];
    if (lVar28 == 0) {
      uStack_80 = 0;
      lVar27 = -0x2000000000000000;
    }
    else {
      uStack_80 = param_3[2];
      lVar27 = lVar28;
    }
    lVar31 = param_3[5];
    if (lVar31 == 0) {
      uVar26 = 0;
      lVar29 = -0x2000000000000000;
    }
    else {
      uVar26 = param_3[4];
      lVar29 = lVar31;
    }
    uVar18 = *param_3;
    uVar2 = param_3[1];
    uVar8 = param_3[7];
    uVar3 = param_3[8];
    puVar7 = PTR_PTR_1126adc80;
    _objc_allocWithZone();
    _swift_bridgeObjectRetain(lVar28);
    _swift_bridgeObjectRetain(lVar31);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar18,uVar2);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_80,lVar27);
    _swift_bridgeObjectRelease(lVar27);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar26,lVar29);
    _swift_bridgeObjectRelease(lVar29);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar8,uVar3);
    func_0x00010c004f80();
    _objc_release(uVar18);
    _objc_release(uStack_80);
    _objc_release(uVar26);
    _objc_release(uVar8);
    puVar9 = PTR_PTR_1126adc98;
    _objc_allocWithZone();
    func_0x00010c017420();
    iVar4 = *(int *)(lVar25 + 0x28);
    puVar10 = PTR_PTR_1126adca0;
    _objc_allocWithZone();
    func_0x00010c061c80();
    puVar11 = PTR_PTR_1126adca8;
    _objc_allocWithZone();
    func_0x00010c061d40();
    lVar25 = _DAT_113070d68;
    uVar26 = *(undefined8 *)(unaff_x20 + _DAT_113070d68);
    *(undefined **)(unaff_x20 + _DAT_113070d68) = puVar11;
    _objc_retain();
    _objc_release(uVar26);
    plVar32 = *(long **)(unaff_x20 + _DAT_113070d60);
    func_0x00010befbb60(param_1);
    func_0x00010c219b60(plVar32);
    _objc_retain();
    _objc_retain();
    _objc_retain();
    func_0x00010befbb60(plVar32);
    func_0x00010c219b60(puVar11);
    puVar12 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    _objc_opt_self();
    puVar13 = puVar12;
    func_0x0001008478a8();
    puVar14 = puVar13;
    _swift_allocObject();
    *(undefined8 *)(puVar14 + 0x18) = 9;
    *(undefined8 *)(puVar14 + 0x10) = 4;
    puVar15 = puVar11;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    plVar16 = plVar32;
    func_0x00010c08de00(plVar32);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar15;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar15);
    _objc_release(plVar16);
    *(undefined **)(puVar14 + 0x20) = puVar17;
    puVar15 = puVar11;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    plVar16 = plVar32;
    func_0x00010c2793a0(plVar32);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar15;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar15);
    _objc_release(plVar16);
    *(undefined **)(puVar14 + 0x28) = puVar17;
    puVar15 = puVar11;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    plVar16 = plVar32;
    func_0x00010c274200(plVar32);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar15;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar15);
    _objc_release(plVar16);
    *(undefined **)(puVar14 + 0x30) = puVar17;
    puVar15 = puVar11;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    plVar16 = plVar32;
    func_0x00010bf1ff80(plVar32);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar15;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar15);
    _objc_release(plVar16);
    *(undefined **)(puVar14 + 0x38) = puVar17;
    uVar18 = 0;
    FUN_1043653cc(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    puVar15 = puVar14;
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(puVar14,uVar18);
    _swift_release(puVar14);
    func_0x00010beef8c0(puVar12);
    _objc_release(puVar15);
    plVar16 = plVar32;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar26 = param_1;
    func_0x00010c08de00(param_1);
    _objc_retainAutoreleasedReturnValue();
    plVar19 = plVar16;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(plVar16);
    _objc_release(uVar26);
    plVar16 = plVar32;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar26 = param_1;
    func_0x00010c2793a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    plVar20 = plVar16;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(plVar16);
    _objc_release(uVar26);
    puVar14 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
    _objc_allocWithZone();
    func_0x00010bfee200();
    func_0x00010bef9680(param_1);
    uVar26 = *(undefined8 *)(unaff_x20 + _DAT_113070d70);
    *(undefined **)(unaff_x20 + _DAT_113070d70) = puVar14;
    _objc_retain();
    _objc_release(uVar26);
    puVar15 = puVar14;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c274200(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar15;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar15);
    _objc_release(param_1);
    puVar15 = puVar14;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar26 = param_2;
    func_0x00010c274200(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar24 = puVar15;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar15);
    _objc_release(uVar26);
    plVar16 = plVar32;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar14;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    plVar21 = plVar16;
    func_0x00010bf493e0(0x3fe0000000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(plVar16);
    _objc_release(puVar15);
    plVar16 = plVar32;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar26 = param_2;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    plVar22 = plVar16;
    func_0x00010bf493c0(0x4020000000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(plVar16);
    _objc_release(uVar26);
    plVar23 = plVar32;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    plVar16 = plVar23;
    func_0x00010bf493c0(0x3fc999999999999a);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(plVar23);
    _objc_release(param_2);
    _swift_allocObject(puVar13,((ulong)*(uint *)(puVar13 + 0x30) + 7 & 0x1fffffff8) + 0x28,
                       *(ushort *)(puVar13 + 0x34) | 7);
    *(undefined8 *)(puVar13 + 0x18) = 0xb;
    *(undefined8 *)(puVar13 + 0x10) = 5;
    *(long **)(puVar13 + 0x20) = plVar19;
    *(long **)(puVar13 + 0x28) = plVar20;
    *(undefined **)(puVar13 + 0x30) = puVar17;
    *(undefined **)(puVar13 + 0x38) = puVar24;
    *(long **)(puVar13 + 0x40) = plVar22;
    _objc_retain();
    _objc_retain();
    _objc_retain();
    _objc_retain();
    _objc_retain();
    puVar15 = puVar13;
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(puVar13,uVar18);
    _swift_release(puVar13);
    func_0x00010beef8c0(puVar12);
    _objc_release(puVar15);
    lVar25 = *(long *)(unaff_x20 + lVar25);
    if (lVar25 != 0) {
      puVar12 = PTR_PTR_1126adca0;
      _objc_allocWithZone(PTR_PTR_1126adca0);
      _objc_retain(lVar25);
      func_0x00010c061c80(puVar12);
      func_0x00010c2226c0(lVar25);
      _objc_release(lVar25);
      _objc_release(puVar12);
    }
    plVar23 = plVar16;
    plVar5 = plVar22;
    if (iVar4 != 1) {
      plVar23 = plVar22;
      plVar5 = plVar16;
    }
    func_0x00010c162480(plVar5);
    func_0x00010c162480(plVar23);
    func_0x00010c162480(plVar21);
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08cdc0();
    _objc_release();
    FUN_10436257c();
    plVar23 = plVar32;
    func_0x0001000c2068();
    func_0x000104884898();
    _swift_release(plVar23);
    puVar12 = &UNK_11075eb60;
    _swift_allocObject(&UNK_11075eb60,0x18,7);
    _swift_unknownObjectWeakInit(puVar12 + 0x10,unaff_x20);
    puVar13 = &UNK_11075eb88;
    _swift_allocObject(&UNK_11075eb88,0x30,7);
    *(undefined **)(puVar13 + 0x10) = puVar12;
    *(long **)(puVar13 + 0x18) = plVar22;
    *(long **)(puVar13 + 0x20) = plVar16;
    *(long **)(puVar13 + 0x28) = plVar21;
    pcVar30 = *(code **)(*plVar32 + 0x60);
    _objc_retain(plVar22);
    _objc_retain(plVar16);
    _objc_retain(plVar21);
    uVar26 = 0x10436539c;
    puVar12 = puVar13;
    (*pcVar30)();
    _swift_release(plVar32);
    _swift_release(puVar13);
    _objc_release(puVar11);
    _objc_release(plVar21);
    _objc_release(plVar16);
    _objc_release(plVar22);
    _objc_release(puVar24);
    _objc_release(puVar17);
    _objc_release(plVar20);
    _objc_release(plVar19);
    _objc_release(puVar14);
    _objc_release(puVar9);
    _objc_release(puVar10);
    _objc_release(uVar6);
    _objc_release(puVar7);
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_113070d78);
    uVar6 = *puVar1;
    *puVar1 = uVar26;
    puVar1[1] = puVar12;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar6);
    return;
  }
  return;
}



/* Entry: 104364a98; end: 104364ba7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104364a98(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x20;
  
  lVar1 = _DAT_113070d58;
  if (*(long *)(unaff_x20 + _DAT_113070d58) == 0) {
    lVar4 = unaff_x20 + _DAT_113070d40;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar4 != 0) {
      lVar2 = lVar4;
      func_0x00010c2a71e0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 != 0) {
        puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
        _objc_allocWithZone();
        func_0x00010c050900();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c18b5e0();
        func_0x00010c178280(puVar3);
        _objc_release(puVar3);
        _objc_retain(lVar2);
        func_0x00010bef9040();
        _objc_release(lVar2);
        _objc_release(lVar4);
        _swift_unknownObjectWeakAssign(unaff_x20 + _DAT_113070d48,lVar2);
        _objc_release(lVar2);
        lVar4 = *(long *)(unaff_x20 + lVar1);
        *(undefined **)(unaff_x20 + lVar1) = puVar3;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar4);
      return;
    }
  }
  return;
}



/* Entry: 104364ba8; end: 104364c23;  */

void FUN_104364ba8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  FUN_104364c24(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_allocWithZone();
  uVar3 = uVar1;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar1,PTR___sypN_11034f1a8 + 8);
  _swift_bridgeObjectRelease(uVar1);
  func_0x00010bff4000();
  _objc_release(uVar3);
  *param_1 = puVar2;
  return;
}



/* Entry: 104364c24; end: 104364e17;  */

undefined * FUN_104364c24(ulong param_1)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uStack_90;
  undefined1 auStack_88 [32];
  undefined *puStack_68;
  
  if (param_1 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar5 = param_1;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100c077e4(0,uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU),0);
    puVar6 = puStack_68;
    puVar1 = PTR___sypN_11034f1a8;
    if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104364e18);
      (*pcVar2)();
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      uVar4 = 0;
      FUN_1043653cc(0,0x113070928,&PTR_PTR_1126adc70);
      puVar1 = PTR___sypN_11034f1a8;
      puVar8 = (ulong *)(param_1 + 0x20);
      do {
        uStack_90 = *puVar8;
        _objc_retain();
        _swift_dynamicCast(auStack_88,&uStack_90,uVar4,puVar1 + 8,7);
        uVar7 = *(ulong *)(puVar6 + 0x10);
        puStack_68 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar7) {
          func_0x000100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar7 + 1,1);
        }
        puVar6 = puStack_68;
        *(ulong *)(puStack_68 + 0x10) = uVar7 + 1;
        func_0x000100102924(auStack_88,puStack_68 + uVar7 * 0x20 + 0x20);
        uVar5 = uVar5 - 1;
        puVar8 = puVar8 + 1;
      } while (uVar5 != 0);
    }
    else {
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        func_0x00010435f060(uVar7,param_1);
        uVar4 = 0;
        uStack_90 = uVar3;
        FUN_1043653cc(0,0x113070928,&PTR_PTR_1126adc70);
        _swift_dynamicCast(auStack_88,&uStack_90,uVar4,puVar1 + 8,7);
        uVar3 = *(ulong *)(puVar6 + 0x10);
        puStack_68 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar3) {
          func_0x000100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar3 + 1,1);
        }
        puVar6 = puStack_68;
        uVar7 = uVar7 + 1;
        *(ulong *)(puStack_68 + 0x10) = uVar3 + 1;
        func_0x000100102924(auStack_88,puStack_68 + uVar3 * 0x20 + 0x20);
      } while (uVar5 != uVar7);
    }
  }
  return puVar6;
}



/* Entry: 104364e18; end: 104364fb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104364e18(int *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  iVar2 = *param_1;
  _swift_beginAccess(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    lVar6 = *(long *)(param_2 + _DAT_113070d68);
    if (lVar6 != 0) {
      puVar3 = PTR_PTR_1126adca0;
      _objc_allocWithZone(PTR_PTR_1126adca0);
      _objc_retain(lVar6);
      func_0x00010c061c80(puVar3);
      func_0x00010c2226c0(lVar6);
      _objc_release(lVar6);
      _objc_release(puVar3);
    }
    uVar1 = param_4;
    if (iVar2 != 1) {
      uVar1 = param_3;
      param_3 = param_4;
    }
    func_0x00010c162480(param_3);
    func_0x00010c162480(uVar1);
    func_0x00010c162480(param_5);
    puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_self(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar3 = &UNK_11075ebb0;
    _swift_allocObject(&UNK_11075ebb0,0x18,7);
    *(long *)(puVar3 + 0x10) = param_2;
    uStack_78 = 0x1043653a8;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1000f6b44;
    puStack_80 = &UNK_11075ebc8;
    ppuVar5 = &puStack_98;
    puStack_70 = puVar3;
    __Block_copy(ppuVar5);
    puVar3 = puStack_70;
    _objc_retain(param_2);
    _swift_release(puVar3);
    func_0x00010bf03400(0x3fc999999999999a,puVar4);
    __Block_release(ppuVar5);
    _objc_release(param_2);
  }
  return;
}



/* Entry: 104364fb8; end: 104364ff3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104364fb8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_113070d60);
  func_0x00010c262ca0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104364ff4; end: 104364ff7; -[_TtC15GamesUIServices32FullScreenChatMessageOverlayHost handleOutsideTap:] */

void FUN_104364ff4(void)

{
  return;
}



/* Entry: 104364ff8; end: 104365057; -[_TtC15GamesUIServices32FullScreenChatMessageOverlayHost init] */

void FUN_104364ff8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("GamesUIServices.FullScreenChatMessageOverlayHost",0x30,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104365024);
  (*pcVar1)();
}



/* Entry: 104365058; end: 10436513f; -[_TtC15GamesUIServices32FullScreenChatMessageOverlayHost .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104365058(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113070d18));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113070d20));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113070d28));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113070d30));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113070d38));
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113070d40);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113070d48);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113070d50);
  _objc_release(*(undefined8 *)(param_1 + _DAT_113070d58));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113070d60));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113070d68));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113070d70));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_113070d78));
  return;
}



/* Entry: 104365140; end: 10436515f;  */

void FUN_104365140(void)

{
  _objc_opt_self(&PTR_PTR_1129a0960);
  return;
}



/* Entry: 104365160; end: 104365307;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_104365160(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  ulong uVar9;
  undefined4 uStack_74;
  
  lVar8 = *(long *)(unaff_x20 + _DAT_113070d58);
  bVar1 = lVar8 == 0 || param_3 != lVar8;
  if (lVar8 == 0 || param_3 != lVar8) {
    return bVar1;
  }
  lVar8 = *(long *)(unaff_x20 + _DAT_113070d20);
  if (*(int *)(lVar8 + 0x28) != 1) {
    return bVar1;
  }
  uVar9 = *(ulong *)(unaff_x20 + _DAT_113070d60);
  uVar3 = uVar9;
  func_0x00010c074c20();
  if ((uVar3 & 1) != 0) {
    return bVar1;
  }
  lVar4 = unaff_x20 + _DAT_113070d40;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar4 == 0) {
    return bVar1;
  }
  lVar5 = unaff_x20 + _DAT_113070d48;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar5 == 0) goto LAB_1043652dc;
  func_0x00010c09ef00(param_4);
  func_0x00010bf511c0(lVar4);
  lVar6 = unaff_x20 + _DAT_113070d50;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar6 == 0) {
LAB_104365278:
    func_0x00010bf511c0(param_1,param_2,uVar9);
    func_0x00010bf20c00();
    iVar2 = (int)uVar9;
    _CGRectContainsPoint();
    if (iVar2 == 0) {
      *(undefined4 *)(lVar8 + 0x28) = 0;
      uStack_74 = 0;
      func_0x0001007d6d78(&uStack_74);
      _objc_release(lVar5);
      goto LAB_1043652dc;
    }
  }
  else {
    func_0x00010bf511c0(param_1,param_2);
    lVar7 = lVar6;
    func_0x00010bf20c00();
    iVar2 = (int)lVar7;
    _CGRectContainsPoint();
    _objc_release(lVar6);
    if (iVar2 == 0) goto LAB_104365278;
  }
  _objc_release(lVar4);
  lVar4 = lVar5;
LAB_1043652dc:
  _objc_release(lVar4);
  return bVar1;
}



/* Entry: 104365308; end: 10436537f; -[_TtC15GamesUIServices32FullScreenChatMessageOverlayHost gestureRecognizer:shouldReceiveTouch:] */

uint FUN_104365308(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_104365160(param_3,param_4);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 104365380; end: 1043653cb; -[_TtC15GamesUIServices32FullScreenChatMessageOverlayHost gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_104365380(long param_1,undefined8 param_2,long param_3)

{
  return *(long *)(param_1 + _DAT_113070d58) != 0 && param_3 == *(long *)(param_1 + _DAT_113070d58);
}



/* Entry: 1043653cc; end: 10436540b;  */

void FUN_1043653cc(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10436540c; end: 10436577f;  */

void FUN_10436540c(double param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  long extraout_x8;
  ulong uVar12;
  long lVar13;
  long unaff_x20;
  ulong uVar14;
  undefined8 uVar15;
  ulong auStack_a0 [2];
  undefined8 *puStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar4 = 0;
  __s10Foundation4DateVMa();
  lVar13 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar5 = param_2[3];
  if (lVar5 == 0) {
    uVar15 = 0;
    lVar5 = -0x2000000000000000;
  }
  else {
    uVar15 = param_2[2];
  }
  uStack_80 = 0x20;
  uStack_78 = 0xe100000000000000;
  puStack_90 = &uStack_80;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(lVar5);
  lVar6 = 0x7fffffffffffffff;
  func_0x0001014784b8(0x7fffffffffffffff,1,FUN_104365844,auStack_a0,uVar15,lVar5);
  if (*(long *)(lVar6 + 0x10) == 0) {
    _swift_bridgeObjectRelease();
  }
  else {
    uVar15 = *(undefined8 *)(lVar6 + 0x20);
    lVar11 = *(long *)(lVar6 + 0x28);
    uVar8 = *(undefined8 *)(lVar6 + 0x30);
    uVar2 = *(undefined8 *)(lVar6 + 0x38);
    _swift_bridgeObjectRetain_n(uVar2,2);
    _swift_bridgeObjectRelease(lVar6);
    __sSS14_fromSubstringySSSshFZ(uVar15,lVar11,uVar8,uVar2);
    _swift_bridgeObjectRelease(lVar5);
    _swift_bridgeObjectRelease_n(uVar2,2);
    lVar5 = lVar11;
  }
  puVar7 = PTR_PTR_1126adcb0;
  _objc_allocWithZone(PTR_PTR_1126adcb0);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar15,lVar5);
  _swift_bridgeObjectRelease(lVar5);
  uVar8 = 0;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
  func_0x00010c013540(puVar7);
  _objc_release(uVar15);
  _objc_release(uVar8);
  if (*(char *)(param_2 + 7) == '\x01') {
    __s10Foundation4DateVACycfC
              (&stack0xffffffffffffff50 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    __s10Foundation4DateV21timeIntervalSince1970Sdvg();
    (**(code **)(lVar13 + 8))
              (&stack0xffffffffffffff50 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar4);
    param_1 = param_1 * 1000.0;
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x104365778);
      (*pcVar3)();
    }
    if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10436577c);
      (*pcVar3)();
    }
    if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x104365780);
      (*pcVar3)();
    }
  }
  uVar15 = *param_2;
  uVar8 = param_2[1];
  puVar9 = PTR_PTR_1126adc70;
  _objc_allocWithZone();
  _objc_retain(puVar7);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar15,uVar8);
  func_0x00010c00d400();
  _objc_release(puVar7);
  _objc_release(uVar15);
  if (param_2[5] == 0) {
    uVar15 = 0;
  }
  else {
    uVar15 = param_2[4];
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar15);
  }
  func_0x00010c21e620(puVar9);
  _objc_release(uVar15);
  _swift_beginAccess(unaff_x20 + 0x20,auStack_a0,0x21,0);
  _objc_retain();
  FUN_1043657d4();
  uVar14 = *(ulong *)(unaff_x20 + 0x20);
  uVar12 = uVar14 & 0xffffffffffffff8;
  uVar1 = *(ulong *)(uVar12 + 0x10);
  uVar10 = uVar14;
  if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar1) {
    uVar10 = (ulong)(1 < *(ulong *)(uVar12 + 0x18));
    FUN_10435592c(uVar10,uVar1 + 1,1,uVar14);
    uVar12 = uVar10 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar12 + 0x10) = uVar1 + 1;
  *(undefined **)(uVar12 + uVar1 * 8 + 0x20) = puVar9;
  *(ulong *)(unaff_x20 + 0x20) = uVar10;
  _swift_endAccess(auStack_a0);
  auStack_a0[0] = uVar10;
  _swift_bridgeObjectRetain(uVar10);
  func_0x0001007d6d78(auStack_a0);
  _swift_bridgeObjectRelease(uVar10);
  _objc_release(puVar9);
  _objc_release(puVar7);
  return;
}



/* Entry: 104365780; end: 1043657d3;  */

void FUN_104365780(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1043657d4; end: 104365843;  */

void FUN_1043657d4(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  
  uVar3 = *unaff_x20;
  uVar1 = uVar3;
  _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
  *unaff_x20 = uVar3;
  if ((((int)uVar1 == 0) || ((long)uVar3 < 0)) || ((uVar3 >> 0x3e & 1) != 0)) {
    if (uVar3 >> 0x3e == 0) {
      uVar1 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar1 = uVar3 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar3) {
        uVar1 = uVar3;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg(uVar1);
    }
    uVar2 = 0;
    FUN_10435592c(0,uVar1 + 1,1,uVar3);
    *unaff_x20 = uVar2;
  }
  return;
}



/* Entry: 104365844; end: 104365897;  */

uint FUN_104365844(long *param_1)

{
  uint uVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *param_1;
  if (lVar2 == **(long **)(unaff_x20 + 0x10) && param_1[1] == (*(long **)(unaff_x20 + 0x10))[1]) {
    uVar1 = 1;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
    uVar1 = (uint)lVar2 & 1;
  }
  return uVar1;
}



/* Entry: 104365898; end: 1043658fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104365898(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113070e68) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113070e70) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043658fc; end: 10436595b; -[SCGamesActionBarServices init] */

void FUN_1043658fc(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("GamesUIServices.GamesActionBarServices",0x26,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104365928);
  (*pcVar1)();
}



/* Entry: 10436595c; end: 104365993; -[SCGamesActionBarServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10436595c(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113070e68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113070e70));
  return;
}



/* Entry: 104365994; end: 1043659a7;  */

bool FUN_104365994(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1043659a8; end: 104365a53;  */

void FUN_1043659a8(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104365a54; end: 104365a57;  */

void FUN_104365a54(void)

{
  undefined *puVar1;
  
  if (puRam0000000113070ea0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcef150;
  _swift_getWitnessTable(&UNK_10dcef150,&UNK_11075ec70);
  puRam0000000113070ea0 = puVar1;
  return;
}



/* Entry: 104365a58; end: 104365a97;  */

void FUN_104365a58(void)

{
  undefined *puVar1;
  
  if (puRam0000000113070ea0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcef150;
  _swift_getWitnessTable(&UNK_10dcef150,&UNK_11075ec70);
  puRam0000000113070ea0 = puVar1;
  return;
}



/* Entry: 104365a98; end: 104365bfb;  */

int FUN_104365a98(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfb < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 4) {
      iVar2 = 4;
    }
    if (param_2 + 4 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_104365b14;
        goto LAB_104365af8;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_104365af8:
      return ((uint)*param_1 | uVar1 << 8) - 4;
    }
  }
LAB_104365b14:
  iVar2 = *param_1 - 5;
  if (*param_1 < 5) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 104365bfc; end: 104365c53;  */

uint FUN_104365bfc(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_70 = param_1[8];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_38 = param_2[5];
  uStack_40 = param_2[4];
  uStack_28 = param_2[7];
  uStack_30 = param_2[6];
  uStack_20 = param_2[8];
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  FUN_104365c54(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 104365c54; end: 104365d4f;  */

ulong FUN_104365c54(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *param_1;
  if ((uVar1 == *param_2 && param_1[1] == param_2[1]) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar1 & 1) != 0)) {
    uVar1 = param_2[3];
    if (param_1[3] == 0) {
      if (uVar1 != 0) {
        return 0;
      }
    }
    else {
      if (uVar1 == 0) {
        return 0;
      }
      uVar2 = param_1[2];
      if ((uVar2 != param_2[2] || param_1[3] != uVar1) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar2 & 1) == 0)) {
        return 0;
      }
    }
    uVar1 = param_2[5];
    if (param_1[5] == 0) {
      if (uVar1 != 0) {
        return 0;
      }
    }
    else {
      if (uVar1 == 0) {
        return 0;
      }
      uVar2 = param_1[4];
      if (((uVar2 != param_2[4]) || (param_1[5] != uVar1)) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar2 & 1) == 0)) {
        return 0;
      }
    }
    if ((((byte)param_1[6] ^ (byte)param_2[6]) & 1) == 0) {
      uVar1 = param_1[7];
      if ((uVar1 == param_2[7]) && (param_1[8] == param_2[8])) {
        return 1;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )();
      return uVar1;
    }
  }
  return 0;
}



/* Entry: 104365d50; end: 104365d57;  */

void FUN_104365d50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 104365d58; end: 104365dc7;  */

undefined8 * FUN_104365d58(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 104365dc8; end: 104365e5b;  */

int FUN_104365dc8(int *param_1,int param_2)

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



/* Entry: 104365e5c; end: 104365e8b;  */

void FUN_104365e5c(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 104365e8c; end: 104365f8b;  */

undefined8 * FUN_104365e8c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  param_1[6] = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  return param_1;
}



/* Entry: 104365f8c; end: 104365fef;  */

undefined8 * FUN_104365f8c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  param_1[6] = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  return param_1;
}



/* Entry: 104365ff0; end: 104366097;  */

int FUN_104365ff0(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x39) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 104366098; end: 1043660cf;  */

void FUN_104366098(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x40));
  return;
}



/* Entry: 1043660d0; end: 1043661ef;  */

undefined8 * FUN_1043660d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  uVar3 = param_2[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar3;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  return param_1;
}



/* Entry: 1043661f0; end: 10436625b;  */

undefined8 * FUN_1043661f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  uVar1 = param_2[8];
  uVar2 = param_1[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Entry: 10436625c; end: 10436632b;  */

int FUN_10436625c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x12] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10436632c; end: 1043663bb;  */

undefined8 FUN_10436632c(ulong param_1,long param_2,ulong param_3,long param_4)

{
  if (param_2 == 2) {
    if (param_4 == 2) {
      return 1;
    }
  }
  else if (param_2 == 1) {
    if (param_4 == 1) {
      return 1;
    }
  }
  else if (1 < param_4 - 1U) {
    if (param_2 == 0) {
      if (param_4 == 0) {
        return 1;
      }
    }
    else if (param_4 != 0) {
      if ((param_1 == param_3) && (param_2 == param_4)) {
        return 1;
      }
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      if ((param_1 & 1) != 0) {
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 1043663bc; end: 1043663db;  */

void FUN_1043663bc(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  if (-1 < (int)uVar1 + -1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
  return;
}



/* Entry: 1043663dc; end: 10436656f;  */

undefined8 * FUN_1043663dc(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  uVar1 = uVar2;
  if (0xfffffffe < uVar2) {
    uVar1 = 0xffffffff;
  }
  if (-1 < (int)uVar1 + -1) {
    uVar3 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar3;
    return param_1;
  }
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  return param_1;
}



/* Entry: 104366570; end: 104366693;  */

int FUN_104366570(int *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffc < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0x7ffffffd;
  }
  uVar3 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar3) {
    uVar3 = 0xffffffff;
  }
  uVar2 = (int)uVar3 - 1;
  if (0x7fffffff < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (2 < uVar2 + 1) {
    iVar1 = uVar2 - 1;
  }
  return iVar1;
}



/* Entry: 104366694; end: 10436672f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104366694(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113070ea8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113070eb0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113070eb8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113070ec0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113070ec8) = param_5;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104366730; end: 10436678f; -[SCGamesUIServices init] */

void FUN_104366730(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("GamesUIServices.GamesUIServices",0x1f,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10436675c);
  (*pcVar1)();
}



/* Entry: 104366790; end: 1043667f7; -[SCGamesUIServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104366790(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113070ea8));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113070eb0));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113070eb8));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113070ec0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113070ec8));
  return;
}



/* Entry: 1043667f8; end: 104366867;  */

void FUN_1043667f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_104366868(0);
  _objc_allocWithZone();
  _swift_bridgeObjectRetain(param_2);
  _swift_retain(param_4);
  FUN_104366888(param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 104366868; end: 104366887;  */

void FUN_104366868(void)

{
  _objc_opt_self(&PTR_PTR_1129a0c30);
  return;
}



/* Entry: 104366888; end: 104366c73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104366888(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  long unaff_x20;
  
  puVar4 = &stack0xffffffffffffff90;
  _swift_getObjectType();
  lVar2 = _DAT_113070f00;
  puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_allocWithZone();
  func_0x00010bfee200();
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113070ef8);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar3 = PTR_s_initWithFrame__1125e2948;
  _swift_retain(param_4);
  _objc_msgSendSuper2(0,0,0,0,&stack0xffffffffffffff90,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  func_0x00010c219b60();
  _objc_retain();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  func_0x00010c160fc0(puVar4);
  _objc_release(param_1);
  func_0x00010befbd60(puVar4);
  _objc_release(puVar4);
  lVar2 = _DAT_113070f00;
  func_0x00010c219b60(*(undefined8 *)(puVar4 + _DAT_113070f00));
  func_0x00010c182220(*(undefined8 *)(puVar4 + lVar2));
  func_0x00010c21e900(*(undefined8 *)(puVar4 + lVar2));
  uVar5 = *(undefined8 *)(puVar4 + lVar2);
  _objc_retain(uVar5);
  uVar6 = 0x625f785f61766f68;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x625f785f61766f68,0xed00006e6f747475);
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  _objc_opt_self(PTR__OBJC_CLASS___UIImage_1126aea68);
  func_0x00010bfe8220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  func_0x00010c1a9f00(uVar5);
  _objc_release(uVar5);
  _objc_release(puVar3);
  func_0x00010befbb60(puVar4);
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  _objc_opt_self();
  puVar7 = puVar3;
  func_0x0001008478a8();
  _swift_allocObject();
  *(undefined8 *)(puVar7 + 0x18) = 0xd;
  *(undefined8 *)(puVar7 + 0x10) = 6;
  puVar8 = puVar4;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010bf49420(0x4050000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  *(undefined1 **)(puVar7 + 0x20) = puVar9;
  puVar8 = puVar4;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010bf49420(0x4050000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  *(undefined1 **)(puVar7 + 0x28) = puVar9;
  uVar6 = *(undefined8 *)(puVar4 + lVar2);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar4;
  func_0x00010bf34860(puVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(puVar8);
  *(undefined8 *)(puVar7 + 0x30) = uVar5;
  uVar6 = *(undefined8 *)(puVar4 + lVar2);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar4;
  func_0x00010bf348e0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  uVar5 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(puVar8);
  *(undefined8 *)(puVar7 + 0x38) = uVar5;
  uVar6 = *(undefined8 *)(puVar4 + lVar2);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar6;
  func_0x00010bf49420(0x4043000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  *(undefined8 *)(puVar7 + 0x40) = uVar5;
  uVar6 = *(undefined8 *)(puVar4 + lVar2);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar6;
  func_0x00010bf49420(0x4043000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  *(undefined8 *)(puVar7 + 0x48) = uVar5;
  uVar5 = 0;
  func_0x000100847984(0);
  puVar10 = puVar7;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(puVar7,uVar5);
  _swift_release(puVar7);
  func_0x00010beef8c0(puVar3);
  _objc_release(puVar4);
  _swift_release(param_4);
  _objc_release(puVar10);
  return puVar4;
}



/* Entry: 104366c74; end: 104366c83;  */

undefined1  [16] FUN_104366c74(void)

{
  return ZEXT816(0x11075ef10);
}



/* Entry: 104366c84; end: 104366cff; -[_TtC15GamesUIServicesP33_9DE78B1F1BBB5F0B9F55B03AD7866EA818GamesCancelXButton initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104366c84(long param_1)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  
  lVar1 = _DAT_113070f00;
  puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_allocWithZone();
  func_0x00010bfee200();
  *(undefined **)(param_1 + lVar1) = puVar3;
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
             "GamesUIServices/GamesCancelXButton.swift",0x28,2,0x36,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x104366d00);
  (*pcVar2)();
}



/* Entry: 104366d00; end: 104366dd7; -[_TtC15GamesUIServicesP33_9DE78B1F1BBB5F0B9F55B03AD7866EA818GamesCancelXButton layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104366d00(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  _swift_getObjectType();
  puVar2 = PTR_s_layoutSubviews_112600e60;
  lStack_40 = param_1;
  lStack_38 = lVar1;
  _objc_retain();
  _objc_msgSendSuper2(&lStack_40,puVar2);
  puVar2 = PTR_PTR_1126b08d8;
  _objc_opt_self(PTR_PTR_1126b08d8);
  uVar4 = *(undefined8 *)(param_1 + _DAT_113070f00);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _objc_opt_self(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b816a88(0x4010000000000000,0x3fc3333333333333,0,0x3ff0000000000000,0x4024000000000000,
                      0x4024000000000000,0x4024000000000000,0x4024000000000000,puVar2,uVar4,puVar3);
  _objc_release(param_1);
  _objc_release(puVar3);
  return;
}



/* Entry: 104366dd8; end: 104366e17; -[_TtC15GamesUIServicesP33_9DE78B1F1BBB5F0B9F55B03AD7866EA818GamesCancelXButton handleTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104366dd8(long param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + _DAT_113070ef8);
  _objc_retain();
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104366e18; end: 104366e77; -[_TtC15GamesUIServicesP33_9DE78B1F1BBB5F0B9F55B03AD7866EA818GamesCancelXButton initWithFrame:] */

void FUN_104366e18(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("GamesUIServices.GamesCancelXButton",0x22,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104366e44);
  (*pcVar1)();
}



/* Entry: 104366e78; end: 104366eb3; -[_TtC15GamesUIServicesP33_9DE78B1F1BBB5F0B9F55B03AD7866EA818GamesCancelXButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104366e78(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113070ef8 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113070f00));
  return;
}



/* Entry: 104366eb4; end: 104366ecb;  */

void FUN_104366eb4(void)

{
  long in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x000100db69fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x4 + 0x10))();
  return;
}



/* Entry: 104366ecc; end: 104366edb; -[ComposerSafetyReportServices safetyReportPageLauncherFactory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104366ecc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113070f30));
  return;
}



/* Entry: 104366edc; end: 104366f27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104366edc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113070f30) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104366f28; end: 104366f7f; -[ComposerSafetyReportServices initWithSafetyReportPageLauncherFactory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104366f28(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113070f30) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 104366f80; end: 104366fb3;  */

void FUN_104366f80(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104366fb4; end: 104366fc3; -[ComposerSafetyReportServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104366fb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113070f30));
  return;
}



/* Entry: 104366fc4; end: 104367093;  */

void FUN_104366fc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uStack_60 = 0x5b;
  uStack_58 = 0xe100000000000000;
  uVar1 = param_3;
  uStack_68 = param_3;
  _swift_getMetatypeMetadata(param_3);
  __sSS10describingSSx_tclufC(&uStack_68,uVar1);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar1);
  __sSS6appendyySSF(0x205d,0xe200000000000000);
  __sSS6appendyySSF(param_1,param_2);
  _swift_bridgeObjectRelease(uStack_58);
  (**(code **)(param_4 + 0x10))(3,param_1,param_2,0,param_3,param_4);
  return;
}



/* Entry: 104367094; end: 1043670a3; -[_TtC35LensPlusPaywallPresentationServices37SCLensPlusPaywallPresentationServices plusPaywallPresenterObjc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104367094(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113070f68));
  return;
}



/* Entry: 1043670a4; end: 104367127;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1043670a4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113070f60) = param_1;
  uVar1 = param_1;
  _swift_retain();
  func_0x0001003a5b88();
  *(undefined8 *)(unaff_x20 + _DAT_113070f68) = uVar1;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  _swift_release(param_1);
  return puVar2;
}



/* Entry: 104367128; end: 104367187; -[_TtC35LensPlusPaywallPresentationServices37SCLensPlusPaywallPresentationServices init] */

void FUN_104367128(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensPlusPaywallPresentationServices.SCLensPlusPaywallPresentationServices",0x49,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104367154);
  (*pcVar1)();
}



/* Entry: 104367188; end: 1043671bf; -[_TtC35LensPlusPaywallPresentationServices37SCLensPlusPaywallPresentationServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104367188(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113070f60));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113070f68));
  return;
}



/* Entry: 1043671c0; end: 10436753b;  */

long FUN_1043671c0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10436753c; end: 10436754b; -[_TtC35LensPlusPaywallPresentationServices50PlayGamesScopedLensPlusPaywallPresentationServices lensPlusPaywallPresentationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10436753c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113070f98));
  return;
}



/* Entry: 10436754c; end: 1043675e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10436754c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113070f98) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043675e4; end: 10436763b; -[_TtC35LensPlusPaywallPresentationServices50PlayGamesScopedLensPlusPaywallPresentationServices initWithLensPlusPaywallPresentationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043675e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113070f98) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 10436763c; end: 10436769b; -[_TtC35LensPlusPaywallPresentationServices50PlayGamesScopedLensPlusPaywallPresentationServices init] */

void FUN_10436763c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensPlusPaywallPresentationServices.PlayGamesScopedLensPlusPaywallPresentationServices"
             ,0x56,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104367668);
  (*pcVar1)();
}



/* Entry: 10436769c; end: 1043676ab; -[_TtC35LensPlusPaywallPresentationServices50PlayGamesScopedLensPlusPaywallPresentationServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10436769c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113070f98));
  return;
}



/* Entry: 1043676ac; end: 1043676cb;  */

void FUN_1043676ac(void)

{
  _objc_opt_self(&PTR_PTR_1129a0e80);
  return;
}



/* Entry: 1043676cc; end: 1043676db; -[_TtC35LensPlusPaywallPresentationServices50SCPreviewScopedLensPlusPaywallPresentationServices lensPlusPaywallPresentationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043676cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113070fc8));
  return;
}



/* Entry: 1043676dc; end: 104367773;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043676dc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113070fc8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104367774; end: 1043677cb; -[_TtC35LensPlusPaywallPresentationServices50SCPreviewScopedLensPlusPaywallPresentationServices initWithLensPlusPaywallPresentationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104367774(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113070fc8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 1043677cc; end: 10436782b; -[_TtC35LensPlusPaywallPresentationServices50SCPreviewScopedLensPlusPaywallPresentationServices init] */

void FUN_1043677cc(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensPlusPaywallPresentationServices.SCPreviewScopedLensPlusPaywallPresentationServices"
             ,0x56,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043677f8);
  (*pcVar1)();
}



/* Entry: 10436782c; end: 10436783b; -[_TtC35LensPlusPaywallPresentationServices50SCPreviewScopedLensPlusPaywallPresentationServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10436782c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113070fc8));
  return;
}


