/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1043445ec; end: 104344a37;  */

/* WARNING: Possible PIC construction at 0x000104344960: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104344964) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043445ec(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puVar13;
  bool bVar14;
  long lVar15;
  long unaff_x20;
  undefined8 uVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 auStack_168 [72];
  undefined8 uStack_120;
  undefined8 uStack_118;
  
  lVar15 = *(long *)(param_1 + 0x48);
  if (lVar15 == 0) {
    puVar13 = &DAT_11306ff68;
    func_0x000104343c9c(&DAT_11306ff68,FUN_104343cf8);
    uVar2 = *(ulong *)(param_1 + 0x30);
    uVar4 = *(ulong *)(param_1 + 0x38);
    if (uVar4 == 0) {
      uVar17 = 0;
    }
    else {
      uVar17 = uVar2;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar4);
    }
    func_0x00010c212f20(puVar13);
    _objc_release(puVar13);
    _objc_release(uVar17);
    uVar18 = *(undefined8 *)(unaff_x20 + _DAT_11306ff68);
    uVar2 = uVar2 & 0xffffffffffff;
    if ((uVar4 & 0x2000000000000000) != 0) {
      uVar2 = uVar4 >> 0x38 & 0xf;
    }
    bVar14 = true;
    if (uVar4 != 0) {
      bVar14 = uVar2 == 0;
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    uVar3 = *(undefined8 *)(param_1 + 0x58);
    uVar16 = *(undefined8 *)(param_1 + 0x40);
    lVar5 = 0x112d48380;
    func_0x0001000285a8(0x112d48380,&UNK_10d910f10);
    lVar6 = lVar5;
    _swift_initStackObject();
    *(undefined8 *)(lVar6 + 0x18) = 6;
    *(undefined8 *)(lVar6 + 0x10) = 3;
    uVar18 = *(undefined8 *)PTR__NSStrikethroughStyleAttributeName_110345838;
    *(undefined8 *)(lVar6 + 0x20) = uVar18;
    puVar13 = PTR___sSiN_11034deb0;
    *(undefined8 *)(lVar6 + 0x28) = 1;
    uVar19 = *(undefined8 *)PTR__NSStrikethroughColorAttributeName_110345830;
    *(undefined **)(lVar6 + 0x40) = puVar13;
    *(undefined8 *)(lVar6 + 0x48) = uVar19;
    puVar13 = PTR__OBJC_CLASS___UIColor_1126aea70;
    _objc_opt_self();
    _objc_retain(uVar18);
    _objc_retain(uVar19);
    puVar7 = puVar13;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf414e0(0x3fe3333333333333);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    uVar9 = 0;
    FUN_104346ffc(0,0x112d48390,&PTR__OBJC_CLASS___UIColor_1126aea70);
    *(undefined **)(lVar6 + 0x50) = puVar8;
    uVar10 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
    *(undefined8 *)(lVar6 + 0x68) = uVar9;
    *(undefined8 *)(lVar6 + 0x70) = uVar10;
    _objc_retain();
    _objc_retain();
    puVar7 = puVar13;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf414e0(0x3fe3333333333333);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    *(undefined8 *)(lVar6 + 0x90) = uVar9;
    *(undefined **)(lVar6 + 0x78) = puVar8;
    lVar11 = lVar6;
    func_0x000100ecbca8(lVar6);
    _swift_setDeallocating(lVar6);
    uVar18 = 0x112d48398;
    func_0x0001000285a8(0x112d48398,&UNK_10d90f130);
    _swift_arrayDestroy((undefined8 *)(lVar6 + 0x20),3,uVar18);
    puVar7 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
    _objc_allocWithZone(PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar16,lVar15);
    uVar12 = 0;
    func_0x000100eca28c(0);
    uVar19 = uVar12;
    func_0x000100ecbdec();
    lVar15 = lVar11;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (lVar11,uVar12,PTR___sypN_11034f1a8 + 8,uVar19);
    _swift_bridgeObjectRelease(lVar11);
    func_0x00010c04e840(puVar7);
    _objc_release(uVar16);
    _objc_release(lVar15);
    uStack_120 = 0x2020;
    uStack_118 = 0xe200000000000000;
    __sSS6appendyySSF(uVar1,uVar3);
    uVar1 = uStack_118;
    uVar18 = uStack_120;
    _swift_initStackObject(lVar5,auStack_168);
    *(undefined8 *)(lVar5 + 0x18) = 2;
    *(undefined8 *)(lVar5 + 0x10) = 1;
    *(undefined8 *)(lVar5 + 0x20) = uVar10;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    *(undefined8 *)(lVar5 + 0x40) = uVar9;
    *(undefined **)(lVar5 + 0x28) = puVar13;
    lVar15 = lVar5;
    func_0x000100ecbca8(lVar5);
    _swift_setDeallocating(lVar5);
    func_0x000100ef0820((undefined8 *)(lVar5 + 0x20));
    puVar13 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_allocWithZone(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar18,uVar1);
    _swift_bridgeObjectRelease(uVar1);
    lVar5 = lVar15;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (lVar15,uVar12,PTR___sypN_11034f1a8 + 8,uVar19);
    _swift_bridgeObjectRelease(lVar15);
    func_0x00010c04e840(puVar13);
    _objc_release(uVar18);
    _objc_release(lVar5);
    func_0x00010bf069e0(puVar7);
    _objc_release(puVar13);
    puVar13 = &DAT_11306ff68;
    func_0x000104343c9c(&DAT_11306ff68,FUN_104343cf8);
    func_0x00010c16b720();
    _objc_release(puVar13);
    uVar18 = *(undefined8 *)(unaff_x20 + _DAT_11306ff68);
    bVar14 = false;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar18,PTR_s_setHidden__1126479f8,bVar14);
  return;
}



/* Entry: 104344a38; end: 1043458b7;  */

/* WARNING: Possible PIC construction at 0x000104344e3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104344e40) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104344a38(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  long lStack_158;
  long lStack_150;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar11 = *(long *)(param_1 + 0x90);
  if (lVar11 == 0) {
    FUN_104343db8();
    func_0x00010c1a7f60();
    _objc_release(lVar1);
    uVar9 = *(undefined8 *)(unaff_x20 + _DAT_11306ff70);
    puVar8 = (undefined *)0x0;
  }
  else {
    lStack_178 = *(long *)(param_1 + 0x98);
    lStack_150 = *(long *)(param_1 + 0xa0);
    uVar10 = *(undefined8 *)(param_1 + 0x88);
    lStack_190 = (long)&lStack_190 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
    lStack_188 = extraout_x12;
    lStack_180 = lVar1;
    FUN_104343db8();
    func_0x00010c1a7f60();
    _objc_release(lVar1);
    puVar8 = PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00;
    _objc_allocWithZone();
    func_0x00010bfee200();
    func_0x00010c166c00();
    lVar1 = 0x112d48380;
    func_0x0001000285a8(0x112d48380,&UNK_10d910f10);
    lStack_158 = lVar1;
    _swift_initStackObject();
    *(undefined8 *)(lVar1 + 0x18) = 6;
    *(undefined8 *)(lVar1 + 0x10) = 3;
    uVar2 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
    *(undefined8 *)(lVar1 + 0x20) = uVar2;
    _objc_retain();
    func_0x00010052bbec();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar2;
    func_0x00010bfb3e40();
    _objc_retainAutoreleasedReturnValue();
    _swift_unknownObjectRelease(uVar2);
    uVar2 = 0;
    FUN_104346ffc(0,0x112d48388,&PTR__OBJC_CLASS___UIFont_1126aec38);
    *(undefined8 *)(lVar1 + 0x28) = uVar9;
    uVar9 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
    *(undefined8 *)(lVar1 + 0x40) = uVar2;
    *(undefined8 *)(lVar1 + 0x48) = uVar9;
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    _objc_opt_self();
    _objc_retain();
    _objc_retain();
    uStack_168 = uVar9;
    puStack_160 = puVar3;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf414e0(0x3fe3333333333333);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    uVar9 = 0;
    FUN_104346ffc(0,0x112d48390,&PTR__OBJC_CLASS___UIColor_1126aea70);
    *(undefined **)(lVar1 + 0x50) = puVar4;
    uVar2 = *(undefined8 *)PTR__NSParagraphStyleAttributeName_110345820;
    *(undefined8 *)(lVar1 + 0x68) = uVar9;
    *(undefined8 *)(lVar1 + 0x70) = uVar2;
    uVar9 = 0;
    FUN_104346ffc(0,0x112ec7bd8,&PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00);
    *(undefined8 *)(lVar1 + 0x90) = uVar9;
    *(undefined **)(lVar1 + 0x78) = puVar8;
    _objc_retain(uVar2);
    _objc_retain();
    lVar5 = lVar1;
    puStack_170 = puVar8;
    func_0x000100ecbca8(lVar1);
    _swift_setDeallocating(lVar1);
    uVar9 = 0x112d48398;
    func_0x0001000285a8(0x112d48398,&UNK_10d90f130);
    _swift_arrayDestroy((undefined8 *)(lVar1 + 0x20),3,uVar9);
    puVar8 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
    _objc_allocWithZone(PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
    uVar9 = uVar10;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar10,lVar11);
    uVar6 = 0;
    func_0x000100eca28c(0);
    uVar2 = uVar6;
    func_0x000100ecbdec();
    lVar1 = lVar5;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (lVar5,uVar6,PTR___sypN_11034f1a8 + 8,uVar2);
    _swift_bridgeObjectRelease(lVar5);
    func_0x00010c04e840(puVar8);
    _objc_release(uVar9);
    _objc_release(lVar1);
    lVar5 = lStack_150;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar10,lVar11);
    uVar9 = uVar10;
    func_0x00010c08fa60();
    _objc_release(uVar10);
    lVar1 = lStack_178;
    if (0 < lVar5) {
      lVar11 = lStack_178;
      lVar7 = lVar5;
      _NSIntersectionRange(lStack_178,lVar5,0,uVar9);
      if ((lVar11 == lVar1) && (lVar7 == lVar5)) {
        if (lRam000000011306ffc0 != -1) {
          _swift_once(0x11306ffc0,0x104343f40);
        }
        lVar11 = lStack_180;
        lVar5 = lStack_180;
        func_0x000100028790(lStack_180,0x11306ffc8);
        lVar1 = lStack_190;
        lVar7 = lStack_190;
        (**(code **)(lStack_188 + 0x10))(lStack_190,lVar5,lVar11);
        __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
        (**(code **)(lStack_188 + 8))(lVar1,lVar11);
        func_0x00010bef6f20(puVar8);
        _objc_release(lVar7);
      }
    }
    uVar9 = *(undefined8 *)(unaff_x20 + _DAT_11306ff70);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c16b730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar9,PTR_s_setAttributedText__1126387e8,puVar8);
  return;
}



/* Entry: 1043458b8; end: 104345973; -[_TtC23GamesLensPlusUpsellCard27GamesLensPlusUpsellCardView textView:shouldInteractWithURL:inRange:interaction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1043458b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar3 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ
            (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_4);
  pcVar1 = *(code **)(param_1 + _DAT_11306ff88);
  _objc_retain(param_1);
  (*pcVar1)();
  (**(code **)(lVar3 + 8))
            (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
  _objc_release(param_1);
  return 0;
}



/* Entry: 104345974; end: 10434599b; -[_TtC23GamesLensPlusUpsellCard27GamesLensPlusUpsellCardView initWithCoder:] */

void FUN_104345974(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_104346ebc();
  return;
}



/* Entry: 10434599c; end: 1043459fb; -[_TtC23GamesLensPlusUpsellCard27GamesLensPlusUpsellCardView pointInside:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10434599c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11306ff20);
  _objc_retain();
  func_0x00010bfb68e0(uVar1);
  _CGRectContainsPoint();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1043459fc; end: 104345aab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043459fc(void)

{
  undefined *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffc0,PTR_s_layoutSubviews_112600e60);
  puVar1 = PTR__OBJC_CLASS___CATransaction_1126b5718;
  _objc_opt_self(PTR__OBJC_CLASS___CATransaction_1126b5718);
  func_0x00010bf17a60();
  func_0x00010c18e5e0(puVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306ff28);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11306ff20);
  func_0x00010bf20c00(uVar3);
  func_0x00010c19f0e0(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306ff30);
  func_0x00010bf20c00(uVar3);
  func_0x00010c19f0e0(uVar2);
  func_0x00010bf42760(puVar1);
  return;
}



/* Entry: 104345aac; end: 104345baf; -[_TtC23GamesLensPlusUpsellCard27GamesLensPlusUpsellCardView layoutSubviews] */

void FUN_104345aac(undefined8 param_1)

{
  _objc_retain();
  FUN_1043459fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104345bb0; end: 104345dab;  */

undefined * FUN_104345bb0(ulong param_1)

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
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104345dac);
      (*pcVar2)();
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      uVar4 = 0;
      FUN_104346ffc(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
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
        FUN_1043462dc(uVar7,param_1,&PTR__OBJC_CLASS___UIView_1126aec20,0x112d360b0);
        uVar4 = 0;
        uStack_90 = uVar3;
        FUN_104346ffc(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
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



/* Entry: 104345dac; end: 10434604b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104345dac(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uVar10;
  
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_11306ff28);
  if (lRam000000011306fff8 != -1) {
    _swift_once(0x11306fff8,FUN_104347184);
  }
  uVar5 = uRam0000000113813410;
  func_0x0001033d92b8(uRam0000000113813410);
  puVar8 = PTR___sypN_11034f1a8;
  uVar7 = uVar5;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar5);
  func_0x00010c17eb60(uVar9);
  _objc_release(uVar7);
  func_0x00010c209760(0,0x3fe0000000000000,uVar9);
  func_0x00010c196020(0x3ff0000000000000,0x3fe0000000000000,uVar9);
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_11306ff30);
  lVar1 = 0x112d38dc0;
  func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
  _swift_allocObject();
  *(undefined8 *)(lVar1 + 0x18) = 4;
  *(undefined8 *)(lVar1 + 0x10) = 2;
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _objc_opt_self();
  puVar3 = puVar2;
  func_0x00010c2a4b20();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bdc0fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  uVar5 = 0;
  func_0x000100ef8bfc();
  *(undefined8 *)(lVar1 + 0x38) = uVar5;
  *(undefined **)(lVar1 + 0x20) = puVar4;
  func_0x00010bf3ae40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bdc0fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  *(undefined8 *)(lVar1 + 0x58) = uVar5;
  *(undefined **)(lVar1 + 0x40) = puVar3;
  lVar6 = lVar1;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar1,puVar8 + 8);
  _swift_release(lVar1);
  func_0x00010c17eb60(uVar10);
  _objc_release();
  func_0x000100673624();
  _swift_allocObject();
  *(undefined8 *)(lVar6 + 0x18) = 5;
  *(undefined8 *)(lVar6 + 0x10) = 2;
  uVar5 = 0;
  FUN_104346ffc(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar7 = 0;
  __sSo8NSNumberC10FoundationE14integerLiteralABSi_tcfC();
  *(undefined8 *)(lVar6 + 0x20) = uVar7;
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_allocWithZone();
  func_0x00010c00e360(0x3fe0000000000000);
  *(undefined **)(lVar6 + 0x28) = puVar8;
  lVar1 = lVar6;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar6,uVar5);
  _swift_release(lVar6);
  func_0x00010c1bff00(uVar10);
  _objc_release(lVar1);
  func_0x00010c209760(0x3fe0000000000000,0,uVar10);
  func_0x00010c196020(0x3fe0000000000000,0x3ff0000000000000,uVar10);
  func_0x00010c1c2c00(uVar9);
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_11306ff20);
  func_0x00010c08c0e0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar9);
  return;
}



/* Entry: 10434604c; end: 10434614b;  */

undefined * FUN_10434604c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x0001008479c8();
  _swift_allocObject();
  *(undefined8 *)(param_1 + 0x18) = 5;
  *(undefined8 *)(param_1 + 0x10) = 2;
  puVar1 = &DAT_11306ff38;
  func_0x000104343c9c(&DAT_11306ff38,FUN_104343934);
  *(undefined **)(param_1 + 0x20) = puVar1;
  puVar1 = &DAT_11306ff40;
  func_0x000104343c9c(&DAT_11306ff40,0x104343a28);
  *(undefined **)(param_1 + 0x28) = puVar1;
  puVar1 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_allocWithZone(PTR__OBJC_CLASS___UIStackView_1126aefe8);
  uVar2 = 0;
  FUN_104346ffc(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
  lVar3 = param_1;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(param_1,uVar2);
  _swift_release(param_1);
  func_0x00010bff3fe0(puVar1);
  _objc_release(lVar3);
  func_0x00010c16e060(puVar1);
  func_0x00010c166c00(puVar1);
  func_0x00010c207380(0x4010000000000000,puVar1);
  return puVar1;
}



/* Entry: 10434614c; end: 1043461ab; -[_TtC23GamesLensPlusUpsellCard27GamesLensPlusUpsellCardView initWithFrame:] */

void FUN_10434614c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("GamesLensPlusUpsellCard.GamesLensPlusUpsellCardView",0x33,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104346178);
  (*pcVar1)();
}



/* Entry: 1043461ac; end: 1043462bb; -[_TtC23GamesLensPlusUpsellCard27GamesLensPlusUpsellCardView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043461ac(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306ff20));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306ff28));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306ff30));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306ff38));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306ff40));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306ff48));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306ff50));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306ff58));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306ff60));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306ff68));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306ff70));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306ff78));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306ff80));
  _swift_release(*(undefined8 *)(param_1 + _DAT_11306ff88 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11306ff90 + 8));
  return;
}



/* Entry: 1043462bc; end: 1043462db;  */

void FUN_1043462bc(void)

{
  _objc_opt_self(&PTR_PTR_11299f998);
  return;
}



/* Entry: 1043462dc; end: 104346497;  */

ulong FUN_1043462dc(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1043463c0);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1043463c4);
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
  FUN_104346ffc(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x104346498);
  (*pcVar2)();
}



/* Entry: 104346498; end: 1043466ff;  */

undefined * FUN_104346498(ulong param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  func_0x0001030820dc();
  _swift_initStackObject();
  *(undefined8 *)(param_1 + 0x18) = 5;
  *(undefined8 *)(param_1 + 0x10) = 2;
  FUN_1043462bc();
  _swift_getObjCClassFromMetadata();
  puVar2 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  _objc_opt_self();
  puVar3 = puVar2;
  func_0x00010bf249e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = (undefined8 *)(param_1 + 0x20);
  *puVar6 = puVar3;
  func_0x00010c0b6660();
  _objc_retainAutoreleasedReturnValue();
  *(undefined **)(param_1 + 0x28) = puVar2;
  if ((param_1 & 0xc000000000000001) == 0) {
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_1043466bc;
    uVar4 = *puVar6;
    _objc_retain(uVar4);
  }
  else {
    uVar4 = 0;
    FUN_1043462dc(0,param_1,&PTR__OBJC_CLASS___NSBundle_1126aea78,0x112daba40);
  }
  _objc_retain();
  uVar5 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f1f7150);
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  _objc_opt_self();
  func_0x00010bfe8240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar4);
  _objc_release(uVar5);
  if (puVar2 == (undefined *)0x0) {
    if ((param_1 & 0xc000000000000001) == 0) {
      if (*(ulong *)(param_1 + 0x10) < 2) {
LAB_1043466bc:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1043466c0);
        (*pcVar1)();
      }
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar4);
    }
    else {
      uVar4 = 1;
      FUN_1043462dc(1,param_1,&PTR__OBJC_CLASS___NSBundle_1126aea78,0x112daba40);
    }
    _objc_retain();
    uVar5 = 0xd000000000000012;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f1f7150);
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    _objc_opt_self();
    func_0x00010bfe8240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar4);
    _objc_release(uVar5);
    if (puVar2 == (undefined *)0x0) {
      _swift_setDeallocating(param_1);
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      uVar4 = 0;
      FUN_104346ffc(0,0x112daba40,&PTR__OBJC_CLASS___NSBundle_1126aea78);
      _swift_arrayDestroy(puVar6,uVar5,uVar4);
      puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
      _objc_opt_self(PTR__OBJC_CLASS___UIImage_1126aea68);
      func_0x00010c23bb80();
      _objc_retainAutoreleasedReturnValue();
      return puVar2;
    }
  }
  _swift_setDeallocating(param_1);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = 0;
  FUN_104346ffc(0,0x112daba40,&PTR__OBJC_CLASS___NSBundle_1126aea78);
  _swift_arrayDestroy(puVar6,uVar5,uVar4);
  return puVar2;
}



/* Entry: 104346700; end: 104346ebb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104346700(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x20;
  long lVar12;
  
  uVar11 = *(undefined8 *)(unaff_x20 + _DAT_11306ff48);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _objc_opt_self(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(uVar11);
  _objc_release(puVar1);
  uVar4 = uVar11;
  func_0x00010c08c0e0(uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4032000000000000);
  _objc_release(uVar4);
  uVar4 = uVar11;
  func_0x00010c08c0e0(uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c184260();
  _objc_release(uVar4);
  func_0x00010c219b60(uVar11);
  lVar12 = *(long *)(unaff_x20 + _DAT_11306ff50);
  if (lRam0000000113070008 != -1) {
    _swift_once(0x113070008,0x10434707c);
  }
  func_0x00010c16e440(lVar12);
  lVar2 = lVar12;
  func_0x00010c08c0e0(lVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4039000000000000);
  _objc_release(lVar2);
  lVar2 = lVar12;
  func_0x00010c219b60();
  FUN_104343ad4();
  func_0x00010befbb60(lVar12);
  _objc_release();
  func_0x0001008479c8();
  _swift_allocObject();
  *(undefined8 *)(lVar2 + 0x18) = 5;
  *(undefined8 *)(lVar2 + 0x10) = 2;
  lVar3 = lVar2;
  func_0x000104343bb8();
  *(long *)(lVar2 + 0x20) = lVar3;
  puVar1 = &DAT_11306ff68;
  func_0x000104343c9c(&DAT_11306ff68,FUN_104343cf8);
  *(undefined **)(lVar2 + 0x28) = puVar1;
  puVar1 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_allocWithZone();
  uVar4 = 0;
  FUN_104346ffc(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
  lVar3 = lVar2;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar2,uVar4);
  _swift_release(lVar2);
  func_0x00010bff3fe0();
  _objc_release(lVar3);
  func_0x00010c16e060(puVar1);
  func_0x00010c166c00(puVar1);
  func_0x00010c207380(0x4010000000000000,puVar1);
  _objc_retain();
  func_0x00010c219b60();
  func_0x00010c181cc0(0x437a0000,*(undefined8 *)(unaff_x20 + _DAT_11306ff60));
  func_0x00010c181cc0(0x437a0000,*(undefined8 *)(unaff_x20 + _DAT_11306ff68));
  func_0x00010befbb60(uVar11);
  uVar4 = uVar11;
  func_0x00010befbb60(uVar11);
  func_0x000104344024();
  func_0x00010befbb60(uVar11);
  _objc_release(uVar4);
  puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  _objc_opt_self();
  puVar6 = puVar5;
  func_0x0001008478a8();
  _swift_allocObject();
  *(undefined8 *)(puVar6 + 0x18) = 0x1f;
  *(undefined8 *)(puVar6 + 0x10) = 0xf;
  uVar4 = uVar11;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar4;
  func_0x00010bf49420(0x4057000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  *(undefined8 *)(puVar6 + 0x20) = uVar7;
  lVar2 = lVar12;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar11;
  func_0x00010c08de00(uVar11);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(uVar4);
  *(long *)(puVar6 + 0x28) = lVar3;
  lVar2 = lVar12;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar11;
  func_0x00010bf348e0(uVar11);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(uVar4);
  *(long *)(puVar6 + 0x30) = lVar3;
  lVar2 = lVar12;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf49420(0x4049000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  *(long *)(puVar6 + 0x38) = lVar3;
  lVar2 = lVar12;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf49420(0x4049000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  *(long *)(puVar6 + 0x40) = lVar3;
  lVar2 = _DAT_11306ff58;
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_11306ff58);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar12;
  func_0x00010bf34860(lVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(lVar3);
  *(undefined8 *)(puVar6 + 0x48) = uVar4;
  uVar7 = *(undefined8 *)(unaff_x20 + lVar2);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar12;
  func_0x00010bf348e0(lVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(lVar3);
  *(undefined8 *)(puVar6 + 0x50) = uVar4;
  uVar7 = *(undefined8 *)(unaff_x20 + lVar2);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar7;
  func_0x00010bf49420(0x4041800000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  *(undefined8 *)(puVar6 + 0x58) = uVar4;
  uVar7 = *(undefined8 *)(unaff_x20 + lVar2);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar7;
  func_0x00010bf49420(0x4041800000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  *(undefined8 *)(puVar6 + 0x60) = uVar4;
  puVar8 = puVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2793a0(lVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010bf493c0(0x402e000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(lVar12);
  *(undefined **)(puVar6 + 0x68) = puVar9;
  puVar9 = puVar1;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar11;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(uVar4);
  *(undefined **)(puVar6 + 0x70) = puVar8;
  lVar12 = _DAT_11306ff78;
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_11306ff78);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar1;
  func_0x00010c2793a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar4 = uVar7;
  func_0x00010bf49480(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(puVar8);
  *(undefined8 *)(puVar6 + 0x78) = uVar4;
  uVar10 = *(undefined8 *)(unaff_x20 + lVar12);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar11;
  func_0x00010c2793a0(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar10;
  func_0x00010bf493c0(0xc020000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  _objc_release(uVar4);
  *(undefined8 *)(puVar6 + 0x80) = uVar7;
  uVar10 = *(undefined8 *)(unaff_x20 + lVar12);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar11;
  func_0x00010bf348e0(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar10;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  _objc_release(uVar4);
  *(undefined8 *)(puVar6 + 0x88) = uVar7;
  uVar7 = *(undefined8 *)(unaff_x20 + lVar12);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar7;
  func_0x00010bf49420(0x4042000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  *(undefined8 *)(puVar6 + 0x90) = uVar4;
  uVar4 = 0;
  FUN_104346ffc(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  puVar8 = puVar6;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(puVar6,uVar4);
  _swift_release(puVar6);
  func_0x00010beef8c0(puVar5);
  _objc_release(puVar8);
  _objc_release(puVar1);
  return uVar11;
}



/* Entry: 104346ebc; end: 104346ffb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104346ebc(void)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  long unaff_x20;
  
  lVar1 = _DAT_11306ff20;
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_allocWithZone();
  func_0x00010bfee200();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  lVar1 = _DAT_11306ff28;
  puVar3 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
  _objc_allocWithZone();
  func_0x00010bfee200();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  lVar1 = _DAT_11306ff30;
  puVar3 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
  _objc_allocWithZone();
  func_0x00010bfee200();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  *(undefined8 *)(unaff_x20 + _DAT_11306ff38) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11306ff40) = 0;
  lVar1 = _DAT_11306ff48;
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_allocWithZone();
  func_0x00010bfee200();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  lVar1 = _DAT_11306ff50;
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_allocWithZone();
  func_0x00010bfee200();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  *(undefined8 *)(unaff_x20 + _DAT_11306ff58) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11306ff60) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11306ff68) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11306ff70) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11306ff78) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11306ff80) = 0;
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
             "GamesLensPlusUpsellCard/GamesLensPlusUpsellCardView.swift",0x39,2,0xf1,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x104346ffc);
  (*pcVar2)();
}



/* Entry: 104346ffc; end: 10434703b;  */

void FUN_104346ffc(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10434703c; end: 10434703f; -[_TtC23GamesLensPlusUpsellCard27GamesLensPlusUpsellCardView ctaTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10434703c(long param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + _DAT_11306ff88);
  func_0x000107c61174();
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104347040; end: 104347043; -[_TtC23GamesLensPlusUpsellCard27GamesLensPlusUpsellCardView learnMoreTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104347040(long param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + _DAT_11306ff88);
  func_0x000107c61174();
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104347044; end: 104347183;  */

void FUN_104347044(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _objc_allocWithZone();
  func_0x00010c062fe0(0x3fb1eb851eb851ec,0x3feeb851eb851eb8);
  puRam0000000113813430 = puVar1;
  return;
}



/* Entry: 104347184; end: 104347337;  */

void FUN_104347184(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0001028b6d3c();
  _swift_allocObject();
  *(undefined8 *)(param_1 + 0x18) = 7;
  *(undefined8 *)(param_1 + 0x10) = 3;
  if (lRam000000011306ffe0 != -1) {
    _swift_once(0x11306ffe0,0x1043470b0);
  }
  uVar1 = uRam0000000113813418;
  _objc_retain();
  uVar2 = uVar1;
  func_0x00010bdc0fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  if (lRam000000011306ffe8 != -1) {
    _swift_once(0x11306ffe8,0x1043470fc);
  }
  uVar1 = uRam0000000113813420;
  _objc_retain();
  uVar2 = uVar1;
  func_0x00010bdc0fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  if (lRam000000011306fff0 != -1) {
    _swift_once(0x11306fff0,0x10434713c);
  }
  uVar1 = uRam0000000113813428;
  _objc_retain();
  uVar2 = uVar1;
  func_0x00010bdc0fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  lRam0000000113813410 = param_1;
  return;
}



/* Entry: 104347338; end: 1043473ef;  */

undefined * FUN_104347338(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aea58;
  _objc_allocWithZone(PTR_PTR_1126aea58);
  func_0x00010bfee200();
  func_0x00010c21ad00();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _objc_opt_self(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retain(puVar1);
  func_0x00010c23ba80(puVar2,param_2,0x3e);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c213040(puVar1,param_2,1);
  func_0x00010c1cfce0(puVar1,param_2,1);
  func_0x00010c21e900(puVar1,param_2,0);
  _objc_release(puVar1);
  func_0x00010c219b60(puVar1,param_2,0);
  return puVar1;
}



/* Entry: 1043473f0; end: 1043476f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1043473f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long unaff_x20;
  
  puVar2 = &stack0xffffffffffffff80;
  _swift_getObjectType();
  *(undefined8 *)(unaff_x20 + _DAT_113070010) = 0;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&stack0xffffffffffffff80,
                      PTR_s_initWithFrame__1125e2948);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1af000();
  func_0x00010c161080(puVar2);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _objc_opt_self(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retain();
  func_0x00010bf3ae40(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar2);
  _objc_release(puVar3);
  func_0x0001043472d8();
  func_0x00010befbb60(puVar2);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  _objc_opt_self();
  puVar4 = puVar3;
  func_0x0001008478a8();
  _swift_allocObject();
  *(undefined8 *)(puVar4 + 0x18) = 9;
  *(undefined8 *)(puVar4 + 0x10) = 4;
  lVar1 = _DAT_113070010;
  uVar5 = *(undefined8 *)(puVar2 + _DAT_113070010);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar2;
  func_0x00010c08de00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(puVar6);
  *(undefined8 *)(puVar4 + 0x20) = uVar7;
  uVar5 = *(undefined8 *)(puVar2 + lVar1);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar2;
  func_0x00010c2793a0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(puVar6);
  *(undefined8 *)(puVar4 + 0x28) = uVar7;
  uVar5 = *(undefined8 *)(puVar2 + lVar1);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar2;
  func_0x00010c274200(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(puVar6);
  *(undefined8 *)(puVar4 + 0x30) = uVar7;
  uVar5 = *(undefined8 *)(puVar2 + lVar1);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar2;
  func_0x00010bf1ff80(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar7 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(puVar6);
  *(undefined8 *)(puVar4 + 0x38) = uVar7;
  uVar7 = 0;
  func_0x000100847984(0);
  puVar8 = puVar4;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(puVar4,uVar7);
  _swift_release(puVar4);
  func_0x00010beef8c0(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar8);
  return puVar2;
}



/* Entry: 1043476f4; end: 104347713; -[_TtC23GamesLensPlusUpsellCard15TextLinkControl initWithFrame:] */

void FUN_1043476f4(void)

{
  FUN_1043473f0();
  return;
}



/* Entry: 104347714; end: 104347777; -[_TtC23GamesLensPlusUpsellCard15TextLinkControl initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104347714(long param_1)

{
  code *pcVar1;
  
  *(undefined8 *)(param_1 + _DAT_113070010) = 0;
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
             "GamesLensPlusUpsellCard/TextLinkControl.swift",0x2d,2,0x2c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104347778);
  (*pcVar1)();
}



/* Entry: 104347778; end: 1043477b3; -[_TtC23GamesLensPlusUpsellCard15TextLinkControl isHighlighted] */

void FUN_104347778(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_isHighlighted_1125fad78);
  return;
}



/* Entry: 1043477b4; end: 10434784f; -[_TtC23GamesLensPlusUpsellCard15TextLinkControl setHighlighted:] */

void FUN_1043477b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  iVar2 = (int)&uStack_50;
  uVar3 = param_1;
  _swift_getObjectType();
  puVar1 = PTR_s_setHighlighted__112647c38;
  uStack_40 = param_1;
  uStack_38 = uVar3;
  _objc_retain();
  _objc_msgSendSuper2(&uStack_40,puVar1,param_3);
  uStack_50 = param_1;
  uStack_48 = uVar3;
  _objc_msgSendSuper2(&uStack_50,PTR_s_isHighlighted_1125fad78);
  uVar3 = 0x3fe3333333333333;
  if (iVar2 == 0) {
    uVar3 = 0x3ff0000000000000;
  }
  func_0x00010c1677c0(uVar3,param_1);
  _objc_release(param_1);
  return;
}



/* Entry: 104347850; end: 104347883;  */

void FUN_104347850(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104347884; end: 104347893; -[_TtC23GamesLensPlusUpsellCard15TextLinkControl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104347884(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113070010));
  return;
}



/* Entry: 104347894; end: 1043478b3;  */

void FUN_104347894(void)

{
  _objc_opt_self(&PTR_PTR_11299fac8);
  return;
}



/* Entry: 1043478b4; end: 104347d7f;  */

undefined1  [16] FUN_1043478b4(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffef;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f1f7260);
  uVar3 = 0xd00000000000001e;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001e,0x800000010f1f71c0);
  uVar4 = 0;
  __sSi10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(uVar3);
  _objc_release(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(lVar5);
    _objc_release(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104347980);
  (*pcVar1)();
}



/* Entry: 104347d80; end: 104347da3;  */

undefined1  [16] FUN_104347d80(void)

{
  return ZEXT816(0x11075cc10);
}



/* Entry: 104347da4; end: 104347e4f;  */

void FUN_104347da4(void)

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



/* Entry: 104347e50; end: 104347e53;  */

void FUN_104347e50(void)

{
  undefined *puVar1;
  
  if (puRam0000000113070040 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dced7d0;
  _swift_getWitnessTable(&UNK_10dced7d0,&UNK_11075cdd8);
  puRam0000000113070040 = puVar1;
  return;
}



/* Entry: 104347e54; end: 104347e93;  */

void FUN_104347e54(void)

{
  undefined *puVar1;
  
  if (puRam0000000113070040 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dced7d0;
  _swift_getWitnessTable(&UNK_10dced7d0,&UNK_11075cdd8);
  puRam0000000113070040 = puVar1;
  return;
}



/* Entry: 104347e94; end: 104347ef3;  */

long FUN_104347e94(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 104347ef4; end: 104347f07;  */

/* WARNING: Possible PIC construction at 0x000102e021d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e021d4) */
/* WARNING: Removing unreachable block (ram,0x000102e021ec) */
/* WARNING: Removing unreachable block (ram,0x000102e021dc) */

void FUN_104347ef4(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
            (*param_1,param_1[1],param_1[1],param_1[2],param_1[3],*(undefined1 *)(param_1 + 4));
  return;
}



/* Entry: 104347f08; end: 104347fd7;  */

undefined8 * FUN_104347f08(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar2 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = *(undefined1 *)(param_2 + 4);
  func_0x000104347ec0(uVar1,uVar3,uVar2,uVar4,uVar5);
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  *(undefined1 *)(param_1 + 4) = uVar5;
  return param_1;
}



/* Entry: 104347fd8; end: 10434801f;  */

undefined8 * FUN_104347fd8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar3 = *(undefined1 *)(param_2 + 4);
  uVar5 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar6 = param_1[3];
  uVar7 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[3] = uVar9;
  param_1[2] = uVar8;
  uVar4 = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = uVar3;
  func_0x000102e021b8(uVar5,uVar1,uVar2,uVar6,uVar4);
  return param_1;
}



/* Entry: 104348020; end: 104348393;  */

int FUN_104348020(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 0x21) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = *(byte *)(param_1 + 8) ^ 0xff;
  if (*(byte *)(param_1 + 8) < 2) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 104348394; end: 104348587;  */

undefined * FUN_104348394(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae6d8;
  _objc_allocWithZone(PTR_PTR_1126ae6d8);
  func_0x00010c0460c0();
  puVar2 = PTR_PTR_1126b1bb0;
  _objc_opt_self(PTR_PTR_1126b1bb0);
  func_0x000104348454(param_1,param_2);
  func_0x00010c0967c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 104348588; end: 104348597;  */

undefined1  [16] FUN_104348588(void)

{
  return ZEXT816(0x11075ceb0);
}



/* Entry: 104348598; end: 10434865f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104348598(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113070048) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113070050) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104348660; end: 1043486bf; -[SCGamesServices init] */

void FUN_104348660(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("GamesServices.GamesServices",0x1b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10434868c);
  (*pcVar1)();
}



/* Entry: 1043486c0; end: 1043487a3; -[SCGamesServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043486c0(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113070048));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113070050));
  return;
}



/* Entry: 1043487a4; end: 1043487a7;  */

void FUN_1043487a4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113070080 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dced960;
  _swift_getWitnessTable(&UNK_10dced960,&UNK_11075cf40);
  puRam0000000113070080 = puVar1;
  return;
}



/* Entry: 1043487a8; end: 1043487e7;  */

void FUN_1043487a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113070080 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dced960;
  _swift_getWitnessTable(&UNK_10dced960,&UNK_11075cf40);
  puRam0000000113070080 = puVar1;
  return;
}



/* Entry: 1043487e8; end: 104348973;  */

bool FUN_1043487e8(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 104348974; end: 104348a1f;  */

void FUN_104348974(void)

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



/* Entry: 104348a20; end: 104348a23;  */

void FUN_104348a20(void)

{
  undefined *puVar1;
  
  if (puRam0000000113070088 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dced9f0;
  _swift_getWitnessTable(&UNK_10dced9f0,&UNK_11075d008);
  puRam0000000113070088 = puVar1;
  return;
}



/* Entry: 104348a24; end: 104348a63;  */

void FUN_104348a24(void)

{
  undefined *puVar1;
  
  if (puRam0000000113070088 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dced9f0;
  _swift_getWitnessTable(&UNK_10dced9f0,&UNK_11075d008);
  puRam0000000113070088 = puVar1;
  return;
}



/* Entry: 104348a64; end: 104348bc7;  */

int FUN_104348a64(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_104348ae0;
        goto LAB_104348ac4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_104348ac4:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_104348ae0:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 104348bc8; end: 104348c07; -[_TtC26PlayGamesCapturingServices26PlayGamesCapturingServices snapCapturingObjc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104348bc8(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x0001003a5b88();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104348c08; end: 104348ccf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104348c08(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113070090) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113070098) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104348cd0; end: 104348d2f; -[_TtC26PlayGamesCapturingServices26PlayGamesCapturingServices init] */

void FUN_104348cd0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("PlayGamesCapturingServices.PlayGamesCapturingServices",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104348cfc);
  (*pcVar1)();
}



/* Entry: 104348d30; end: 104348d67; -[_TtC26PlayGamesCapturingServices26PlayGamesCapturingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104348d30(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113070090));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113070098));
  return;
}



/* Entry: 104348d68; end: 104348d87;  */

void FUN_104348d68(void)

{
  _objc_opt_self(&PTR_PTR_11299fc48);
  return;
}



/* Entry: 104348d88; end: 104348def;  */

long FUN_104348d88(void)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  _swift_unknownObjectWeakInit(unaff_x20 + 0x10,0);
  *(undefined1 *)(unaff_x20 + 0x20) = 0;
  return unaff_x20;
}



/* Entry: 104348df0; end: 104348e33;  */

void FUN_104348df0(void)

{
  long unaff_x20;
  
  func_0x000104348dcc(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 104348e34; end: 104348e47;  */

bool FUN_104348e34(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 104348e48; end: 1043490af;  */

void FUN_104348e48(void)

{
  ulong uVar1;
  byte bVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar2 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  uVar1 = 0x800000010f1282a0;
  uVar4 = 0xd000000000000012;
  if (bVar2 != 2) {
    uVar1 = 0xec0000004c414e52;
    uVar4 = 0x45544e495f525245;
  }
  pcVar3 = "snapWebLensBridge";
  uVar5 = 0xd000000000000015;
  if (bVar2 != 0) {
    pcVar3 = "om untrusted frame: ";
    uVar5 = 0xd000000000000016;
  }
  if (bVar2 < 2) {
    uVar1 = (ulong)pcVar3 | 0x8000000000000000;
    uVar4 = uVar5;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar4,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1043490b0; end: 10434914b;  */

void FUN_1043490b0(undefined8 *param_1)

{
  ulong uVar1;
  byte bVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  
  bVar2 = *unaff_x20;
  uVar1 = 0x800000010f1282a0;
  uVar4 = 0xd000000000000012;
  if (bVar2 != 2) {
    uVar1 = 0xec0000004c414e52;
    uVar4 = 0x45544e495f525245;
  }
  pcVar3 = "snapWebLensBridge";
  uVar5 = 0xd000000000000015;
  if (bVar2 != 0) {
    pcVar3 = "om untrusted frame: ";
    uVar5 = 0xd000000000000016;
  }
  if (bVar2 < 2) {
    uVar1 = (ulong)pcVar3 | 0x8000000000000000;
    uVar4 = uVar5;
  }
  *param_1 = uVar4;
  param_1[1] = uVar1;
  return;
}



/* Entry: 10434914c; end: 10434922f;  */

undefined * FUN_10434914c(ulong param_1,ulong param_2)

{
  undefined1 auStack_38 [8];
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR___swiftEmptySetSingleton_11034f1d8;
  if ((param_1 & 1) != 0) {
    FUN_10434939c(auStack_38,0xd000000000000016,0x800000010f1f72e0);
    _swift_bridgeObjectRelease(uStack_30);
  }
  if ((param_2 & 1) != 0) {
    FUN_10434939c(auStack_38,0x455443454e4e4f43,0xee00534e454c5f44);
    _swift_bridgeObjectRelease(uStack_30);
  }
  return puStack_28;
}



/* Entry: 104349230; end: 104349237;  */

void FUN_104349230(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)(param_1,*unaff_x20,unaff_x20[1]);
  return;
}



/* Entry: 104349238; end: 10434927b;  */

void FUN_104349238(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar1,uVar2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10434927c; end: 1043492b3;  */

long FUN_10434927c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != *param_2 || param_1[1] != param_2[1]) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )();
    return lVar1;
  }
  return 1;
}



/* Entry: 1043492b4; end: 10434939b;  */

undefined8 FUN_1043492b4(ulong param_1,ulong param_2,long param_3)

{
  ulong *puVar1;
  ulong uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auStack_88 [72];
  
  if (*(long *)(param_3 + 0x10) == 0) {
    return 0;
  }
  __ss6HasherV5_seedABSi_tcfC(auStack_88,*(undefined8 *)(param_3 + 0x28));
  puVar3 = auStack_88;
  __sSS4hash4intoys6HasherVz_tF(puVar3,param_1,param_2);
  __ss6HasherV9_finalizeSiyF();
  uVar5 = -1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar6 = (ulong)puVar3 & (uVar5 ^ 0xffffffffffffffff);
  if ((*(ulong *)(param_3 + 0x38 + (uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) != 0) {
    do {
      puVar1 = (ulong *)(*(long *)(param_3 + 0x30) + uVar6 * 0x10);
      uVar4 = *puVar1;
      uVar2 = puVar1[1];
      if ((uVar4 == param_1 && uVar2 == param_2) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar4,uVar2,param_1,param_2,0), (uVar4 & 1) != 0)) {
        return 1;
      }
      uVar6 = uVar6 + 1 & ~uVar5;
    } while ((*(ulong *)(param_3 + 0x38 + (uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) != 0);
  }
  return 0;
}



/* Entry: 10434939c; end: 104349643;  */

undefined8 FUN_10434939c(ulong *param_1,ulong param_2,ulong param_3)

{
  ulong *puVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long *unaff_x20;
  ulong uVar6;
  long lVar7;
  long alStack_98 [9];
  
  lVar7 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(alStack_98,*(undefined8 *)(lVar7 + 0x28));
  plVar3 = alStack_98;
  __sSS4hash4intoys6HasherVz_tF(plVar3,param_2,param_3);
  __ss6HasherV9_finalizeSiyF();
  uVar5 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
  uVar6 = (ulong)plVar3 & (uVar5 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar7 + 0x38 + (uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) != 0) {
    do {
      puVar1 = (ulong *)(*(long *)(lVar7 + 0x30) + uVar6 * 0x10);
      uVar4 = *puVar1;
      uVar2 = puVar1[1];
      if ((uVar4 == param_2 && uVar2 == param_3) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar4,uVar2,param_2,param_3,0), (uVar4 & 1) != 0)) {
        _swift_bridgeObjectRelease(param_3);
        puVar1 = (ulong *)(*(long *)(lVar7 + 0x30) + uVar6 * 0x10);
        uVar5 = puVar1[1];
        *param_1 = *puVar1;
        param_1[1] = uVar5;
        _swift_bridgeObjectRetain();
        return 0;
      }
      uVar6 = uVar6 + 1 & ~uVar5;
    } while ((*(ulong *)(lVar7 + 0x38 + (uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) != 0);
  }
  lVar7 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native(lVar7);
  alStack_98[0] = *unaff_x20;
  _swift_bridgeObjectRetain(param_3);
  func_0x0001043494e0(param_2,param_3,uVar6,lVar7);
  *unaff_x20 = alStack_98[0];
  *param_1 = param_2;
  param_1[1] = param_3;
  return 1;
}



/* Entry: 104349644; end: 10434986b;  */

void FUN_104349644(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  long lVar15;
  long lVar16;
  ulong uVar17;
  undefined1 auStack_a8 [72];
  
  lVar15 = *unaff_x20;
  lVar1 = *(long *)(lVar15 + 0x18);
  if (*(long *)(lVar15 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0x113070180;
  func_0x0001000285a8(0x113070180,&UNK_10dceddb0);
  lVar7 = lVar15;
  __ss11_SetStorageC6resize8original8capacity4moveAByxGs05__RawaB0C_SiSbtFZ(lVar15,lVar1,0,uVar6);
  if (*(long *)(lVar15 + 0x10) == 0) {
LAB_104349834:
    _swift_release(lVar15);
    *unaff_x20 = lVar7;
    return;
  }
  uVar12 = 1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
  uVar17 = 0xffffffffffffffff;
  if ((*(byte *)(lVar15 + 0x20) & 0x3f) < 6) {
    uVar17 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar17 = uVar17 & *(ulong *)(lVar15 + 0x38);
  lVar1 = lVar7 + 0x38;
  lVar10 = 0;
  do {
    if (uVar17 == 0) {
      do {
        lVar16 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x104349868);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar16) goto LAB_104349834;
        uVar17 = ((ulong *)(lVar15 + 0x38))[lVar16];
        lVar10 = lVar10 + 1;
      } while (uVar17 == 0);
      uVar9 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
    }
    else {
      uVar9 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
      lVar16 = lVar10;
    }
    puVar2 = (undefined8 *)(*(long *)(lVar15 + 0x30) + (LZCOUNT(uVar9) | lVar16 << 6) * 0x10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    __ss6HasherV5_seedABSi_tcfC(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    _swift_bridgeObjectRetain(uVar3);
    puVar8 = auStack_a8;
    __sSS4hash4intoys6HasherVz_tF(puVar8,uVar6,uVar3);
    __ss6HasherV9_finalizeSiyF();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10434986c);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar4 = (bool)(uVar13 == uVar9 | bVar4);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar16;
  } while( true );
}



/* Entry: 10434986c; end: 1043499c7;  */

void FUN_10434986c(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *unaff_x20;
  long lVar11;
  long lVar12;
  
  func_0x0001000285a8(0x113070180,&UNK_10dceddb0);
  lVar11 = *unaff_x20;
  lVar6 = lVar11;
  __ss11_SetStorageC4copy8originalAByxGs05__RawaB0C_tFZ();
  if (*(long *)(lVar11 + 0x10) != 0) {
    lVar1 = lVar11 + 0x38;
    uVar7 = (1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar6 != lVar11 || lVar1 + uVar7 * 8 <= lVar6 + 0x38U) {
      _memmove(lVar6 + 0x38U,lVar1,uVar7 << 3);
    }
    lVar12 = 0;
    *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
    uVar8 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar7 = 0xffffffffffffffff;
    if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
      uVar7 = ~(-1L << (uVar8 & 0x3f));
    }
    uVar7 = uVar7 & *(ulong *)(lVar11 + 0x38);
    if (uVar7 == 0) goto LAB_104349948;
    do {
      uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar7 = uVar7 - 1 & uVar7;
      while( true ) {
        lVar10 = (LZCOUNT(uVar9) | lVar12 << 6) * 0x10;
        puVar2 = (undefined8 *)(*(long *)(lVar11 + 0x30) + lVar10);
        uVar4 = puVar2[1];
        puVar3 = (undefined8 *)(*(long *)(lVar6 + 0x30) + lVar10);
        *puVar3 = *puVar2;
        puVar3[1] = uVar4;
        _swift_bridgeObjectRetain();
        if (uVar7 != 0) break;
LAB_104349948:
        do {
          lVar10 = lVar12 + 1;
          if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1043499c8);
            (*pcVar5)();
          }
          if ((long)(uVar8 + 0x3f >> 6) <= lVar10) goto LAB_1043499a0;
          uVar7 = *(ulong *)(lVar1 + lVar10 * 8);
          lVar12 = lVar12 + 1;
        } while (uVar7 == 0);
        uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
        uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
        uVar7 = uVar7 - 1 & uVar7;
        lVar12 = lVar10;
      }
    } while( true );
  }
LAB_1043499a0:
  _swift_release(lVar11);
  *unaff_x20 = lVar6;
  return;
}



/* Entry: 1043499c8; end: 104349c2b;  */

void FUN_1043499c8(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  long lVar15;
  ulong *puVar16;
  long lVar17;
  ulong uVar18;
  undefined1 auStack_a8 [72];
  
  lVar15 = *unaff_x20;
  lVar1 = *(long *)(lVar15 + 0x18);
  if (*(long *)(lVar15 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0x113070180;
  func_0x0001000285a8(0x113070180,&UNK_10dceddb0);
  lVar7 = lVar15;
  __ss11_SetStorageC6resize8original8capacity4moveAByxGs05__RawaB0C_SiSbtFZ(lVar15,lVar1,1,uVar6);
  if (*(long *)(lVar15 + 0x10) == 0) {
LAB_104349bf8:
    _swift_release(lVar15);
    *unaff_x20 = lVar7;
    return;
  }
  puVar16 = (ulong *)(lVar15 + 0x38);
  uVar12 = 1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
  uVar18 = 0xffffffffffffffff;
  if ((*(byte *)(lVar15 + 0x20) & 0x3f) < 6) {
    uVar18 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar18 = uVar18 & *puVar16;
  lVar1 = lVar7 + 0x38;
  lVar10 = 0;
  do {
    if (uVar18 == 0) {
      do {
        lVar17 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x104349c28);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar17) {
          uVar18 = 1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
          if ((*(byte *)(lVar15 + 0x20) & 0x3f) < 6) {
            *puVar16 = -1L << (uVar18 & 0x3f);
          }
          else {
            _bzero(puVar16,uVar18 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(lVar15 + 0x10) = 0;
          goto LAB_104349bf8;
        }
        uVar18 = puVar16[lVar17];
        lVar10 = lVar10 + 1;
      } while (uVar18 == 0);
      uVar9 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar18 = uVar18 - 1 & uVar18;
    }
    else {
      uVar9 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar18 = uVar18 - 1 & uVar18;
      lVar17 = lVar10;
    }
    puVar2 = (undefined8 *)(*(long *)(lVar15 + 0x30) + (LZCOUNT(uVar9) | lVar17 << 6) * 0x10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    __ss6HasherV5_seedABSi_tcfC(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    __sSS4hash4intoys6HasherVz_tF(puVar8,uVar6,uVar3);
    __ss6HasherV9_finalizeSiyF();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x104349c2c);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar4 = (bool)(uVar13 == uVar9 | bVar4);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar17;
  } while( true );
}



/* Entry: 104349c2c; end: 104349c8f;  */

ulong FUN_104349c2c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  _swift_initStaticObject();
  __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF();
  _swift_bridgeObjectRelease(param_2);
  if (3 < uVar1) {
    uVar1 = 4;
  }
  return uVar1;
}



/* Entry: 104349c90; end: 104349c93;  */

void FUN_104349c90(void)

{
  undefined *puVar1;
  
  if (puRam0000000113070170 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcedb40;
  _swift_getWitnessTable(&UNK_10dcedb40,&UNK_11075d230);
  puRam0000000113070170 = puVar1;
  return;
}



/* Entry: 104349c94; end: 104349cd3;  */

void FUN_104349c94(void)

{
  undefined *puVar1;
  
  if (puRam0000000113070170 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcedb40;
  _swift_getWitnessTable(&UNK_10dcedb40,&UNK_11075d230);
  puRam0000000113070170 = puVar1;
  return;
}



/* Entry: 104349cd4; end: 104349cd7;  */

void FUN_104349cd4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113070178 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcedc60;
  _swift_getWitnessTable(&UNK_10dcedc60,&UNK_11075d2a8);
  puRam0000000113070178 = puVar1;
  return;
}



/* Entry: 104349cd8; end: 104349d17;  */

void FUN_104349cd8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113070178 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcedc60;
  _swift_getWitnessTable(&UNK_10dcedc60,&UNK_11075d2a8);
  puRam0000000113070178 = puVar1;
  return;
}



/* Entry: 104349d18; end: 104349e83;  */

int FUN_104349d18(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfc < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 3) {
      iVar2 = 4;
    }
    if (param_2 + 3 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_104349d94;
        goto LAB_104349d78;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_104349d78:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_104349d94:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 104349e84; end: 104349ef3;  */

undefined8 * FUN_104349e84(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 104349ef4; end: 104349f87;  */

int FUN_104349ef4(int *param_1,int param_2)

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



/* Entry: 104349f88; end: 104349fbf;  */

void FUN_104349f88(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 104349fc0; end: 10434a0c7;  */

undefined8 * FUN_104349fc0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar2 = param_2[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar2;
  uVar1 = param_2[5];
  uVar3 = param_2[6];
  param_1[5] = uVar1;
  param_1[6] = uVar3;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar1);
  _objc_retain(uVar3);
  return param_1;
}



/* Entry: 10434a0c8; end: 10434a133;  */

undefined8 * FUN_10434a0c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[3] = param_2[3];
  _swift_bridgeObjectRelease(param_1[4]);
  uVar2 = param_1[5];
  uVar1 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_1[6];
  param_1[6] = param_2[6];
  _objc_release(uVar2);
  return param_1;
}



/* Entry: 10434a134; end: 10434a1d7;  */

int FUN_10434a134(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xe] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 10);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10434a1d8; end: 10434a207;  */

void FUN_10434a1d8(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10434a208; end: 10434a2df;  */

undefined8 * FUN_10434a208(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[4];
  param_1[4] = uVar2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  return param_1;
}



/* Entry: 10434a2e0; end: 10434a333;  */

undefined8 * FUN_10434a2e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  _swift_bridgeObjectRelease(param_1[3]);
  uVar2 = param_1[4];
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Entry: 10434a334; end: 10434a3f7;  */

int FUN_10434a334(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10434a3f8; end: 10434a4cf;  */

void FUN_10434a3f8(void)

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



/* Entry: 10434a4d0; end: 10434a4ef;  */

void FUN_10434a4d0(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 10434a4f0; end: 10434a52f;  */

void FUN_10434a4f0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113070210 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dceddc0;
  _swift_getWitnessTable(&UNK_10dceddc0,&UNK_11075d468);
  puRam0000000113070210 = puVar1;
  return;
}



/* Entry: 10434a530; end: 10434a53f;  */

undefined1  [16] FUN_10434a530(void)

{
  return ZEXT816(0x11075d468);
}



/* Entry: 10434a540; end: 10434a747;  */

undefined * FUN_10434a540(void)

{
  return &UNK_10dcedea0;
}



/* Entry: 10434a748; end: 10434a7f3;  */

void FUN_10434a748(void)

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



/* Entry: 10434a7f4; end: 10434a807;  */

bool FUN_10434a7f4(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10434a808; end: 10434a8e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10434a808(undefined8 param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar1 = auStack_40;
  _objc_allocWithZone();
  func_0x0001033fc6c0(param_1,unaff_x20 + _DAT_113070218);
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  func_0x0001000834e4(param_1);
  return puVar1;
}



/* Entry: 10434a8e8; end: 10434a947; -[SCWebLensPlayerServices init] */

void FUN_10434a8e8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("WebLensesServices.WebLensPlayerServices",0x27,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10434a914);
  (*pcVar1)();
}



/* Entry: 10434a948; end: 10434a95b; -[SCWebLensPlayerServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10434a948(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(((undefined8 *)(param_1 + _DAT_113070218))[3] + -8);
  if ((*(byte *)(lVar1 + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001000834f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113070218));
  return;
}



/* Entry: 10434a95c; end: 10434a99b;  */

void FUN_10434a95c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113070220 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcedf50;
  _swift_getWitnessTable(&UNK_10dcedf50,&UNK_11075d5f0);
  puRam0000000113070220 = puVar1;
  return;
}



/* Entry: 10434a99c; end: 10434aaff;  */

int FUN_10434a99c(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10434aa18;
        goto LAB_10434a9fc;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10434a9fc:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_10434aa18:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}


