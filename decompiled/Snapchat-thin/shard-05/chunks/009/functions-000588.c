/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1042fbeb4; end: 1042fbf3f; -[SCEventType description] */

void FUN_1042fbeb4(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = 0;
  FUN_1042dddf8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  _objc_retain(param_1);
  FUN_1042fbf40(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000104301afc(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                      FUN_1042dddf8);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042fbf40; end: 1042fc653;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042fbf40(undefined8 param_1,long param_2)

{
  long lVar1;
  byte *pbVar2;
  undefined **ppuVar3;
  byte bVar4;
  undefined8 uVar5;
  long extraout_x8;
  byte *pbVar6;
  long lVar7;
  long lVar8;
  undefined **ppuVar9;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  code *pcVar10;
  long lVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  long lVar17;
  byte abStack_a0 [8];
  byte abStack_98 [4];
  uint uStack_94;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar7 = 0x11306c8f0;
  uStack_90 = param_1;
  func_0x0001000285a8(0x11306c8f0,&UNK_10dce7dd8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  lVar7 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  pbVar14 = abStack_a0 + lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pbVar15 = pbVar14 + -extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pbVar16 = pbVar15 + -extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pbVar13 = pbVar16 + -extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = (long)pbVar13 - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pbVar12 = (byte *)(lVar11 - extraout_x12_03);
  lVar1 = 0;
  FUN_1042dddf8();
  lVar17 = *(long *)(lVar1 + -8);
  pcVar10 = *(code **)(lVar17 + 0x38);
  ppuVar3 = (undefined **)0x1;
  uVar5 = 1;
  pbVar2 = pbVar12;
  (*pcVar10)();
  bVar4 = *(byte *)(param_2 + _DAT_11306c8f8);
  pbVar6 = (byte *)(ulong)bVar4;
  ppuVar9 = (undefined **)&UNK_100db56e4;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar4) {
  default:
    pbVar13 = *(byte **)(param_2 + _DAT_11306c958);
    if (pbVar13 == (byte *)0x0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1042fc638);
      (*pcVar10)();
    }
  case 0x23:
    func_0x000104300d00(pbVar12);
    *(undefined8 *)pbVar12 = *(undefined8 *)(pbVar13 + _DAT_11306ccb8);
  case 0x1c:
    uVar5 = 0;
    goto code_r0x0001042fc57c;
  case 1:
    if (*(long *)(param_2 + _DAT_11306c950) == 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1042fc644);
      (*pcVar10)();
    }
    FUN_1042fa424(&lStack_88);
    ppuVar3 = &PTR_DAT_11306c000;
  case 0xd:
    func_0x000104300d00(pbVar12,ppuVar3 + 0x11e,&UNK_10dce7dd8);
    *(undefined8 *)(pbVar13 + 8) = uStack_80;
    *(long *)pbVar13 = lStack_88;
    *(undefined8 *)(pbVar13 + 0x18) = uStack_70;
    *(undefined8 *)(pbVar13 + 0x10) = uStack_78;
    *(undefined8 *)(pbVar13 + 0x20) = uStack_68;
    uVar5 = 1;
    break;
  case 2:
    lVar7 = *(long *)(param_2 + _DAT_11306c948);
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1042fc634);
      (*pcVar10)();
    }
    _objc_retain();
    bVar4 = (byte)uVar5;
    FUN_1042fbb48();
    func_0x000104300d00(pbVar12,0x11306c8f0,&UNK_10dce7dd8);
    *(long *)pbVar13 = lVar7;
    *(undefined ***)(pbVar13 + 8) = ppuVar3;
    pbVar13[0x10] = bVar4;
    uVar5 = 2;
    break;
  case 3:
  case 0xe:
    lVar7 = *(long *)(param_2 + _DAT_11306c940);
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1042fc63c);
      (*pcVar10)();
    }
    uVar5 = ((undefined8 *)(lVar7 + _DAT_11306cbd8))[1];
    *(undefined8 *)pbVar16 = *(undefined8 *)(lVar7 + _DAT_11306cbd8);
    *(undefined8 *)(pbVar16 + 8) = uVar5;
    bVar4 = *(byte *)(*(long *)(lVar7 + _DAT_11306cbe0) + _DAT_11306cbe8);
    _swift_bridgeObjectRetain();
    func_0x000104300d00(pbVar12,0x11306c8f0,&UNK_10dce7dd8);
    pbVar16[0x10] = bVar4;
  case 0xf:
    _swift_storeEnumTagMultiPayload();
    (*pcVar10)(pbVar16,0,1,lVar1);
    goto code_r0x0001042fc4a4;
  case 4:
    if (*(long *)(param_2 + _DAT_11306c938) == 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1042fc62c);
      (*pcVar10)();
    }
    _objc_retain();
    pbVar6 = pbVar13;
  case 0x19:
    func_0x000104301e1c(pbVar6);
  case 0x10:
    func_0x000104300d00(pbVar12);
  case 0x1d:
    uVar5 = 4;
    break;
  case 5:
    pbVar6 = *(byte **)(param_2 + _DAT_11306c930);
    if (pbVar6 == (byte *)0x0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1042fc648);
      (*pcVar10)();
    }
    uVar5 = *(undefined8 *)(pbVar6 + _DAT_11306cc48 + 8);
    *(undefined8 *)pbVar15 = *(undefined8 *)(pbVar6 + _DAT_11306cc48);
    *(undefined8 *)(pbVar15 + 8) = uVar5;
    ppuVar9 = &PTR_DAT_11306c000;
  case 0x11:
    bVar4 = *(byte *)(*(long *)(pbVar6 + (long)ppuVar9[0x18a]) + _DAT_11306cc58);
    _swift_bridgeObjectRetain();
    func_0x000104300d00(pbVar12,0x11306c8f0,&UNK_10dce7dd8);
    pbVar15[0x10] = bVar4;
    _swift_storeEnumTagMultiPayload(pbVar15,lVar1,5);
    (*pcVar10)(pbVar15,0,1,lVar1);
    pbVar16 = pbVar15;
    goto code_r0x0001042fc4a4;
  case 6:
    pbVar2 = *(byte **)(param_2 + _DAT_11306c928);
    if (pbVar2 == (byte *)0x0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1042fc64c);
      (*pcVar10)();
    }
  case 0x12:
    _objc_retain();
    FUN_1042f7584();
    uStack_94 = (uint)((ulong)uVar5 >> 8) & 0xffffff;
    func_0x000104300d00(pbVar12,0x11306c8f0,&UNK_10dce7dd8);
    *(byte **)pbVar13 = pbVar2;
    *(undefined ***)(pbVar13 + 8) = ppuVar3;
    pbVar13[0x10] = (byte)uVar5;
    pbVar13[0x11] = (byte)uStack_94;
    uVar5 = 6;
    break;
  case 7:
    lVar8 = *(long *)(param_2 + _DAT_11306c920);
    if (lVar8 == 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1042fc640);
      (*pcVar10)();
    }
    pbVar13 = (byte *)(ulong)*(byte *)(*(long *)(lVar8 + _DAT_11306caf8) + _DAT_11306cb08);
    pbVar15 = (byte *)(ulong)*(byte *)(*(long *)(lVar8 + _DAT_11306cb00) + _DAT_11306cb10);
    ppuVar3 = &PTR_DAT_11306c000;
  case 0x13:
    func_0x000104300d00(pbVar12,ppuVar3 + 0x11e,&UNK_10dce7dd8);
    *pbVar14 = (byte)pbVar13;
    abStack_a0[lVar7 + 1] = (byte)pbVar15;
    _swift_storeEnumTagMultiPayload(pbVar14,lVar1,7);
    (*pcVar10)(pbVar14,0,1,lVar1);
    pbVar16 = pbVar14;
    goto code_r0x0001042fc4a4;
  case 8:
    lVar7 = *(long *)(param_2 + _DAT_11306c918);
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1042fc654);
      (*pcVar10)();
    }
    func_0x000104300d00(pbVar12,0x11306c8f0,&UNK_10dce7dd8);
    *pbVar12 = *(byte *)(lVar7 + _DAT_11306c760);
    uVar5 = 8;
    goto code_r0x0001042fc57c;
  case 9:
    pbVar13 = *(byte **)(param_2 + _DAT_11306c910);
  case 0x1e:
    if (pbVar13 == (byte *)0x0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1042fc630);
      (*pcVar10)();
    }
    func_0x000104300d00(pbVar12,0x11306c8f0,&UNK_10dce7dd8);
  case 0x22:
    pbVar6 = *(byte **)(pbVar13 + _DAT_11306c798);
    ppuVar9 = _DAT_11306c790;
  case 0x15:
    bVar4 = pbVar6[(long)ppuVar9];
  case 0x20:
    *pbVar12 = bVar4;
    uVar5 = 9;
code_r0x0001042fc57c:
    _swift_storeEnumTagMultiPayload(pbVar12,lVar1,uVar5);
    (*pcVar10)(pbVar12,0,1,lVar1);
    goto code_r0x0001042fc594;
  case 10:
    lVar7 = *(long *)(param_2 + _DAT_11306c908);
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1042fc650);
      (*pcVar10)();
    }
    func_0x000104300d00(pbVar12,0x11306c8f0,&UNK_10dce7dd8);
    uVar5 = *(undefined8 *)(lVar7 + _DAT_11306c678);
    pbVar13 = (byte *)((undefined8 *)(lVar7 + _DAT_11306c678))[1];
    *pbVar12 = *(byte *)(lVar7 + _DAT_11306c680);
    *(undefined8 *)(pbVar12 + 8) = uVar5;
    *(byte **)(pbVar12 + 0x10) = pbVar13;
    goto code_r0x0001042fc510;
  case 0xb:
    pbVar13 = *(byte **)(param_2 + _DAT_11306c900);
  case 0x21:
    if (pbVar13 == (byte *)0x0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1042fc628);
      (*pcVar10)();
    }
  case 0x17:
    func_0x000104300d00(pbVar12);
  case 0x1a:
    *pbVar12 = pbVar13[_DAT_11306cba0];
    pbVar6 = &DAT_11306cba8;
  case 0x1b:
    pbVar6 = pbVar13 + *(long *)pbVar6;
    pbVar13 = *(byte **)(pbVar6 + 8);
    *(undefined8 *)(pbVar12 + 8) = *(undefined8 *)pbVar6;
    *(byte **)(pbVar12 + 0x10) = pbVar13;
  case 0x1f:
  case 0x14:
    goto code_r0x0001042fc510;
  case 0x16:
    goto code_r0x0001042fc4ac;
  }
  _swift_storeEnumTagMultiPayload(pbVar13,lVar1,uVar5);
  (*pcVar10)(pbVar13,0,1,lVar1);
  pbVar16 = pbVar13;
code_r0x0001042fc4a4:
  func_0x000104300c68(pbVar16,pbVar12);
code_r0x0001042fc4ac:
code_r0x0001042fc594:
  func_0x000104300cb8(pbVar12,lVar11,0x11306c8f0,&UNK_10dce7dd8);
  lVar7 = lVar11;
  (**(code **)(lVar17 + 0x30))(lVar11,1,lVar1);
  if ((int)lVar7 == 1) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x1042fc624);
    (*pcVar10)();
  }
  func_0x000104300d00(pbVar12,0x11306c8f0,&UNK_10dce7dd8);
  _objc_release(param_2);
  FUN_104301a74(lVar11,uStack_90,FUN_1042dddf8);
  return;
code_r0x0001042fc510:
  _swift_storeEnumTagMultiPayload();
  (*pcVar10)(pbVar12,0,1,lVar1);
  _swift_bridgeObjectRetain(pbVar13);
  goto code_r0x0001042fc594;
}



/* Entry: 1042fc654; end: 1042fc69b; -[SCEventType init] */

void FUN_1042fc654(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "PromotedPlaceTrackerServices/PlaceEventWrapper.swift",0x34,2,0x91,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1042fc69c);
  (*pcVar1)();
}



/* Entry: 1042fc69c; end: 1042fc6cf; -[SCEventType hash] */

undefined8 FUN_1042fc69c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1042fc6d0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1042fc6d0; end: 1042fcc23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042fc6d0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long unaff_x20;
  long lVar4;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined1 auStack_2d0 [72];
  undefined1 auStack_288 [72];
  undefined1 auStack_240 [72];
  undefined1 auStack_1f8 [72];
  undefined1 auStack_1b0 [72];
  undefined1 auStack_168 [72];
  undefined1 auStack_120 [72];
  undefined1 auStack_d8 [72];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  __ss6HasherVABycfC(auStack_d8);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(unaff_x20 + _DAT_11306c8f8));
  lVar4 = *(long *)(unaff_x20 + _DAT_11306c958);
  if (lVar4 == 0) {
    uVar1 = 0;
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherVABycfC(&uStack_318);
    uVar1 = *(undefined8 *)(lVar4 + _DAT_11306ccb8);
    __ss6HasherV8_combineyySuF(uVar1);
    uStack_68 = uStack_2f0;
    uStack_70 = uStack_2f8;
    uStack_58 = uStack_2e0;
    uStack_60 = uStack_2e8;
    uStack_50 = uStack_2d8;
    uStack_88 = uStack_310;
    uStack_90 = uStack_318;
    uStack_78 = uStack_300;
    uStack_80 = uStack_308;
    __ss6HasherV8finalizeSiyF();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar1);
  }
  if (*(long *)(unaff_x20 + _DAT_11306c950) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1042f990c();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar1);
  }
  lVar4 = *(long *)(unaff_x20 + _DAT_11306c948);
  if (lVar4 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherVABycfC(auStack_2d0);
    uVar1 = *(undefined8 *)(lVar4 + _DAT_11306c888);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
              (uVar1,((undefined8 *)(lVar4 + _DAT_11306c888))[1]);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
    __ss6HasherV8_combineyySuF(uVar2);
    uVar1 = *(undefined8 *)(lVar4 + _DAT_11306c890);
    func_0x00010bfde980(uVar1);
    __ss6HasherV8_combineyySuF();
    __ss6HasherV8finalizeSiyF();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar1);
  }
  lVar4 = *(long *)(unaff_x20 + _DAT_11306c940);
  if (lVar4 == 0) {
    __ss6HasherV8_combineyys5UInt8VF();
  }
  else {
    func_0x00010bfde980();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar4);
  }
  if (*(long *)(unaff_x20 + _DAT_11306c938) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_104301ba0();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar4);
  }
  lVar4 = *(long *)(unaff_x20 + _DAT_11306c930);
  if (lVar4 == 0) {
    uVar1 = 0;
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherVABycfC(auStack_288);
    uVar1 = *(undefined8 *)(lVar4 + _DAT_11306cc48);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
              (uVar1,((undefined8 *)(lVar4 + _DAT_11306cc48))[1]);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
    __ss6HasherV8_combineyySuF(uVar2);
    uVar1 = *(undefined8 *)(lVar4 + _DAT_11306cc50);
    func_0x00010bfde980(uVar1);
    __ss6HasherV8_combineyySuF();
    __ss6HasherV8finalizeSiyF();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar1);
  }
  if (*(long *)(unaff_x20 + _DAT_11306c928) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1042f6cf4();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar1);
  }
  lVar4 = *(long *)(unaff_x20 + _DAT_11306c920);
  if (lVar4 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherVABycfC(auStack_240);
    func_0x00010bfde980(*(undefined8 *)(lVar4 + _DAT_11306caf8));
    __ss6HasherV8_combineyySuF();
    uVar1 = *(undefined8 *)(lVar4 + _DAT_11306cb00);
    func_0x00010bfde980(uVar1);
    __ss6HasherV8_combineyySuF();
    __ss6HasherV8finalizeSiyF();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar1);
  }
  lVar4 = *(long *)(unaff_x20 + _DAT_11306c918);
  if (lVar4 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherVABycfC(auStack_1f8);
    uVar3 = (ulong)*(byte *)(lVar4 + _DAT_11306c760);
    __ss6HasherV8_combineyys5UInt8VF(uVar3);
    __ss6HasherV8finalizeSiyF();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar3);
  }
  lVar4 = *(long *)(unaff_x20 + _DAT_11306c910);
  if (lVar4 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherVABycfC(auStack_1b0);
    uVar1 = *(undefined8 *)(lVar4 + _DAT_11306c798);
    func_0x00010bfde980(uVar1);
    __ss6HasherV8_combineyySuF();
    __ss6HasherV8finalizeSiyF();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar1);
  }
  lVar4 = *(long *)(unaff_x20 + _DAT_11306c908);
  if (lVar4 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherVABycfC(auStack_168);
    __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(lVar4 + _DAT_11306c680));
    uVar1 = *(undefined8 *)(lVar4 + _DAT_11306c678);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
              (uVar1,((undefined8 *)(lVar4 + _DAT_11306c678))[1]);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
    __ss6HasherV8_combineyySuF(uVar2);
    __ss6HasherV8finalizeSiyF();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  lVar4 = *(long *)(unaff_x20 + _DAT_11306c900);
  if (lVar4 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherVABycfC(auStack_120);
    __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(lVar4 + _DAT_11306cba0));
    uVar1 = *(undefined8 *)(lVar4 + _DAT_11306cba8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
              (uVar1,((undefined8 *)(lVar4 + _DAT_11306cba8))[1]);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
    __ss6HasherV8_combineyySuF(uVar2);
    __ss6HasherV8finalizeSiyF();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1042fcc24; end: 1042fd093;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_1042fcc24(code *param_1)

{
  code cVar1;
  code *pcVar2;
  code *pcVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  char *pcVar8;
  uint uVar9;
  code *unaff_x20;
  long unaff_x22;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_58;
  long lStack_38;
  
  pcVar3 = unaff_x20;
  _swift_getObjectType();
  func_0x000104300cb8(param_1,&stack0xffffffffffffffb0,0x112d387f8,&UNK_10d902650);
  if (lStack_38 == 0) {
code_r0x0001042fccf4:
    func_0x000104300d00(&stack0xffffffffffffffb0);
    goto LAB_1042fcd0c;
  }
  pcVar2 = (code *)&lStack_58;
  puVar6 = PTR___sypN_11034f1a8 + 8;
  _swift_dynamicCast(pcVar2,&stack0xffffffffffffffb0,puVar6,pcVar3,6);
  if (((ulong)pcVar2 & 1) == 0) goto LAB_1042fcd0c;
  cVar1 = unaff_x20[_DAT_11306c8f8];
  ppuVar7 = (undefined **)(ulong)(byte)cVar1;
  if (cVar1 != *(code *)(lStack_58 + _DAT_11306c8f8)) {
LAB_1042fcd04:
    goto code_r0x0001042fcd08;
  }
  switch(cVar1) {
  default:
    ppuVar7 = &PTR_DAT_11306c000;
  case (code)0xf:
  case (code)0x11:
  case (code)0x13:
  case (code)0x1b:
  case (code)0x84:
  case (code)0x92:
  case (code)0xca:
    ppuVar7 = (undefined **)ppuVar7[299];
code_r0x0001042fcccc:
    unaff_x20 = *(code **)(unaff_x20 + (long)ppuVar7);
code_r0x0001042fccd0:
    if (unaff_x20 != (code *)0x0) {
code_r0x0001042fccd4:
      param_1 = *(code **)(lStack_58 + (long)ppuVar7);
code_r0x0001042fccd8:
      if (param_1 != (code *)0x0) {
code_r0x0001042fcce0:
        FUN_104308470();
      }
      _objc_retain(param_1);
      unaff_x20 = (code *)&stack0xffffffffffffffb0;
      FUN_104308028(unaff_x20);
      goto code_r0x0001042fd070;
    }
code_r0x0001042fceb8:
    param_1 = *(code **)(lStack_58 + (long)ppuVar7);
    _objc_retain(param_1);
code_r0x0001042fcec8:
code_r0x0001042fcecc:
    _objc_release();
    if (param_1 == (code *)0x0) {
      uVar9 = 1;
    }
    else {
code_r0x0001042fcd08:
      _objc_release();
LAB_1042fcd0c:
      uVar9 = 0;
    }
    goto code_r0x0001042fcd10;
  case (code)0x1:
  case (code)0x4b:
    unaff_x20 = *(code **)(unaff_x20 + (long)_DAT_11306c950);
    ppuVar7 = _DAT_11306c950;
  case (code)0x12:
  case (code)0x69:
    if (unaff_x20 == (code *)0x0) goto code_r0x0001042fceb8;
code_r0x0001042fce14:
    param_1 = *(code **)(lStack_58 + (long)ppuVar7);
    if (param_1 == (code *)0x0) {
code_r0x0001042fcfbc:
    }
    else {
      FUN_1042fa4a4();
code_r0x0001042fce24:
    }
    _objc_retain(param_1);
    unaff_x20 = (code *)&stack0xffffffffffffffb0;
    FUN_1042f9a14(unaff_x20);
    goto code_r0x0001042fd070;
  case (code)0x2:
  case (code)0x28:
    ppuVar7 = _DAT_11306c948;
    if (*(long *)(unaff_x20 + (long)_DAT_11306c948) != 0) {
      param_1 = *(code **)(lStack_58 + (long)_DAT_11306c948);
      if (param_1 != (code *)0x0) goto code_r0x0001042fcdb0;
      goto code_r0x0001042fcf58;
    }
    goto code_r0x0001042fceb8;
  case (code)0x3:
  case (code)0x22:
    ppuVar7 = &PTR_DAT_11306c000;
  case (code)0x99:
    ppuVar7 = (undefined **)ppuVar7[0x128];
code_r0x0001042fcdc0:
    pcVar2 = *(code **)(unaff_x20 + (long)ppuVar7);
code_r0x0001042fcdc4:
    if (pcVar2 == (code *)0x0) goto code_r0x0001042fceb8;
    func_0x00010c071ae0();
    unaff_x20 = pcVar2;
code_r0x0001042fcdd8:
    uVar9 = (uint)unaff_x20;
    _objc_release();
    goto code_r0x0001042fcd10;
  case (code)0x4:
    ppuVar7 = _DAT_11306c938;
    if (*(long *)(unaff_x20 + (long)_DAT_11306c938) == 0) goto code_r0x0001042fceb8;
    param_1 = *(code **)(lStack_58 + (long)_DAT_11306c938);
    if (param_1 != (code *)0x0) {
      func_0x000104303264();
    }
  case (code)0x9a:
  case (code)0xd2:
    _objc_retain(param_1);
    pcVar2 = (code *)&stack0xffffffffffffffb0;
    FUN_104301ca0(pcVar2);
code_r0x0001042fcf28:
    unaff_x20 = pcVar2;
    goto code_r0x0001042fd070;
  case (code)0x5:
    ppuVar7 = _DAT_11306c930;
    if (*(long *)(unaff_x20 + (long)_DAT_11306c930) == 0) goto code_r0x0001042fceb8;
    param_1 = *(code **)(lStack_58 + (long)_DAT_11306c930);
    if (param_1 != (code *)0x0) {
      func_0x000104307e4c();
      goto code_r0x0001042fce48;
    }
    break;
  case (code)0x6:
  case (code)0x47:
  case (code)0x56:
  case (code)0x6b:
    ppuVar7 = &PTR_DAT_11306c000;
  case (code)0x49:
  case (code)0x4e:
  case (code)0x58:
    ppuVar7 = (undefined **)ppuVar7[0x125];
code_r0x0001042fce54:
    unaff_x20 = *(code **)(unaff_x20 + (long)ppuVar7);
code_r0x0001042fce58:
    if (unaff_x20 == (code *)0x0) goto code_r0x0001042fceb8;
    param_1 = *(code **)(lStack_58 + (long)ppuVar7);
    if (param_1 == (code *)0x0) {
code_r0x0001042fd004:
    }
    else {
code_r0x0001042fce68:
      FUN_1042f762c();
code_r0x0001042fce6c:
    }
    _objc_retain(param_1);
    unaff_x20 = (code *)&stack0xffffffffffffffb0;
    FUN_1042f6da4(unaff_x20);
    goto code_r0x0001042fd070;
  case (code)0x7:
    ppuVar7 = _DAT_11306c920;
    if (*(long *)(unaff_x20 + (long)_DAT_11306c920) == 0) goto code_r0x0001042fceb8;
    if (*(long *)(lStack_58 + (long)_DAT_11306c920) != 0) {
      func_0x0001043055d0();
      goto code_r0x0001042fce00;
    }
  case (code)0xd8:
code_r0x0001042fcf84:
code_r0x0001042fcf88:
    _objc_retain();
    pcVar2 = (code *)&stack0xffffffffffffffb0;
    func_0x000104304330(pcVar2);
code_r0x0001042fcf94:
    unaff_x20 = pcVar2;
    goto code_r0x0001042fd070;
  case (code)0x8:
  case (code)0x41:
  case (code)0x54:
  case (code)0x64:
  case (code)0x6c:
    ppuVar7 = &PTR_DAT_11306c000;
  case (code)0x6a:
  case (code)0xd4:
    ppuVar7 = (undefined **)ppuVar7[0x123];
code_r0x0001042fce9c:
    if (*(long *)(unaff_x20 + (long)ppuVar7) == 0) goto code_r0x0001042fceb8;
    param_1 = *(code **)(lStack_58 + (long)ppuVar7);
code_r0x0001042fcea8:
    if (param_1 == (code *)0x0) {
code_r0x0001042fd04c:
    }
    else {
      FUN_1042f7e10();
    }
    _objc_retain(param_1);
code_r0x0001042fd064:
    unaff_x20 = (code *)&stack0xffffffffffffffb0;
    FUN_1042f7ac4(unaff_x20);
    goto code_r0x0001042fd070;
  case (code)0x9:
    ppuVar7 = _DAT_11306c910;
    if (*(long *)(unaff_x20 + (long)_DAT_11306c910) == 0) goto code_r0x0001042fceb8;
    param_1 = *(code **)(lStack_58 + (long)_DAT_11306c910);
    if (param_1 == (code *)0x0) goto code_r0x0001042fcf2c;
    func_0x0001042f8a14();
  case (code)0xb4:
code_r0x0001042fcf34:
    _objc_retain(param_1);
    unaff_x20 = (code *)&stack0xffffffffffffffb0;
    FUN_1042f85c4(unaff_x20);
    goto code_r0x0001042fd070;
  case (code)0xa:
    ppuVar7 = &PTR_DAT_11306c000;
  case (code)0x4c:
    ppuVar7 = (undefined **)ppuVar7[0x121];
    unaff_x20 = *(code **)(unaff_x20 + (long)ppuVar7);
code_r0x0001042fce7c:
    if (unaff_x20 == (code *)0x0) goto code_r0x0001042fceb8;
    param_1 = *(code **)(lStack_58 + (long)ppuVar7);
code_r0x0001042fce84:
    if (param_1 != (code *)0x0) {
      FUN_1042f6368();
    }
    _objc_retain(param_1);
    unaff_x20 = (code *)&stack0xffffffffffffffb0;
    func_0x0001042f6154(unaff_x20);
    goto code_r0x0001042fd070;
  case (code)0xb:
    unaff_x20 = *(code **)(unaff_x20 + (long)_DAT_11306c900);
    ppuVar7 = _DAT_11306c900;
  case (code)0xf4:
    if (unaff_x20 == (code *)0x0) goto code_r0x0001042fceb8;
    if (*(long *)(lStack_58 + (long)ppuVar7) != 0) {
code_r0x0001042fcd44:
      FUN_104305f2c();
    }
code_r0x0001042fcef8:
    _objc_retain();
    unaff_x20 = (code *)&stack0xffffffffffffffb0;
    func_0x0001043058d0(unaff_x20);
    goto code_r0x0001042fd070;
  case (code)0xe:
    goto code_r0x0001042fd04c;
  case (code)0x10:
    goto code_r0x0001042fccf4;
  case (code)0x14:
  case (code)0xb0:
  case (code)0xb8:
  case (code)0xc0:
    goto code_r0x0001042fcec8;
  case (code)0x16:
code_r0x0001042fcdb0:
    FUN_1042fbbc4();
  case (code)0x74:
code_r0x0001042fcf58:
code_r0x0001042fcf5c:
    _objc_retain(param_1);
    unaff_x20 = (code *)&stack0xffffffffffffffb0;
    func_0x0001042fb490(unaff_x20);
    goto code_r0x0001042fd070;
  case (code)0x17:
  case (code)0x19:
  case (code)0x1c:
  case (code)0x21:
  case (code)0x77:
  case (code)0x8b:
  case (code)0x9f:
  case (code)0xb3:
  case (code)0xbb:
  case (code)0xc3:
  case (code)0xd7:
  case (code)0xeb:
  case (code)0xf3:
  case (code)0xfb:
    goto code_r0x0001042fcccc;
  case (code)0x18:
    goto code_r0x0001042fcecc;
  case (code)0x1a:
code_r0x0001042fcf2c:
    goto code_r0x0001042fcf34;
  case (code)0x1d:
  case (code)0x82:
  case (code)0xaa:
  case (code)0xac:
  case (code)0xe2:
    goto code_r0x0001042fccd0;
  case (code)0x1e:
    break;
  case (code)0x20:
    goto code_r0x0001042fcfbc;
  case (code)0x29:
    goto code_r0x0001042fcffc;
  case (code)0x2a:
  case (code)0xee:
    goto code_r0x0001042fd004;
  case (code)0x2c:
    goto code_r0x0001042fcce0;
  case (code)0x3d:
  case (code)0x50:
  case (code)0x60:
    goto code_r0x0001042fcdd8;
  case (code)0x3e:
  case (code)0x51:
  case (code)0x61:
    goto code_r0x0001042fce9c;
  case (code)0x3f:
  case (code)0x45:
  case (code)0x4f:
  case (code)0x52:
  case (code)0x62:
  case (code)0x68:
  case (code)0x6f:
    goto code_r0x0001042fce58;
  case (code)0x40:
  case (code)0x53:
  case (code)0x63:
    goto code_r0x0001042fce7c;
  case (code)0x42:
  case (code)0x65:
    goto code_r0x0001042fce14;
  case (code)0x43:
  case (code)0x66:
  case (code)0x6d:
    goto code_r0x0001042fcea8;
  case (code)0x44:
  case (code)0x67:
  case (code)0x6e:
    goto code_r0x0001042fce84;
  case (code)0x46:
  case (code)0x55:
code_r0x0001042fce00:
    goto code_r0x0001042fcf84;
  case (code)0x48:
  case (code)0x57:
    goto code_r0x0001042fce6c;
  case (code)0x4d:
  case (code)0x8e:
  case (code)0xbe:
  case (code)0xc6:
  case (code)0xf6:
  case (code)0xfe:
code_r0x0001042fce48:
    break;
  case (code)0x75:
  case (code)0x89:
  case (code)0x9d:
  case (code)0xb1:
  case (code)0xb9:
  case (code)0xc1:
  case (code)0xd5:
  case (code)0xe9:
  case (code)0xf1:
  case (code)0xf9:
    goto code_r0x0001042fd080;
  case (code)0x76:
  case (code)0x8a:
  case (code)0x9e:
  case (code)0xb2:
  case (code)0xba:
  case (code)0xc2:
  case (code)0xd6:
  case (code)0xea:
  case (code)0xf2:
  case (code)0xfa:
    goto code_r0x0001042fcf5c;
  case (code)0x78:
    goto LAB_1042fcd04;
  case (code)0x79:
    goto LAB_1042fcd0c;
  case (code)0x7a:
  case (code)0xa2:
  case (code)0xda:
    goto code_r0x0001042fcf88;
  case (code)0x88:
    goto code_r0x0001042fcf28;
  case (code)0x8c:
    goto code_r0x0001042fce54;
  case (code)0x8d:
  case (code)0xbd:
  case (code)0xc5:
  case (code)0xd0:
    goto code_r0x0001042fcdc4;
  case (code)0x8f:
  case (code)0xbf:
  case (code)0xc7:
  case (code)0xf7:
  case (code)0xff:
    uVar9 = 0;
    if (puVar6 == (undefined *)0x0) {
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      _objc_retain(pcVar2);
    }
    else {
      _objc_retain(pcVar2);
      _swift_unknownObjectRetain(puVar6);
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0);
      _swift_unknownObjectRelease(puVar6);
    }
    (*pcVar3)(&uStack_b0);
    _objc_release(pcVar2);
    func_0x000104300d00(&uStack_b0,0x112d387f8,&UNK_10d902650);
    return (code *)(ulong)(uVar9 & 1);
  case (code)0x98:
    pcVar8 = (char *)(ulong)(byte)unaff_x20[_DAT_11306c8f8];
    pcVar3 = pcVar2;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(unaff_x20[_DAT_11306c8f8]) {
    default:
      if (*(long *)(unaff_x20 + _DAT_11306c958) == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1042fd644);
        (*pcVar3)();
      }
      pcVar3 = (code *)0x5241505f4d4f4f5a;
    case (code)0x17:
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
      param_1 = pcVar3;
    case (code)0x10:
      func_0x00010bf93020();
      _objc_release(param_1);
      pcVar3 = (code *)0x505954425553;
    case (code)0x15:
      pcVar3 = (code *)((ulong)pcVar3 & 0xffffffffffff | 0x5f45000000000000);
      break;
    case (code)0x1:
      if (*(long *)(unaff_x20 + (long)_DAT_11306c950) == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1042fd650);
        (*pcVar3)();
      }
      uVar4 = 0xd000000000000015;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1f4720);
      func_0x00010bf93020(pcVar2);
      _objc_release(uVar4);
      pcVar3 = (code *)0xd000000000000016;
      break;
    case (code)0x2:
      if (*(long *)(unaff_x20 + (long)_DAT_11306c948) == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1042fd640);
        (*pcVar3)();
      }
      unaff_x22 = -0x2fffffffffffffed;
      uVar4 = 0xd000000000000013;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1f46e0);
      func_0x00010bf93020(pcVar2);
      _objc_release(uVar4);
      goto code_r0x0001042fd2d0;
    case (code)0x3:
      if (*(long *)(unaff_x20 + _DAT_11306c940) == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1042fd648);
        (*pcVar3)();
      }
      uVar4 = 0x5f44415f50414e53;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f44415f50414e53,0xee00304d41524150);
      func_0x00010bf93020(pcVar2);
      _objc_release(uVar4);
      pcVar3 = (code *)0x5f45505954425553;
      break;
    case (code)0x4:
      unaff_x20 = *(code **)(unaff_x20 + (long)_DAT_11306c938);
    case (code)0x11:
      if (unaff_x20 == (code *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1042fd638);
        (*pcVar3)();
      }
      pcVar8 = "SUBTYPE_SESSION_PAUSE_RESUME";
      unaff_x22 = -0x2fffffffffffffed;
    case (code)0x12:
      param_1 = (code *)0xd000000000000013;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(pcVar8,0xd000000000000013);
    case (code)0x16:
      func_0x00010bf93020();
      _objc_release(param_1);
code_r0x0001042fd2d0:
      pcVar3 = (code *)(unaff_x22 + 1);
      break;
    case (code)0x5:
      if (*(long *)(unaff_x20 + (long)_DAT_11306c930) == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1042fd654);
        (*pcVar3)();
      }
      uVar4 = 0x50445f4545524854;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x50445f4545524854,0xed0000304d415241);
      func_0x00010bf93020(pcVar2);
      _objc_release(uVar4);
      pcVar3 = (code *)0x5f45505954425553;
      break;
    case (code)0x6:
      if (*(long *)(unaff_x20 + _DAT_11306c928) == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1042fd658);
        (*pcVar3)();
      }
      uVar4 = 0x505f544345464645;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x505f544345464645,0xed0000304d415241);
      func_0x00010bf93020(pcVar2);
      _objc_release(uVar4);
      pcVar3 = (code *)0x5f45505954425553;
      break;
    case (code)0x7:
      if (*(long *)(unaff_x20 + (long)_DAT_11306c920) == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1042fd64c);
        (*pcVar3)();
      }
      uVar4 = 0xd00000000000001b;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f1f4660);
      func_0x00010bf93020(pcVar2);
      _objc_release(uVar4);
      pcVar3 = (code *)0xd00000000000001c;
      break;
    case (code)0x8:
      if (*(long *)(unaff_x20 + _DAT_11306c918) == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1042fd660);
        (*pcVar3)();
      }
      uVar4 = 0x41505f4853554c46;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x41505f4853554c46,0xec000000304d4152);
      func_0x00010bf93020(pcVar2);
      _objc_release(uVar4);
      pcVar3 = (code *)0x5f45505954425553;
      break;
    case (code)0x9:
      pcVar8 = (char *)&PTR_DAT_11306c000;
    case (code)0x14:
      if (*(long *)(unaff_x20 + (long)*(undefined **)((long)pcVar8 + 0x910)) == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1042fd63c);
        (*pcVar3)();
      }
      uVar4 = 0x5241505f54495845;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5241505f54495845,0xeb00000000304d41);
      func_0x00010bf93020(pcVar2);
      _objc_release(uVar4);
      pcVar3 = (code *)0x5f45505954425553;
      break;
    case (code)0xa:
      if (*(long *)(unaff_x20 + _DAT_11306c908) == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1042fd65c);
        (*pcVar3)();
      }
      uVar4 = 0xd000000000000011;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f1f4620);
      func_0x00010bf93020(pcVar2);
      _objc_release(uVar4);
      pcVar3 = (code *)0xd000000000000012;
      break;
    case (code)0xb:
      pcVar8 = (char *)_DAT_11306c900;
    case (code)0xe:
      if (*(long *)(unaff_x20 + (long)pcVar8) == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1042fd634);
        (*pcVar3)();
      }
      pcVar3 = (code *)0x41505f5452415453;
    case (code)0xf:
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
      param_1 = pcVar3;
    case (code)0x13:
      func_0x00010bf93020();
      _objc_release(param_1);
      pcVar3 = (code *)0x5f45505954425553;
    case (code)0xd:
    }
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    pcVar5 = (code *)0x55535f4445444f43;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x55535f4445444f43,0xed00004550595442);
    func_0x00010bf93020(pcVar2);
    _objc_release(pcVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(pcVar5);
    return pcVar5;
  case (code)0x9b:
  case (code)0xd3:
    goto code_r0x0001042fccd8;
  case (code)0x9c:
    goto code_r0x0001042fcef8;
  case (code)0xa0:
    goto code_r0x0001042fd064;
  case (code)0xa1:
  case (code)0xd9:
    goto code_r0x0001042fcd08;
  case (code)0xb5:
    goto code_r0x0001042fcd20;
  case (code)0xb6:
    goto code_r0x0001042fcf94;
  case (code)0xc4:
    goto code_r0x0001042fcd44;
  case (code)0xd1:
  case (code)0xf5:
  case (code)0xfd:
    goto code_r0x0001042fcdc0;
  case (code)0xe4:
    goto code_r0x0001042fccd4;
  case (code)0xe8:
  case (code)0xf0:
  case (code)0xf8:
    goto code_r0x0001042fce68;
  case (code)0xec:
    goto code_r0x0001042fd070;
  case (code)0xed:
    goto code_r0x0001042fcff8;
  case (code)0xfc:
    goto code_r0x0001042fce24;
  }
  _objc_retain(param_1);
code_r0x0001042fcff8:
  pcVar2 = (code *)0x0;
code_r0x0001042fcffc:
  FUN_104307048();
  unaff_x20 = pcVar2;
code_r0x0001042fd070:
  _objc_release(lStack_58);
code_r0x0001042fd080:
  uVar9 = (uint)unaff_x20;
  func_0x000104300d00(&stack0xffffffffffffffb0);
code_r0x0001042fcd10:
  pcVar2 = (code *)(ulong)(uVar9 & 1);
code_r0x0001042fcd20:
  return pcVar2;
}



/* Entry: 1042fd094; end: 1042fd09f; -[SCEventType isEqual:] */

uint FUN_1042fd094(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_50);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_1042fcc24(&uStack_50);
  _objc_release(param_1);
  func_0x000104300d00(&uStack_50,0x112d387f8,&UNK_10d902650);
  return uVar1 & 1;
}



/* Entry: 1042fd0a0; end: 1042fd65f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042fd0a0(ulong param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined **ppuVar5;
  char *pcVar6;
  long unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  
  ppuVar5 = (undefined **)(ulong)*(byte *)(unaff_x20 + _DAT_11306c8f8);
  uVar2 = param_1;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(byte *)(unaff_x20 + _DAT_11306c8f8)) {
  default:
    if (*(long *)(unaff_x20 + _DAT_11306c958) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1042fd644);
      (*pcVar1)();
    }
    uVar2 = 0x5241505f4d4f4f5a;
  case 0x17:
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,0xeb00000000304d41);
    unaff_x21 = uVar2;
  case 0x10:
    func_0x00010bf93020(param_1);
    _objc_release(unaff_x21);
    uVar2 = 0x505954425553;
  case 0x15:
    uVar2 = uVar2 & 0xffffffffffff | 0x5f45000000000000;
    uVar4 = 0xec0000004d4f4f5a;
    break;
  case 1:
    if (*(long *)(unaff_x20 + _DAT_11306c950) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1042fd650);
      (*pcVar1)();
    }
    uVar3 = 0xd000000000000015;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1f4720);
    func_0x00010bf93020(param_1);
    _objc_release(uVar3);
    uVar2 = 0xd000000000000016;
    uVar4 = 0x800000010f1f4740;
    break;
  case 2:
    if (*(long *)(unaff_x20 + _DAT_11306c948) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1042fd640);
      (*pcVar1)();
    }
    unaff_x22 = -0x2fffffffffffffed;
    uVar3 = 0xd000000000000013;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1f46e0);
    func_0x00010bf93020(param_1);
    _objc_release(uVar3);
    pcVar6 = "SUBTYPE_PLACE_ACTION";
    goto code_r0x0001042fd2d0;
  case 3:
    if (*(long *)(unaff_x20 + _DAT_11306c940) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1042fd648);
      (*pcVar1)();
    }
    uVar3 = 0x5f44415f50414e53;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f44415f50414e53,0xee00304d41524150);
    func_0x00010bf93020(param_1);
    _objc_release(uVar3);
    uVar2 = 0x5f45505954425553;
    uVar4 = 0xef44415f50414e53;
    break;
  case 4:
    unaff_x20 = *(long *)(unaff_x20 + _DAT_11306c938);
  case 0x11:
    if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1042fd638);
      (*pcVar1)();
    }
    unaff_x22 = -0x2fffffffffffffed;
    param_2 = 0x800000010f1f46a0;
  case 0x12:
    unaff_x21 = 0xd000000000000013;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,param_2);
  case 0x16:
    func_0x00010bf93020(param_1);
    _objc_release(unaff_x21);
    pcVar6 = "SUBTYPE_PLACE_LOADED";
code_r0x0001042fd2d0:
    uVar2 = unaff_x22 + 1;
    uVar4 = (ulong)(pcVar6 + -0x20) | 0x8000000000000000;
    break;
  case 5:
    if (*(long *)(unaff_x20 + _DAT_11306c930) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1042fd654);
      (*pcVar1)();
    }
    uVar3 = 0x50445f4545524854;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x50445f4545524854,0xed0000304d415241);
    func_0x00010bf93020(param_1);
    _objc_release(uVar3);
    uVar2 = 0x5f45505954425553;
    uVar4 = 0xef445f4545524854;
    break;
  case 6:
    if (*(long *)(unaff_x20 + _DAT_11306c928) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1042fd658);
      (*pcVar1)();
    }
    uVar3 = 0x505f544345464645;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x505f544345464645,0xed0000304d415241);
    func_0x00010bf93020(param_1);
    _objc_release(uVar3);
    uVar2 = 0x5f45505954425553;
    uVar4 = 0xee00544345464645;
    break;
  case 7:
    if (*(long *)(unaff_x20 + _DAT_11306c920) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1042fd64c);
      (*pcVar1)();
    }
    uVar3 = 0xd00000000000001b;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f1f4660);
    func_0x00010bf93020(param_1);
    _objc_release(uVar3);
    uVar2 = 0xd00000000000001c;
    uVar4 = 0x800000010f1f4680;
    break;
  case 8:
    if (*(long *)(unaff_x20 + _DAT_11306c918) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1042fd660);
      (*pcVar1)();
    }
    uVar3 = 0x41505f4853554c46;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x41505f4853554c46,0xec000000304d4152);
    func_0x00010bf93020(param_1);
    _objc_release(uVar3);
    uVar2 = 0x5f45505954425553;
    uVar4 = 0x4853554c46;
    goto code_r0x0001042fd5d0;
  case 9:
    ppuVar5 = &PTR_DAT_11306c000;
  case 0x14:
    if (*(long *)(ppuVar5[0x122] + unaff_x20) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1042fd63c);
      (*pcVar1)();
    }
    uVar3 = 0x5241505f54495845;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5241505f54495845,0xeb00000000304d41);
    func_0x00010bf93020(param_1);
    _objc_release(uVar3);
    uVar2 = 0x5f45505954425553;
    uVar4 = 0xec00000054495845;
    break;
  case 10:
    if (*(long *)(unaff_x20 + _DAT_11306c908) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1042fd65c);
      (*pcVar1)();
    }
    uVar3 = 0xd000000000000011;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f1f4620);
    func_0x00010bf93020(param_1);
    _objc_release(uVar3);
    uVar2 = 0xd000000000000012;
    uVar4 = 0x800000010f1f4640;
    break;
  case 0xb:
    ppuVar5 = _DAT_11306c900;
  case 0xe:
    if (*(long *)(unaff_x20 + (long)ppuVar5) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1042fd634);
      (*pcVar1)();
    }
    uVar2 = 0x41505f5452415453;
    param_2 = 0x4152;
  case 0xf:
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
              (uVar2,param_2 & 0xffff0000ffff | 0xec000000304d0000);
    unaff_x21 = uVar2;
  case 0x13:
    func_0x00010bf93020(param_1);
    _objc_release(unaff_x21);
    uVar2 = 0x5f45505954425553;
  case 0xd:
    uVar4 = 0x5452415453;
code_r0x0001042fd5d0:
    uVar4 = uVar4 | 0xed00000000000000;
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar4);
  uVar3 = 0x55535f4445444f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x55535f4445444f43,0xed00004550595442);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1042fd660; end: 1042fd6af; -[SCEventType encodeWithCoder:] */

void FUN_1042fd660(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1042fd0a0(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1042fd6b0; end: 1042fd6df;  */

void FUN_1042fd6b0(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1042fd6e0(param_1);
  return;
}



/* Entry: 1042fd6e0; end: 1042fec43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1042fd6e0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  undefined1 *puVar5;
  long unaff_x20;
  undefined *puVar6;
  ulong uVar7;
  undefined1 auStack_170 [16];
  undefined1 auStack_160 [16];
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  puVar5 = auStack_170;
  _swift_getObjectType();
  uVar1 = 0x55535f4445444f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x55535f4445444f43,0xed00004550595442);
  lVar2 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (lVar2 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar2);
    _swift_unknownObjectRelease(lVar2);
  }
  puVar6 = PTR___sypN_11034f1a8;
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) goto LAB_1042febdc;
  plVar3 = &lStack_b0;
  _swift_dynamicCast(plVar3,&uStack_80,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
  lVar2 = lStack_b0;
  if (((ulong)plVar3 & 1) != 0) {
    uVar7 = 0x5f45505954425553;
    if (((lStack_b0 != 0x5f45505954425553) || (lStack_a8 != -0x13ffffffb2b0b0a6)) &&
       (uVar4 = uVar7,
       __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                 (0x5f45505954425553,0xec0000004d4f4f5a,lStack_b0,lStack_a8,0), (uVar4 & 1) == 0)) {
      if ((lVar2 == -0x2fffffffffffffea) && (lStack_a8 == -0x7ffffffef0e0b8c0)) {
LAB_1042fd9e4:
        _swift_bridgeObjectRelease(lStack_a8);
        uVar1 = 0xd000000000000015;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1f4720)
        ;
        lVar2 = param_1;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar1);
        if (lVar2 == 0) {
          uStack_98 = 0;
          uStack_a0 = 0;
          lStack_88 = 0;
          uStack_90 = 0;
        }
        else {
          __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar2);
          _swift_unknownObjectRelease(lVar2);
        }
        uStack_78 = uStack_98;
        uStack_80 = uStack_a0;
        lStack_68 = lStack_88;
        uStack_70 = uStack_90;
        if (lStack_88 != 0) {
          uVar1 = 0;
          FUN_1042fa4a4(0);
          plVar3 = &lStack_b0;
          _swift_dynamicCast(plVar3,&uStack_80,puVar6 + 8,uVar1,6);
          if (((ulong)plVar3 & 1) != 0) {
            _objc_allocWithZone();
            *(undefined1 *)(unaff_x20 + _DAT_11306c8f8) = 1;
            *(undefined8 *)(unaff_x20 + _DAT_11306c958) = 0;
            *(long *)(unaff_x20 + _DAT_11306c950) = lStack_b0;
            *(undefined8 *)(unaff_x20 + _DAT_11306c948) = 0;
            *(undefined8 *)(unaff_x20 + _DAT_11306c940) = 0;
            *(undefined8 *)(unaff_x20 + _DAT_11306c938) = 0;
            *(undefined8 *)(unaff_x20 + _DAT_11306c930) = 0;
            *(undefined8 *)(unaff_x20 + _DAT_11306c928) = 0;
            *(undefined8 *)(unaff_x20 + _DAT_11306c920) = 0;
            *(undefined8 *)(unaff_x20 + _DAT_11306c918) = 0;
            *(undefined8 *)(unaff_x20 + _DAT_11306c910) = 0;
            *(undefined8 *)(unaff_x20 + _DAT_11306c908) = 0;
            *(undefined8 *)(unaff_x20 + _DAT_11306c900) = 0;
            puVar6 = PTR_s_init_1125d9248;
            _objc_retain(lStack_b0);
            puVar5 = auStack_160;
LAB_1042fd960:
            _objc_msgSendSuper2(puVar5,puVar6);
            _objc_release(lStack_b0);
            _objc_release(param_1);
            _swift_getObjectType();
            _swift_deallocPartialClassInstance();
            return puVar5;
          }
          goto LAB_1042fec00;
        }
      }
      else {
        uVar4 = 0;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0xd000000000000016,0x800000010f1f4740,lVar2,lStack_a8,0);
        if ((uVar4 & 1) != 0) goto LAB_1042fd9e4;
        if ((lVar2 == -0x2fffffffffffffec) && (lStack_a8 == -0x7ffffffef0e0b900)) {
LAB_1042fdb88:
          _swift_bridgeObjectRelease(lStack_a8);
          uVar1 = 0xd000000000000013;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                    (0xd000000000000013,0x800000010f1f46e0);
          lVar2 = param_1;
          func_0x00010bf67000();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar1);
          if (lVar2 == 0) {
            uStack_98 = 0;
            uStack_a0 = 0;
            lStack_88 = 0;
            uStack_90 = 0;
          }
          else {
            __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar2);
            _swift_unknownObjectRelease(lVar2);
          }
          uStack_78 = uStack_98;
          uStack_80 = uStack_a0;
          lStack_68 = lStack_88;
          uStack_70 = uStack_90;
          if (lStack_88 != 0) {
            uVar1 = 0;
            FUN_1042fbbc4(0);
            plVar3 = &lStack_b0;
            _swift_dynamicCast(plVar3,&uStack_80,puVar6 + 8,uVar1,6);
            if (((ulong)plVar3 & 1) != 0) {
              _objc_allocWithZone();
              *(undefined1 *)(unaff_x20 + _DAT_11306c8f8) = 2;
              *(undefined8 *)(unaff_x20 + _DAT_11306c958) = 0;
              *(undefined8 *)(unaff_x20 + _DAT_11306c950) = 0;
              *(long *)(unaff_x20 + _DAT_11306c948) = lStack_b0;
              *(undefined8 *)(unaff_x20 + _DAT_11306c940) = 0;
              *(undefined8 *)(unaff_x20 + _DAT_11306c938) = 0;
              *(undefined8 *)(unaff_x20 + _DAT_11306c930) = 0;
              *(undefined8 *)(unaff_x20 + _DAT_11306c928) = 0;
              *(undefined8 *)(unaff_x20 + _DAT_11306c920) = 0;
              *(undefined8 *)(unaff_x20 + _DAT_11306c918) = 0;
              *(undefined8 *)(unaff_x20 + _DAT_11306c910) = 0;
              *(undefined8 *)(unaff_x20 + _DAT_11306c908) = 0;
              *(undefined8 *)(unaff_x20 + _DAT_11306c900) = 0;
              puVar6 = PTR_s_init_1125d9248;
              _objc_retain(lStack_b0);
              puVar5 = auStack_150;
              goto LAB_1042fd960;
            }
            goto LAB_1042fec00;
          }
        }
        else {
          uVar4 = 0;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0xd000000000000014,0x800000010f1f4700,lVar2,lStack_a8,0);
          if ((uVar4 & 1) != 0) goto LAB_1042fdb88;
          if (((lVar2 == 0x5f45505954425553) && (lStack_a8 == -0x10bbbea0afbeb1ad)) ||
             (uVar4 = uVar7,
             __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                       (0x5f45505954425553,0xef44415f50414e53,lVar2,lStack_a8,0), (uVar4 & 1) != 0))
          {
            _swift_bridgeObjectRelease(lStack_a8);
            uVar1 = 0x5f44415f50414e53;
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                      (0x5f44415f50414e53,0xee00304d41524150);
            lVar2 = param_1;
            func_0x00010bf67000();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar1);
            if (lVar2 == 0) {
              uStack_98 = 0;
              uStack_a0 = 0;
              lStack_88 = 0;
              uStack_90 = 0;
            }
            else {
              __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar2);
              _swift_unknownObjectRelease(lVar2);
            }
            uStack_78 = uStack_98;
            uStack_80 = uStack_a0;
            lStack_68 = lStack_88;
            uStack_70 = uStack_90;
            if (lStack_88 != 0) {
              uVar1 = 0;
              func_0x000104306ddc(0);
              plVar3 = &lStack_b0;
              _swift_dynamicCast(plVar3,&uStack_80,puVar6 + 8,uVar1,6);
              if (((ulong)plVar3 & 1) != 0) {
                _objc_allocWithZone();
                *(undefined1 *)(unaff_x20 + _DAT_11306c8f8) = 3;
                *(undefined8 *)(unaff_x20 + _DAT_11306c958) = 0;
                *(undefined8 *)(unaff_x20 + _DAT_11306c950) = 0;
                *(undefined8 *)(unaff_x20 + _DAT_11306c948) = 0;
                *(long *)(unaff_x20 + _DAT_11306c940) = lStack_b0;
                *(undefined8 *)(unaff_x20 + _DAT_11306c938) = 0;
                *(undefined8 *)(unaff_x20 + _DAT_11306c930) = 0;
                *(undefined8 *)(unaff_x20 + _DAT_11306c928) = 0;
                *(undefined8 *)(unaff_x20 + _DAT_11306c920) = 0;
                *(undefined8 *)(unaff_x20 + _DAT_11306c918) = 0;
                *(undefined8 *)(unaff_x20 + _DAT_11306c910) = 0;
                *(undefined8 *)(unaff_x20 + _DAT_11306c908) = 0;
                *(undefined8 *)(unaff_x20 + _DAT_11306c900) = 0;
                puVar6 = PTR_s_init_1125d9248;
                _objc_retain(lStack_b0);
                puVar5 = auStack_140;
                goto LAB_1042fd960;
              }
              goto LAB_1042fec00;
            }
            goto LAB_1042febdc;
          }
          if ((lVar2 == -0x2fffffffffffffec) && (lStack_a8 == -0x7ffffffef0e0b940)) {
LAB_1042fded8:
            _swift_bridgeObjectRelease(lStack_a8);
            uVar1 = 0xd000000000000013;
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                      (0xd000000000000013,0x800000010f1f46a0);
            lVar2 = param_1;
            func_0x00010bf67000();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar1);
            if (lVar2 == 0) {
              uStack_98 = 0;
              uStack_a0 = 0;
              lStack_88 = 0;
              uStack_90 = 0;
            }
            else {
              __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar2);
              _swift_unknownObjectRelease(lVar2);
            }
            uStack_78 = uStack_98;
            uStack_80 = uStack_a0;
            lStack_68 = lStack_88;
            uStack_70 = uStack_90;
            if (lStack_88 != 0) {
              uVar1 = 0;
              func_0x000104303264(0);
              plVar3 = &lStack_b0;
              _swift_dynamicCast(plVar3,&uStack_80,puVar6 + 8,uVar1,6);
              if (((ulong)plVar3 & 1) != 0) {
                _objc_allocWithZone();
                *(undefined1 *)(unaff_x20 + _DAT_11306c8f8) = 4;
                *(undefined8 *)(unaff_x20 + _DAT_11306c958) = 0;
                *(undefined8 *)(unaff_x20 + _DAT_11306c950) = 0;
                *(undefined8 *)(unaff_x20 + _DAT_11306c948) = 0;
                *(undefined8 *)(unaff_x20 + _DAT_11306c940) = 0;
                *(long *)(unaff_x20 + _DAT_11306c938) = lStack_b0;
                *(undefined8 *)(unaff_x20 + _DAT_11306c930) = 0;
                *(undefined8 *)(unaff_x20 + _DAT_11306c928) = 0;
                *(undefined8 *)(unaff_x20 + _DAT_11306c920) = 0;
                *(undefined8 *)(unaff_x20 + _DAT_11306c918) = 0;
                *(undefined8 *)(unaff_x20 + _DAT_11306c910) = 0;
                *(undefined8 *)(unaff_x20 + _DAT_11306c908) = 0;
                *(undefined8 *)(unaff_x20 + _DAT_11306c900) = 0;
                puVar6 = PTR_s_init_1125d9248;
                _objc_retain(lStack_b0);
                puVar5 = auStack_130;
                goto LAB_1042fd960;
              }
              goto LAB_1042fec00;
            }
          }
          else {
            uVar4 = 0;
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0xd000000000000014,0x800000010f1f46c0,lVar2,lStack_a8,0);
            if ((uVar4 & 1) != 0) goto LAB_1042fded8;
            if (((lVar2 == 0x5f45505954425553) && (lStack_a8 == -0x10bba0babaadb7ac)) ||
               (uVar4 = uVar7,
               __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                         (0x5f45505954425553,0xef445f4545524854,lVar2,lStack_a8,0), (uVar4 & 1) != 0
               )) {
              _swift_bridgeObjectRelease(lStack_a8);
              uVar1 = 0x50445f4545524854;
              __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                        (0x50445f4545524854,0xed0000304d415241);
              lVar2 = param_1;
              func_0x00010bf67000();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar1);
              if (lVar2 == 0) {
                uStack_98 = 0;
                uStack_a0 = 0;
                lStack_88 = 0;
                uStack_90 = 0;
              }
              else {
                __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar2);
                _swift_unknownObjectRelease(lVar2);
              }
              uStack_78 = uStack_98;
              uStack_80 = uStack_a0;
              lStack_68 = lStack_88;
              uStack_70 = uStack_90;
              if (lStack_88 != 0) {
                uVar1 = 0;
                func_0x000104307e4c(0);
                plVar3 = &lStack_b0;
                _swift_dynamicCast(plVar3,&uStack_80,puVar6 + 8,uVar1,6);
                if (((ulong)plVar3 & 1) != 0) {
                  _objc_allocWithZone();
                  *(undefined1 *)(unaff_x20 + _DAT_11306c8f8) = 5;
                  *(undefined8 *)(unaff_x20 + _DAT_11306c958) = 0;
                  *(undefined8 *)(unaff_x20 + _DAT_11306c950) = 0;
                  *(undefined8 *)(unaff_x20 + _DAT_11306c948) = 0;
                  *(undefined8 *)(unaff_x20 + _DAT_11306c940) = 0;
                  *(undefined8 *)(unaff_x20 + _DAT_11306c938) = 0;
                  *(long *)(unaff_x20 + _DAT_11306c930) = lStack_b0;
                  *(undefined8 *)(unaff_x20 + _DAT_11306c928) = 0;
                  *(undefined8 *)(unaff_x20 + _DAT_11306c920) = 0;
                  *(undefined8 *)(unaff_x20 + _DAT_11306c918) = 0;
                  *(undefined8 *)(unaff_x20 + _DAT_11306c910) = 0;
                  *(undefined8 *)(unaff_x20 + _DAT_11306c908) = 0;
                  *(undefined8 *)(unaff_x20 + _DAT_11306c900) = 0;
                  puVar6 = PTR_s_init_1125d9248;
                  _objc_retain(lStack_b0);
                  puVar5 = auStack_120;
                  goto LAB_1042fd960;
                }
                goto LAB_1042fec00;
              }
            }
            else if (((lVar2 == 0x5f45505954425553) && (lStack_a8 == -0x11ffabbcbab9b9bb)) ||
                    (uVar4 = uVar7,
                    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                              (0x5f45505954425553,0xee00544345464645,lVar2,lStack_a8,0),
                    (uVar4 & 1) != 0)) {
              _swift_bridgeObjectRelease(lStack_a8);
              uVar1 = 0x505f544345464645;
              __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                        (0x505f544345464645,0xed0000304d415241);
              lVar2 = param_1;
              func_0x00010bf67000();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar1);
              if (lVar2 == 0) {
                uStack_98 = 0;
                uStack_a0 = 0;
                lStack_88 = 0;
                uStack_90 = 0;
              }
              else {
                __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar2);
                _swift_unknownObjectRelease(lVar2);
              }
              uStack_78 = uStack_98;
              uStack_80 = uStack_a0;
              lStack_68 = lStack_88;
              uStack_70 = uStack_90;
              if (lStack_88 != 0) {
                uVar1 = 0;
                FUN_1042f762c(0);
                plVar3 = &lStack_b0;
                _swift_dynamicCast(plVar3,&uStack_80,puVar6 + 8,uVar1,6);
                if (((ulong)plVar3 & 1) != 0) {
                  _objc_allocWithZone();
                  *(undefined1 *)(unaff_x20 + _DAT_11306c8f8) = 6;
                  *(undefined8 *)(unaff_x20 + _DAT_11306c958) = 0;
                  *(undefined8 *)(unaff_x20 + _DAT_11306c950) = 0;
                  *(undefined8 *)(unaff_x20 + _DAT_11306c948) = 0;
                  *(undefined8 *)(unaff_x20 + _DAT_11306c940) = 0;
                  *(undefined8 *)(unaff_x20 + _DAT_11306c938) = 0;
                  *(undefined8 *)(unaff_x20 + _DAT_11306c930) = 0;
                  *(long *)(unaff_x20 + _DAT_11306c928) = lStack_b0;
                  *(undefined8 *)(unaff_x20 + _DAT_11306c920) = 0;
                  *(undefined8 *)(unaff_x20 + _DAT_11306c918) = 0;
                  *(undefined8 *)(unaff_x20 + _DAT_11306c910) = 0;
                  *(undefined8 *)(unaff_x20 + _DAT_11306c908) = 0;
                  *(undefined8 *)(unaff_x20 + _DAT_11306c900) = 0;
                  puVar6 = PTR_s_init_1125d9248;
                  _objc_retain(lStack_b0);
                  puVar5 = auStack_110;
                  goto LAB_1042fd960;
                }
                goto LAB_1042fec00;
              }
            }
            else {
              uVar4 = 0;
              if (((lVar2 == -0x2fffffffffffffe4) && (lStack_a8 == -0x7ffffffef0e0b980)) ||
                 (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (0xd00000000000001c,0x800000010f1f4680,lVar2,lStack_a8,0),
                 (uVar4 & 1) != 0)) {
                _swift_bridgeObjectRelease(lStack_a8);
                uVar1 = 0xd00000000000001b;
                __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                          (0xd00000000000001b,0x800000010f1f4660);
                lVar2 = param_1;
                func_0x00010bf67000();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(uVar1);
                if (lVar2 == 0) {
                  uStack_98 = 0;
                  uStack_a0 = 0;
                  lStack_88 = 0;
                  uStack_90 = 0;
                }
                else {
                  __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar2);
                  _swift_unknownObjectRelease(lVar2);
                }
                uStack_78 = uStack_98;
                uStack_80 = uStack_a0;
                lStack_68 = lStack_88;
                uStack_70 = uStack_90;
                if (lStack_88 != 0) {
                  uVar1 = 0;
                  func_0x0001043055d0(0);
                  plVar3 = &lStack_b0;
                  _swift_dynamicCast(plVar3,&uStack_80,puVar6 + 8,uVar1,6);
                  if (((ulong)plVar3 & 1) != 0) {
                    _objc_allocWithZone();
                    *(undefined1 *)(unaff_x20 + _DAT_11306c8f8) = 7;
                    *(undefined8 *)(unaff_x20 + _DAT_11306c958) = 0;
                    *(undefined8 *)(unaff_x20 + _DAT_11306c950) = 0;
                    *(undefined8 *)(unaff_x20 + _DAT_11306c948) = 0;
                    *(undefined8 *)(unaff_x20 + _DAT_11306c940) = 0;
                    *(undefined8 *)(unaff_x20 + _DAT_11306c938) = 0;
                    *(undefined8 *)(unaff_x20 + _DAT_11306c930) = 0;
                    *(undefined8 *)(unaff_x20 + _DAT_11306c928) = 0;
                    *(long *)(unaff_x20 + _DAT_11306c920) = lStack_b0;
                    *(undefined8 *)(unaff_x20 + _DAT_11306c918) = 0;
                    *(undefined8 *)(unaff_x20 + _DAT_11306c910) = 0;
                    *(undefined8 *)(unaff_x20 + _DAT_11306c908) = 0;
                    *(undefined8 *)(unaff_x20 + _DAT_11306c900) = 0;
                    puVar6 = PTR_s_init_1125d9248;
                    _objc_retain(lStack_b0);
                    puVar5 = auStack_100;
                    goto LAB_1042fd960;
                  }
                  goto LAB_1042fec00;
                }
              }
              else if (((lVar2 == 0x5f45505954425553) && (lStack_a8 == -0x12ffffb7acaab3ba)) ||
                      (uVar4 = uVar7,
                      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                (0x5f45505954425553,0xed00004853554c46,lVar2,lStack_a8,0),
                      (uVar4 & 1) != 0)) {
                _swift_bridgeObjectRelease(lStack_a8);
                uVar1 = 0x41505f4853554c46;
                __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                          (0x41505f4853554c46,0xec000000304d4152);
                lVar2 = param_1;
                func_0x00010bf67000();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(uVar1);
                if (lVar2 == 0) {
                  uStack_98 = 0;
                  uStack_a0 = 0;
                  lStack_88 = 0;
                  uStack_90 = 0;
                }
                else {
                  __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar2);
                  _swift_unknownObjectRelease(lVar2);
                }
                uStack_78 = uStack_98;
                uStack_80 = uStack_a0;
                lStack_68 = lStack_88;
                uStack_70 = uStack_90;
                if (lStack_88 != 0) {
                  uVar1 = 0;
                  FUN_1042f7e10(0);
                  plVar3 = &lStack_b0;
                  _swift_dynamicCast(plVar3,&uStack_80,puVar6 + 8,uVar1,6);
                  if (((ulong)plVar3 & 1) != 0) {
                    _objc_allocWithZone();
                    *(undefined1 *)(unaff_x20 + _DAT_11306c8f8) = 8;
                    *(undefined8 *)(unaff_x20 + _DAT_11306c958) = 0;
                    *(undefined8 *)(unaff_x20 + _DAT_11306c950) = 0;
                    *(undefined8 *)(unaff_x20 + _DAT_11306c948) = 0;
                    *(undefined8 *)(unaff_x20 + _DAT_11306c940) = 0;
                    *(undefined8 *)(unaff_x20 + _DAT_11306c938) = 0;
                    *(undefined8 *)(unaff_x20 + _DAT_11306c930) = 0;
                    *(undefined8 *)(unaff_x20 + _DAT_11306c928) = 0;
                    *(undefined8 *)(unaff_x20 + _DAT_11306c920) = 0;
                    *(long *)(unaff_x20 + _DAT_11306c918) = lStack_b0;
                    *(undefined8 *)(unaff_x20 + _DAT_11306c910) = 0;
                    *(undefined8 *)(unaff_x20 + _DAT_11306c908) = 0;
                    *(undefined8 *)(unaff_x20 + _DAT_11306c900) = 0;
                    puVar6 = PTR_s_init_1125d9248;
                    _objc_retain(lStack_b0);
                    puVar5 = auStack_f0;
                    goto LAB_1042fd960;
                  }
                  goto LAB_1042fec00;
                }
              }
              else if (((lVar2 == 0x5f45505954425553) && (lStack_a8 == -0x13ffffffabb6a7bb)) ||
                      (uVar4 = uVar7,
                      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                (0x5f45505954425553,0xec00000054495845,lVar2,lStack_a8,0),
                      (uVar4 & 1) != 0)) {
                _swift_bridgeObjectRelease(lStack_a8);
                uVar1 = 0x5241505f54495845;
                __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                          (0x5241505f54495845,0xeb00000000304d41);
                lVar2 = param_1;
                func_0x00010bf67000();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(uVar1);
                if (lVar2 == 0) {
                  uStack_98 = 0;
                  uStack_a0 = 0;
                  lStack_88 = 0;
                  uStack_90 = 0;
                }
                else {
                  __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar2);
                  _swift_unknownObjectRelease(lVar2);
                }
                uStack_78 = uStack_98;
                uStack_80 = uStack_a0;
                lStack_68 = lStack_88;
                uStack_70 = uStack_90;
                if (lStack_88 != 0) {
                  uVar1 = 0;
                  func_0x0001042f8a14(0);
                  plVar3 = &lStack_b0;
                  _swift_dynamicCast(plVar3,&uStack_80,puVar6 + 8,uVar1,6);
                  if (((ulong)plVar3 & 1) != 0) {
                    _objc_allocWithZone();
                    *(undefined1 *)(unaff_x20 + _DAT_11306c8f8) = 9;
                    *(undefined8 *)(unaff_x20 + _DAT_11306c958) = 0;
                    *(undefined8 *)(unaff_x20 + _DAT_11306c950) = 0;
                    *(undefined8 *)(unaff_x20 + _DAT_11306c948) = 0;
                    *(undefined8 *)(unaff_x20 + _DAT_11306c940) = 0;
                    *(undefined8 *)(unaff_x20 + _DAT_11306c938) = 0;
                    *(undefined8 *)(unaff_x20 + _DAT_11306c930) = 0;
                    *(undefined8 *)(unaff_x20 + _DAT_11306c928) = 0;
                    *(undefined8 *)(unaff_x20 + _DAT_11306c920) = 0;
                    *(undefined8 *)(unaff_x20 + _DAT_11306c918) = 0;
                    *(long *)(unaff_x20 + _DAT_11306c910) = lStack_b0;
                    *(undefined8 *)(unaff_x20 + _DAT_11306c908) = 0;
                    *(undefined8 *)(unaff_x20 + _DAT_11306c900) = 0;
                    puVar6 = PTR_s_init_1125d9248;
                    _objc_retain(lStack_b0);
                    puVar5 = auStack_e0;
                    goto LAB_1042fd960;
                  }
                  goto LAB_1042fec00;
                }
              }
              else {
                uVar4 = 0;
                if (((lVar2 == -0x2fffffffffffffee) && (lStack_a8 == -0x7ffffffef0e0b9c0)) ||
                   (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                              (0xd000000000000012,0x800000010f1f4640,lVar2,lStack_a8,0),
                   (uVar4 & 1) != 0)) {
                  _swift_bridgeObjectRelease(lStack_a8);
                  uVar1 = 0xd000000000000011;
                  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                            (0xd000000000000011,0x800000010f1f4620);
                  lVar2 = param_1;
                  func_0x00010bf67000();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(uVar1);
                  if (lVar2 == 0) {
                    uStack_98 = 0;
                    uStack_a0 = 0;
                    lStack_88 = 0;
                    uStack_90 = 0;
                  }
                  else {
                    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar2);
                    _swift_unknownObjectRelease(lVar2);
                  }
                  uStack_78 = uStack_98;
                  uStack_80 = uStack_a0;
                  lStack_68 = lStack_88;
                  uStack_70 = uStack_90;
                  if (lStack_88 != 0) {
                    uVar1 = 0;
                    FUN_1042f6368(0);
                    plVar3 = &lStack_b0;
                    _swift_dynamicCast(plVar3,&uStack_80,puVar6 + 8,uVar1,6);
                    if (((ulong)plVar3 & 1) != 0) {
                      _objc_allocWithZone();
                      *(undefined1 *)(unaff_x20 + _DAT_11306c8f8) = 10;
                      *(undefined8 *)(unaff_x20 + _DAT_11306c958) = 0;
                      *(undefined8 *)(unaff_x20 + _DAT_11306c950) = 0;
                      *(undefined8 *)(unaff_x20 + _DAT_11306c948) = 0;
                      *(undefined8 *)(unaff_x20 + _DAT_11306c940) = 0;
                      *(undefined8 *)(unaff_x20 + _DAT_11306c938) = 0;
                      *(undefined8 *)(unaff_x20 + _DAT_11306c930) = 0;
                      *(undefined8 *)(unaff_x20 + _DAT_11306c928) = 0;
                      *(undefined8 *)(unaff_x20 + _DAT_11306c920) = 0;
                      *(undefined8 *)(unaff_x20 + _DAT_11306c918) = 0;
                      *(undefined8 *)(unaff_x20 + _DAT_11306c910) = 0;
                      *(long *)(unaff_x20 + _DAT_11306c908) = lStack_b0;
                      *(undefined8 *)(unaff_x20 + _DAT_11306c900) = 0;
                      puVar6 = PTR_s_init_1125d9248;
                      _objc_retain(lStack_b0);
                      puVar5 = auStack_d0;
                      goto LAB_1042fd960;
                    }
                    goto LAB_1042fec00;
                  }
                }
                else {
                  if ((lVar2 == 0x5f45505954425553) && (lStack_a8 == -0x12ffffabadbeabad)) {
                    _swift_bridgeObjectRelease(0xed00005452415453);
                  }
                  else {
                    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                              (0x5f45505954425553,0xed00005452415453,lVar2,lStack_a8,0);
                    _swift_bridgeObjectRelease(lStack_a8);
                    if ((uVar7 & 1) == 0) goto LAB_1042fec00;
                  }
                  uVar1 = 0x41505f5452415453;
                  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                            (0x41505f5452415453,0xec000000304d4152);
                  lVar2 = param_1;
                  func_0x00010bf67000();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(uVar1);
                  if (lVar2 == 0) {
                    uStack_98 = 0;
                    uStack_a0 = 0;
                    lStack_88 = 0;
                    uStack_90 = 0;
                  }
                  else {
                    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar2);
                    _swift_unknownObjectRelease(lVar2);
                  }
                  uStack_78 = uStack_98;
                  uStack_80 = uStack_a0;
                  lStack_68 = lStack_88;
                  uStack_70 = uStack_90;
                  if (lStack_88 != 0) {
                    uVar1 = 0;
                    FUN_104305f2c(0);
                    plVar3 = &lStack_b0;
                    _swift_dynamicCast(plVar3,&uStack_80,puVar6 + 8,uVar1,6);
                    if (((ulong)plVar3 & 1) != 0) {
                      _objc_allocWithZone();
                      *(undefined1 *)(unaff_x20 + _DAT_11306c8f8) = 0xb;
                      *(undefined8 *)(unaff_x20 + _DAT_11306c958) = 0;
                      *(undefined8 *)(unaff_x20 + _DAT_11306c950) = 0;
                      *(undefined8 *)(unaff_x20 + _DAT_11306c948) = 0;
                      *(undefined8 *)(unaff_x20 + _DAT_11306c940) = 0;
                      *(undefined8 *)(unaff_x20 + _DAT_11306c938) = 0;
                      *(undefined8 *)(unaff_x20 + _DAT_11306c930) = 0;
                      *(undefined8 *)(unaff_x20 + _DAT_11306c928) = 0;
                      *(undefined8 *)(unaff_x20 + _DAT_11306c920) = 0;
                      *(undefined8 *)(unaff_x20 + _DAT_11306c918) = 0;
                      *(undefined8 *)(unaff_x20 + _DAT_11306c910) = 0;
                      *(undefined8 *)(unaff_x20 + _DAT_11306c908) = 0;
                      *(long *)(unaff_x20 + _DAT_11306c900) = lStack_b0;
                      puVar6 = PTR_s_init_1125d9248;
                      _objc_retain(lStack_b0);
                      puVar5 = auStack_c0;
                      goto LAB_1042fd960;
                    }
                    goto LAB_1042fec00;
                  }
                }
              }
            }
          }
        }
      }
LAB_1042febdc:
      uStack_a0 = uStack_80;
      uStack_98 = uStack_78;
      uStack_90 = uStack_70;
      lStack_88 = lStack_68;
      _objc_release(param_1);
      func_0x000104300d00(&uStack_80,0x112d387f8,&UNK_10d902650);
      goto LAB_1042fec08;
    }
    _swift_bridgeObjectRelease(lStack_a8);
    uVar1 = 0x5241505f4d4f4f5a;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5241505f4d4f4f5a,0xeb00000000304d41);
    lVar2 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    if (lVar2 == 0) {
      uStack_98 = 0;
      uStack_a0 = 0;
      lStack_88 = 0;
      uStack_90 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar2);
      _swift_unknownObjectRelease(lVar2);
    }
    uStack_78 = uStack_98;
    uStack_80 = uStack_a0;
    lStack_68 = lStack_88;
    uStack_70 = uStack_90;
    if (lStack_88 == 0) goto LAB_1042febdc;
    uVar1 = 0;
    FUN_104308470(0);
    plVar3 = &lStack_b0;
    _swift_dynamicCast(plVar3,&uStack_80,puVar6 + 8,uVar1,6);
    if (((ulong)plVar3 & 1) != 0) {
      _objc_allocWithZone();
      *(undefined1 *)(unaff_x20 + _DAT_11306c8f8) = 0;
      *(long *)(unaff_x20 + _DAT_11306c958) = lStack_b0;
      *(undefined8 *)(unaff_x20 + _DAT_11306c950) = 0;
      *(undefined8 *)(unaff_x20 + _DAT_11306c948) = 0;
      *(undefined8 *)(unaff_x20 + _DAT_11306c940) = 0;
      *(undefined8 *)(unaff_x20 + _DAT_11306c938) = 0;
      *(undefined8 *)(unaff_x20 + _DAT_11306c930) = 0;
      *(undefined8 *)(unaff_x20 + _DAT_11306c928) = 0;
      *(undefined8 *)(unaff_x20 + _DAT_11306c920) = 0;
      *(undefined8 *)(unaff_x20 + _DAT_11306c918) = 0;
      *(undefined8 *)(unaff_x20 + _DAT_11306c910) = 0;
      *(undefined8 *)(unaff_x20 + _DAT_11306c908) = 0;
      *(undefined8 *)(unaff_x20 + _DAT_11306c900) = 0;
      puVar6 = PTR_s_init_1125d9248;
      _objc_retain(lStack_b0);
      goto LAB_1042fd960;
    }
  }
LAB_1042fec00:
  _objc_release(param_1);
LAB_1042fec08:
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return (undefined1 *)0x0;
}



/* Entry: 1042fec44; end: 1042fec6b; -[SCEventType initWithCoder:] */

void FUN_1042fec44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1042fd6e0();
  return;
}



/* Entry: 1042fec6c; end: 1042feca3; +[SCEventType zoom:] */

void FUN_1042fec6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x000104300d40();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1042feca4; end: 1042fecdb; +[SCEventType pinVisibility:] */

void FUN_1042feca4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x000104300e2c();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1042fecdc; end: 1042fed13; +[SCEventType placeAction:] */

void FUN_1042fecdc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x000104300f1c();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1042fed14; end: 1042fed4b; +[SCEventType snapAd:] */

void FUN_1042fed14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010430100c();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1042fed4c; end: 1042fed83; +[SCEventType placeLoaded:] */

void FUN_1042fed4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x0001043010fc();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1042fed84; end: 1042fedbb; +[SCEventType threeD:] */

void FUN_1042fed84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x0001043011ec();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1042fedbc; end: 1042fedf3; +[SCEventType effect:] */

void FUN_1042fedbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x0001043012dc();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1042fedf4; end: 1042fee2b; +[SCEventType sessionPauseResume:] */

void FUN_1042fedf4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x0001043013cc();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1042fee2c; end: 1042fee63; +[SCEventType flush:] */

void FUN_1042fee2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x0001043014bc();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1042fee64; end: 1042fee9b; +[SCEventType exit:] */

void FUN_1042fee64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x0001043015ac();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1042fee9c; end: 1042feed3; +[SCEventType attachment:] */

void FUN_1042fee9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010430169c();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1042feed4; end: 1042fef0b; +[SCEventType start:] */

void FUN_1042feed4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010430178c();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1042fef0c; end: 1042ff107;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042fef0c(code *param_1,undefined8 param_2,code *param_3,undefined8 param_4,code *param_5,
                  undefined8 param_6,code *param_7,undefined8 param_8,code *param_9,
                  undefined4 param_10,undefined4 param_11,code *param_12,undefined4 param_13,
                  undefined4 param_14,code *param_15,undefined4 param_16,undefined4 param_17,
                  code *param_18,undefined4 param_19,undefined4 param_20,code *param_21,
                  undefined4 param_22,undefined4 param_23,code *param_24,undefined4 param_25,
                  undefined4 param_26,code *param_27,undefined4 param_28,undefined4 param_29,
                  code *param_30,undefined8 param_31)

{
  code *pcVar1;
  long unaff_x20;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(unaff_x20 + _DAT_11306c8f8)) {
  case 0:
    if (*(long *)(unaff_x20 + _DAT_11306c958) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1042ff0ec);
      (*pcVar1)();
    }
    (*param_1)();
    break;
  case 1:
    if (*(long *)(unaff_x20 + _DAT_11306c950) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1042ff0f8);
      (*pcVar1)();
    }
    (*param_3)();
    break;
  case 2:
    if (*(long *)(unaff_x20 + _DAT_11306c948) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1042ff0e8);
      (*pcVar1)();
    }
    (*param_5)();
    break;
  case 3:
    if (*(long *)(unaff_x20 + _DAT_11306c940) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1042ff0f0);
      (*pcVar1)();
    }
    (*param_7)();
    break;
  case 4:
    if (*(long *)(unaff_x20 + _DAT_11306c938) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1042ff0e0);
      (*pcVar1)();
    }
    (*param_9)();
    break;
  case 5:
    if (*(long *)(unaff_x20 + _DAT_11306c930) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1042ff0fc);
      (*pcVar1)();
    }
    (*param_12)();
    break;
  case 6:
    if (*(long *)(unaff_x20 + _DAT_11306c928) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1042ff100);
      (*pcVar1)();
    }
    (*param_15)();
    break;
  case 7:
    if (*(long *)(unaff_x20 + _DAT_11306c920) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1042ff0f4);
      (*pcVar1)();
    }
    (*param_18)();
    break;
  case 8:
    if (*(long *)(unaff_x20 + _DAT_11306c918) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1042ff108);
      (*pcVar1)();
    }
    (*param_21)();
    break;
  case 9:
    if (*(long *)(unaff_x20 + _DAT_11306c910) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1042ff0e4);
      (*pcVar1)();
    }
    (*param_24)();
    break;
  case 10:
    if (*(long *)(unaff_x20 + _DAT_11306c908) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1042ff104);
      (*pcVar1)();
    }
    (*param_27)();
    break;
  case 0xb:
    if (*(long *)(unaff_x20 + _DAT_11306c900) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1042ff0dc);
      (*pcVar1)();
    }
    (*param_30)(param_31);
  }
  return;
}



/* Entry: 1042ff108; end: 1042ff227; -[SCEventType matchZoom:pinVisibility:placeAction:snapAd:placeLoaded:threeD:effect:sessionPauseResume:flush:exit:attachment:start:] */

void FUN_1042ff108(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined1 auStack_1a0 [16];
  undefined8 uStack_190;
  undefined1 auStack_180 [16];
  undefined8 uStack_170;
  undefined1 auStack_160 [16];
  undefined8 uStack_150;
  undefined1 auStack_140 [16];
  undefined8 uStack_130;
  undefined1 auStack_120 [16];
  undefined8 uStack_110;
  undefined1 auStack_100 [16];
  undefined8 uStack_f0;
  undefined1 auStack_e0 [16];
  undefined8 uStack_d0;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_f0 = param_9;
  uStack_110 = param_10;
  uStack_130 = param_11;
  uStack_150 = param_12;
  uStack_170 = param_13;
  uStack_190 = param_14;
  uStack_d0 = param_8;
  uStack_b0 = param_7;
  uStack_90 = param_6;
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  FUN_1042fef0c(0x104301b3c,auStack_40,FUN_104301b38,auStack_60,FUN_104301a64,auStack_80,0x104301b40
                ,auStack_a0,0x104301b44,auStack_c0,0x104301b48,auStack_e0,0x104301b4c,auStack_100,
                0x104301b50,auStack_120,0x104301b54,auStack_140,0x104301b58,auStack_160,0x104301b5c,
                auStack_180,0x104301b60,auStack_1a0);
  _objc_release(param_1);
  return;
}



/* Entry: 1042ff228; end: 1042ff2ff; -[SCEventType .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042ff228(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306c958));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306c950));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306c948));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306c940));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306c938));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306c930));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306c928));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306c920));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306c918));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306c910));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306c908));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11306c900));
  return;
}



/* Entry: 1042ff300; end: 1042ff34b; -[SCPlaceEvent placeId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042ff300(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11306c970);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11306c970))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1042ff34c; end: 1042ff35b; -[SCPlaceEvent event] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042ff34c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306c960));
  return;
}



/* Entry: 1042ff35c; end: 1042ff36b; -[SCPlaceEvent eventTimeMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042ff35c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306c968);
}



/* Entry: 1042ff36c; end: 1042ff3ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042ff36c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306c970);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11306c960) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11306c968) = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042ff3f0; end: 1042ff487; -[SCPlaceEvent initWithPlaceId:event:eventTimeMs:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042ff3f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_50;
  long lStack_48;
  
  lVar3 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)(param_1 + _DAT_11306c970);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_11306c960) = param_4;
  *(undefined8 *)(param_1 + _DAT_11306c968) = param_5;
  puVar2 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar3;
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_50,puVar2);
  return;
}



/* Entry: 1042ff488; end: 1042ff59f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1042ff488(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  lVar3 = 0;
  FUN_1042dddf8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar4 = auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  _objc_allocWithZone();
  uVar2 = param_1[1];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306c970);
  *puVar1 = *param_1;
  puVar1[1] = uVar2;
  lVar3 = 0;
  FUN_1042dde50();
  func_0x000104301ab8((long)param_1 + (long)*(int *)(lVar3 + 0x14),puVar4,FUN_1042dddf8);
  _swift_bridgeObjectRetain(uVar2);
  FUN_1042ffe44();
  *(undefined1 **)(unaff_x20 + _DAT_11306c960) = puVar4;
  *(undefined8 *)(unaff_x20 + _DAT_11306c968) =
       *(undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x18));
  puVar4 = auStack_60;
  _objc_msgSendSuper2(puVar4,PTR_s_init_1125d9248);
  func_0x000104301afc(param_1,FUN_1042dde50);
  return puVar4;
}



/* Entry: 1042ff5a0; end: 1042ff5d3; -[SCPlaceEvent hash] */

undefined8 FUN_1042ff5a0(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1042ff5d4();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1042ff5d4; end: 1042ff66f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042ff5d4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306c970);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_11306c970))[1]);
  uVar2 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  FUN_1042fc6d0();
  __ss6HasherV8_combineyySuF();
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11306c968));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1042ff670; end: 1042ff7cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1042ff670(undefined8 param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long unaff_x20;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lStack_68;
  undefined8 auStack_60 [3];
  ulong uStack_48;
  
  lVar4 = unaff_x20;
  _swift_getObjectType();
  func_0x000104300cb8(param_1,auStack_60,0x112d387f8,&UNK_10d902650);
  if (uStack_48 == 0) {
    func_0x000104300d00(auStack_60,0x112d387f8,&UNK_10d902650);
  }
  else {
    plVar1 = &lStack_68;
    _swift_dynamicCast(plVar1,auStack_60,PTR___sypN_11034f1a8 + 8,lVar4,6);
    if (((ulong)plVar1 & 1) != 0) {
      uVar2 = *(ulong *)(unaff_x20 + _DAT_11306c970);
      if (uVar2 == *(ulong *)(lStack_68 + _DAT_11306c970) &&
          ((ulong *)(unaff_x20 + _DAT_11306c970))[1] == ((ulong *)(lStack_68 + _DAT_11306c970))[1])
      {
        uVar5 = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uVar5 = uVar2;
      }
      uVar6 = *(undefined8 *)(lStack_68 + _DAT_11306c960);
      FUN_10430187c();
      auStack_60[0] = uVar6;
      uStack_48 = uVar2;
      _objc_retain(uVar6);
      puVar3 = auStack_60;
      FUN_1042fcc24(puVar3);
      func_0x000104300d00(auStack_60,0x112d387f8,&UNK_10d902650);
      lVar4 = *(long *)(unaff_x20 + _DAT_11306c968);
      lVar7 = *(long *)(lStack_68 + _DAT_11306c968);
      _objc_release(lStack_68);
      if ((uVar5 & 1) != 0) {
        return (uint)puVar3 & (uint)(lVar4 == lVar7);
      }
    }
  }
  return 0;
}



/* Entry: 1042ff7cc; end: 1042ff7d7; -[SCPlaceEvent isEqual:] */

uint FUN_1042ff7cc(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_50);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_1042ff670(&uStack_50);
  _objc_release(param_1);
  func_0x000104300d00(&uStack_50,0x112d387f8,&UNK_10d902650);
  return uVar1 & 1;
}



/* Entry: 1042ff7d8; end: 1042ff96f;  */

uint FUN_1042ff7d8(undefined8 param_1,undefined8 param_2,long param_3,code *param_4)

{
  uint uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_50);
    _swift_unknownObjectRelease(param_3);
  }
  (*param_4)(&uStack_50);
  _objc_release(param_1);
  func_0x000104300d00(&uStack_50,0x112d387f8,&UNK_10d902650);
  return uVar1 & 1;
}



/* Entry: 1042ff970; end: 1042ff9bf; -[SCPlaceEvent encodeWithCoder:] */

void FUN_1042ff970(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  func_0x0001042ff874(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1042ff9c0; end: 1042ff9ef;  */

void FUN_1042ff9c0(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1042ff9f0(param_1);
  return;
}



/* Entry: 1042ff9f0; end: 1042ffc5b;  */

undefined8 FUN_1042ff9f0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 unaff_x20;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  uVar4 = 0;
  uVar6 = 0;
  uVar2 = 0x44495f4543414c50;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44495f4543414c50,0xe800000000000000);
  lVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar3 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar3);
    _swift_unknownObjectRelease(lVar3);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    _objc_release(param_1);
  }
  else {
    _swift_dynamicCast(&uStack_a0,&uStack_70,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    uVar2 = uStack_a0;
    if ((uVar4 & 1) == 0) {
      _objc_release(param_1);
      goto LAB_1042ffc0c;
    }
    lVar5 = 0x544e455645;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x544e455645,0xe500000000000000);
    lVar3 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    if (lVar3 == 0) {
      uStack_88 = 0;
      uStack_90 = 0;
      lStack_78 = 0;
      uStack_80 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar3);
      _swift_unknownObjectRelease(lVar3);
      lVar5 = lVar3;
    }
    uStack_68 = uStack_88;
    uStack_70 = uStack_90;
    lStack_58 = lStack_78;
    uStack_60 = uStack_80;
    if (lStack_78 != 0) {
      FUN_10430187c();
      _swift_dynamicCast(&uStack_a0,&uStack_70,puVar1 + 8,lVar5,6);
      if ((uVar6 & 1) != 0) {
        uVar7 = 0x49545f544e455645;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x49545f544e455645,0xed0000534d5f454d)
        ;
        func_0x00010bf66f40(param_1);
        _objc_release(uVar7);
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uStack_98);
        _swift_bridgeObjectRelease(uStack_98);
        func_0x00010c036400();
        _objc_release(uVar2);
        _objc_release(param_1);
        _objc_release(uStack_a0);
        return unaff_x20;
      }
      _objc_release(param_1);
      _swift_bridgeObjectRelease(uStack_98);
      goto LAB_1042ffc0c;
    }
    _objc_release(param_1);
    _swift_bridgeObjectRelease(uStack_98);
  }
  func_0x000104300d00(&uStack_70,0x112d387f8,&UNK_10d902650);
LAB_1042ffc0c:
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 1042ffc5c; end: 1042ffc83; -[SCPlaceEvent initWithCoder:] */

void FUN_1042ffc5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1042ff9f0();
  return;
}



/* Entry: 1042ffc84; end: 1042ffd77; -[SCPlaceEvent description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042ffc84(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar3 = 0;
  FUN_1042dde50();
  lVar4 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar2 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar5 = (undefined8 *)(&stack0xffffffffffffffb0 + lVar2);
  uVar6 = ((undefined8 *)(param_1 + _DAT_11306c970))[1];
  *puVar5 = *(undefined8 *)(param_1 + _DAT_11306c970);
  *(undefined8 *)(&stack0xffffffffffffffb8 + lVar2) = uVar6;
  uVar7 = *(undefined8 *)(param_1 + _DAT_11306c960);
  iVar1 = *(int *)(lVar4 + 0x14);
  _objc_retain();
  _swift_bridgeObjectRetain(uVar6);
  _objc_retain(uVar7);
  FUN_1042fbf40((long)puVar5 + (long)iVar1);
  uVar6 = *(undefined8 *)(param_1 + _DAT_11306c968);
  _objc_release(param_1);
  *(undefined8 *)((long)puVar5 + (long)*(int *)(lVar3 + 0x18)) = uVar6;
  func_0x000104301afc(puVar5,FUN_1042dde50);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042ffd78; end: 1042ffdbf; -[SCPlaceEvent init] */

void FUN_1042ffd78(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "PromotedPlaceTrackerServices/PlaceEventWrapper.swift",0x34,2,0x209,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1042ffdc0);
  (*pcVar1)();
}



/* Entry: 1042ffdc0; end: 1042ffdc3;  */

void FUN_1042ffdc0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1042ffdc4; end: 1042ffdf7;  */

void FUN_1042ffdc4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1042ffdf8; end: 1042ffe33; -[SCPlaceEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042ffdf8(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306c970 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11306c960));
  return;
}



/* Entry: 1042ffe34; end: 1042ffe43;  */

ulong FUN_1042ffe34(ulong param_1)

{
  if (0xb < param_1) {
    param_1 = 0xc;
  }
  return param_1;
}



/* Entry: 1042ffe44; end: 104300c67;  */

void FUN_1042ffe44(undefined8 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined1 auStack_1d0 [368];
  
  lVar1 = 0;
  func_0x0001042e769c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar1 = 0;
  FUN_1042dddf8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar2 = auStack_1d0 +
           ((-extraout_x12 - (extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  func_0x000104301ab8(param_1,puVar2);
  _swift_getEnumCaseMultiPayload(puVar2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x0001042fff2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)*(ushort *)(&UNK_10dce7dbc + ((ulong)puVar2 & 0xffffffff) * 2) * 4 + 0x1042fff30
            ))();
  return;
}



/* Entry: 104300c68; end: 10430187b;  */

undefined8 FUN_104300c68(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x11306c8f0;
  func_0x0001000285a8(0x11306c8f0,&UNK_10dce7dd8);
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10430187c; end: 1043018bb;  */

void FUN_10430187c(void)

{
  _objc_opt_self(&PTR_PTR_1129975c0);
  return;
}



/* Entry: 1043018bc; end: 104301a23;  */

int FUN_1043018bc(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf4 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0xb) {
      iVar2 = 4;
    }
    if (param_2 + 0xb >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_104301938;
        goto LAB_10430191c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10430191c:
      return ((uint)*param_1 | uVar1 << 8) - 0xb;
    }
  }
LAB_104301938:
  iVar2 = *param_1 - 0xc;
  if (*param_1 < 0xc) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 104301a24; end: 104301a63;  */

void FUN_104301a24(void)

{
  undefined *puVar1;
  
  if (puRam000000011306c9c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce7e24;
  _swift_getWitnessTable(&UNK_10dce7e24,&UNK_110756db8);
  puRam000000011306c9c8 = puVar1;
  return;
}



/* Entry: 104301a64; end: 104301a73;  */

void FUN_104301a64(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000104301a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 104301a74; end: 104301b37;  */

undefined8 FUN_104301a74(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_3)();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 104301b38; end: 104301b63;  */

void FUN_104301b38(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000104301a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 104301b64; end: 104301b67; -[SCEventType copyWithZone:] */

void FUN_104301b64(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104301b68; end: 104301b6f; -[SCPlaceEvent copyWithZone:] */

void FUN_104301b68(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104301b70; end: 104301b9f;  */

void FUN_104301b70(undefined8 param_1)

{
  _objc_allocWithZone();
  func_0x000104302d60(param_1);
  return;
}



/* Entry: 104301ba0; end: 104301c9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104301ba0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306c9d0);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_11306c9d0))[1]);
  uVar2 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  func_0x00010bfde980(*(undefined8 *)(unaff_x20 + _DAT_11306c9d8));
  __ss6HasherV8_combineyySuF();
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306c9e0);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar2,PTR___sSSN_11034da80);
  uVar1 = uVar2;
  func_0x00010bfde980();
  _objc_release(uVar2);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV8_combineyys6UInt64VF(*(undefined8 *)(unaff_x20 + _DAT_11306c9e8));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11306c9f0));
  func_0x00010bfde980(*(undefined8 *)(unaff_x20 + _DAT_11306c9f8));
  __ss6HasherV8_combineyySuF();
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 104301ca0; end: 104301f8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_104301ca0(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lStack_88;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar8 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_80);
  if (lStack_68 == 0) {
    func_0x00010006e7f4(auStack_80);
  }
  else {
    plVar3 = &lStack_88;
    _swift_dynamicCast(plVar3,auStack_80,PTR___sypN_11034f1a8 + 8,lVar8,6);
    if (((ulong)plVar3 & 1) != 0) {
      lVar8 = *(long *)(unaff_x20 + _DAT_11306c9d0);
      if (lVar8 == *(long *)(lStack_88 + _DAT_11306c9d0) &&
          ((long *)(unaff_x20 + _DAT_11306c9d0))[1] == ((long *)(lStack_88 + _DAT_11306c9d0))[1]) {
        uVar2 = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uVar2 = (uint)lVar8;
      }
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_11306c9d8);
      func_0x00010c071ae0(uVar4);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11306c9e0);
      func_0x00010142cfc4(uVar5,*(undefined8 *)(lStack_88 + _DAT_11306c9e0));
      lVar8 = *(long *)(unaff_x20 + _DAT_11306c9e8);
      lVar9 = *(long *)(lStack_88 + _DAT_11306c9e8);
      lVar10 = *(long *)(unaff_x20 + _DAT_11306c9f0);
      lVar11 = *(long *)(lStack_88 + _DAT_11306c9f0);
      uVar7 = *(undefined8 *)(unaff_x20 + _DAT_11306c9f8);
      uVar6 = *(undefined8 *)(lStack_88 + _DAT_11306c9f8);
      _objc_retain(uVar6);
      func_0x00010c071ae0(uVar7);
      _objc_release(uVar6);
      _objc_release(lStack_88);
      uVar1 = 0;
      if (lVar10 == lVar11) {
        uVar1 = uVar2 & (uint)uVar4 & (uint)uVar5 & (uint)(lVar8 == lVar9);
      }
      return uVar1 & (uint)uVar7;
    }
  }
  return 0;
}



/* Entry: 104301f8c; end: 104301f97; -[SCPromotedPlaceAttributes placeId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104301f8c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11306ca08);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11306ca08))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104301f98; end: 104301fa3; -[SCPromotedPlaceAttributes mapSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104301f98(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11306ca10);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11306ca10))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104301fa4; end: 104301fb3; -[SCPromotedPlaceAttributes adResponse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104301fa4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306ca18));
  return;
}



/* Entry: 104301fb4; end: 104301fc3; -[SCPromotedPlaceAttributes isNoFill] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104301fb4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306ca20);
}



/* Entry: 104301fc4; end: 104301fd3; -[SCPromotedPlaceAttributes tileId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104301fc4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306ca28);
}



/* Entry: 104301fd4; end: 104302087;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104301fd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306ca08);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306ca10);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11306ca18) = param_5;
  *(undefined1 *)(unaff_x20 + _DAT_11306ca20) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_11306ca28) = param_7;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104302088; end: 10430215b; -[SCPromotedPlaceAttributes initWithPlaceId:mapSessionId:adResponse:isNoFill:tileId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104302088(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lStack_60;
  long lStack_58;
  
  lVar3 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar4 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)(param_1 + _DAT_11306ca08);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_1 + _DAT_11306ca10);
  *puVar1 = param_4;
  puVar1[1] = uVar4;
  *(undefined8 *)(param_1 + _DAT_11306ca18) = param_5;
  *(undefined1 *)(param_1 + _DAT_11306ca20) = param_6;
  *(undefined8 *)(param_1 + _DAT_11306ca28) = param_7;
  puVar2 = PTR_s_init_1125d9248;
  lStack_60 = param_1;
  lStack_58 = lVar3;
  _objc_retain(param_5);
  _objc_msgSendSuper2(&lStack_60,puVar2);
  return;
}



/* Entry: 10430215c; end: 10430218b;  */

void FUN_10430215c(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10430218c(param_1);
  return;
}



/* Entry: 10430218c; end: 1043022e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10430218c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 *puVar5;
  long extraout_x8;
  long unaff_x20;
  
  _swift_getObjectType();
  lVar4 = 0;
  func_0x000100b91d00();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar5 = &stack0xffffffffffffff90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar2 = param_1[1];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306ca08);
  *puVar1 = *param_1;
  puVar1[1] = uVar2;
  uVar3 = param_1[3];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306ca10);
  *puVar1 = param_1[2];
  puVar1[1] = uVar3;
  lVar4 = 0;
  func_0x0001042e75b8();
  func_0x000101681be8((long)param_1 + (long)*(int *)(lVar4 + 0x18),puVar5);
  func_0x0001047c0984(0);
  _objc_allocWithZone();
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  func_0x0001047b952c();
  *(undefined1 **)(unaff_x20 + _DAT_11306ca18) = puVar5;
  *(undefined1 *)(unaff_x20 + _DAT_11306ca20) =
       *(undefined1 *)((long)param_1 + (long)*(int *)(lVar4 + 0x1c));
  *(undefined8 *)(unaff_x20 + _DAT_11306ca28) =
       *(undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x20));
  puVar5 = &stack0xffffffffffffff90;
  _objc_msgSendSuper2(puVar5,PTR_s_init_1125d9248);
  FUN_104303208(param_1,0x1042e75b8);
  return puVar5;
}



/* Entry: 1043022e8; end: 10430232f; -[SCPromotedPlaceAttributes description] */

void FUN_1043022e8(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  FUN_104302330();
  _objc_release(param_1);
  uVar1 = 0;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
  _swift_bridgeObjectRelease(0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104302330; end: 104302433;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_104302330(void)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long unaff_x20;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  lVar4 = 0;
  func_0x0001042e75b8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar3 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar5 = (undefined8 *)(&stack0xffffffffffffffb0 + lVar3);
  uVar1 = ((undefined8 *)(unaff_x20 + _DAT_11306ca08))[1];
  *puVar5 = *(undefined8 *)(unaff_x20 + _DAT_11306ca08);
  *(undefined8 *)(&stack0xffffffffffffffb8 + lVar3) = uVar1;
  uVar1 = ((undefined8 *)(unaff_x20 + _DAT_11306ca10))[1];
  *(undefined8 *)(&stack0xffffffffffffffc0 + lVar3) = *(undefined8 *)(unaff_x20 + _DAT_11306ca10);
  *(undefined8 *)(&stack0xffffffffffffffc8 + lVar3) = uVar1;
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_11306ca18);
  iVar2 = *(int *)(lVar4 + 0x18);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  _objc_retain(uVar6);
  func_0x0001047b6fb0((long)puVar5 + (long)iVar2);
  *(undefined1 *)((long)puVar5 + (long)*(int *)(lVar4 + 0x1c)) =
       *(undefined1 *)(unaff_x20 + _DAT_11306ca20);
  *(undefined8 *)((long)puVar5 + (long)*(int *)(lVar4 + 0x20)) =
       *(undefined8 *)(unaff_x20 + _DAT_11306ca28);
  FUN_104303208(puVar5,0x1042e75b8);
  return ZEXT816(0xe000000000000000) << 0x40;
}



/* Entry: 104302434; end: 10430247b; -[SCPromotedPlaceAttributes init] */

void FUN_104302434(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "PromotedPlaceTrackerServices/PlaceLoadedEventWrapper.swift",0x3a,2,0x37,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10430247c);
  (*pcVar1)();
}



/* Entry: 10430247c; end: 104302577; -[SCPromotedPlaceAttributes .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430247c(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306ca08 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306ca10 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11306ca18));
  return;
}



/* Entry: 104302578; end: 1043025af;  */

void FUN_104302578(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 1043025b0; end: 1043025cb; -[SCPinType description] */

void FUN_1043025b0(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043025cc; end: 104302613; -[SCPinType init] */

void FUN_1043025cc(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "PromotedPlaceTrackerServices/PlaceLoadedEventWrapper.swift",0x3a,2,0x73,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104302614);
  (*pcVar1)();
}



/* Entry: 104302614; end: 1043026df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104302614(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + _DAT_11306ca00) == '\0') {
    uVar2 = 0xed00005445534e55;
  }
  else if (*(char *)(unaff_x20 + _DAT_11306ca00) == '\x01') {
    uVar2 = 0xed000059524f5453;
  }
  else {
    uVar2 = 0xec0000004e4f4349;
  }
  uVar1 = 0x5f45505954425553;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f45505954425553,uVar2);
  uVar2 = 0x55535f4445444f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x55535f4445444f43,0xed00004550595442);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1043026e0; end: 10430272f; -[SCPinType encodeWithCoder:] */

void FUN_1043026e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_104302614(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104302730; end: 10430275f;  */

void FUN_104302730(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_104302760(param_1);
  return;
}



/* Entry: 104302760; end: 104302a0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104302760(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  undefined1 *puVar5;
  long unaff_x20;
  ulong uVar6;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  puVar5 = auStack_c0;
  _swift_getObjectType();
  uVar1 = 0x55535f4445444f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x55535f4445444f43,0xed00004550595442);
  lVar2 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (lVar2 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_80,lVar2);
    _swift_unknownObjectRelease(lVar2);
  }
  uStack_58 = uStack_78;
  uStack_60 = uStack_80;
  lStack_48 = lStack_68;
  uStack_50 = uStack_70;
  if (lStack_68 == 0) {
    _objc_release(param_1);
    func_0x00010006e7f4(&uStack_60);
    goto LAB_1043029d8;
  }
  plVar3 = &lStack_90;
  _swift_dynamicCast(plVar3,&uStack_60,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
  if (((ulong)plVar3 & 1) == 0) {
LAB_1043029d0:
    _objc_release(param_1);
LAB_1043029d8:
    _swift_getObjectType();
    _swift_deallocPartialClassInstance();
    return (undefined1 *)0x0;
  }
  uVar6 = 0x5f45505954425553;
  if (((lStack_90 == 0x5f45505954425553) && (lStack_88 == -0x12ffffabbaacb1ab)) ||
     (uVar4 = uVar6,
     __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
               (0x5f45505954425553,0xed00005445534e55,lStack_90,lStack_88,0), (uVar4 & 1) != 0)) {
    _swift_bridgeObjectRelease(lStack_88);
    _objc_allocWithZone();
    *(undefined1 *)(unaff_x20 + _DAT_11306ca00) = 0;
    goto LAB_1043028a4;
  }
  if (((lStack_90 == 0x5f45505954425553) && (lStack_88 == -0x12ffffa6adb0abad)) ||
     (uVar4 = uVar6,
     __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
               (0x5f45505954425553,0xed000059524f5453,lStack_90,lStack_88,0), (uVar4 & 1) != 0)) {
    _swift_bridgeObjectRelease(lStack_88);
    _objc_allocWithZone();
    *(undefined1 *)(unaff_x20 + _DAT_11306ca00) = 1;
    puVar5 = auStack_b0;
    goto LAB_1043028a4;
  }
  if ((lStack_90 == 0x5f45505954425553) && (lStack_88 == -0x13ffffffb1b0bcb7)) {
    _swift_bridgeObjectRelease(0xec0000004e4f4349);
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0x5f45505954425553,0xec0000004e4f4349,lStack_90,lStack_88,0);
    _swift_bridgeObjectRelease(lStack_88);
    if ((uVar6 & 1) == 0) goto LAB_1043029d0;
  }
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11306ca00) = 2;
  puVar5 = auStack_a0;
LAB_1043028a4:
  _objc_msgSendSuper2(puVar5,PTR_s_init_1125d9248);
  _objc_release(param_1);
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return puVar5;
}



/* Entry: 104302a10; end: 104302a37; -[SCPinType initWithCoder:] */

void FUN_104302a10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_104302760();
  return;
}



/* Entry: 104302a38; end: 104302a3f; +[SCPinType unset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104302a38(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11306ca00) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104302a40; end: 104302a47; +[SCPinType story] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104302a40(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11306ca00) = 1;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104302a48; end: 104302a4f; +[SCPinType icon] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104302a48(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11306ca00) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104302a50; end: 104302a9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104302a50(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11306ca00) = param_3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104302aa0; end: 104302acb; -[SCPinType matchUnset:story:icon:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104302aa0(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  if ((*(char *)(param_1 + _DAT_11306ca00) != '\0') &&
     (param_3 = param_4, *(char *)(param_1 + _DAT_11306ca00) != '\x01')) {
    param_3 = param_5;
  }
                    /* WARNING: Could not recover jumptable at 0x000104302ac8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3);
  return;
}



/* Entry: 104302acc; end: 104302acf; -[SCPinType .cxx_destruct] */

void FUN_104302acc(void)

{
  return;
}



/* Entry: 104302ad0; end: 104302adb; -[SCPlaceLoadedEvent placeId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104302ad0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11306c9d0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11306c9d0))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104302adc; end: 104302b23;  */

void FUN_104302adc(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 104302b24; end: 104302b33; -[SCPlaceLoadedEvent pinType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104302b24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306c9d8));
  return;
}



/* Entry: 104302b34; end: 104302b7b; -[SCPlaceLoadedEvent annotations] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104302b34(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11306c9e0);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104302b7c; end: 104302b8b; -[SCPlaceLoadedEvent tileId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104302b7c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306c9e8);
}



/* Entry: 104302b8c; end: 104302b9b; -[SCPlaceLoadedEvent zoomLevel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104302b8c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306c9f0);
}



/* Entry: 104302b9c; end: 104302bab; -[SCPlaceLoadedEvent placeAttributes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104302b9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306c9f8));
  return;
}



/* Entry: 104302bac; end: 104302c67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104302bac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306c9d0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11306c9d8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11306c9e0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11306c9e8) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_11306c9f0) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_11306c9f8) = param_7;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104302c68; end: 104302f5b; -[SCPlaceLoadedEvent initWithPlaceId:pinType:annotations:tileId:zoomLevel:placeAttributes:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104302c68(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_70;
  long lStack_68;
  
  lVar3 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
            (param_5,PTR___sSSN_11034da80);
  puVar1 = (undefined8 *)(param_1 + _DAT_11306c9d0);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_11306c9d8) = param_4;
  *(undefined8 *)(param_1 + _DAT_11306c9e0) = param_5;
  *(undefined8 *)(param_1 + _DAT_11306c9e8) = param_6;
  *(undefined8 *)(param_1 + _DAT_11306c9f0) = param_7;
  *(undefined8 *)(param_1 + _DAT_11306c9f8) = param_8;
  puVar2 = PTR_s_init_1125d9248;
  lStack_70 = param_1;
  lStack_68 = lVar3;
  _objc_retain(param_4);
  _objc_retain(param_8);
  _objc_msgSendSuper2(&lStack_70,puVar2);
  return;
}



/* Entry: 104302f5c; end: 104302f8f; -[SCPlaceLoadedEvent hash] */

undefined8 FUN_104302f5c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104301ba0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104302f90; end: 10430300f; -[SCPlaceLoadedEvent isEqual:] */

uint FUN_104302f90(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_104301ca0(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104303010; end: 10430309b; -[SCPlaceLoadedEvent description] */

void FUN_104303010(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = 0;
  func_0x0001042e769c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  _objc_retain(param_1);
  func_0x000104301e1c(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  FUN_104303208(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),0x1042e769c);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


