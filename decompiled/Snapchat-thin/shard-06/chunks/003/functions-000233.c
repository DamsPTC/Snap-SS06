/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1047c71f0; end: 1047c745f;  */

undefined8 FUN_1047c71f0(ulong param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 unaff_x20;
  long lVar5;
  undefined8 uVar6;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  iVar1 = (int)&uStack_b0;
  uVar2 = 0x52555f414944454d;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x52555f414944454d,0xe90000000000004c);
  uVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (uVar3 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,uVar3);
    _swift_unknownObjectRelease(uVar3);
  }
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  uVar2 = uStack_90;
  if (lStack_88 == 0) {
    func_0x00010006e7f4(&uStack_80);
    lVar5 = 0;
    uVar6 = 0;
  }
  else {
    _swift_dynamicCast(&uStack_b0,&uStack_80,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    lVar5 = lStack_a8;
    uVar6 = uStack_b0;
    if (iVar1 == 0) {
      uVar6 = 0;
      lVar5 = 0;
    }
  }
  uVar4 = 0x4854444957;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4854444957,0xe500000000000000);
  func_0x00010bf66f40(param_1);
  _objc_release(uVar4);
  uVar4 = 0x544847494548;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x544847494548,0xe600000000000000);
  func_0x00010bf66f40(param_1);
  _objc_release(uVar4);
  uVar4 = 0x5a49535f454c4946;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5a49535f454c4946,0xe900000000000045);
  func_0x00010bf66da0(param_1);
  _objc_release(uVar4);
  uVar4 = 0x4f495449444e4552;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4f495449444e4552,0xee00455059545f4e);
  uVar3 = param_1;
  func_0x00010bf66f40();
  _objc_release(uVar4);
  if (uVar3 < 3) {
    if (lVar5 == 0) {
      uVar6 = 0;
    }
    else {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar6,lVar5);
      _swift_bridgeObjectRelease(lVar5);
    }
    func_0x00010c02a100(uVar2);
    _objc_release(uVar6);
    _objc_release(param_1);
  }
  else {
    _objc_release(param_1);
    _swift_bridgeObjectRelease(lVar5);
    _swift_getObjectType();
    _swift_deallocPartialClassInstance();
    unaff_x20 = 0;
  }
  return unaff_x20;
}



/* Entry: 1047c7460; end: 1047c7487; -[SCAdSnapMediaRendition initWithCoder:] */

void FUN_1047c7460(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1047c71f0();
  return;
}



/* Entry: 1047c7488; end: 1047c74a3; -[SCAdSnapMediaRendition description] */

void FUN_1047c7488(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1047c74a4; end: 1047c751f; -[SCAdSnapMediaRendition init] */

void FUN_1047c74a4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataModel/AdSnapMediaRenditionWrapper.swift",0x2d,2,0x65,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1047c74ec);
  (*pcVar1)();
}



/* Entry: 1047c7520; end: 1047c7533; -[SCAdSnapMediaRendition .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047c7520(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11308f2f0 + 8))
  ;
  return;
}



/* Entry: 1047c7534; end: 1047c7553;  */

void FUN_1047c7534(void)

{
  _objc_opt_self(&PTR_PTR_1129d4188);
  return;
}



/* Entry: 1047c7554; end: 1047c7567; -[SCAdSnapViewLogDetailedGestureParameters startSwipeTapPosition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1047c7554(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_11308f340);
}



/* Entry: 1047c7568; end: 1047c757b; -[SCAdSnapViewLogDetailedGestureParameters startSwipeTapPositionRelative] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1047c7568(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_11308f348);
}



/* Entry: 1047c757c; end: 1047c758f; -[SCAdSnapViewLogDetailedGestureParameters secondPointSwipePosition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1047c757c(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_11308f350);
}



/* Entry: 1047c7590; end: 1047c75a3; -[SCAdSnapViewLogDetailedGestureParameters secondPointSwipePositionRelative] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1047c7590(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_11308f358);
}



/* Entry: 1047c75a4; end: 1047c75b7; -[SCAdSnapViewLogDetailedGestureParameters endSwipeTapPosition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1047c75a4(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_11308f360);
}



/* Entry: 1047c75b8; end: 1047c75cb; -[SCAdSnapViewLogDetailedGestureParameters endSwipeTapPositionRelative] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1047c75b8(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_11308f368);
}



/* Entry: 1047c75cc; end: 1047c75db; -[SCAdSnapViewLogDetailedGestureParameters swipeTapDurationMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047c75cc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308f370);
}



/* Entry: 1047c75dc; end: 1047c75eb; -[SCAdSnapViewLogDetailedGestureParameters swipeTapStartTimeMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047c75dc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308f378);
}



/* Entry: 1047c75ec; end: 1047c75fb; -[SCAdSnapViewLogDetailedGestureParameters tapAttachmentSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047c75ec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308f380);
}



/* Entry: 1047c75fc; end: 1047c788b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047c75fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308f340);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308f348);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308f350);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308f358);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308f360);
  *puVar1 = in_stack_00000000;
  puVar1[1] = in_stack_00000008;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308f368);
  *puVar1 = in_stack_00000010;
  puVar1[1] = in_stack_00000018;
  *(undefined8 *)(unaff_x20 + _DAT_11308f370) = in_stack_00000020;
  *(undefined8 *)(unaff_x20 + _DAT_11308f378) = in_stack_00000028;
  *(undefined8 *)(unaff_x20 + _DAT_11308f380) = param_9;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047c788c; end: 1047c7a4f; -[SCAdSnapViewLogDetailedGestureParameters initWithStartSwipeTapPosition:startSwipeTapPositionRelative:secondPointSwipePosition:secondPointSwipePositionRelative:endSwipeTapPosition:endSwipeTapPositionRelative:swipeTapDurationMs:swipeTapStartTimeMs:tapAttachmentSource:] */

void FUN_1047c788c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x0001047c7744(param_3);
  return;
}



/* Entry: 1047c7a50; end: 1047c7a6f; -[SCAdSnapViewLogDetailedGestureParameters hash] */

void FUN_1047c7a50(void)

{
  FUN_1047c7a70();
  return;
}



/* Entry: 1047c7a70; end: 1047c7c73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047c7a70(void)

{
  double *pdVar1;
  long unaff_x20;
  double dVar2;
  double dVar3;
  undefined1 auStack_88 [72];
  
  __ss6HasherVABycfC(auStack_88);
  pdVar1 = (double *)(unaff_x20 + _DAT_11308f340);
  dVar2 = *pdVar1;
  dVar3 = 0.0;
  if (dVar2 != 0.0) {
    dVar3 = dVar2;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  dVar2 = pdVar1[1];
  dVar3 = 0.0;
  if (dVar2 != 0.0) {
    dVar3 = dVar2;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  pdVar1 = (double *)(unaff_x20 + _DAT_11308f348);
  dVar2 = *pdVar1;
  dVar3 = 0.0;
  if (dVar2 != 0.0) {
    dVar3 = dVar2;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  dVar2 = pdVar1[1];
  dVar3 = 0.0;
  if (dVar2 != 0.0) {
    dVar3 = dVar2;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  pdVar1 = (double *)(unaff_x20 + _DAT_11308f350);
  dVar2 = *pdVar1;
  dVar3 = 0.0;
  if (dVar2 != 0.0) {
    dVar3 = dVar2;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  dVar2 = pdVar1[1];
  dVar3 = 0.0;
  if (dVar2 != 0.0) {
    dVar3 = dVar2;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  pdVar1 = (double *)(unaff_x20 + _DAT_11308f358);
  dVar2 = *pdVar1;
  dVar3 = 0.0;
  if (dVar2 != 0.0) {
    dVar3 = dVar2;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  dVar2 = pdVar1[1];
  dVar3 = 0.0;
  if (dVar2 != 0.0) {
    dVar3 = dVar2;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  pdVar1 = (double *)(unaff_x20 + _DAT_11308f360);
  dVar2 = *pdVar1;
  dVar3 = 0.0;
  if (dVar2 != 0.0) {
    dVar3 = dVar2;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  dVar2 = pdVar1[1];
  dVar3 = 0.0;
  if (dVar2 != 0.0) {
    dVar3 = dVar2;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  pdVar1 = (double *)(unaff_x20 + _DAT_11308f368);
  dVar2 = *pdVar1;
  dVar3 = 0.0;
  if (dVar2 != 0.0) {
    dVar3 = dVar2;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  dVar2 = pdVar1[1];
  dVar3 = 0.0;
  if (dVar2 != 0.0) {
    dVar3 = dVar2;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  dVar3 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11308f370) != 0.0) {
    dVar3 = *(double *)(unaff_x20 + _DAT_11308f370);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  dVar3 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11308f378) != 0.0) {
    dVar3 = *(double *)(unaff_x20 + _DAT_11308f378);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11308f380));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1047c7c74; end: 1047c7e17;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x0001047c7da4 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

byte FUN_1047c7c74(undefined8 param_1)

{
  double dVar1;
  ulong uVar2;
  double dVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined1 in_b0;
  byte bVar11;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  long lVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  long lStack_88;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar7 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_80);
  if (lStack_68 == 0) {
    func_0x00010006e7f4(auStack_80);
  }
  else {
    plVar8 = &lStack_88;
    _swift_dynamicCast(plVar8,auStack_80,PTR___sypN_11034f1a8 + 8,lVar7,6);
    if (((ulong)plVar8 & 1) != 0) {
      dVar3 = ((double *)(unaff_x20 + _DAT_11308f340))[1];
      dVar1 = *(double *)(unaff_x20 + _DAT_11308f340);
      dVar14 = ((double *)(lStack_88 + _DAT_11308f340))[1];
      dVar12 = *(double *)(lStack_88 + _DAT_11308f340);
      dVar17 = ((double *)(unaff_x20 + _DAT_11308f348))[1];
      dVar15 = *(double *)(unaff_x20 + _DAT_11308f348);
      dVar20 = ((double *)(lStack_88 + _DAT_11308f348))[1];
      dVar19 = *(double *)(lStack_88 + _DAT_11308f348);
      dVar6 = ((double *)(unaff_x20 + _DAT_11308f350))[1];
      dVar5 = *(double *)(unaff_x20 + _DAT_11308f350);
      dVar23 = ((double *)(lStack_88 + _DAT_11308f350))[1];
      dVar22 = *(double *)(lStack_88 + _DAT_11308f350);
      dVar25 = ((double *)(unaff_x20 + _DAT_11308f358))[1];
      dVar24 = *(double *)(unaff_x20 + _DAT_11308f358);
      dVar27 = ((double *)(lStack_88 + _DAT_11308f358))[1];
      dVar26 = *(double *)(lStack_88 + _DAT_11308f358);
      dVar13 = *(double *)(lStack_88 + _DAT_11308f360);
      dVar18 = ((double *)(unaff_x20 + _DAT_11308f368))[1];
      dVar21 = ((double *)(lStack_88 + _DAT_11308f368))[1];
      lVar16 = -(ulong)(*(double *)(unaff_x20 + _DAT_11308f368) ==
                       *(double *)(lStack_88 + _DAT_11308f368));
      lVar7 = -(ulong)(*(double *)(unaff_x20 + _DAT_11308f360) == dVar13);
      lVar4 = -(ulong)(((double *)(unaff_x20 + _DAT_11308f360))[1] ==
                      ((double *)(lStack_88 + _DAT_11308f360))[1]);
      dVar28 = *(double *)(unaff_x20 + _DAT_11308f370);
      dVar29 = *(double *)(lStack_88 + _DAT_11308f370);
      dVar30 = *(double *)(unaff_x20 + _DAT_11308f378);
      dVar31 = *(double *)(lStack_88 + _DAT_11308f378);
      uVar9 = *(undefined8 *)(unaff_x20 + _DAT_11308f380);
      uVar10 = *(undefined8 *)(lStack_88 + _DAT_11308f380);
      _objc_release(CONCAT17(in_register_00005007,
                             CONCAT16(in_register_00005006,
                                      CONCAT15(in_register_00005005,
                                               CONCAT14(in_register_00005004,
                                                        CONCAT13(in_register_00005003,
                                                                 CONCAT12(in_register_00005002,
                                                                          CONCAT11(
                                                  in_register_00005001,in_b0))))))),dVar13,lVar16);
      uVar2 = (ulong)CONCAT16(-(dVar17 == dVar20),
                              (uint6)CONCAT14(-(dVar15 == dVar19),
                                              (uint)CONCAT12(-(dVar3 == dVar14),
                                                             (ushort)(byte)-(dVar1 == dVar12)))) &
              CONCAT26(-(ushort)(dVar18 == dVar21),
                       CONCAT24((short)lVar16,
                                CONCAT22((short)(CONCAT19((char)((ulong)lVar4 >> 8),
                                                          CONCAT18((char)lVar4,lVar7)) >> 0x40),
                                         (short)lVar7)));
      bVar11 = NEON_uminv(CONCAT17(-((char)((dVar25 == dVar27) * -0x80) < '\0'),
                                   CONCAT16(-((char)((dVar24 == dVar26) * -0x80) < '\0'),
                                            CONCAT15(-((char)((dVar6 == dVar23) * -0x80) < '\0'),
                                                     CONCAT14(-((char)((dVar5 == dVar22) * -0x80) <
                                                               '\0'),CONCAT13(-((char)((char)(uVar2 
                                                  >> 0x30) << 7) < '\0'),
                                                  CONCAT12(-((char)((char)(uVar2 >> 0x20) << 7) <
                                                            '\0'),CONCAT11(-((char)((char)(uVar2 >> 
                                                  0x10) << 7) < '\0'),
                                                  -((char)((char)uVar2 << 7) < '\0')))))))),1);
      if ((int)uVar9 != (int)uVar10) {
        return 0;
      }
      return (dVar30 == dVar31 && dVar28 == dVar29) & bVar11;
    }
  }
  return 0;
}



/* Entry: 1047c7e18; end: 1047c7e97; -[SCAdSnapViewLogDetailedGestureParameters isEqual:] */

uint FUN_1047c7e18(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1047c7c74(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1047c7e98; end: 1047c7e9b; -[SCAdSnapViewLogDetailedGestureParameters copyWithZone:] */

void FUN_1047c7e98(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1047c7e9c; end: 1047c8147;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047c7e9c(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11308f340);
  uVar3 = ((undefined8 *)(unaff_x20 + _DAT_11308f340))[1];
  uVar1 = 0xd000000000000018;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018,0x800000010f20dd70);
  func_0x00010bf92dc0(uVar2,uVar3,param_1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11308f348);
  uVar3 = ((undefined8 *)(unaff_x20 + _DAT_11308f348))[1];
  uVar1 = 0xd000000000000021;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000021,0x800000010f20dd90);
  func_0x00010bf92dc0(uVar2,uVar3,param_1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11308f350);
  uVar3 = ((undefined8 *)(unaff_x20 + _DAT_11308f350))[1];
  uVar1 = 0xd00000000000001b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f20ddc0);
  func_0x00010bf92dc0(uVar2,uVar3,param_1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11308f358);
  uVar3 = ((undefined8 *)(unaff_x20 + _DAT_11308f358))[1];
  uVar1 = 0xd000000000000024;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000024,0x800000010f20dde0);
  func_0x00010bf92dc0(uVar2,uVar3,param_1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11308f360);
  uVar3 = ((undefined8 *)(unaff_x20 + _DAT_11308f360))[1];
  uVar1 = 0xd000000000000016;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f20de10);
  func_0x00010bf92dc0(uVar2,uVar3,param_1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11308f368);
  uVar3 = ((undefined8 *)(unaff_x20 + _DAT_11308f368))[1];
  uVar1 = 0xd00000000000001f;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001f,0x800000010f20de30);
  func_0x00010bf92dc0(uVar2,uVar3,param_1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11308f370);
  uVar1 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f20de50);
  func_0x00010bf92e80(uVar2,param_1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11308f378);
  uVar1 = 0xd000000000000017;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f20de70);
  func_0x00010bf92e80(uVar2,param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f20de90);
  func_0x00010bf92fc0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1047c8148; end: 1047c8197; -[SCAdSnapViewLogDetailedGestureParameters encodeWithCoder:] */

void FUN_1047c8148(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1047c7e9c(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1047c8198; end: 1047c81c7;  */

void FUN_1047c8198(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047c81c8(param_1);
  return;
}



/* Entry: 1047c81c8; end: 1047c8483;  */

undefined8 FUN_1047c81c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar1 = 0xd000000000000018;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018,0x800000010f20dd70);
  func_0x00010bf66d00(param_3);
  uVar4 = param_1;
  uVar7 = param_2;
  _objc_release(uVar1);
  uVar1 = 0xd000000000000021;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000021,0x800000010f20dd90);
  func_0x00010bf66d00(param_3);
  uVar5 = uVar4;
  uVar8 = uVar7;
  _objc_release(uVar1);
  uVar1 = 0xd00000000000001b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f20ddc0);
  func_0x00010bf66d00(param_3);
  uVar6 = uVar5;
  uVar9 = uVar8;
  _objc_release(uVar1);
  uVar1 = 0xd000000000000024;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000024,0x800000010f20dde0);
  func_0x00010bf66d00(param_3);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000016;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f20de10);
  func_0x00010bf66d00(param_3);
  _objc_release(uVar1);
  uVar1 = 0xd00000000000001f;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001f,0x800000010f20de30);
  func_0x00010bf66d00(param_3);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f20de50);
  func_0x00010bf66da0(param_3);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000017;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f20de70);
  func_0x00010bf66da0(param_3);
  _objc_release(uVar1);
  uVar3 = 0xf20de90;
  uVar2 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015);
  uVar1 = param_3;
  func_0x00010bf66f40(param_3);
  _objc_release(uVar2);
  func_0x0001046c013c(uVar1);
  if ((uVar3 & 0xff) == 1) {
    _objc_release(param_3);
    _swift_getObjectType();
    _swift_deallocPartialClassInstance();
    unaff_x20 = 0;
  }
  else {
    func_0x00010c04bb20(param_1,param_2,uVar4,uVar7,uVar5,uVar8,uVar6,uVar9);
    _objc_release(param_3);
  }
  return unaff_x20;
}



/* Entry: 1047c8484; end: 1047c84ab; -[SCAdSnapViewLogDetailedGestureParameters initWithCoder:] */

void FUN_1047c8484(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1047c81c8();
  return;
}



/* Entry: 1047c84ac; end: 1047c84d7; -[SCAdSnapViewLogDetailedGestureParameters description] */

void FUN_1047c84ac(void)

{
  undefined1 auStack_88 [120];
  
  FUN_1047c85c0(auStack_88);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1047c84d8; end: 1047c8543;  */

void FUN_1047c84d8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_1047c85c0(&uStack_98);
  _objc_release(param_2);
  param_1[9] = uStack_50;
  param_1[8] = uStack_58;
  param_1[0xb] = uStack_40;
  param_1[10] = uStack_48;
  param_1[0xd] = uStack_30;
  param_1[0xc] = uStack_38;
  param_1[0xe] = uStack_28;
  param_1[1] = uStack_90;
  *param_1 = uStack_98;
  param_1[3] = uStack_80;
  param_1[2] = uStack_88;
  param_1[5] = uStack_70;
  param_1[4] = uStack_78;
  param_1[7] = uStack_60;
  param_1[6] = uStack_68;
  return;
}



/* Entry: 1047c8544; end: 1047c85bf; -[SCAdSnapViewLogDetailedGestureParameters init] */

void FUN_1047c8544(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataModel/AdSnapViewLogDetailedGestureParametersWrapper.swift",0x3f,2,0x9c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1047c858c);
  (*pcVar1)();
}



/* Entry: 1047c85c0; end: 1047c8647; -[SCAdSnapViewLogDetailedGestureParameters .cxx_destruct] */

void FUN_1047c85c0(void)

{
  return;
}



/* Entry: 1047c8648; end: 1047c8667;  */

void FUN_1047c8648(void)

{
  _objc_opt_self(&PTR_PTR_1129d4278);
  return;
}



/* Entry: 1047c8668; end: 1047c8677; -[SCAdConfigurations endCard] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047c8668(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308f3b0));
  return;
}



/* Entry: 1047c8678; end: 1047c8687; -[SCAdConfigurations promotedStoryTile] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047c8678(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308f3b8));
  return;
}



/* Entry: 1047c8688; end: 1047c8697; -[SCAdConfigurations progressBar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047c8688(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308f3c0));
  return;
}



/* Entry: 1047c8698; end: 1047c870b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047c8698(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308f3b0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308f3b8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11308f3c0) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047c870c; end: 1047c879b; -[SCAdConfigurations initWithEndCard:promotedStoryTile:progressBar:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047c870c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11308f3b0) = param_3;
  *(undefined8 *)(param_1 + _DAT_11308f3b8) = param_4;
  *(undefined8 *)(param_1 + _DAT_11308f3c0) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 1047c879c; end: 1047c87cb;  */

void FUN_1047c879c(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047c87cc(param_1);
  return;
}



/* Entry: 1047c87cc; end: 1047c895f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047c87cc(long param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  _swift_getObjectType();
  cVar1 = *(char *)(param_1 + 8);
  lVar2 = 0;
  FUN_1047ce120();
  lVar3 = lVar2;
  _objc_allocWithZone();
  puVar4 = (undefined *)0x0;
  if (cVar1 != '\x01') {
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c01e540();
  }
  *(undefined **)(lVar3 + _DAT_11308f570) = puVar4;
  plVar5 = &lStack_70;
  lStack_70 = lVar3;
  lStack_68 = lVar2;
  _objc_msgSendSuper2(plVar5,PTR_s_init_1125d9248);
  *(long **)(unaff_x20 + _DAT_11308f3b0) = plVar5;
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  cVar1 = *(char *)(param_1 + 0x18);
  lVar2 = 0;
  FUN_1047cede4();
  lVar3 = lVar2;
  _objc_allocWithZone();
  puVar4 = (undefined *)0x0;
  if (cVar1 != '\x01') {
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c00e360(uVar6);
  }
  *(undefined **)(lVar3 + _DAT_11308f5d0) = puVar4;
  plVar5 = &lStack_80;
  lStack_80 = lVar3;
  lStack_78 = lVar2;
  _objc_msgSendSuper2(plVar5,PTR_s_init_1125d9248);
  *(long **)(unaff_x20 + _DAT_11308f3b8) = plVar5;
  cVar1 = *(char *)(param_1 + 0x28);
  lVar2 = 0;
  FUN_1047ce77c();
  lVar3 = lVar2;
  _objc_allocWithZone();
  puVar4 = (undefined *)0x0;
  if (cVar1 != '\x01') {
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c01e540();
  }
  *(undefined **)(lVar3 + _DAT_11308f5a0) = puVar4;
  plVar5 = &lStack_90;
  lStack_90 = lVar3;
  lStack_88 = lVar2;
  _objc_msgSendSuper2(plVar5,PTR_s_init_1125d9248);
  *(long **)(unaff_x20 + _DAT_11308f3c0) = plVar5;
  _objc_msgSendSuper2(&stack0xffffffffffffff60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047c8960; end: 1047c8b07; -[SCAdConfigurations hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1047c8960(long param_1)

{
  long lVar1;
  undefined1 auStack_150 [72];
  undefined1 auStack_108 [72];
  undefined1 auStack_c0 [72];
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  lVar1 = *(long *)(param_1 + _DAT_11308f3b0);
  __ss6HasherVABycfC(auStack_c0);
  lVar1 = *(long *)(lVar1 + _DAT_11308f570);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    _objc_retain(param_1);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(param_1);
    _objc_retain(lVar1);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_c0);
    _objc_release(lVar1);
  }
  __ss6HasherV8finalizeSiyF();
  __ss6HasherV8_combineyySuF();
  lVar1 = *(long *)(param_1 + _DAT_11308f3b8);
  __ss6HasherVABycfC(auStack_108);
  lVar1 = *(long *)(lVar1 + _DAT_11308f5d0);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar1);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_108);
    _objc_release(lVar1);
  }
  __ss6HasherV8finalizeSiyF();
  __ss6HasherV8_combineyySuF();
  lVar1 = *(long *)(param_1 + _DAT_11308f3c0);
  __ss6HasherVABycfC(auStack_150);
  lVar1 = *(long *)(lVar1 + _DAT_11308f5a0);
  if (lVar1 == 0) {
    lVar1 = 0;
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar1);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_150);
    _objc_release(lVar1);
  }
  __ss6HasherV8finalizeSiyF();
  __ss6HasherV8_combineyySuF();
  __ss6HasherV8finalizeSiyF();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 1047c8b08; end: 1047c8c5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1047c8b08(undefined8 param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 unaff_x20;
  undefined8 uVar7;
  long lStack_68;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    plVar1 = &lStack_68;
    _swift_dynamicCast(plVar1,auStack_60,PTR___sypN_11034f1a8 + 8,unaff_x20,6);
    if (((ulong)plVar1 & 1) != 0) {
      uVar7 = *(undefined8 *)(lStack_68 + _DAT_11308f3b0);
      uVar2 = 0;
      FUN_1047ce120();
      auStack_60[0] = uVar7;
      lStack_48 = uVar2;
      _objc_retain(uVar7);
      puVar3 = auStack_60;
      FUN_1047cdb64(puVar3);
      func_0x00010006e7f4(auStack_60);
      uVar7 = *(undefined8 *)(lStack_68 + _DAT_11308f3b8);
      uVar2 = 0;
      FUN_1047cede4();
      auStack_60[0] = uVar7;
      lStack_48 = uVar2;
      _objc_retain(uVar7);
      puVar4 = auStack_60;
      FUN_1047ce828(puVar4);
      func_0x00010006e7f4(auStack_60);
      uVar7 = *(undefined8 *)(lStack_68 + _DAT_11308f3c0);
      uVar2 = 0;
      FUN_1047ce77c();
      auStack_60[0] = uVar7;
      lStack_48 = uVar2;
      _objc_retain(uVar7);
      puVar5 = auStack_60;
      FUN_1047ce1c0(puVar5);
      _objc_release(lStack_68);
      func_0x00010006e7f4(auStack_60);
      uVar6 = (uint)puVar3 & (uint)puVar4 & (uint)puVar5;
      goto LAB_1047c8c44;
    }
  }
  uVar6 = 0;
LAB_1047c8c44:
  return uVar6 & 1;
}



/* Entry: 1047c8c60; end: 1047c8cdf; -[SCAdConfigurations isEqual:] */

uint FUN_1047c8c60(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1047c8b08(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1047c8ce0; end: 1047c8ce3; -[SCAdConfigurations copyWithZone:] */

void FUN_1047c8ce0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1047c8ce4; end: 1047c8dcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047c8ce4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x445241435f444e45;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x445241435f444e45,0xe800000000000000);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f20def0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0x53534552474f5250;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x53534552474f5250,0xec0000005241425f);
  func_0x00010bf93020(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1047c8dd0; end: 1047c8e1f; -[SCAdConfigurations encodeWithCoder:] */

void FUN_1047c8dd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1047c8ce4(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1047c8e20; end: 1047c8e4f;  */

void FUN_1047c8e20(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047c8e50(param_1);
  return;
}



/* Entry: 1047c8e50; end: 1047c9123;  */

undefined8 FUN_1047c8e50(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 unaff_x20;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  uVar2 = 0x445241435f444e45;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x445241435f444e45,0xe800000000000000);
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
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
LAB_1047c90c0:
    _objc_release(param_1);
    func_0x00010006e7f4(&uStack_70);
  }
  else {
    uVar2 = 0;
    FUN_1047ce120(0);
    puVar1 = PTR___sypN_11034f1a8;
    plVar4 = &lStack_98;
    _swift_dynamicCast(plVar4,&uStack_70,PTR___sypN_11034f1a8 + 8,uVar2,6);
    lVar3 = lStack_98;
    if (((ulong)plVar4 & 1) != 0) {
      uVar2 = 0xd000000000000013;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f20def0);
      lVar5 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      if (lVar5 == 0) {
        uStack_88 = 0;
        uStack_90 = 0;
        lStack_78 = 0;
        uStack_80 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar5);
        _swift_unknownObjectRelease(lVar5);
      }
      uStack_68 = uStack_88;
      uStack_70 = uStack_90;
      lStack_58 = lStack_78;
      uStack_60 = uStack_80;
      if (lStack_78 == 0) {
LAB_1047c90b8:
        _objc_release(param_1);
        param_1 = lVar3;
        goto LAB_1047c90c0;
      }
      uVar2 = 0;
      FUN_1047cede4(0);
      plVar4 = &lStack_98;
      _swift_dynamicCast(plVar4,&uStack_70,puVar1 + 8,uVar2,6);
      lVar5 = lStack_98;
      if (((ulong)plVar4 & 1) != 0) {
        uVar2 = 0x53534552474f5250;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x53534552474f5250,0xec0000005241425f)
        ;
        lVar6 = param_1;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
        if (lVar6 == 0) {
          uStack_88 = 0;
          uStack_90 = 0;
          lStack_78 = 0;
          uStack_80 = 0;
        }
        else {
          __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar6);
          _swift_unknownObjectRelease(lVar6);
        }
        uStack_68 = uStack_88;
        uStack_70 = uStack_90;
        lStack_58 = lStack_78;
        uStack_60 = uStack_80;
        if (lStack_78 == 0) {
          _objc_release(param_1);
          param_1 = lVar5;
          goto LAB_1047c90b8;
        }
        uVar2 = 0;
        FUN_1047ce77c(0);
        plVar4 = &lStack_98;
        _swift_dynamicCast(plVar4,&uStack_70,puVar1 + 8,uVar2,6);
        if (((ulong)plVar4 & 1) != 0) {
          func_0x00010c00fde0();
          _objc_release(param_1);
          _objc_release(lStack_98);
          _objc_release(lVar5);
          _objc_release(lVar3);
          return unaff_x20;
        }
        _objc_release(param_1);
        param_1 = lVar5;
      }
      _objc_release(param_1);
      param_1 = lVar3;
    }
    _objc_release(param_1);
  }
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 1047c9124; end: 1047c914b; -[SCAdConfigurations initWithCoder:] */

void FUN_1047c9124(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1047c8e50();
  return;
}



/* Entry: 1047c914c; end: 1047c91e3; -[SCAdConfigurations description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047c914c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + _DAT_11308f3b0) + _DAT_11308f570);
  _objc_retain();
  func_0x00010c067fc0(uVar1);
  func_0x00010bf885a0(*(undefined8 *)(*(long *)(param_1 + _DAT_11308f3b8) + _DAT_11308f5d0));
  func_0x00010c067fc0(*(undefined8 *)(*(long *)(param_1 + _DAT_11308f3c0) + _DAT_11308f5a0));
  _objc_release(param_1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1047c91e4; end: 1047c925f; -[SCAdConfigurations init] */

void FUN_1047c91e4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"AdDataModel/AdConfigurationsWrapper.swift",
             0x29,2,0x55,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1047c922c);
  (*pcVar1)();
}



/* Entry: 1047c9260; end: 1047c92a7; -[SCAdConfigurations .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047c9260(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308f3b0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308f3b8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11308f3c0));
  return;
}



/* Entry: 1047c92a8; end: 1047c92c7;  */

void FUN_1047c92a8(void)

{
  _objc_opt_self(&PTR_PTR_1129d4388);
  return;
}



/* Entry: 1047c92c8; end: 1047c92d7; -[SCAdDecisions mediaPlayer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047c92c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308f3f0));
  return;
}



/* Entry: 1047c92d8; end: 1047c92e7; -[SCAdDecisions product] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047c92d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308f3f8));
  return;
}



/* Entry: 1047c92e8; end: 1047c92f7; -[SCAdDecisions endCard] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047c92e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308f400));
  return;
}



/* Entry: 1047c92f8; end: 1047c9307; -[SCAdDecisions cardCta] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047c92f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308f408));
  return;
}



/* Entry: 1047c9308; end: 1047c9317; -[SCAdDecisions stickerCta] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047c9308(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308f410));
  return;
}



/* Entry: 1047c9318; end: 1047c9327; -[SCAdDecisions multiSegment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047c9318(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308f418));
  return;
}



/* Entry: 1047c9328; end: 1047c9337; -[SCAdDecisions progressBar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047c9328(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308f420));
  return;
}



/* Entry: 1047c9338; end: 1047c9347; -[SCAdDecisions bottomTray] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047c9338(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308f428));
  return;
}



/* Entry: 1047c9348; end: 1047c9357; -[SCAdDecisions favoriteButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047c9348(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308f430));
  return;
}



/* Entry: 1047c9358; end: 1047c9367; -[SCAdDecisions survey] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047c9358(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308f438));
  return;
}



/* Entry: 1047c9368; end: 1047c9377; -[SCAdDecisions captionCta] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047c9368(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308f440));
  return;
}



/* Entry: 1047c9378; end: 1047c9387; -[SCAdDecisions wakeUpUi] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047c9378(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308f448));
  return;
}



/* Entry: 1047c9388; end: 1047c9397; -[SCAdDecisions promotedStoryTile] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047c9388(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308f450));
  return;
}



/* Entry: 1047c9398; end: 1047c93a7; -[SCAdDecisions tapTooltip] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047c9398(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308f458));
  return;
}



/* Entry: 1047c93a8; end: 1047c93b7; -[SCAdDecisions cardCtaAccessory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047c93a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308f460));
  return;
}



/* Entry: 1047c93b8; end: 1047c93c7; -[SCAdDecisions adHeader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047c93b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308f468));
  return;
}



/* Entry: 1047c93c8; end: 1047c96c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047c93c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308f3f0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308f3f8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11308f400) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11308f408) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11308f410) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_11308f418) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_11308f420) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_11308f428) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_11308f430) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_11308f438) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_11308f440) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_11308f448) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_11308f450) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_11308f458) = param_14;
  *(undefined8 *)(unaff_x20 + _DAT_11308f460) = param_15;
  *(undefined8 *)(unaff_x20 + _DAT_11308f468) = param_16;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047c96c8; end: 1047c983b; -[SCAdDecisions initWithMediaPlayer:product:endCard:cardCta:stickerCta:multiSegment:progressBar:bottomTray:favoriteButton:survey:captionCta:wakeUpUi:promotedStoryTile:tapTooltip:cardCtaAccessory:adHeader:] */

void FUN_1047c96c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18)

{
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  func_0x0001047c9548(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,
                      param_12,param_13,param_14,param_15,param_16,param_17,param_18);
  return;
}



/* Entry: 1047c983c; end: 1047c986b;  */

void FUN_1047c983c(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047c986c(param_1);
  return;
}



/* Entry: 1047c986c; end: 1047c9d2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047c986c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  
  _swift_getObjectType();
  uVar5 = *param_1;
  uVar1 = param_1[1];
  uVar6 = param_1[2];
  lVar2 = 0;
  FUN_1047cc500();
  lVar3 = lVar2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar3 + _DAT_11308f498) = uVar5;
  *(undefined8 *)(lVar3 + _DAT_11308f4a0) = uVar1;
  *(undefined8 *)(lVar3 + _DAT_11308f4a8) = uVar6;
  plVar4 = &lStack_68;
  lStack_68 = lVar3;
  lStack_60 = lVar2;
  _objc_msgSendSuper2(plVar4,PTR_s_init_1125d9248);
  *(long **)(unaff_x20 + _DAT_11308f3f0) = plVar4;
  uVar5 = param_1[3];
  lVar2 = 0;
  FUN_1047cce64();
  lVar3 = lVar2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar3 + _DAT_11308f508) = uVar5;
  plVar4 = &lStack_78;
  lStack_78 = lVar3;
  lStack_70 = lVar2;
  _objc_msgSendSuper2(plVar4,PTR_s_init_1125d9248);
  *(long **)(unaff_x20 + _DAT_11308f3f8) = plVar4;
  uVar5 = param_1[4];
  uVar1 = param_1[5];
  uVar6 = param_1[6];
  lVar2 = 0;
  FUN_1047d084c();
  lVar3 = lVar2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar3 + _DAT_11308f6c8) = uVar5;
  *(undefined8 *)(lVar3 + _DAT_11308f6d0) = uVar1;
  *(undefined8 *)(lVar3 + _DAT_11308f6d8) = uVar6;
  plVar4 = &lStack_88;
  lStack_88 = lVar3;
  lStack_80 = lVar2;
  _objc_msgSendSuper2(plVar4,PTR_s_init_1125d9248);
  *(long **)(unaff_x20 + _DAT_11308f400) = plVar4;
  uVar5 = param_1[7];
  uVar1 = param_1[8];
  lVar2 = 0;
  FUN_1047d01b4();
  lVar3 = lVar2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar3 + _DAT_11308f690) = uVar5;
  *(undefined8 *)(lVar3 + _DAT_11308f698) = uVar1;
  plVar4 = &lStack_98;
  lStack_98 = lVar3;
  lStack_90 = lVar2;
  _objc_msgSendSuper2(plVar4,PTR_s_init_1125d9248);
  *(long **)(unaff_x20 + _DAT_11308f408) = plVar4;
  uVar5 = param_1[9];
  lVar2 = 0;
  FUN_1047d1ffc();
  lVar3 = lVar2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar3 + _DAT_11308f7d0) = uVar5;
  plVar4 = &lStack_a8;
  lStack_a8 = lVar3;
  lStack_a0 = lVar2;
  _objc_msgSendSuper2(plVar4,PTR_s_init_1125d9248);
  *(long **)(unaff_x20 + _DAT_11308f410) = plVar4;
  uVar5 = param_1[10];
  lVar2 = 0;
  FUN_1047cc968();
  lVar3 = lVar2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar3 + _DAT_11308f4d8) = uVar5;
  plVar4 = &lStack_b8;
  lStack_b8 = lVar3;
  lStack_b0 = lVar2;
  _objc_msgSendSuper2(plVar4,PTR_s_init_1125d9248);
  *(long **)(unaff_x20 + _DAT_11308f418) = plVar4;
  uVar5 = param_1[0xb];
  lVar2 = 0;
  FUN_1047d159c();
  lVar3 = lVar2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar3 + _DAT_11308f768) = uVar5;
  plVar4 = &lStack_c8;
  lStack_c8 = lVar3;
  lStack_c0 = lVar2;
  _objc_msgSendSuper2(plVar4,PTR_s_init_1125d9248);
  *(long **)(unaff_x20 + _DAT_11308f420) = plVar4;
  uVar5 = param_1[0xc];
  lVar2 = 0;
  FUN_1047cf2d0();
  lVar3 = lVar2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar3 + _DAT_11308f600) = uVar5;
  plVar4 = &lStack_d8;
  lStack_d8 = lVar3;
  lStack_d0 = lVar2;
  _objc_msgSendSuper2(plVar4,PTR_s_init_1125d9248);
  *(long **)(unaff_x20 + _DAT_11308f428) = plVar4;
  uVar5 = param_1[0xd];
  lVar2 = 0;
  FUN_1047d0cb4();
  lVar3 = lVar2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar3 + _DAT_11308f708) = uVar5;
  plVar4 = &lStack_e8;
  lStack_e8 = lVar3;
  lStack_e0 = lVar2;
  _objc_msgSendSuper2(plVar4,PTR_s_init_1125d9248);
  *(long **)(unaff_x20 + _DAT_11308f430) = plVar4;
  uVar5 = param_1[0xe];
  lVar2 = 0;
  FUN_1047d246c();
  lVar3 = lVar2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar3 + _DAT_11308f800) = uVar5;
  plVar4 = &lStack_f8;
  lStack_f8 = lVar3;
  lStack_f0 = lVar2;
  _objc_msgSendSuper2(plVar4,PTR_s_init_1125d9248);
  *(long **)(unaff_x20 + _DAT_11308f438) = plVar4;
  uVar5 = param_1[0xf];
  lVar2 = 0;
  FUN_1047cf738();
  lVar3 = lVar2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar3 + _DAT_11308f630) = uVar5;
  plVar4 = &lStack_108;
  lStack_108 = lVar3;
  lStack_100 = lVar2;
  _objc_msgSendSuper2(plVar4,PTR_s_init_1125d9248);
  *(long **)(unaff_x20 + _DAT_11308f440) = plVar4;
  uVar5 = param_1[0x10];
  lVar2 = 0;
  FUN_1047d2dd4();
  lVar3 = lVar2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar3 + _DAT_11308f860) = uVar5;
  plVar4 = &lStack_118;
  lStack_118 = lVar3;
  lStack_110 = lVar2;
  _objc_msgSendSuper2(plVar4,PTR_s_init_1125d9248);
  *(long **)(unaff_x20 + _DAT_11308f448) = plVar4;
  uVar5 = param_1[0x11];
  uVar1 = param_1[0x12];
  lVar2 = 0;
  FUN_1047d1b0c();
  lVar3 = lVar2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar3 + _DAT_11308f798) = uVar5;
  *(undefined8 *)(lVar3 + _DAT_11308f7a0) = uVar1;
  plVar4 = &lStack_128;
  lStack_128 = lVar3;
  lStack_120 = lVar2;
  _objc_msgSendSuper2(plVar4,PTR_s_init_1125d9248);
  *(long **)(unaff_x20 + _DAT_11308f450) = plVar4;
  uVar5 = param_1[0x13];
  lVar2 = 0;
  FUN_1047d295c();
  lVar3 = lVar2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar3 + _DAT_11308f830) = uVar5;
  plVar4 = &lStack_138;
  lStack_138 = lVar3;
  lStack_130 = lVar2;
  _objc_msgSendSuper2(plVar4,PTR_s_init_1125d9248);
  *(long **)(unaff_x20 + _DAT_11308f458) = plVar4;
  uVar5 = param_1[0x14];
  lVar2 = 0;
  FUN_1047cfc28();
  lVar3 = lVar2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar3 + _DAT_11308f660) = uVar5;
  plVar4 = &lStack_148;
  lStack_148 = lVar3;
  lStack_140 = lVar2;
  _objc_msgSendSuper2(plVar4,PTR_s_init_1125d9248);
  *(long **)(unaff_x20 + _DAT_11308f460) = plVar4;
  uVar5 = param_1[0x15];
  lVar2 = 0;
  FUN_1047d112c();
  lVar3 = lVar2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar3 + _DAT_11308f738) = uVar5;
  plVar4 = &lStack_158;
  lStack_158 = lVar3;
  lStack_150 = lVar2;
  _objc_msgSendSuper2(plVar4,PTR_s_init_1125d9248);
  *(long **)(unaff_x20 + _DAT_11308f468) = plVar4;
  _objc_msgSendSuper2(&stack0xfffffffffffffe98,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047c9d30; end: 1047c9d4f; -[SCAdDecisions hash] */

void FUN_1047c9d30(void)

{
  FUN_1047c9d50();
  return;
}



/* Entry: 1047c9d50; end: 1047ca1c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047c9d50(void)

{
  long unaff_x20;
  long lVar1;
  undefined1 auStack_4f8 [72];
  undefined1 auStack_4b0 [72];
  undefined1 auStack_468 [72];
  undefined1 auStack_420 [72];
  undefined1 auStack_3d8 [72];
  undefined1 auStack_390 [72];
  undefined1 auStack_348 [72];
  undefined1 auStack_300 [72];
  undefined1 auStack_2b8 [72];
  undefined1 auStack_270 [72];
  undefined1 auStack_228 [72];
  undefined1 auStack_1e0 [72];
  undefined1 auStack_198 [72];
  undefined1 auStack_150 [72];
  undefined1 auStack_108 [72];
  undefined1 auStack_c0 [72];
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  lVar1 = *(long *)(unaff_x20 + _DAT_11308f3f0);
  __ss6HasherVABycfC(auStack_c0);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(lVar1 + _DAT_11308f498));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(lVar1 + _DAT_11308f4a0));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(lVar1 + _DAT_11308f4a8));
  __ss6HasherV8finalizeSiyF();
  __ss6HasherV8_combineyySuF();
  lVar1 = *(long *)(unaff_x20 + _DAT_11308f3f8);
  __ss6HasherVABycfC(auStack_108);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(lVar1 + _DAT_11308f508));
  __ss6HasherV8finalizeSiyF();
  __ss6HasherV8_combineyySuF();
  lVar1 = *(long *)(unaff_x20 + _DAT_11308f400);
  __ss6HasherVABycfC(auStack_150);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(lVar1 + _DAT_11308f6c8));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(lVar1 + _DAT_11308f6d0));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(lVar1 + _DAT_11308f6d8));
  __ss6HasherV8finalizeSiyF();
  __ss6HasherV8_combineyySuF();
  lVar1 = *(long *)(unaff_x20 + _DAT_11308f408);
  __ss6HasherVABycfC(auStack_198);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(lVar1 + _DAT_11308f690));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(lVar1 + _DAT_11308f698));
  __ss6HasherV8finalizeSiyF();
  __ss6HasherV8_combineyySuF();
  lVar1 = *(long *)(unaff_x20 + _DAT_11308f410);
  __ss6HasherVABycfC(auStack_1e0);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(lVar1 + _DAT_11308f7d0));
  __ss6HasherV8finalizeSiyF();
  __ss6HasherV8_combineyySuF();
  lVar1 = *(long *)(unaff_x20 + _DAT_11308f418);
  __ss6HasherVABycfC(auStack_228);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(lVar1 + _DAT_11308f4d8));
  __ss6HasherV8finalizeSiyF();
  __ss6HasherV8_combineyySuF();
  lVar1 = *(long *)(unaff_x20 + _DAT_11308f420);
  __ss6HasherVABycfC(auStack_270);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(lVar1 + _DAT_11308f768));
  __ss6HasherV8finalizeSiyF();
  __ss6HasherV8_combineyySuF();
  lVar1 = *(long *)(unaff_x20 + _DAT_11308f428);
  __ss6HasherVABycfC(auStack_2b8);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(lVar1 + _DAT_11308f600));
  __ss6HasherV8finalizeSiyF();
  __ss6HasherV8_combineyySuF();
  lVar1 = *(long *)(unaff_x20 + _DAT_11308f430);
  __ss6HasherVABycfC(auStack_300);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(lVar1 + _DAT_11308f708));
  __ss6HasherV8finalizeSiyF();
  __ss6HasherV8_combineyySuF();
  lVar1 = *(long *)(unaff_x20 + _DAT_11308f438);
  __ss6HasherVABycfC(auStack_348);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(lVar1 + _DAT_11308f800));
  __ss6HasherV8finalizeSiyF();
  __ss6HasherV8_combineyySuF();
  lVar1 = *(long *)(unaff_x20 + _DAT_11308f440);
  __ss6HasherVABycfC(auStack_390);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(lVar1 + _DAT_11308f630));
  __ss6HasherV8finalizeSiyF();
  __ss6HasherV8_combineyySuF();
  lVar1 = *(long *)(unaff_x20 + _DAT_11308f448);
  __ss6HasherVABycfC(auStack_3d8);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(lVar1 + _DAT_11308f860));
  __ss6HasherV8finalizeSiyF();
  __ss6HasherV8_combineyySuF();
  lVar1 = *(long *)(unaff_x20 + _DAT_11308f450);
  __ss6HasherVABycfC(auStack_420);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(lVar1 + _DAT_11308f798));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(lVar1 + _DAT_11308f7a0));
  __ss6HasherV8finalizeSiyF();
  __ss6HasherV8_combineyySuF();
  lVar1 = *(long *)(unaff_x20 + _DAT_11308f458);
  __ss6HasherVABycfC(auStack_468);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(lVar1 + _DAT_11308f830));
  __ss6HasherV8finalizeSiyF();
  __ss6HasherV8_combineyySuF();
  lVar1 = *(long *)(unaff_x20 + _DAT_11308f460);
  __ss6HasherVABycfC(auStack_4b0);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(lVar1 + _DAT_11308f660));
  __ss6HasherV8finalizeSiyF();
  __ss6HasherV8_combineyySuF();
  lVar1 = *(long *)(unaff_x20 + _DAT_11308f468);
  __ss6HasherVABycfC(auStack_4f8);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(lVar1 + _DAT_11308f738));
  __ss6HasherV8finalizeSiyF();
  __ss6HasherV8_combineyySuF();
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1047ca1c8; end: 1047ca683;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1047ca1c8(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  uint uVar18;
  undefined8 unaff_x20;
  undefined8 uVar19;
  long lStack_88;
  undefined8 auStack_80 [3];
  long lStack_68;
  
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_80);
  if (lStack_68 == 0) {
    func_0x00010006e7f4(auStack_80);
  }
  else {
    plVar8 = &lStack_88;
    _swift_dynamicCast(plVar8,auStack_80,PTR___sypN_11034f1a8 + 8,unaff_x20,6);
    if (((ulong)plVar8 & 1) != 0) {
      uVar19 = *(undefined8 *)(lStack_88 + _DAT_11308f3f0);
      uVar9 = 0;
      FUN_1047cc500();
      auStack_80[0] = uVar19;
      lStack_68 = uVar9;
      _objc_retain(uVar19);
      uVar18 = 0;
      FUN_1047cbea4();
      func_0x00010006e7f4(auStack_80);
      uVar19 = *(undefined8 *)(lStack_88 + _DAT_11308f3f8);
      uVar9 = 0;
      FUN_1047cce64();
      auStack_80[0] = uVar19;
      lStack_68 = uVar9;
      _objc_retain(uVar19);
      uVar1 = 0;
      FUN_1047cc98c();
      func_0x00010006e7f4(auStack_80);
      uVar19 = *(undefined8 *)(lStack_88 + _DAT_11308f400);
      uVar9 = 0;
      FUN_1047d084c();
      auStack_80[0] = uVar19;
      lStack_68 = uVar9;
      _objc_retain(uVar19);
      uVar2 = 0;
      FUN_1047d01d8();
      func_0x00010006e7f4(auStack_80);
      uVar19 = *(undefined8 *)(lStack_88 + _DAT_11308f408);
      uVar9 = 0;
      FUN_1047d01b4();
      auStack_80[0] = uVar19;
      lStack_68 = uVar9;
      _objc_retain(uVar19);
      uVar3 = 0;
      FUN_1047cfc4c();
      func_0x00010006e7f4(auStack_80);
      uVar19 = *(undefined8 *)(lStack_88 + _DAT_11308f410);
      uVar9 = 0;
      FUN_1047d1ffc();
      auStack_80[0] = uVar19;
      lStack_68 = uVar9;
      _objc_retain(uVar19);
      uVar4 = 0;
      FUN_1047d1b30();
      func_0x00010006e7f4(auStack_80);
      uVar19 = *(undefined8 *)(lStack_88 + _DAT_11308f418);
      uVar9 = 0;
      FUN_1047cc968();
      auStack_80[0] = uVar19;
      lStack_68 = uVar9;
      _objc_retain(uVar19);
      uVar5 = 0;
      FUN_1047cc524();
      func_0x00010006e7f4(auStack_80);
      uVar19 = *(undefined8 *)(lStack_88 + _DAT_11308f420);
      uVar9 = 0;
      FUN_1047d159c();
      auStack_80[0] = uVar19;
      lStack_68 = uVar9;
      _objc_retain(uVar19);
      uVar6 = 0;
      FUN_1047d1150();
      func_0x00010006e7f4(auStack_80);
      uVar19 = *(undefined8 *)(lStack_88 + _DAT_11308f428);
      uVar9 = 0;
      FUN_1047cf2d0();
      auStack_80[0] = uVar19;
      lStack_68 = uVar9;
      _objc_retain(uVar19);
      uVar7 = 0;
      FUN_1047cee04();
      func_0x00010006e7f4(auStack_80);
      uVar19 = *(undefined8 *)(lStack_88 + _DAT_11308f430);
      uVar9 = 0;
      FUN_1047d0cb4();
      auStack_80[0] = uVar19;
      lStack_68 = uVar9;
      _objc_retain(uVar19);
      puVar10 = auStack_80;
      FUN_1047d0870(puVar10);
      func_0x00010006e7f4(auStack_80);
      uVar19 = *(undefined8 *)(lStack_88 + _DAT_11308f438);
      uVar9 = 0;
      FUN_1047d246c();
      auStack_80[0] = uVar19;
      lStack_68 = uVar9;
      _objc_retain(uVar19);
      puVar11 = auStack_80;
      FUN_1047d2020(puVar11);
      func_0x00010006e7f4(auStack_80);
      uVar19 = *(undefined8 *)(lStack_88 + _DAT_11308f440);
      uVar9 = 0;
      FUN_1047cf738();
      auStack_80[0] = uVar19;
      lStack_68 = uVar9;
      _objc_retain(uVar19);
      puVar12 = auStack_80;
      FUN_1047cf2f4(puVar12);
      func_0x00010006e7f4(auStack_80);
      uVar19 = *(undefined8 *)(lStack_88 + _DAT_11308f448);
      uVar9 = 0;
      FUN_1047d2dd4();
      auStack_80[0] = uVar19;
      lStack_68 = uVar9;
      _objc_retain(uVar19);
      puVar13 = auStack_80;
      FUN_1047d2980(puVar13);
      func_0x00010006e7f4(auStack_80);
      uVar19 = *(undefined8 *)(lStack_88 + _DAT_11308f450);
      uVar9 = 0;
      FUN_1047d1b0c();
      auStack_80[0] = uVar19;
      lStack_68 = uVar9;
      _objc_retain(uVar19);
      puVar14 = auStack_80;
      FUN_1047d15c0(puVar14);
      func_0x00010006e7f4(auStack_80);
      uVar19 = *(undefined8 *)(lStack_88 + _DAT_11308f458);
      uVar9 = 0;
      FUN_1047d295c();
      auStack_80[0] = uVar19;
      lStack_68 = uVar9;
      _objc_retain(uVar19);
      puVar15 = auStack_80;
      FUN_1047d2490(puVar15);
      func_0x00010006e7f4(auStack_80);
      uVar19 = *(undefined8 *)(lStack_88 + _DAT_11308f460);
      uVar9 = 0;
      FUN_1047cfc28();
      auStack_80[0] = uVar19;
      lStack_68 = uVar9;
      _objc_retain(uVar19);
      puVar16 = auStack_80;
      FUN_1047cf75c(puVar16);
      func_0x00010006e7f4(auStack_80);
      uVar19 = *(undefined8 *)(lStack_88 + _DAT_11308f468);
      uVar9 = 0;
      FUN_1047d112c();
      auStack_80[0] = uVar19;
      lStack_68 = uVar9;
      _objc_retain(uVar19);
      puVar17 = auStack_80;
      FUN_1047d0cd8(puVar17);
      _objc_release(lStack_88);
      func_0x00010006e7f4(auStack_80);
      uVar18 = uVar18 & uVar1 & uVar2 & uVar3 & uVar4 & uVar5 & uVar6 &
               uVar7 & (uint)puVar10 & (uint)puVar11 & (uint)puVar12 &
               (uint)puVar13 & (uint)puVar14 & (uint)puVar15 & (uint)puVar16 & (uint)puVar17;
      goto LAB_1047ca660;
    }
  }
  uVar18 = 0;
LAB_1047ca660:
  return uVar18 & 1;
}



/* Entry: 1047ca684; end: 1047ca703; -[SCAdDecisions isEqual:] */

uint FUN_1047ca684(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1047ca1c8(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1047ca704; end: 1047ca707; -[SCAdDecisions copyWithZone:] */

void FUN_1047ca704(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1047ca708; end: 1047cab83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047ca708(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x4c505f414944454d;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4c505f414944454d,0xec00000052455941);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0x544355444f5250;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x544355444f5250,0xe700000000000000);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0x445241435f444e45;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x445241435f444e45,0xe800000000000000);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0x4154435f44524143;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4154435f44524143,0xe800000000000000);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0x5f52454b43495453;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f52454b43495453,0xeb00000000415443);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0x45535f49544c554d;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45535f49544c554d,0xed0000544e454d47);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0x53534552474f5250;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x53534552474f5250,0xec0000005241425f);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0x545f4d4f54544f42;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x545f4d4f54544f42,0xeb00000000594152);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0x455449524f564146;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x455449524f564146,0xef4e4f545455425f);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0x594556525553;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x594556525553,0xe600000000000000);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0x5f4e4f4954504143;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f4e4f4954504143,0xeb00000000415443);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0x5f50555f454b4157;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f50555f454b4157,0xea00000000004955);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f20def0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0x4c4f4f545f504154;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4c4f4f545f504154,0xeb00000000504954);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f20df40);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0x45444145485f4441;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45444145485f4441,0xe900000000000052);
  func_0x00010bf93020(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1047cab84; end: 1047cabd3; -[SCAdDecisions encodeWithCoder:] */

void FUN_1047cab84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1047ca708(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1047cabd4; end: 1047cac03;  */

void FUN_1047cabd4(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047cac04(param_1);
  return;
}



/* Entry: 1047cac04; end: 1047cb993;  */

undefined8 FUN_1047cac04(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 unaff_x20;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  uVar2 = 0x4c505f414944454d;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4c505f414944454d,0xec00000052455941);
  lVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar3 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar3);
    _swift_unknownObjectRelease(lVar3);
  }
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
LAB_1047cb19c:
    _objc_release(param_1);
    func_0x00010006e7f4(&uStack_90);
  }
  else {
    uVar2 = 0;
    FUN_1047cc500(0);
    puVar1 = PTR___sypN_11034f1a8;
    plVar4 = &lStack_b8;
    _swift_dynamicCast(plVar4,&uStack_90,PTR___sypN_11034f1a8 + 8,uVar2,6);
    lVar3 = lStack_b8;
    if (((ulong)plVar4 & 1) != 0) {
      uVar2 = 0x544355444f5250;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x544355444f5250,0xe700000000000000);
      lVar5 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      if (lVar5 == 0) {
        uStack_a8 = 0;
        uStack_b0 = 0;
        lStack_98 = 0;
        uStack_a0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar5);
        _swift_unknownObjectRelease(lVar5);
      }
      uStack_88 = uStack_a8;
      uStack_90 = uStack_b0;
      lStack_78 = lStack_98;
      uStack_80 = uStack_a0;
      if (lStack_98 == 0) {
LAB_1047cb194:
        _objc_release(param_1);
        param_1 = lVar3;
        goto LAB_1047cb19c;
      }
      uVar2 = 0;
      FUN_1047cce64(0);
      plVar4 = &lStack_b8;
      _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,uVar2,6);
      lVar5 = lStack_b8;
      if (((ulong)plVar4 & 1) != 0) {
        uVar2 = 0x445241435f444e45;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x445241435f444e45,0xe800000000000000)
        ;
        lVar6 = param_1;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
        if (lVar6 == 0) {
          uStack_a8 = 0;
          uStack_b0 = 0;
          lStack_98 = 0;
          uStack_a0 = 0;
        }
        else {
          __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar6);
          _swift_unknownObjectRelease(lVar6);
        }
        uStack_88 = uStack_a8;
        uStack_90 = uStack_b0;
        lStack_78 = lStack_98;
        uStack_80 = uStack_a0;
        if (lStack_98 == 0) {
LAB_1047cb18c:
          _objc_release(param_1);
          param_1 = lVar5;
          goto LAB_1047cb194;
        }
        uVar2 = 0;
        FUN_1047d084c(0);
        plVar4 = &lStack_b8;
        _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,uVar2,6);
        lVar6 = lStack_b8;
        if (((ulong)plVar4 & 1) != 0) {
          uVar2 = 0x4154435f44524143;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                    (0x4154435f44524143,0xe800000000000000);
          lVar7 = param_1;
          func_0x00010bf67000();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar2);
          if (lVar7 == 0) {
            uStack_a8 = 0;
            uStack_b0 = 0;
            lStack_98 = 0;
            uStack_a0 = 0;
          }
          else {
            __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar7);
            _swift_unknownObjectRelease(lVar7);
          }
          uStack_88 = uStack_a8;
          uStack_90 = uStack_b0;
          lStack_78 = lStack_98;
          uStack_80 = uStack_a0;
          if (lStack_98 == 0) {
LAB_1047cb184:
            _objc_release(param_1);
            param_1 = lVar6;
            goto LAB_1047cb18c;
          }
          uVar2 = 0;
          FUN_1047d01b4(0);
          plVar4 = &lStack_b8;
          _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,uVar2,6);
          lVar7 = lStack_b8;
          if (((ulong)plVar4 & 1) != 0) {
            uVar2 = 0x5f52454b43495453;
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                      (0x5f52454b43495453,0xeb00000000415443);
            lVar8 = param_1;
            func_0x00010bf67000();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar2);
            if (lVar8 == 0) {
              uStack_a8 = 0;
              uStack_b0 = 0;
              lStack_98 = 0;
              uStack_a0 = 0;
            }
            else {
              __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar8);
              _swift_unknownObjectRelease(lVar8);
            }
            uStack_88 = uStack_a8;
            uStack_90 = uStack_b0;
            lStack_78 = lStack_98;
            uStack_80 = uStack_a0;
            if (lStack_98 == 0) {
              _objc_release(param_1);
              param_1 = lVar7;
              goto LAB_1047cb184;
            }
            uVar2 = 0;
            FUN_1047d1ffc(0);
            plVar4 = &lStack_b8;
            _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,uVar2,6);
            lVar8 = lStack_b8;
            if (((ulong)plVar4 & 1) == 0) {
              _objc_release(param_1);
              param_1 = lVar7;
            }
            else {
              uVar2 = 0x45535f49544c554d;
              __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                        (0x45535f49544c554d,0xed0000544e454d47);
              lVar9 = param_1;
              func_0x00010bf67000();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar2);
              if (lVar9 == 0) {
                uStack_a8 = 0;
                uStack_b0 = 0;
                lStack_98 = 0;
                uStack_a0 = 0;
              }
              else {
                __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar9);
                _swift_unknownObjectRelease(lVar9);
              }
              uStack_88 = uStack_a8;
              uStack_90 = uStack_b0;
              lStack_78 = lStack_98;
              uStack_80 = uStack_a0;
              if (lStack_98 == 0) {
LAB_1047cb174:
                _objc_release(param_1);
                _objc_release(lVar8);
                param_1 = lVar7;
                goto LAB_1047cb184;
              }
              uVar2 = 0;
              FUN_1047cc968(0);
              plVar4 = &lStack_b8;
              _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,uVar2,6);
              lVar9 = lStack_b8;
              if (((ulong)plVar4 & 1) != 0) {
                uVar2 = 0x53534552474f5250;
                __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                          (0x53534552474f5250,0xec0000005241425f);
                lVar10 = param_1;
                func_0x00010bf67000();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(uVar2);
                if (lVar10 == 0) {
                  uStack_a8 = 0;
                  uStack_b0 = 0;
                  lStack_98 = 0;
                  uStack_a0 = 0;
                }
                else {
                  __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar10);
                  _swift_unknownObjectRelease(lVar10);
                }
                uStack_88 = uStack_a8;
                uStack_90 = uStack_b0;
                lStack_78 = lStack_98;
                uStack_80 = uStack_a0;
                if (lStack_98 == 0) {
                  _objc_release(param_1);
                  param_1 = lVar9;
                  goto LAB_1047cb174;
                }
                uVar2 = 0;
                FUN_1047d159c(0);
                plVar4 = &lStack_b8;
                _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,uVar2,6);
                lVar10 = lStack_b8;
                if (((ulong)plVar4 & 1) != 0) {
                  uVar2 = 0x545f4d4f54544f42;
                  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                            (0x545f4d4f54544f42,0xeb00000000594152);
                  lVar11 = param_1;
                  func_0x00010bf67000();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(uVar2);
                  if (lVar11 == 0) {
                    uStack_a8 = 0;
                    uStack_b0 = 0;
                    lStack_98 = 0;
                    uStack_a0 = 0;
                  }
                  else {
                    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar11);
                    _swift_unknownObjectRelease(lVar11);
                  }
                  uStack_88 = uStack_a8;
                  uStack_90 = uStack_b0;
                  lStack_78 = lStack_98;
                  uStack_80 = uStack_a0;
                  if (lStack_98 == 0) {
LAB_1047cb908:
                    _objc_release(param_1);
                    _objc_release(lVar10);
                    _objc_release(lVar9);
                    _objc_release(lVar8);
                    param_1 = lVar7;
                    goto LAB_1047cb184;
                  }
                  uVar2 = 0;
                  FUN_1047cf2d0(0);
                  plVar4 = &lStack_b8;
                  _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,uVar2,6);
                  lVar11 = lStack_b8;
                  if (((ulong)plVar4 & 1) != 0) {
                    uVar2 = 0x455449524f564146;
                    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                              (0x455449524f564146,0xef4e4f545455425f);
                    lVar12 = param_1;
                    func_0x00010bf67000();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(uVar2);
                    if (lVar12 == 0) {
                      uStack_a8 = 0;
                      uStack_b0 = 0;
                      lStack_98 = 0;
                      uStack_a0 = 0;
                    }
                    else {
                      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar12);
                      _swift_unknownObjectRelease(lVar12);
                    }
                    uStack_88 = uStack_a8;
                    uStack_90 = uStack_b0;
                    lStack_78 = lStack_98;
                    uStack_80 = uStack_a0;
                    if (lStack_98 == 0) {
LAB_1047cb900:
                      _objc_release(param_1);
                      param_1 = lVar11;
                      goto LAB_1047cb908;
                    }
                    uVar2 = 0;
                    FUN_1047d0cb4(0);
                    plVar4 = &lStack_b8;
                    _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,uVar2,6);
                    lVar12 = lStack_b8;
                    if (((ulong)plVar4 & 1) != 0) {
                      uVar2 = 0x594556525553;
                      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                                (0x594556525553,0xe600000000000000);
                      lVar13 = param_1;
                      func_0x00010bf67000();
                      _objc_retainAutoreleasedReturnValue();
                      _objc_release(uVar2);
                      if (lVar13 == 0) {
                        uStack_a8 = 0;
                        uStack_b0 = 0;
                        lStack_98 = 0;
                        uStack_a0 = 0;
                      }
                      else {
                        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar13);
                        _swift_unknownObjectRelease(lVar13);
                      }
                      uStack_88 = uStack_a8;
                      uStack_90 = uStack_b0;
                      lStack_78 = lStack_98;
                      uStack_80 = uStack_a0;
                      if (lStack_98 == 0) {
LAB_1047cb8f8:
                        _objc_release(param_1);
                        param_1 = lVar12;
                        goto LAB_1047cb900;
                      }
                      uVar2 = 0;
                      FUN_1047d246c(0);
                      plVar4 = &lStack_b8;
                      _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,uVar2,6);
                      lVar13 = lStack_b8;
                      if (((ulong)plVar4 & 1) != 0) {
                        uVar2 = 0x5f4e4f4954504143;
                        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                                  (0x5f4e4f4954504143,0xeb00000000415443);
                        lVar14 = param_1;
                        func_0x00010bf67000();
                        _objc_retainAutoreleasedReturnValue();
                        _objc_release(uVar2);
                        if (lVar14 == 0) {
                          uStack_a8 = 0;
                          uStack_b0 = 0;
                          lStack_98 = 0;
                          uStack_a0 = 0;
                        }
                        else {
                          __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar14);
                          _swift_unknownObjectRelease(lVar14);
                        }
                        uStack_88 = uStack_a8;
                        uStack_90 = uStack_b0;
                        lStack_78 = lStack_98;
                        uStack_80 = uStack_a0;
                        if (lStack_98 == 0) {
LAB_1047cb8f0:
                          _objc_release(param_1);
                          param_1 = lVar13;
                          goto LAB_1047cb8f8;
                        }
                        uVar2 = 0;
                        FUN_1047cf738(0);
                        plVar4 = &lStack_b8;
                        _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,uVar2,6);
                        lVar14 = lStack_b8;
                        if (((ulong)plVar4 & 1) != 0) {
                          uVar2 = 0x5f50555f454b4157;
                          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                                    (0x5f50555f454b4157,0xea00000000004955);
                          lVar15 = param_1;
                          func_0x00010bf67000();
                          _objc_retainAutoreleasedReturnValue();
                          _objc_release(uVar2);
                          if (lVar15 == 0) {
                            uStack_a8 = 0;
                            uStack_b0 = 0;
                            lStack_98 = 0;
                            uStack_a0 = 0;
                          }
                          else {
                            __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar15);
                            _swift_unknownObjectRelease(lVar15);
                          }
                          uStack_88 = uStack_a8;
                          uStack_90 = uStack_b0;
                          lStack_78 = lStack_98;
                          uStack_80 = uStack_a0;
                          if (lStack_98 == 0) {
LAB_1047cb8e8:
                            _objc_release(param_1);
                            param_1 = lVar14;
                            goto LAB_1047cb8f0;
                          }
                          uVar2 = 0;
                          FUN_1047d2dd4(0);
                          plVar4 = &lStack_b8;
                          _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,uVar2,6);
                          lVar15 = lStack_b8;
                          if (((ulong)plVar4 & 1) != 0) {
                            uVar2 = 0xd000000000000013;
                            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                                      (0xd000000000000013,0x800000010f20def0);
                            lVar16 = param_1;
                            func_0x00010bf67000();
                            _objc_retainAutoreleasedReturnValue();
                            _objc_release(uVar2);
                            if (lVar16 == 0) {
                              uStack_a8 = 0;
                              uStack_b0 = 0;
                              lStack_98 = 0;
                              uStack_a0 = 0;
                            }
                            else {
                              __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar16);
                              _swift_unknownObjectRelease(lVar16);
                            }
                            uStack_88 = uStack_a8;
                            uStack_90 = uStack_b0;
                            lStack_78 = lStack_98;
                            uStack_80 = uStack_a0;
                            if (lStack_98 == 0) {
LAB_1047cb8e0:
                              _objc_release(param_1);
                              param_1 = lVar15;
                              goto LAB_1047cb8e8;
                            }
                            uVar2 = 0;
                            FUN_1047d1b0c(0);
                            plVar4 = &lStack_b8;
                            _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,uVar2,6);
                            lVar16 = lStack_b8;
                            if (((ulong)plVar4 & 1) != 0) {
                              uVar2 = 0x4c4f4f545f504154;
                              __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                                        (0x4c4f4f545f504154,0xeb00000000504954);
                              lVar17 = param_1;
                              func_0x00010bf67000();
                              _objc_retainAutoreleasedReturnValue();
                              _objc_release(uVar2);
                              if (lVar17 == 0) {
                                uStack_a8 = 0;
                                uStack_b0 = 0;
                                lStack_98 = 0;
                                uStack_a0 = 0;
                              }
                              else {
                                __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar17);
                                _swift_unknownObjectRelease(lVar17);
                              }
                              uStack_88 = uStack_a8;
                              uStack_90 = uStack_b0;
                              lStack_78 = lStack_98;
                              uStack_80 = uStack_a0;
                              if (lStack_98 == 0) {
LAB_1047cb8d8:
                                _objc_release(param_1);
                                param_1 = lVar16;
                                goto LAB_1047cb8e0;
                              }
                              uVar2 = 0;
                              FUN_1047d295c(0);
                              plVar4 = &lStack_b8;
                              _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,uVar2,6);
                              lVar17 = lStack_b8;
                              if (((ulong)plVar4 & 1) != 0) {
                                uVar2 = 0xd000000000000012;
                                __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                                          (0xd000000000000012,0x800000010f20df40);
                                lVar18 = param_1;
                                func_0x00010bf67000();
                                _objc_retainAutoreleasedReturnValue();
                                _objc_release(uVar2);
                                if (lVar18 == 0) {
                                  uStack_a8 = 0;
                                  uStack_b0 = 0;
                                  lStack_98 = 0;
                                  uStack_a0 = 0;
                                }
                                else {
                                  __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar18);
                                  _swift_unknownObjectRelease(lVar18);
                                }
                                uStack_88 = uStack_a8;
                                uStack_90 = uStack_b0;
                                lStack_78 = lStack_98;
                                uStack_80 = uStack_a0;
                                if (lStack_98 == 0) {
LAB_1047cb8d0:
                                  _objc_release(param_1);
                                  param_1 = lVar17;
                                  goto LAB_1047cb8d8;
                                }
                                uVar2 = 0;
                                FUN_1047cfc28(0);
                                plVar4 = &lStack_b8;
                                _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,uVar2,6);
                                lVar18 = lStack_b8;
                                if (((ulong)plVar4 & 1) != 0) {
                                  uVar2 = 0x45444145485f4441;
                                  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                                            (0x45444145485f4441,0xe900000000000052);
                                  lVar19 = param_1;
                                  func_0x00010bf67000();
                                  _objc_retainAutoreleasedReturnValue();
                                  _objc_release(uVar2);
                                  if (lVar19 == 0) {
                                    uStack_a8 = 0;
                                    uStack_b0 = 0;
                                    lStack_98 = 0;
                                    uStack_a0 = 0;
                                  }
                                  else {
                                    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar19);
                                    _swift_unknownObjectRelease(lVar19);
                                  }
                                  uStack_88 = uStack_a8;
                                  uStack_90 = uStack_b0;
                                  lStack_78 = lStack_98;
                                  uStack_80 = uStack_a0;
                                  if (lStack_98 == 0) {
                                    _objc_release(param_1);
                                    param_1 = lVar18;
                                    goto LAB_1047cb8d0;
                                  }
                                  uVar2 = 0;
                                  FUN_1047d112c(0);
                                  plVar4 = &lStack_b8;
                                  _swift_dynamicCast(plVar4,&uStack_90,puVar1 + 8,uVar2,6);
                                  if (((ulong)plVar4 & 1) != 0) {
                                    func_0x00010c029ae0();
                                    _objc_release(param_1);
                                    _objc_release(lStack_b8);
                                    _objc_release(lVar18);
                                    _objc_release(lVar17);
                                    _objc_release(lVar16);
                                    _objc_release(lVar15);
                                    _objc_release(lVar14);
                                    _objc_release(lVar13);
                                    _objc_release(lVar12);
                                    _objc_release(lVar11);
                                    _objc_release(lVar10);
                                    _objc_release(lVar9);
                                    _objc_release(lVar8);
                                    _objc_release(lVar7);
                                    _objc_release(lVar6);
                                    _objc_release(lVar5);
                                    _objc_release(lVar3);
                                    return unaff_x20;
                                  }
                                  _objc_release(param_1);
                                  param_1 = lVar18;
                                }
                                _objc_release(param_1);
                                param_1 = lVar17;
                              }
                              _objc_release(param_1);
                              param_1 = lVar16;
                            }
                            _objc_release(param_1);
                            param_1 = lVar15;
                          }
                          _objc_release(param_1);
                          param_1 = lVar14;
                        }
                        _objc_release(param_1);
                        param_1 = lVar13;
                      }
                      _objc_release(param_1);
                      param_1 = lVar12;
                    }
                    _objc_release(param_1);
                    param_1 = lVar11;
                  }
                  _objc_release(param_1);
                  _objc_release(lVar10);
                  _objc_release(lVar9);
                  _objc_release(lVar8);
                  param_1 = lVar7;
                  goto LAB_1047cb1c8;
                }
                _objc_release(param_1);
                param_1 = lVar9;
              }
              _objc_release(param_1);
              _objc_release(lVar8);
              param_1 = lVar7;
            }
          }
LAB_1047cb1c8:
          _objc_release(param_1);
          param_1 = lVar6;
        }
        _objc_release(param_1);
        param_1 = lVar5;
      }
      _objc_release(param_1);
      param_1 = lVar3;
    }
    _objc_release(param_1);
  }
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 1047cb994; end: 1047cb9bb; -[SCAdDecisions initWithCoder:] */

void FUN_1047cb994(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1047cac04();
  return;
}



/* Entry: 1047cb9bc; end: 1047cb9eb; -[SCAdDecisions description] */

void FUN_1047cb9bc(void)

{
  undefined1 auStack_c0 [176];
  
  _objc_retain();
  FUN_1047cbb80(auStack_c0);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1047cb9ec; end: 1047cba67; -[SCAdDecisions init] */

void FUN_1047cb9ec(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"AdDataModel/AdDecisionsWrapper.swift",0x24,2,
             0xf1,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1047cba34);
  (*pcVar1)();
}



/* Entry: 1047cba68; end: 1047cbb7f; -[SCAdDecisions .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047cba68(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308f3f0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308f3f8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308f400));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308f408));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308f410));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308f418));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308f420));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308f428));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308f430));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308f438));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308f440));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308f448));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308f450));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308f458));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308f460));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11308f468));
  return;
}



/* Entry: 1047cbb80; end: 1047cbe83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047cbb80(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  lVar1 = *(long *)(param_2 + _DAT_11308f3f0);
  uVar11 = *(undefined8 *)(lVar1 + _DAT_11308f498);
  uVar12 = *(undefined8 *)(lVar1 + _DAT_11308f4a0);
  uVar2 = *(undefined8 *)(lVar1 + _DAT_11308f4a8);
  uVar3 = *(undefined8 *)(*(long *)(param_2 + _DAT_11308f3f8) + _DAT_11308f508);
  lVar1 = *(long *)(param_2 + _DAT_11308f400);
  uVar13 = *(undefined8 *)(lVar1 + _DAT_11308f6c8);
  uVar14 = *(undefined8 *)(lVar1 + _DAT_11308f6d0);
  uVar4 = *(undefined8 *)(lVar1 + _DAT_11308f6d8);
  uVar15 = *(undefined8 *)(*(long *)(param_2 + _DAT_11308f408) + _DAT_11308f690);
  uVar5 = *(undefined8 *)(*(long *)(param_2 + _DAT_11308f408) + _DAT_11308f698);
  uVar6 = *(undefined8 *)(*(long *)(param_2 + _DAT_11308f410) + _DAT_11308f7d0);
  uVar7 = *(undefined8 *)(*(long *)(param_2 + _DAT_11308f418) + _DAT_11308f4d8);
  uVar8 = *(undefined8 *)(*(long *)(param_2 + _DAT_11308f420) + _DAT_11308f768);
  uVar9 = *(undefined8 *)(*(long *)(param_2 + _DAT_11308f428) + _DAT_11308f600);
  uVar10 = *(undefined8 *)(*(long *)(param_2 + _DAT_11308f430) + _DAT_11308f708);
  uVar17 = *(undefined8 *)(*(long *)(param_2 + _DAT_11308f438) + _DAT_11308f800);
  uVar18 = *(undefined8 *)(*(long *)(param_2 + _DAT_11308f440) + _DAT_11308f630);
  uVar19 = *(undefined8 *)(*(long *)(param_2 + _DAT_11308f448) + _DAT_11308f860);
  uVar20 = *(undefined8 *)(*(long *)(param_2 + _DAT_11308f450) + _DAT_11308f798);
  uVar21 = *(undefined8 *)(*(long *)(param_2 + _DAT_11308f450) + _DAT_11308f7a0);
  uVar22 = *(undefined8 *)(*(long *)(param_2 + _DAT_11308f458) + _DAT_11308f830);
  uVar23 = *(undefined8 *)(*(long *)(param_2 + _DAT_11308f460) + _DAT_11308f660);
  lVar1 = *(long *)(param_2 + _DAT_11308f468);
  _objc_retain();
  _objc_release(param_2);
  uVar16 = *(undefined8 *)(lVar1 + _DAT_11308f738);
  _objc_release(lVar1);
  *param_1 = uVar11;
  param_1[1] = uVar12;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar13;
  param_1[5] = uVar14;
  param_1[6] = uVar4;
  param_1[7] = uVar15;
  param_1[8] = uVar5;
  param_1[9] = uVar6;
  param_1[10] = uVar7;
  param_1[0xb] = uVar8;
  param_1[0xc] = uVar9;
  param_1[0xd] = uVar10;
  param_1[0xe] = uVar17;
  param_1[0xf] = uVar18;
  param_1[0x10] = uVar19;
  param_1[0x11] = uVar20;
  param_1[0x12] = uVar21;
  param_1[0x13] = uVar22;
  param_1[0x14] = uVar23;
  param_1[0x15] = uVar16;
  return;
}



/* Entry: 1047cbe84; end: 1047cbea3;  */

void FUN_1047cbe84(void)

{
  _objc_opt_self(&PTR_PTR_1129d4468);
  return;
}



/* Entry: 1047cbea4; end: 1047cbf73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1047cbea4(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar3 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    plVar4 = &lStack_68;
    _swift_dynamicCast(plVar4,auStack_60,PTR___sypN_11034f1a8 + 8,lVar3,6);
    if (((ulong)plVar4 & 1) != 0) {
      iVar1 = *(int *)(unaff_x20 + _DAT_11308f498);
      iVar2 = *(int *)(lStack_68 + _DAT_11308f498);
      uVar6 = *(undefined8 *)(unaff_x20 + _DAT_11308f4a0);
      uVar7 = *(undefined8 *)(lStack_68 + _DAT_11308f4a0);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11308f4a8);
      uVar8 = *(undefined8 *)(lStack_68 + _DAT_11308f4a8);
      _objc_release();
      return (iVar1 == iVar2 && (int)uVar6 == (int)uVar7) && (int)uVar5 == (int)uVar8;
    }
  }
  return false;
}



/* Entry: 1047cbf74; end: 1047cbf83; -[SCAdMediaPlayerDecision autoAdvanceMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047cbf74(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308f498);
}



/* Entry: 1047cbf84; end: 1047cbf93; -[SCAdMediaPlayerDecision loopingBehavior] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047cbf84(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308f4a0);
}



/* Entry: 1047cbf94; end: 1047cbfa7; -[SCAdMediaPlayerDecision tapBehavior] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047cbf94(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308f4a8);
}



/* Entry: 1047cbfa8; end: 1047cc01b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047cbfa8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308f498) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308f4a0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11308f4a8) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047cc01c; end: 1047cc08f; -[SCAdMediaPlayerDecision initWithAutoAdvanceMode:loopingBehavior:tapBehavior:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047cc01c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11308f498) = param_3;
  *(undefined8 *)(param_1 + _DAT_11308f4a0) = param_4;
  *(undefined8 *)(param_1 + _DAT_11308f4a8) = param_5;
  lStack_40 = param_1;
  lStack_38 = lVar1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047cc090; end: 1047cc0ff; -[SCAdMediaPlayerDecision hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047cc090(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(param_1 + _DAT_11308f498));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(param_1 + _DAT_11308f4a0));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(param_1 + _DAT_11308f4a8));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1047cc100; end: 1047cc17f; -[SCAdMediaPlayerDecision isEqual:] */

uint FUN_1047cc100(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1047cbea4(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1047cc180; end: 1047cc183; -[SCAdMediaPlayerDecision copyWithZone:] */

void FUN_1047cc180(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1047cc184; end: 1047cc277;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047cc184(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xd000000000000011;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f20df90);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f20dfb0);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0x414845425f504154;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x414845425f504154,0xec000000524f4956);
  func_0x00010bf92fc0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1047cc278; end: 1047cc2c7; -[SCAdMediaPlayerDecision encodeWithCoder:] */

void FUN_1047cc278(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1047cc184(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1047cc2c8; end: 1047cc2f7;  */

void FUN_1047cc2c8(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047cc2f8(param_1);
  return;
}



/* Entry: 1047cc2f8; end: 1047cc43b;  */

undefined8 FUN_1047cc2f8(ulong param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 unaff_x20;
  
  uVar1 = 0xd000000000000011;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f20df90);
  uVar2 = param_1;
  func_0x00010bf66f40();
  _objc_release(uVar1);
  if (uVar2 < 2) {
    uVar1 = 0xd000000000000010;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f20dfb0);
    uVar2 = param_1;
    func_0x00010bf66f40();
    _objc_release(uVar1);
    if (uVar2 < 2) {
      uVar1 = 0x414845425f504154;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x414845425f504154,0xec000000524f4956);
      uVar2 = param_1;
      func_0x00010bf66f40();
      _objc_release(uVar1);
      if (uVar2 < 2) {
        func_0x00010bff5b80();
        _objc_release(param_1);
        return unaff_x20;
      }
    }
  }
  _objc_release(param_1);
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}


