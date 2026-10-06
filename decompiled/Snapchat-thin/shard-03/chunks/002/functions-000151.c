/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102611654; end: 10261169f;  */

void FUN_102611654(long param_1,undefined8 param_2)

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



/* Entry: 1026116a0; end: 1026116af; -[_TtC33MapChromeV2ServicesImplementation19MapChromeV2Provider visibleFrames] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026116a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112eb0048));
  return;
}



/* Entry: 1026116b0; end: 1026116e3; -[_TtC33MapChromeV2ServicesImplementation19MapChromeV2Provider setVisibleFrames:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026116b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112eb0048);
  *(undefined8 *)(param_1 + _DAT_112eb0048) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1026116e4; end: 1026116fb; -[_TtC33MapChromeV2ServicesImplementation19MapChromeV2Provider edgeInsets] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1026116e4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112eb0050);
}



/* Entry: 1026116fc; end: 102611713; -[_TtC33MapChromeV2ServicesImplementation19MapChromeV2Provider setEdgeInsets:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026116fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_5 + _DAT_112eb0050);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  return;
}



/* Entry: 102611714; end: 102611747; -[_TtC33MapChromeV2ServicesImplementation19MapChromeV2Provider reactionAnimationContainerView] */

void FUN_102611714(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102611748();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102611748; end: 1026117b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102611748(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112eb0070;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112eb0070);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c610f8();
    func_0x000107c453e4();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 1026117b4; end: 1026117e7; -[_TtC33MapChromeV2ServicesImplementation19MapChromeV2Provider setReactionAnimationContainerView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026117b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112eb0070);
  *(undefined8 *)(param_1 + _DAT_112eb0070) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1026117e8; end: 102611f73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026117e8(void)

{
  char cVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  undefined **ppuVar19;
  undefined8 uVar20;
  long lVar21;
  long unaff_x20;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  lVar2 = _DAT_112eaff80;
  lVar15 = unaff_x20 + _DAT_112eaff80;
  func_0x000107c61618();
  if (lVar15 != 0) {
    func_0x000107c61170();
    func_0x000107c61618(unaff_x20 + lVar2);
    return;
  }
  *(undefined ***)(*(long *)(unaff_x20 + _DAT_112eafff0) + _DAT_112eafbc0 + 8) = &PTR_DAT_11052ace8;
  func_0x000107c61604();
  puVar3 = PTR_PTR_1126aac98;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar4 = PTR_PTR_1126aaca0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar5 = puVar4;
  FUN_10260b23c();
  puVar6 = puVar4;
  func_0x000107c5602c();
  func_0x000102601650();
  puVar7 = puVar4;
  func_0x000107c54bd8();
  FUN_1026077fc();
  puVar8 = puVar4;
  func_0x000107c52244();
  FUN_10260dd30();
  func_0x000107c592a0(puVar4);
  puVar9 = PTR_PTR_1126aaca8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar10 = puVar9;
  func_0x000107c52168();
  FUN_10260c85c();
  puVar11 = puVar10;
  func_0x000107c5cb24();
  func_0x000107c61180();
  func_0x000107c61170(puVar10);
  func_0x000107c54b08(puVar9);
  func_0x000107c61170(puVar11);
  func_0x000107c57404(puVar4);
  puVar10 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar15 = _DAT_112eb0000;
  uVar20 = *(undefined8 *)(unaff_x20 + _DAT_112eb0000);
  *(undefined **)(unaff_x20 + _DAT_112eb0000) = puVar10;
  func_0x000107c61170(uVar20);
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  puVar11 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c49470();
  func_0x000107c61170(puVar10);
  lVar21 = _DAT_112eb0010;
  uVar20 = *(undefined8 *)(unaff_x20 + _DAT_112eb0010);
  *(undefined **)(unaff_x20 + _DAT_112eb0010) = puVar11;
  func_0x000107c61170(uVar20);
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  puVar11 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c49470();
  func_0x000107c61170(puVar10);
  lVar22 = _DAT_112eb0018;
  uVar20 = *(undefined8 *)(unaff_x20 + _DAT_112eb0018);
  *(undefined **)(unaff_x20 + _DAT_112eb0018) = puVar11;
  func_0x000107c61170(uVar20);
  FUN_102611f74();
  FUN_1026120b4();
  lVar12 = *(long *)(unaff_x20 + _DAT_112eaff88);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar12 == 0) {
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar7);
  }
  else {
    lVar13 = lVar12;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar12);
    if (lVar13 == 0) {
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar7);
      func_0x000107c61170(puVar8);
      goto LAB_102611dc4;
    }
    uVar14 = *(ulong *)(unaff_x20 + _DAT_112eaffd8);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (uVar14 == 0) {
      func_0x000107c615e8(lVar13);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar7);
      func_0x000107c61170(puVar8);
      func_0x000107c61170(puVar9);
      puVar8 = puVar4;
      puVar9 = puVar3;
      goto LAB_102611dbc;
    }
    lVar15 = *(long *)(unaff_x20 + lVar15);
    if (lVar15 == 0) {
      func_0x000107c615e8(lVar13);
      func_0x000107c615e8(uVar14);
      func_0x000107c61170(puVar5);
    }
    else {
      lVar21 = *(long *)(unaff_x20 + lVar21);
      if ((lVar21 != 0) && (lVar22 = *(long *)(unaff_x20 + lVar22), lVar22 != 0)) {
        lVar12 = *(long *)(*(long *)(unaff_x20 + _DAT_112eaffe8) + _DAT_11302eac8);
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar12 != 0) {
          lVar16 = lVar12;
          func_0x000109021c74();
          func_0x000107c615e8();
          *(char *)(unaff_x20 + _DAT_112eb0038) = (char)lVar16;
        }
        FUN_10260d630();
        lVar16 = lVar22;
        func_0x000107c5cb24(lVar22);
        func_0x000107c61180();
        func_0x000107c557f8(lVar12);
        func_0x000107c61170(lVar16);
        func_0x000107c58b74(puVar4);
        func_0x000107c57d2c(puVar4);
        lVar16 = lVar15;
        func_0x000107c5cb24(lVar15);
        func_0x000107c61180();
        func_0x000107c53654(puVar4);
        func_0x000107c61170(lVar16);
        lVar16 = lVar21;
        func_0x000107c5cb24(lVar21);
        func_0x000107c61180();
        func_0x000107c55698(puVar4);
        func_0x000107c61170(lVar16);
        puVar10 = PTR_PTR_1126aacb0;
        func_0x000107c610f8();
        func_0x000107c453e4();
        uVar17 = uVar14;
        func_0x000107c52060(uVar14);
        func_0x000107c56288((double)uVar17,puVar10);
        func_0x000107c560f4(puVar4);
        lVar18 = _DAT_112eaff70;
        lVar16 = unaff_x20 + _DAT_112eaff70;
        func_0x000107c61618();
        if (lVar16 == 0) {
LAB_102611c84:
          lVar18 = unaff_x20 + lVar18;
          func_0x000107c61618();
          if (lVar18 != 0) {
            lVar24 = *(long *)(lVar18 + _DAT_1130831b0);
            lVar16 = lVar24;
            func_0x000107c61174(lVar24);
            func_0x000107c61170(lVar18);
            if (lVar24 != 0) {
              func_0x000107c61170(lVar16);
              goto LAB_102611e9c;
            }
          }
        }
        else {
          lVar23 = *(long *)(lVar16 + _DAT_1130831b0);
          lVar24 = lVar23;
          func_0x000107c61174();
          func_0x000107c61170(lVar16);
          if ((lVar23 == 0) ||
             (cVar1 = *(char *)(lVar24 + _DAT_113083398), func_0x000107c61170(lVar24),
             cVar1 == '\x01')) goto LAB_102611c84;
        }
        puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x000107c45a48();
        func_0x000107c556e0(puVar4);
        func_0x000107c61170(puVar11);
        puVar11 = &UNK_11052af10;
        func_0x000107c613fc(&UNK_11052af10,0x18,7);
        func_0x000107c61614(puVar11 + 0x10);
        uStack_78 = 0x102614658;
        puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_90 = 0x42000000;
        puStack_88 = &UNK_1000f6b44;
        puStack_80 = &UNK_11052af28;
        ppuVar19 = &puStack_98;
        puStack_70 = puVar11;
        func_0x000107c60bc4(ppuVar19);
        func_0x000107c61574(puStack_70);
        func_0x000107c56770(puVar4);
        func_0x000107c60bd0(ppuVar19);
LAB_102611e9c:
        puVar11 = PTR_PTR_1126aacb8;
        func_0x000107c610f8(PTR_PTR_1126aacb8);
        func_0x000107c61174(puVar3);
        func_0x000107c61174(puVar4);
        func_0x000107c49520(puVar11);
        func_0x000107c61170(lVar22);
        func_0x000107c61170(lVar15);
        func_0x000107c61170(lVar21);
        func_0x000107c615e8(uVar14);
        func_0x000107c61170(puVar5);
        func_0x000107c61170(puVar6);
        func_0x000107c61170(puVar7);
        func_0x000107c61170(puVar8);
        func_0x000107c61170(puVar9);
        func_0x000107c61170(lVar12);
        func_0x000107c61170(puVar10);
        func_0x000107c61170(puVar3);
        func_0x000107c61170(puVar3);
        func_0x000107c61170(puVar4);
        func_0x000107c61170(puVar4);
        func_0x000107c615e8(lVar13);
        func_0x000107c61604(unaff_x20 + lVar2,puVar11);
        return;
      }
      func_0x000107c615e8(lVar13);
      func_0x000107c615e8(uVar14);
      func_0x000107c61170(puVar5);
    }
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar9);
    puVar8 = puVar4;
    puVar9 = puVar3;
  }
LAB_102611dbc:
  func_0x000107c61170(puVar8);
LAB_102611dc4:
  func_0x000107c61170(puVar9);
  return;
}



/* Entry: 102611f74; end: 1026120b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102611f74(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar5 = &puStack_60;
  lVar1 = *(long *)(*(long *)(unaff_x20 + _DAT_112eaffd0) + _DAT_112fecfb0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c4c458();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    lVar3 = lVar2;
    func_0x000107c5df90();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    puVar4 = &UNK_11052af10;
    func_0x000107c613fc(&UNK_11052af10,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    uStack_40 = 0x102614764;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_101b6a7e8;
    puStack_48 = &UNK_11052afa0;
    puStack_38 = puVar4;
    func_0x000107c60bc4(&puStack_60);
    func_0x000107c61574(puStack_38);
    lVar1 = lVar3;
    func_0x000107c5c320();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(lVar3);
  }
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112eb0020);
  *(long *)(unaff_x20 + _DAT_112eb0020) = lVar1;
  func_0x000107c61170(uVar6);
  return;
}



/* Entry: 1026120b4; end: 1026121ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026120b4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  lVar1 = *(long *)(*(long *)(unaff_x20 + _DAT_112eaffd0) + _DAT_112fecfb0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c4c358();
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000107c3d134();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    puVar4 = &UNK_11052af10;
    func_0x000107c613fc(&UNK_11052af10,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    pcStack_50 = FUN_10261475c;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    uStack_60 = 0x1026147d4;
    puStack_58 = &UNK_11052af78;
    puStack_48 = puVar4;
    func_0x000107c60bc4(&puStack_70);
    func_0x000107c61574(puStack_48);
    lVar2 = lVar3;
    func_0x000107c5c320();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(lVar3);
    uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112eb0028);
    *(long *)(unaff_x20 + _DAT_112eb0028) = lVar2;
    func_0x000107c61170(uVar6);
  }
  return;
}



/* Entry: 1026121f0; end: 10261228f;  */

/* WARNING: Possible PIC construction at 0x000102612278: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010261227c) */

void FUN_1026121f0(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = &UNK_11052af60;
  func_0x000107c613fc(&UNK_11052af60,0x20,7);
  *(undefined **)(puVar1 + 0x10) = &UNK_10dac4258;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  func_0x000107c6157c(param_1);
  uVar2 = 0x112d518a8;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  func_0x0001001ca524(0x11,0,0x3c,4,0,0,&UNK_10dac4260,puVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102612290; end: 1026122fb;  */

void FUN_102612290(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026122fc,uVar1,uVar2);
  return;
}



/* Entry: 1026122fc; end: 102612367;  */

void FUN_1026122fc(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x30));
  func_0x000107c61428(lVar1 + 0x10,unaff_x22 + 0x10,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_102612368();
    func_0x000107c61170(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x000102612364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(lVar1 == 0);
  return;
}



/* Entry: 102612368; end: 1026123e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102612368(void)

{
  long lVar1;
  code *pcVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  pcVar2 = *(code **)(unaff_x20 + _DAT_112eb0068);
  if (pcVar2 == (code *)0x0) {
    lVar1 = unaff_x20 + _DAT_112eaff78;
    func_0x000107c61618();
    if (lVar1 != 0) {
      func_0x000107c4c2c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
      return;
    }
    return;
  }
  uVar3 = ((undefined8 *)(unaff_x20 + _DAT_112eb0068))[1];
  func_0x000107c6157c(uVar3);
  (*pcVar2)();
  if (pcVar2 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar3);
    return;
  }
  return;
}



/* Entry: 1026123e4; end: 102612417; -[_TtC33MapChromeV2ServicesImplementation19MapChromeV2Provider mapChromeV2] */

void FUN_1026123e4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1026117e8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102612418; end: 1026124b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102612418(void)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  
  lVar2 = unaff_x20 + _DAT_112eaff70;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lVar4 = *(long *)(lVar2 + _DAT_1130831b0);
    lVar3 = lVar4;
    func_0x000107c61174();
    func_0x000107c61170(lVar2);
    if ((lVar4 != 0) &&
       (cVar1 = *(char *)(lVar3 + _DAT_113083370), func_0x000107c61170(lVar3), cVar1 == '\x01')) {
      func_0x000107c61174(*(undefined8 *)(unaff_x20 + _DAT_112eaffc8));
    }
  }
  return;
}



/* Entry: 1026124b8; end: 1026124eb; -[_TtC33MapChromeV2ServicesImplementation19MapChromeV2Provider headerItem] */

void FUN_1026124b8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102612418();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1026124ec; end: 1026126bb;  */

/* WARNING: Possible PIC construction at 0x00010261252c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026125a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026125f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010261261c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010261265c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102612620) */
/* WARNING: Removing unreachable block (ram,0x000102612634) */
/* WARNING: Removing unreachable block (ram,0x000102612648) */
/* WARNING: Removing unreachable block (ram,0x0001026125fc) */
/* WARNING: Removing unreachable block (ram,0x000102612600) */
/* WARNING: Removing unreachable block (ram,0x0001026125ac) */
/* WARNING: Removing unreachable block (ram,0x0001026125b0) */
/* WARNING: Removing unreachable block (ram,0x000102612530) */
/* WARNING: Removing unreachable block (ram,0x000102612544) */
/* WARNING: Removing unreachable block (ram,0x000102612680) */
/* WARNING: Removing unreachable block (ram,0x00010261255c) */
/* WARNING: Removing unreachable block (ram,0x000107c53d00) */
/* WARNING: Removing unreachable block (ram,0x00010c188540) */
/* WARNING: Removing unreachable block (ram,0x000102612660) */
/* WARNING: Removing unreachable block (ram,0x00010261266c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026124ec(ulong param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar2 = _DAT_112eaff70;
  if ((param_1 & 1) != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112eb0068);
    lVar2 = *plVar1;
    lVar3 = plVar1[1];
    *plVar1 = param_2;
    plVar1[1] = param_3;
    func_0x000100b64c10(param_2,param_3);
code_r0x00010058d43c:
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_release_11034f4c0)(lVar3);
      return;
    }
    return;
  }
  lVar3 = unaff_x20 + _DAT_112eaff70;
  func_0x000107c61618();
  if (lVar3 == 0) {
    lVar3 = unaff_x20 + lVar2;
    func_0x000107c61618();
    if (lVar3 == 0) {
      plVar1 = (long *)(unaff_x20 + _DAT_112eb0068);
      lVar2 = *plVar1;
      lVar3 = plVar1[1];
      *plVar1 = 0;
      plVar1[1] = 0;
      goto code_r0x00010058d43c;
    }
    func_0x000107c61174(*(undefined8 *)(lVar3 + _DAT_1130831b0));
  }
  else {
    func_0x000107c61174(*(undefined8 *)(lVar3 + _DAT_1130831b0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1026126bc; end: 10261274b; -[_TtC33MapChromeV2ServicesImplementation19MapChromeV2Provider setCloseableHeaderButton:onCloseButtonTapped:] */

void FUN_1026126bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c60bc4();
  if (param_4 == 0) {
    puVar1 = (undefined *)0x0;
    uVar2 = 0;
  }
  else {
    puVar1 = &UNK_11052aee8;
    func_0x000107c613fc(&UNK_11052aee8,0x18,7);
    *(long *)(puVar1 + 0x10) = param_4;
    uVar2 = 0x10261464c;
  }
  func_0x000107c61174(param_1);
  FUN_1026124ec(param_3,uVar2,puVar1);
  func_0x00010058d43c(uVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10261274c; end: 102612b43;  */

/* WARNING: Possible PIC construction at 0x000102612824: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102612ad4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102612afc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102612a08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102612a40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102612a0c) */
/* WARNING: Removing unreachable block (ram,0x000102612ad8) */
/* WARNING: Removing unreachable block (ram,0x000102612828) */
/* WARNING: Removing unreachable block (ram,0x000102612874) */
/* WARNING: Removing unreachable block (ram,0x000102612878) */
/* WARNING: Removing unreachable block (ram,0x00010261287c) */
/* WARNING: Removing unreachable block (ram,0x000102612880) */
/* WARNING: Removing unreachable block (ram,0x000102612884) */
/* WARNING: Removing unreachable block (ram,0x000102612838) */
/* WARNING: Removing unreachable block (ram,0x00010261283c) */
/* WARNING: Removing unreachable block (ram,0x000102612844) */
/* WARNING: Removing unreachable block (ram,0x000102612848) */
/* WARNING: Removing unreachable block (ram,0x00010261284c) */
/* WARNING: Removing unreachable block (ram,0x0001026128a8) */
/* WARNING: Removing unreachable block (ram,0x000102612928) */
/* WARNING: Removing unreachable block (ram,0x0001026129b0) */
/* WARNING: Removing unreachable block (ram,0x000102612a58) */
/* WARNING: Removing unreachable block (ram,0x0001026129b4) */
/* WARNING: Removing unreachable block (ram,0x000102612934) */
/* WARNING: Removing unreachable block (ram,0x000102612ad0) */
/* WARNING: Removing unreachable block (ram,0x000102612a44) */
/* WARNING: Removing unreachable block (ram,0x000102612ae8) */
/* WARNING: Removing unreachable block (ram,0x000102612a54) */
/* WARNING: Removing unreachable block (ram,0x000102612b00) */

void FUN_10261274c(undefined8 param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_58;
  
  puVar2 = PTR_PTR_1126aac90;
  func_0x000107c610f8(PTR_PTR_1126aac90);
  func_0x000107c453e4();
  if (param_2 < 2) {
    if (param_2 == 0) {
      uVar4 = 0xe400000000000000;
      uVar3 = 0x79617274;
    }
    else {
      if (param_2 != 1) {
LAB_102612b20:
        lStack_58 = param_2;
        func_0x000107c60614(&UNK_1106a3fb0,&lStack_58,&UNK_1106a3fb0,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102612b44);
        (*pcVar1)();
      }
      uVar4 = 0xeb00000000726564;
      uVar3 = 0x696c735f6d6f6f7a;
    }
  }
  else if (param_2 == 2) {
    uVar4 = 0xe500000000000000;
    uVar3 = 0x65626f6c67;
  }
  else {
    if (param_2 != 3) goto LAB_102612b20;
    uVar4 = 0xe700000000000000;
    uVar3 = 0x676e696e6e6170;
  }
  func_0x000107c5fadc(uVar3,uVar4);
  func_0x000107c6142c(uVar4);
  func_0x000107c529d8(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 102612b44; end: 102612b87; -[_TtC33MapChromeV2ServicesImplementation19MapChromeV2Provider setVisibleComponents:source:] */

void FUN_102612b44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174();
  FUN_10261274c(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102612b88; end: 102612bf7;  */

void FUN_102612b88(undefined8 param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x50) = param_2;
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x48) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102612bf8,uVar1,uVar2);
  return;
}



/* Entry: 102612bf8; end: 102612cd3;  */

void FUN_102612bf8(void)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long unaff_x22;
  undefined8 uVar6;
  
  uVar2 = *(undefined1 *)(unaff_x22 + 0x50);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x48));
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar4 = &UNK_11052ae98;
  func_0x000107c613fc(&UNK_11052ae98,0x19,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  puVar4[0x18] = uVar2;
  *(code **)(unaff_x22 + 0x30) = FUN_102614600;
  *(undefined **)(unaff_x22 + 0x38) = puVar4;
  puVar5 = (undefined8 *)(unaff_x22 + 0x10);
  *puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
  *(undefined **)(unaff_x22 + 0x20) = &UNK_1000f6b44;
  *(undefined **)(unaff_x22 + 0x28) = &UNK_11052aeb0;
  func_0x000107c60bc4();
  uVar6 = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x000107c61174(uVar1);
  func_0x000107c61574(uVar6);
  func_0x000107c3dccc(0x3fc999999999999a,puVar3);
  func_0x000107c60bd0(puVar5);
                    /* WARNING: Could not recover jumptable at 0x000102612cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102612cd4; end: 102612ce3; -[_TtC33MapChromeV2ServicesImplementation19MapChromeV2Provider onLayoutChangedObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102612cd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112eb0008));
  return;
}



/* Entry: 102612ce4; end: 102612e07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102612ce4(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  code *pcVar3;
  undefined1 auStack_58 [24];
  
  func_0x000107c61604(unaff_x20 + _DAT_112eaff78,param_1);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112eaffa0))[1];
  func_0x000107c614f0(*(undefined8 *)(unaff_x20 + _DAT_112eaffa0));
  pcVar3 = *(code **)(lVar1 + 0x10);
  func_0x000107c615f0(param_1);
  (*pcVar3)();
  lVar1 = _DAT_112eafab0;
  lVar2 = *(long *)(unaff_x20 + _DAT_112eaffa8);
  func_0x000107c61428(lVar2 + _DAT_112eafab0,auStack_58,1,0);
  func_0x000107c61604(lVar2 + lVar1,param_1);
  func_0x000107c61604(*(long *)(unaff_x20 + _DAT_112eaffb0) + _DAT_112eafd50,param_1);
  func_0x000107c61604(*(long *)(unaff_x20 + _DAT_112eaffb8) + _DAT_112eafc98,param_1);
  func_0x000107c61604(*(long *)(unaff_x20 + _DAT_112eaff90) + _DAT_112eafc08,param_1);
  return;
}



/* Entry: 102612e08; end: 102612e4f; -[_TtC33MapChromeV2ServicesImplementation19MapChromeV2Provider setDelegate:] */

void FUN_102612e08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_102612ce4(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102612e50; end: 102612ebf;  */

void FUN_102612e50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x28) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102612ec0,uVar1,uVar2);
  return;
}



/* Entry: 102612ec0; end: 102612f2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102612ec0(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x20);
  lVar3 = *(long *)(unaff_x22 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x18);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x28));
  puVar1 = (undefined8 *)(lVar3 + _DAT_112eaffa0);
  uVar5 = *puVar1;
  lVar3 = puVar1[1];
  func_0x000107c614f0(uVar5);
  (**(code **)(lVar3 + 0x20))(uVar4,uVar2,uVar5,lVar3);
                    /* WARNING: Could not recover jumptable at 0x000102612f2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102612f30; end: 10261302f; -[_TtC33MapChromeV2ServicesImplementation19MapChromeV2Provider presentSearchTrayWithSearchQuery:] */

void FUN_102612f30(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  puVar1 = &UNK_11052ada8;
  func_0x000107c613fc(&UNK_11052ada8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(long *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  puVar2 = &UNK_11052add0;
  func_0x000107c613fc(&UNK_11052add0,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10dac4210;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c61434(param_2);
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  uVar3 = 0x11;
  func_0x0001001ca524(0x11,0,0x3c,4,0,0,&UNK_10dac4218,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar3);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102613030; end: 10261314f;  */

/* WARNING: Possible PIC construction at 0x00010261312c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102613130) */

void FUN_102613030(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_1026140cc();
  func_0x000107c5cbd8(param_3);
  uVar3 = param_1;
  func_0x000107c4acd4(param_3);
  uVar4 = uVar3;
  func_0x000107c3ec10(param_3);
  uVar5 = uVar4;
  func_0x000107c50888(param_3);
  puVar1 = &UNK_11052ad58;
  func_0x000107c613fc(&UNK_11052ad58,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  *(undefined8 *)(puVar1 + 0x28) = uVar3;
  *(undefined8 *)(puVar1 + 0x30) = uVar4;
  *(undefined8 *)(puVar1 + 0x38) = uVar5;
  puVar2 = &UNK_11052ad80;
  func_0x000107c613fc(&UNK_11052ad80,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10dac41f8;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_2);
  func_0x0001001ca524(0x11,0,0x3c,4,0,0,&UNK_10dac4200,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 102613150; end: 1026131c3;  */

void FUN_102613150(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
  *(undefined8 *)(unaff_x22 + 0x38) = param_4;
  *(undefined8 *)(unaff_x22 + 0x20) = param_1;
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
  *(undefined8 *)(unaff_x22 + 0x10) = param_5;
  *(undefined8 *)(unaff_x22 + 0x18) = param_6;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x40) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026131c4,uVar1,uVar2);
  return;
}



/* Entry: 1026131c4; end: 102613273;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026131c4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar2 = *(long *)(unaff_x22 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x30);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
  uVar4 = *(undefined8 *)(lVar2 + _DAT_112eb0048);
  *(undefined8 *)(lVar2 + _DAT_112eb0048) = uVar5;
  func_0x000107c61174(uVar5);
  func_0x000107c61170(uVar4);
  puVar1 = (undefined8 *)(lVar2 + _DAT_112eb0050);
  puVar1[1] = uVar9;
  *puVar1 = uVar8;
  puVar1[3] = uVar7;
  puVar1[2] = uVar6;
  uVar5 = *(undefined8 *)(lVar2 + _DAT_112eb0008);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c4d664(uVar5,param_2,puVar3);
  func_0x000107c61170(puVar3);
                    /* WARNING: Could not recover jumptable at 0x000102613270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102613274; end: 1026132ff; -[_TtC33MapChromeV2ServicesImplementation19MapChromeV2Provider onLayoutCompleteWithComponentFrames:edgeInsets:] */

void FUN_102613274(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_10261477c(0,0x112eb00a0,&PTR_PTR_1126aac88);
  func_0x000107c5fc54(param_3,uVar1);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_102613030(param_3,param_4);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 102613300; end: 102613437;  */

/* WARNING: Possible PIC construction at 0x000102613414: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102613418) */

void FUN_102613300(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  func_0x000107c5cbf8();
  uVar4 = param_1;
  func_0x000107c5cbf8(param_2);
  uVar5 = uVar4;
  func_0x000107c3ec30(param_2);
  uVar6 = uVar5;
  func_0x000107c3ec30(param_2);
  uVar1 = 0;
  func_0x0001038ba2e0();
  func_0x000107c610f8();
  func_0x0001038ba280(param_1,uVar4,uVar5,uVar6);
  puVar2 = &UNK_11052ad08;
  func_0x000107c613fc(&UNK_11052ad08,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar2 + 0x18) = uVar1;
  puVar3 = &UNK_11052ad30;
  func_0x000107c613fc(&UNK_11052ad30,0x20,7);
  *(undefined **)(puVar3 + 0x10) = &UNK_10dac41e0;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  func_0x000107c61174();
  func_0x000107c61174(uVar1);
  func_0x0001001ca524(0x11,0,0x3c,4,0,0,&UNK_10dac41e8,puVar3,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar3);
  return;
}



/* Entry: 102613438; end: 1026134a3;  */

void FUN_102613438(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026134a4,uVar1,uVar2);
  return;
}



/* Entry: 1026134a4; end: 10261352b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026134a4(void)

{
  long lVar1;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x20));
  lVar2 = lVar2 + _DAT_112eaff80;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x000107c5c42c();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar1 != 0) {
      FUN_102610fe4(*(undefined8 *)(unaff_x22 + 0x18),lVar1);
      func_0x000107c61170(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000102613528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10261352c; end: 10261357b; -[_TtC33MapChromeV2ServicesImplementation19MapChromeV2Provider onInitialRenderCompleteWithZoomSliderInsets:] */

/* WARNING: Possible PIC construction at 0x000102613564: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102613568) */

void FUN_10261352c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102613300(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10261357c; end: 102613603;  */

void FUN_10261357c(undefined8 param_1,undefined8 param_2)

{
  func_0x000103b3598c(FUN_102613604,0,0x10261476c,param_2,FUN_1026139b8,0,0x1026139bc,0,0x1026139c0,
                      0,0x1026139c4,0,0x1026139c8,0,0x102614774,param_2);
  return;
}



/* Entry: 102613604; end: 102613607;  */

void FUN_102613604(void)

{
  return;
}



/* Entry: 102613608; end: 10261365f;  */

void FUN_102613608(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_102613660();
    FUN_1026137c0();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102613660; end: 1026137bf;  */

/* WARNING: Possible PIC construction at 0x0001026136c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102612824: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102612ad4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102612afc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102612a08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102612a40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102613770: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102612a44) */
/* WARNING: Removing unreachable block (ram,0x000102612a54) */
/* WARNING: Removing unreachable block (ram,0x000102612a0c) */
/* WARNING: Removing unreachable block (ram,0x000102612ad8) */
/* WARNING: Removing unreachable block (ram,0x000102612b00) */
/* WARNING: Removing unreachable block (ram,0x000102612ae8) */
/* WARNING: Removing unreachable block (ram,0x000102612828) */
/* WARNING: Removing unreachable block (ram,0x000102612874) */
/* WARNING: Removing unreachable block (ram,0x000102612878) */
/* WARNING: Removing unreachable block (ram,0x00010261287c) */
/* WARNING: Removing unreachable block (ram,0x000102612880) */
/* WARNING: Removing unreachable block (ram,0x000102612884) */
/* WARNING: Removing unreachable block (ram,0x000102612838) */
/* WARNING: Removing unreachable block (ram,0x00010261283c) */
/* WARNING: Removing unreachable block (ram,0x000102612844) */
/* WARNING: Removing unreachable block (ram,0x000102612848) */
/* WARNING: Removing unreachable block (ram,0x00010261284c) */
/* WARNING: Removing unreachable block (ram,0x0001026128a8) */
/* WARNING: Removing unreachable block (ram,0x000102612928) */
/* WARNING: Removing unreachable block (ram,0x0001026129b0) */
/* WARNING: Removing unreachable block (ram,0x000102612a58) */
/* WARNING: Removing unreachable block (ram,0x0001026129b4) */
/* WARNING: Removing unreachable block (ram,0x000102612934) */
/* WARNING: Removing unreachable block (ram,0x000102612ad0) */
/* WARNING: Removing unreachable block (ram,0x0001026136c4) */
/* WARNING: Removing unreachable block (ram,0x0001026136e8) */
/* WARNING: Removing unreachable block (ram,0x0001026136ec) */
/* WARNING: Removing unreachable block (ram,0x000102613710) */
/* WARNING: Removing unreachable block (ram,0x000102613714) */
/* WARNING: Removing unreachable block (ram,0x0001026136f0) */
/* WARNING: Removing unreachable block (ram,0x0001026136f4) */
/* WARNING: Removing unreachable block (ram,0x00010261372c) */
/* WARNING: Removing unreachable block (ram,0x000102613730) */
/* WARNING: Removing unreachable block (ram,0x00010261370c) */
/* WARNING: Removing unreachable block (ram,0x000102613774) */
/* WARNING: Removing unreachable block (ram,0x00010261377c) */
/* WARNING: Removing unreachable block (ram,0x00010261274c) */
/* WARNING: Removing unreachable block (ram,0x0001026127a0) */
/* WARNING: Removing unreachable block (ram,0x0001026127e4) */
/* WARNING: Removing unreachable block (ram,0x0001026127ec) */
/* WARNING: Removing unreachable block (ram,0x0001026127a8) */
/* WARNING: Removing unreachable block (ram,0x00010261278c) */
/* WARNING: Removing unreachable block (ram,0x0001026127bc) */
/* WARNING: Removing unreachable block (ram,0x000102612b20) */
/* WARNING: Removing unreachable block (ram,0x0001026127c4) */
/* WARNING: Removing unreachable block (ram,0x000102612790) */
/* WARNING: Removing unreachable block (ram,0x000102612800) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102613660(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + _DAT_112eaffd0) + _DAT_112fecfb0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c4c458();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1026137c0; end: 1026139b7;  */

/* WARNING: Possible PIC construction at 0x000102613870: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102613874) */
/* WARNING: Removing unreachable block (ram,0x000102613880) */
/* WARNING: Removing unreachable block (ram,0x000102613884) */
/* WARNING: Removing unreachable block (ram,0x000102613888) */
/* WARNING: Removing unreachable block (ram,0x000102613898) */
/* WARNING: Removing unreachable block (ram,0x00010261389c) */
/* WARNING: Removing unreachable block (ram,0x0001026138c8) */
/* WARNING: Removing unreachable block (ram,0x0001026138cc) */
/* WARNING: Removing unreachable block (ram,0x0001026138d0) */
/* WARNING: Removing unreachable block (ram,0x0001026138a0) */
/* WARNING: Removing unreachable block (ram,0x0001026138a8) */
/* WARNING: Removing unreachable block (ram,0x0001026138ac) */
/* WARNING: Removing unreachable block (ram,0x0001026138d4) */
/* WARNING: Removing unreachable block (ram,0x0001026138d8) */
/* WARNING: Removing unreachable block (ram,0x00010261390c) */
/* WARNING: Removing unreachable block (ram,0x000102613924) */
/* WARNING: Removing unreachable block (ram,0x000102613930) */
/* WARNING: Removing unreachable block (ram,0x000102613940) */
/* WARNING: Removing unreachable block (ram,0x0001026138dc) */
/* WARNING: Removing unreachable block (ram,0x0001026138f0) */
/* WARNING: Removing unreachable block (ram,0x000102613904) */
/* WARNING: Removing unreachable block (ram,0x000102613958) */
/* WARNING: Removing unreachable block (ram,0x0001026138b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026137c0(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + _DAT_112eaffe8) + _DAT_11302eac8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    if (*(char *)(unaff_x20 + _DAT_112eb0038) == '\x01') {
      lVar2 = *(long *)(*(long *)(unaff_x20 + _DAT_112eaffd0) + _DAT_112fecfb0);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar2 != 0) {
        lVar1 = lVar2;
        func_0x000107c4c458();
        func_0x000107c61180();
        func_0x000107c61170(lVar2);
        func_0x000107c5ea20(lVar1);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 1026139b8; end: 1026139cb;  */

void FUN_1026139b8(void)

{
  return;
}



/* Entry: 1026139cc; end: 102613abf;  */

void FUN_1026139cc(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_1026137c0();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102613ac0; end: 102613b1f; -[_TtC33MapChromeV2ServicesImplementation19MapChromeV2Provider init] */

void FUN_102613ac0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapChromeV2ServicesImplementation.MapChromeV2Provider",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102613aec);
  (*pcVar1)();
}



/* Entry: 102613b20; end: 102613ceb; -[_TtC33MapChromeV2ServicesImplementation19MapChromeV2Provider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102613b6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102613b8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102613bac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102613bcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102613bec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102613c0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102613c2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102613c5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102613c7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102613c9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102613cbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102613ca0) */
/* WARNING: Removing unreachable block (ram,0x000102613c80) */
/* WARNING: Removing unreachable block (ram,0x000102613c60) */
/* WARNING: Removing unreachable block (ram,0x000102613c30) */
/* WARNING: Removing unreachable block (ram,0x000102613c10) */
/* WARNING: Removing unreachable block (ram,0x000102613bf0) */
/* WARNING: Removing unreachable block (ram,0x000102613bd0) */
/* WARNING: Removing unreachable block (ram,0x000102613bb0) */
/* WARNING: Removing unreachable block (ram,0x000102613b90) */
/* WARNING: Removing unreachable block (ram,0x000102613b70) */
/* WARNING: Removing unreachable block (ram,0x000102613cc0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102613b20(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112eaff70);
  FUN_102607080(param_1 + _DAT_112eaff78);
  func_0x000107c61610(param_1 + _DAT_112eaff80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eaff88));
  return;
}



/* Entry: 102613cec; end: 102613d0b;  */

void FUN_102613cec(void)

{
  func_0x000107c61168(&PTR_PTR_1128547d8);
  return;
}



/* Entry: 102613d0c; end: 102613d0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102613d0c(void)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  pcVar2 = *(code **)(unaff_x20 + _DAT_112eb0068);
  if (pcVar2 == (code *)0x0) {
    lVar1 = unaff_x20 + _DAT_112eaff78;
    func_0x000107c61618();
    if (lVar1 != 0) {
      func_0x000107c4c2c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
      return;
    }
    return;
  }
  uVar3 = ((undefined8 *)(unaff_x20 + _DAT_112eb0068))[1];
  func_0x000107c6157c(uVar3);
  (*pcVar2)();
  if (pcVar2 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar3);
    return;
  }
  return;
}



/* Entry: 102613d10; end: 102613d5f;  */

void FUN_102613d10(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1026147dc;
  plVar3[2] = lVar2;
  plVar3[3] = lVar1;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[4] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026134a4,lVar1,lVar2);
  return;
}



/* Entry: 102613d60; end: 102613dcf;  */

void FUN_102613d60(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1026147d8;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 102613dd0; end: 102613f8b;  */

ulong FUN_102613dd0(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102613eb4);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102613eb8);
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
  FUN_10261477c(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102613f8c);
  (*pcVar2)();
}



/* Entry: 102613f8c; end: 102613fa7;  */

void FUN_102613f8c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_102613fa8();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 102613fa8; end: 1026140cb;  */

undefined * FUN_102613fa8(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1026140cc);
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
    FUN_1026115b8();
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
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
    func_0x0001038b9ff8(0);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 1026140cc; end: 10261427b;  */

void FUN_1026140cc(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (param_2 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60480();
  }
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    FUN_102613f8c(0,uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10261427c);
      (*pcVar2)();
    }
    uVar6 = 0;
    do {
      if ((param_2 & 0xc000000000000001) == 0) {
        uVar3 = *(ulong *)(param_2 + uVar6 * 8 + 0x20);
        func_0x000107c61174(uVar3);
      }
      else {
        uVar3 = uVar6;
        FUN_102613dd0(uVar6,param_2,&PTR_PTR_1126aac88,0x112eb00a0);
      }
      func_0x000107c5e9e0();
      uVar7 = param_1;
      func_0x000107c5e9f0(uVar3);
      uVar8 = uVar7;
      func_0x000107c5e304(uVar3);
      uVar9 = uVar8;
      func_0x000107c44d98(uVar3);
      uVar4 = 0;
      func_0x0001038b9ff8();
      func_0x000107c610f8();
      func_0x0001038b9f98(param_1,uVar7,uVar8,uVar9);
      func_0x000107c61170(uVar3);
      uVar3 = *(ulong *)(puVar1 + 0x10);
      if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar3) {
        FUN_102613f8c(1 < *(ulong *)(puVar1 + 0x18),uVar3 + 1,1);
      }
      uVar6 = uVar6 + 1;
      *(ulong *)(puVar1 + 0x10) = uVar3 + 1;
      *(undefined8 *)(puVar1 + uVar3 * 8 + 0x20) = uVar4;
    } while (uVar5 != uVar6);
  }
  func_0x0001038ba124(0);
  func_0x000107c610f8();
  func_0x0001038ba0e8(puVar1);
  return;
}



/* Entry: 10261427c; end: 1026142fb;  */

void FUN_10261427c(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  lVar5 = *(long *)(unaff_x20 + 0x28);
  lVar6 = *(long *)(unaff_x20 + 0x30);
  lVar7 = *(long *)(unaff_x20 + 0x38);
  plVar3 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1026142fc;
  plVar3[6] = lVar6;
  plVar3[7] = lVar7;
  plVar3[4] = lVar4;
  plVar3[5] = lVar5;
  plVar3[2] = lVar2;
  plVar3[3] = lVar1;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[8] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026131c4,lVar1,lVar2);
  return;
}



/* Entry: 1026142fc; end: 102614337;  */

void FUN_1026142fc(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102614334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102614338; end: 1026143a7;  */

void FUN_102614338(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1026147e0;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 1026143a8; end: 102614407;  */

void FUN_1026143a8(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1026147e4;
  plVar3[3] = lVar1;
  plVar3[4] = lVar4;
  plVar3[2] = lVar2;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[5] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102612ec0,lVar1,lVar2);
  return;
}



/* Entry: 102614408; end: 102614477;  */

void FUN_102614408(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1026147e8;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 102614478; end: 1026144cb;  */

void FUN_102614478(void)

{
  undefined1 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined1 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1026147ec;
  *(undefined1 *)(plVar3 + 10) = uVar1;
  plVar3[8] = lVar4;
  lVar2 = 0;
  func_0x000107c5fcec();
  lVar4 = lVar2;
  func_0x000107c5fce8();
  plVar3[9] = lVar4;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar2,lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102612bf8,lVar2,lVar4);
  return;
}



/* Entry: 1026144cc; end: 10261453b;  */

void FUN_1026144cc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1026147f0;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 10261453c; end: 10261458f;  */

void FUN_10261453c(void)

{
  undefined1 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined1 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1026147f4;
  *(undefined1 *)(plVar3 + 10) = uVar1;
  plVar3[8] = lVar4;
  lVar2 = 0;
  func_0x000107c5fcec();
  lVar4 = lVar2;
  func_0x000107c5fce8();
  plVar3[9] = lVar4;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar2,lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102612bf8,lVar2,lVar4);
  return;
}



/* Entry: 102614590; end: 1026145ff;  */

void FUN_102614590(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1026147f8;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 102614600; end: 10261465f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102614600(void)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_112eaffc8);
  if (lVar1 != 0) {
    uVar2 = 0x3ff0000000000000;
    if (*(char *)(unaff_x20 + 0x18) == '\0') {
      uVar2 = 0;
    }
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar2,lVar1,PTR_s_setAlpha__112637810);
    return;
  }
  return;
}



/* Entry: 102614660; end: 1026146eb;  */

void FUN_102614660(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  plVar3 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1026146a8;
  plVar3[5] = unaff_x20;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[6] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026122fc,lVar1,lVar2);
  return;
}



/* Entry: 1026146ec; end: 10261475b;  */

void FUN_1026146ec(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1026147fc;
  (*(code *)&UNK_100ffbb74)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 10261475c; end: 10261477b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10261475c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    puVar1 = (undefined8 *)(lVar2 + _DAT_112eb0040);
    *puVar1 = *(undefined8 *)(param_1 + _DAT_112fed420);
    *(undefined1 *)(puVar1 + 1) = 0;
    func_0x000107c61170();
  }
  func_0x000107c61428(unaff_x20 + 0x10,auStack_50,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    FUN_1026137c0();
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 10261477c; end: 1026147bb;  */

void FUN_10261477c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1026147bc; end: 1026147ff;  */

void FUN_1026147bc(long param_1,long param_2)

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



/* Entry: 102614800; end: 102614bc7;  */

void FUN_102614800(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb00b0,&UNK_10dac4270);
  puVar1 = &UNK_11052afe0;
  func_0x000107c613fc(&UNK_11052afe0,0x48,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(FUN_102614bc8,puVar1);
  return;
}



/* Entry: 102614bc8; end: 102614beb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102614bc8(long *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  long lVar12;
  long unaff_x20;
  undefined *puStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  uVar11 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000100083b20(&lStack_68,*(undefined8 *)(unaff_x20 + 0x10),uVar11,
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40));
  uVar2 = *(undefined8 *)(lStack_68 + _DAT_112fcd5d8);
  func_0x000107c61174();
  func_0x000107c61170(lStack_68);
  func_0x000100083b20(&lStack_70);
  lVar3 = lStack_70;
  lVar8 = lStack_70;
  func_0x000107c4c3ac();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  lVar3 = lVar8;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar8);
  func_0x000100083b20(&lStack_70);
  uVar4 = *(undefined8 *)(lStack_70 + _DAT_113083f78);
  func_0x000107c61174();
  func_0x000107c61170(lStack_70);
  uVar5 = uVar4;
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  uVar4 = uVar5;
  func_0x000107c5faec();
  func_0x000107c61170(uVar5);
  func_0x000100083b20(&lStack_78);
  uVar6 = *(undefined8 *)(lStack_78 + _DAT_112fee5d8);
  func_0x000107c61174();
  func_0x000107c61170(lStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&lStack_90);
  uVar7 = *(undefined8 *)(lStack_90 + _DAT_112eb73e0);
  func_0x000107c61174();
  func_0x000107c61170(lStack_90);
  lVar8 = 0;
  FUN_1026052b4();
  func_0x000107c613fc();
  *(undefined8 *)(lVar8 + 0x58) = 0;
  *(undefined8 *)(lVar8 + 0x60) = 0;
  *(undefined8 *)(lVar8 + 0x50) = 0;
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_10260260c();
  *(undefined **)(lVar8 + 0x68) = puVar9;
  *(undefined **)(lVar8 + 0x78) = puVar1;
  puStack_98 = puVar1;
  func_0x0001000285a8(0x112eaf778,&UNK_10dac3a70);
  func_0x000107c613fc();
  ppuVar10 = &puStack_98;
  func_0x00010042e6a0();
  *(undefined ***)(lVar8 + 0x80) = ppuVar10;
  *(undefined8 *)(lVar8 + 0x10) = uVar2;
  *(long *)(lVar8 + 0x18) = lVar3;
  *(undefined8 *)(lVar8 + 0x28) = uVar4;
  *(undefined8 *)(lVar8 + 0x30) = uVar11;
  *(undefined8 *)(lVar8 + 0x38) = uStack_80;
  *(undefined8 *)(lVar8 + 0x40) = uStack_88;
  *(undefined8 *)(lVar8 + 0x48) = uVar7;
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar7);
  func_0x000107c615f0(lVar3);
  func_0x000107c615f0(uStack_80);
  uVar11 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar5 = uStack_80;
  func_0x0001090218d0();
  *(undefined8 *)(lVar8 + 0x70) = uVar5;
  lVar12 = 0;
  FUN_102602f60();
  func_0x000107c613fc();
  *(undefined8 *)(lVar12 + 0x10) = uVar6;
  *(long *)(lVar8 + 0x20) = lVar12;
  func_0x000107c61174(uVar6);
  FUN_1026031f8();
  FUN_102603300();
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(lVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c615e8(uStack_80);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar7);
  *param_1 = lVar8;
  param_1[1] = (long)&PTR_DAT_110529f40;
  return;
}



/* Entry: 102614bec; end: 102614dbf;  */

void FUN_102614bec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb00b8,&UNK_10dac42b0);
  puVar1 = &UNK_11052b028;
  func_0x000107c613fc(&UNK_11052b028,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_102614dc0,puVar1);
  return;
}



/* Entry: 102614dc0; end: 102614ddb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102614dc0(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  func_0x000100083b20(&lStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  uVar2 = *(undefined8 *)(lStack_48 + _DAT_112fecfb0);
  func_0x000107c61174();
  func_0x000107c61170(lStack_48);
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  lVar3 = 0;
  FUN_102606cd8();
  lVar4 = lVar3;
  func_0x000107c610f8();
  func_0x000107c61614(lVar4 + _DAT_112eafa58,0);
  *(undefined8 *)(lVar4 + _DAT_112eafa60) = 0;
  *(undefined8 *)(lVar4 + _DAT_112eafa68) = uVar2;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112eafa70);
  puVar1[1] = uStack_58;
  *puVar1 = uStack_60;
  *(undefined8 *)(lVar4 + _DAT_112eafa78) = uStack_68;
  *(undefined8 *)(lVar4 + _DAT_112eafa80) = uStack_70;
  plVar5 = &lStack_80;
  lStack_80 = lVar4;
  lStack_78 = lVar3;
  func_0x000107c61154(plVar5,PTR_s_init_1125d9248);
  *param_1 = (long)plVar5;
  param_1[1] = (long)&PTR_DAT_11052a000;
  return;
}



/* Entry: 102614ddc; end: 102614e6f;  */

void FUN_102614ddc(undefined8 param_1)

{
  func_0x0001000285a8(0x112eb00c0,&UNK_10dac42f0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102614e70,param_1);
  return;
}



/* Entry: 102614e70; end: 102614e77;  */

void FUN_102614e70(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 unaff_x20;
  
  func_0x0001000ad7c4();
  uVar1 = 0;
  func_0x0001038b9128(0);
  func_0x000107c610f8();
  func_0x0001038b9014(unaff_x20,uVar1);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 102614e78; end: 102615edf;  */

void FUN_102614e78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb00c8,&UNK_10dac42f8);
  puVar1 = &UNK_11052b070;
  func_0x000107c613fc(&UNK_11052b070,0xd8,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  *(undefined8 *)(puVar1 + 0x18) = param_6;
  *(undefined8 *)(puVar1 + 0x20) = param_7;
  *(undefined8 *)(puVar1 + 0x28) = param_8;
  *(undefined8 *)(puVar1 + 0x30) = param_9;
  *(undefined8 *)(puVar1 + 0x38) = param_3;
  *(undefined8 *)(puVar1 + 0x40) = param_4;
  *(undefined8 *)(puVar1 + 0x48) = param_24;
  *(undefined8 *)(puVar1 + 0x50) = param_25;
  *(undefined8 *)(puVar1 + 0x58) = param_12;
  *(undefined8 *)(puVar1 + 0x60) = param_19;
  *(undefined8 *)(puVar1 + 0x68) = param_16;
  *(undefined8 *)(puVar1 + 0x70) = param_23;
  *(undefined8 *)(puVar1 + 0x78) = param_13;
  *(undefined8 *)(puVar1 + 0x80) = param_14;
  *(undefined8 *)(puVar1 + 0x88) = param_15;
  *(undefined8 *)(puVar1 + 0x90) = param_18;
  *(undefined8 *)(puVar1 + 0x98) = param_10;
  *(undefined8 *)(puVar1 + 0xa0) = param_11;
  *(undefined8 *)(puVar1 + 0xa8) = param_22;
  *(undefined8 *)(puVar1 + 0xb0) = param_20;
  *(undefined8 *)(puVar1 + 0xb8) = param_17;
  *(undefined8 *)(puVar1 + 0xc0) = param_2;
  *(undefined8 *)(puVar1 + 200) = param_1;
  *(undefined8 *)(puVar1 + 0xd0) = param_21;
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_21);
  func_0x0001000823a8(FUN_102615ee0,puVar1);
  return;
}



/* Entry: 102615ee0; end: 102615f33;  */

void FUN_102615ee0(void)

{
  long unaff_x20;
  
  func_0x0001026150a8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                      *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                      *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                      *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                      *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                      *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                      *(undefined8 *)(unaff_x20 + 0xd0));
  return;
}



/* Entry: 102615f34; end: 102615f53;  */

undefined1  [16] FUN_102615f34(void)

{
  return ZEXT816(0x11052b098);
}



/* Entry: 102615f54; end: 1026160a7;  */

void FUN_102615f54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb00d0,&UNK_10dac4350);
  puVar1 = &UNK_11052b180;
  func_0x000107c613fc(&UNK_11052b180,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(0x102615fec,puVar1);
  return;
}



/* Entry: 1026160a8; end: 1026160b7;  */

undefined1  [16] FUN_1026160a8(void)

{
  return ZEXT816(0x11052b1a8);
}



/* Entry: 1026160b8; end: 1026160eb;  */

void FUN_1026160b8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1026160ec; end: 10261624f;  */

void FUN_1026160ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *param_2;
  func_0x0001000285a8(0x112eb00e0,&UNK_10dac43a0);
  puVar1 = &uStack_48;
  uStack_48 = uVar5;
  func_0x0001000838ec(puVar1);
  FUN_102619d7c(uVar2,uVar3);
  func_0x000100082720("MapDataCoordinatorServiceProvider",0x21,2);
  uVar3 = uVar2;
  func_0x0001026161b8(uVar2,puVar1,uVar4);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(puVar1);
  func_0x000100082720("FullMapCustomizationTrayPresenterEntryPointProvider",0x33,2);
  *param_1 = uVar3;
  return;
}



/* Entry: 102616250; end: 1026162af;  */

/* WARNING: Possible PIC construction at 0x000102616290: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102616294) */

void FUN_102616250(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = param_2;
  FUN_10261659c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = param_3;
  *(long *)(lVar1 + 0x18) = param_2;
  *(undefined8 *)(lVar1 + 0x20) = param_4;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  *param_1 = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1026162b0; end: 1026162bb;  */

/* WARNING: Possible PIC construction at 0x000102616290: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102616294) */

void FUN_1026162b0(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar3 = lVar1;
  FUN_10261659c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x10) = uVar2;
  *(long *)(lVar3 + 0x18) = lVar1;
  *(undefined8 *)(lVar3 + 0x20) = uVar4;
  *(undefined8 *)(lVar3 + 0x28) = 0;
  *param_1 = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(lVar1);
  return;
}



/* Entry: 1026162bc; end: 1026162ff;  */

void FUN_1026162bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  return;
}



/* Entry: 102616300; end: 102616527;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102616300(void)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_70;
  ulong *puStack_68;
  
  func_0x000100083b20(&puStack_68);
  puVar1 = puStack_68;
  uVar6 = *(undefined8 *)((long)puStack_68 + _DAT_112fa9230);
  func_0x000107c615f0(uVar6);
  func_0x000107c61170(puVar1);
  func_0x000100083b20(&puStack_68);
  uVar3 = *(undefined8 *)((long)puStack_68 + _DAT_112fa9238);
  func_0x000107c61170();
  func_0x000100083b20(&puStack_68);
  uVar7 = *(undefined8 *)((long)puStack_68 + _DAT_112fa9240);
  func_0x000107c61170();
  func_0x000100083b20(&puStack_68);
  uVar8 = *(undefined8 *)((long)puStack_68 + _DAT_112fa9248);
  func_0x000107c61170();
  func_0x000100083b20(&puStack_68);
  uVar9 = *(undefined8 *)((long)puStack_68 + _DAT_112fa9250);
  func_0x000107c61170();
  func_0x000100083b20(&puStack_68);
  uVar10 = *(undefined8 *)((long)puStack_68 + _DAT_112fa9258);
  func_0x000107c61170();
  func_0x000100083b20(&puStack_68);
  uVar11 = *(undefined8 *)((long)puStack_68 + _DAT_112fa9260);
  puVar2 = puStack_68;
  func_0x000107c61170();
  func_0x000100083b20(&puStack_68);
  puVar1 = puStack_68;
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puStack_68) + 0x90))();
  func_0x000107c61170(puVar1);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001003806b0(0);
  func_0x000107c610f8();
  func_0x000107c6157c(uVar5);
  func_0x0001038b74a4(uVar6,uVar3,uVar7,uVar8,uVar9,uVar10,uVar11,puVar2,uVar5);
  func_0x000100083b20(&puStack_68);
  puVar1 = puStack_68;
  uStack_70 = uVar6;
  func_0x00010008a7c8(&puStack_68,&uStack_70);
  func_0x000107c61574(puVar1);
  func_0x000100083b20(&uStack_70);
  func_0x000107c61574(puStack_68);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x28) = uStack_70;
  func_0x000107c615e8(uVar3);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  if (lVar4 != 0) {
    func_0x000107c615f0(lVar4);
    func_0x000107c4ee7c();
    func_0x000107c615e8(lVar4);
  }
  func_0x000107c61170(uVar6);
  return;
}



/* Entry: 102616528; end: 10261654f; -[_TtC34MapCustomizationTrayImplementation33FullMapCustomizationTrayPresenter present] */

void FUN_102616528(undefined8 param_1)

{
  func_0x000107c6157c();
  FUN_102616300();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 102616550; end: 10261658b;  */

void FUN_102616550(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10261658c; end: 10261659b;  */

undefined1  [16] FUN_10261658c(void)

{
  return ZEXT816(0x11052b2c0);
}



/* Entry: 10261659c; end: 1026165bb;  */

void FUN_10261659c(void)

{
  func_0x000107c61168(&PTR_PTR_112eb0140);
  return;
}



/* Entry: 1026165bc; end: 1026165c3;  */

void FUN_1026165bc(void)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*unaff_x20);
  return;
}



/* Entry: 1026165c4; end: 1026166f3;  */

void FUN_1026165c4(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000107c61170(*param_2);
  uStack_40 = 0;
  lStack_38 = 0;
  func_0x000107c5fae4(param_1,&uStack_40);
  lVar1 = lStack_38;
  if (lStack_38 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = uStack_40;
    func_0x000107c5fadc(uStack_40,lStack_38);
    func_0x000107c6142c(lVar1);
  }
  *param_2 = uVar2;
  return;
}



/* Entry: 1026166f4; end: 10261676b;  */

undefined8 FUN_1026166f4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  func_0x000107c5faec(uVar1);
  func_0x000107c5fbbc();
  func_0x000107c6142c(param_2);
  return uVar1;
}



/* Entry: 10261676c; end: 1026168a3;  */

undefined1 * FUN_10261676c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c5faec(uVar1);
  func_0x000107c6068c(auStack_78,param_1);
  puVar2 = auStack_78;
  func_0x000107c5fb58(puVar2,uVar1,param_2);
  func_0x000107c606a8();
  func_0x000107c6142c(param_2);
  return puVar2;
}



/* Entry: 1026168a4; end: 1026168cb;  */

void FUN_1026168a4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  func_0x000107c5faec();
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}



/* Entry: 1026168cc; end: 1026168f3;  */

void FUN_1026168cc(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11052b2e0;
  if (lRam0000000112eb01b8 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112eb01b8 = param_1;
  }
  return;
}



/* Entry: 1026168f4; end: 102616937;  */

void FUN_1026168f4(long param_1,long *param_2,long param_3)

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



/* Entry: 102616938; end: 1026169a3;  */

void FUN_102616938(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x112eb01e0;
  FUN_1026169ec(0x112eb01e0,&UNK_10dac45f8);
  uVar2 = 0x112eb01e8;
  FUN_1026169ec(0x112eb01e8,&UNK_10dac454c);
                    /* WARNING: Could not recover jumptable at 0x00010bdb96bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss20_SwiftNewtypeWrapperPsSHRzSH8RawValueSYRpzrlE20_toCustomAnyHashables0hI0VSgyF_11034e980
  )(param_1,param_2,uVar1,uVar2,PTR___sSSSHsWP_11034da90);
  return;
}



/* Entry: 1026169a4; end: 1026169eb;  */

void FUN_1026169a4(void)

{
  FUN_1026169ec(0x112eb01c8,&UNK_10dac4510);
  return;
}


