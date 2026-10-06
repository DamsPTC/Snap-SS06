/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103fcaa4c; end: 103fcaa5f; -[SCMusicLyricsData lines] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fcaa4c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11303ffa8);
  (*(code *)0x103fcbb3c)();
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103fcaa60; end: 103fcaa6f; -[SCMusicLyricsData duration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103fcaa60(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11303ffb0);
}



/* Entry: 103fcaa70; end: 103fcaa7f; -[SCMusicLyricsData type] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fcaa70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11303ffb8));
  return;
}



/* Entry: 103fcaa80; end: 103fcab0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fcaa80(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11303ffa0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11303ffa8) = param_3;
  *(undefined4 *)(unaff_x20 + _DAT_11303ffb0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11303ffb8) = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fcab0c; end: 103fcabbf; -[SCMusicLyricsData initWithTrackId:lines:duration:type:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fcab0c(undefined4 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_2;
  _swift_getObjectType();
  lVar3 = lVar2;
  func_0x000103fcbb3c();
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_5,lVar3);
  *(undefined8 *)(param_2 + _DAT_11303ffa0) = param_4;
  *(undefined8 *)(param_2 + _DAT_11303ffa8) = param_5;
  *(undefined4 *)(param_2 + _DAT_11303ffb0) = param_1;
  *(undefined8 *)(param_2 + _DAT_11303ffb8) = param_6;
  puVar1 = PTR_s_init_1125d9248;
  lStack_60 = param_2;
  lStack_58 = lVar2;
  _objc_retain(param_6);
  _objc_msgSendSuper2(&lStack_60,puVar1);
  return;
}



/* Entry: 103fcabc0; end: 103fcac17;  */

void FUN_103fcabc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_allocWithZone();
  FUN_103fcac18(param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 103fcac18; end: 103fcaf2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fcac18(undefined4 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  code *pcVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****ppppuVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 ****ppppuVar12;
  ulong uVar13;
  long lVar14;
  long unaff_x20;
  ulong uVar15;
  undefined4 *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  long lVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined1 auStack_c8 [16];
  undefined8 ***pppuStack_b8;
  undefined8 ***pppuStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  
  _swift_getObjectType();
  *(undefined8 *)(unaff_x20 + _DAT_11303ffa0) = param_2;
  puVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar13 = *(ulong *)(param_3 + 0x10);
  puVar19 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar13 != 0) {
    puStack_90 = PTR___swiftEmptyArrayStorage_11034f1c8;
    _swift_bridgeObjectRetain(param_3);
    ppppuVar7 = (undefined8 ****)0x0;
    FUN_103fcbb08(0,uVar13,0);
    uVar15 = 0;
    do {
      puVar19 = puStack_90;
      if (*(ulong *)(param_3 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x103fcaf30);
        (*pcVar6)();
      }
      plVar11 = (long *)(param_3 + 0x20 + uVar15 * 0x10);
      lVar14 = *plVar11;
      lVar5 = plVar11[1];
      uVar21 = *(undefined4 *)((long)plVar11 + 0xc);
      func_0x000103fcbb3c();
      ppppuVar8 = ppppuVar7;
      _objc_allocWithZone();
      lVar20 = *(long *)(lVar14 + 0x10);
      if (lVar20 == 0) {
        _swift_bridgeObjectRetain(lVar14);
        puVar18 = puVar17;
      }
      else {
        puStack_98 = puVar17;
        _swift_bridgeObjectRetain(lVar14);
        lVar9 = 0;
        func_0x000103fcbb5c(0,lVar20,0);
        puVar18 = puStack_98;
        func_0x000103fcbb90();
        puVar16 = (undefined4 *)(lVar14 + 0x30);
        do {
          uVar2 = *(undefined8 *)(puVar16 + -4);
          uVar4 = *(undefined8 *)(puVar16 + -2);
          uVar22 = *puVar16;
          lVar10 = lVar9;
          _objc_allocWithZone();
          puVar1 = (undefined8 *)(lVar10 + _DAT_11303ffc0);
          *puVar1 = uVar2;
          puVar1[1] = uVar4;
          *(undefined4 *)(lVar10 + _DAT_11303ffc8) = uVar22;
          puVar17 = PTR_s_init_1125d9248;
          lStack_a8 = lVar10;
          lStack_a0 = lVar9;
          _swift_bridgeObjectRetain(uVar4);
          plVar11 = &lStack_a8;
          _objc_msgSendSuper2(plVar11,puVar17);
          uVar3 = *(ulong *)(puVar18 + 0x10);
          puStack_98 = puVar18;
          if (*(ulong *)(puVar18 + 0x18) >> 1 <= uVar3) {
            func_0x000103fcbb5c(1 < *(ulong *)(puVar18 + 0x18),uVar3 + 1,1);
          }
          puVar16 = puVar16 + 6;
          *(ulong *)(puStack_98 + 0x10) = uVar3 + 1;
          *(long **)(puStack_98 + uVar3 * 8 + 0x20) = plVar11;
          lVar20 = lVar20 + -1;
          puVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
          puVar18 = puStack_98;
        } while (lVar20 != 0);
      }
      *(undefined **)((long)ppppuVar8 + _DAT_11303ffd0) = puVar18;
      *(int *)((long)ppppuVar8 + _DAT_11303ffd8) = (int)lVar5;
      _swift_bridgeObjectRelease(lVar14);
      *(undefined4 *)((long)ppppuVar8 + _DAT_11303ffe0) = uVar21;
      ppppuVar12 = &pppuStack_b8;
      pppuStack_b8 = ppppuVar8;
      pppuStack_b0 = ppppuVar7;
      _objc_msgSendSuper2(ppppuVar12,PTR_s_init_1125d9248);
      uVar3 = *(ulong *)(puVar19 + 0x10);
      puStack_90 = puVar19;
      if (*(ulong *)(puVar19 + 0x18) >> 1 <= uVar3) {
        FUN_103fcbb08(1 < *(ulong *)(puVar19 + 0x18),uVar3 + 1,1);
      }
      puVar19 = puStack_90;
      uVar15 = uVar15 + 1;
      *(ulong *)(puStack_90 + 0x10) = uVar3 + 1;
      *(undefined8 *****)(puStack_90 + uVar3 * 8 + 0x20) = ppppuVar12;
      ppppuVar7 = ppppuVar12;
    } while (uVar15 != uVar13);
    _swift_bridgeObjectRelease(param_3);
    param_4 = param_4 & 0xffffffff;
  }
  *(undefined **)(unaff_x20 + _DAT_11303ffa8) = puVar19;
  *(undefined4 *)(unaff_x20 + _DAT_11303ffb0) = param_1;
  FUN_103fcbe0c();
  _swift_bridgeObjectRelease(param_3);
  *(ulong *)(unaff_x20 + _DAT_11303ffb8) = param_4;
  _objc_msgSendSuper2(auStack_c8,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fcaf30; end: 103fcaf77;  */

void FUN_103fcaf30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_allocWithZone();
  FUN_103fcb1a8(param_1,param_2,param_3);
  return;
}



/* Entry: 103fcaf78; end: 103fcafa3; -[SCMusicLyricsData description] */

void FUN_103fcaf78(undefined8 param_1,undefined8 param_2)

{
  _objc_retain();
  FUN_103fcbe7c();
  _swift_bridgeObjectRelease(param_2);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103fcafa4; end: 103fcafeb; -[SCMusicLyricsData init] */

void FUN_103fcafa4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"SCMusicServices/MusicLyricsDataWrapper.swift"
             ,0x2c,2,0x34,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fcafec);
  (*pcVar1)();
}



/* Entry: 103fcafec; end: 103fcafef;  */

void FUN_103fcafec(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103fcaff0; end: 103fcb027; -[SCMusicLyricsData .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fcaff0(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11303ffa8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11303ffb8));
  return;
}



/* Entry: 103fcb028; end: 103fcb03b; -[SCMusicLyricsLine syncs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fcb028(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11303ffd0);
  (*(code *)0x103fcbb90)();
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103fcb03c; end: 103fcb083;  */

void FUN_103fcb03c(long param_1,undefined8 param_2,long *param_3,code *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  (*param_4)();
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103fcb084; end: 103fcb093; -[SCMusicLyricsLine offset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103fcb084(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11303ffd8);
}



/* Entry: 103fcb094; end: 103fcb0a3; -[SCMusicLyricsLine offsetEnd] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103fcb094(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11303ffe0);
}



/* Entry: 103fcb0a4; end: 103fcb117;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fcb0a4(undefined4 param_1,undefined4 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11303ffd0) = param_3;
  *(undefined4 *)(unaff_x20 + _DAT_11303ffd8) = param_1;
  *(undefined4 *)(unaff_x20 + _DAT_11303ffe0) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fcb118; end: 103fcb1a7; -[SCMusicLyricsLine initWithSyncs:offset:offsetEnd:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fcb118(undefined4 param_1,undefined4 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar1 = param_3;
  _swift_getObjectType();
  lVar2 = lVar1;
  func_0x000103fcbb90();
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_5,lVar2);
  *(undefined8 *)(param_3 + _DAT_11303ffd0) = param_5;
  *(undefined4 *)(param_3 + _DAT_11303ffd8) = param_1;
  *(undefined4 *)(param_3 + _DAT_11303ffe0) = param_2;
  lStack_50 = param_3;
  lStack_48 = lVar1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fcb1a8; end: 103fcb33b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fcb1a8(undefined4 param_1,undefined4 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long unaff_x20;
  long lVar9;
  undefined *puVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined1 auStack_a8 [16];
  long lStack_98;
  long lStack_90;
  undefined *puStack_88;
  
  _swift_getObjectType();
  lVar9 = *(long *)(param_3 + 0x10);
  puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar9 != 0) {
    puStack_88 = PTR___swiftEmptyArrayStorage_11034f1c8;
    lVar6 = 0;
    func_0x000103fcbb5c(0,lVar9,0);
    puVar10 = puStack_88;
    func_0x000103fcbb90();
    puVar11 = (undefined4 *)(param_3 + 0x30);
    do {
      uVar2 = *(undefined8 *)(puVar11 + -4);
      uVar4 = *(undefined8 *)(puVar11 + -2);
      uVar12 = *puVar11;
      lVar7 = lVar6;
      _objc_allocWithZone();
      puVar1 = (undefined8 *)(lVar7 + _DAT_11303ffc0);
      *puVar1 = uVar2;
      puVar1[1] = uVar4;
      *(undefined4 *)(lVar7 + _DAT_11303ffc8) = uVar12;
      puVar5 = PTR_s_init_1125d9248;
      lStack_98 = lVar7;
      lStack_90 = lVar6;
      _swift_bridgeObjectRetain(uVar4);
      plVar8 = &lStack_98;
      _objc_msgSendSuper2(plVar8,puVar5);
      uVar3 = *(ulong *)(puVar10 + 0x10);
      puStack_88 = puVar10;
      if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar3) {
        func_0x000103fcbb5c(1 < *(ulong *)(puVar10 + 0x18),uVar3 + 1,1);
      }
      puVar11 = puVar11 + 6;
      *(ulong *)(puStack_88 + 0x10) = uVar3 + 1;
      *(long **)(puStack_88 + uVar3 * 8 + 0x20) = plVar8;
      lVar9 = lVar9 + -1;
      puVar10 = puStack_88;
    } while (lVar9 != 0);
  }
  *(undefined **)(unaff_x20 + _DAT_11303ffd0) = puVar10;
  *(undefined4 *)(unaff_x20 + _DAT_11303ffd8) = param_1;
  _swift_bridgeObjectRelease(param_3);
  *(undefined4 *)(unaff_x20 + _DAT_11303ffe0) = param_2;
  _objc_msgSendSuper2(auStack_a8,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fcb33c; end: 103fcb37f; -[SCMusicLyricsLine description] */

void FUN_103fcb33c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000103fcc194();
  _objc_release(param_1);
  _swift_bridgeObjectRelease(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103fcb380; end: 103fcb3c7; -[SCMusicLyricsLine init] */

void FUN_103fcb380(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"SCMusicServices/MusicLyricsDataWrapper.swift"
             ,0x2c,2,0x70,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fcb3c8);
  (*pcVar1)();
}



/* Entry: 103fcb3c8; end: 103fcb3d7; -[SCMusicLyricsLine .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fcb3c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11303ffd0));
  return;
}



/* Entry: 103fcb3d8; end: 103fcb423; -[SCMusicLyricsSync syncString] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fcb3d8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11303ffc0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11303ffc0))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103fcb424; end: 103fcb437; -[SCMusicLyricsSync offset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103fcb424(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11303ffc8);
}



/* Entry: 103fcb438; end: 103fcb4ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fcb438(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11303ffc0);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined4 *)(unaff_x20 + _DAT_11303ffc8) = param_1;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fcb4ac; end: 103fcb527; -[SCMusicLyricsSync initWithSyncString:offset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fcb4ac(undefined4 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_2;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)(param_2 + _DAT_11303ffc0);
  *puVar1 = param_4;
  puVar1[1] = param_3;
  *(undefined4 *)(param_2 + _DAT_11303ffc8) = param_1;
  lStack_50 = param_2;
  lStack_48 = lVar2;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fcb528; end: 103fcb56f; -[SCMusicLyricsSync init] */

void FUN_103fcb528(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"SCMusicServices/MusicLyricsDataWrapper.swift"
             ,0x2c,2,0xa4,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fcb570);
  (*pcVar1)();
}



/* Entry: 103fcb570; end: 103fcb583; -[SCMusicLyricsSync .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fcb570(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11303ffc0 + 8))
  ;
  return;
}



/* Entry: 103fcb584; end: 103fcb62f;  */

void FUN_103fcb584(void)

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



/* Entry: 103fcb630; end: 103fcb667;  */

void FUN_103fcb630(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 103fcb668; end: 103fcb6af; -[SCMusicLyricsType init] */

void FUN_103fcb668(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"SCMusicServices/MusicLyricsDataWrapper.swift"
             ,0x2c,2,0xdb,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fcb6b0);
  (*pcVar1)();
}



/* Entry: 103fcb6b0; end: 103fcb6b7; +[SCMusicLyricsType unset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fcb6b0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11303ffe8) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103fcb6b8; end: 103fcb6bf; +[SCMusicLyricsType richSync] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fcb6b8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11303ffe8) = 1;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103fcb6c0; end: 103fcb6c7; +[SCMusicLyricsType lineSync] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fcb6c0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11303ffe8) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103fcb6c8; end: 103fcb717;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fcb6c8(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11303ffe8) = param_3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103fcb718; end: 103fcb743; -[SCMusicLyricsType matchUnset:richSync:lineSync:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fcb718(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  if ((*(char *)(param_1 + _DAT_11303ffe8) != '\0') &&
     (param_3 = param_4, *(char *)(param_1 + _DAT_11303ffe8) != '\x01')) {
    param_3 = param_5;
  }
                    /* WARNING: Could not recover jumptable at 0x000103fcb740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3);
  return;
}



/* Entry: 103fcb744; end: 103fcb777;  */

void FUN_103fcb744(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103fcb778; end: 103fcb7df;  */

void FUN_103fcb778(code *param_1,ulong *param_2,long *param_3)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (((int)lVar2 != 0) && ((*param_1)(), lVar2 != 0)) {
    param_2 = (ulong *)0x112d36e60;
    param_3 = (long *)&UNK_10d901170;
  }
  if (*param_2 == 0 || (*param_2 & 1) != 0) {
    puVar1 = (undefined *)((long)param_3 + (long)(int)*param_3);
    func_0x000107c61518(puVar1,*param_3 >> 0x20,0,0);
    *param_2 = (ulong)puVar1;
  }
  return;
}



/* Entry: 103fcb7e0; end: 103fcbb07;  */

ulong FUN_103fcb7e0(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103fcb8a8);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103fcb8ac);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000103fcbb3c();
    uVar3 = param_1;
    _swift_unknownObjectRetain();
    _swift_dynamicCastClass();
    if (uVar3 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar5 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    __ss18_CocoaArrayWrapperVyyXlSicig(param_1,uVar3);
    uVar3 = param_1;
    func_0x000103fcbb3c();
    uVar4 = param_1;
    _swift_dynamicCastClass(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar5 = 0xd000000000000046;
  }
  __sSS6appendyySSF(uVar5,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  __sSS6appendyySSF(0xd000000000000013,0x800000010dcb9440);
  __sSS6appendyySSF(0x756f662074756220,0xeb0000000020646e);
  _swift_getObjectType(param_1);
  uVar5 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar5);
  __ss17_assertionFailure__5flagss5NeverOs12StaticStringV_SSs6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103fcb974);
  (*pcVar2)();
}



/* Entry: 103fcbb08; end: 103fcbbcb;  */

void FUN_103fcbb08(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_103fcbbcc();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 103fcbbcc; end: 103fcbd03;  */

code * FUN_103fcbbcc(code *param_1,ulong param_2,ulong param_3,code *param_4,code *param_5,
                    undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103fcbd04);
        (*pcVar3)();
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
  pcVar4 = param_1;
  pcVar3 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    pcVar3 = param_5;
    FUN_103fcb778(param_5,param_6,param_7);
    _swift_allocObject();
    pcVar4 = pcVar3;
    _malloc_size();
    pcVar1 = pcVar4 + -0x19;
    if (0x1f < (long)pcVar4) {
      pcVar1 = pcVar4 + -0x20;
    }
    *(ulong *)(pcVar3 + 0x10) = uVar6;
    *(ulong *)(pcVar3 + 0x18) = ((long)pcVar1 >> 3) << 1 | 1;
  }
  pcVar1 = pcVar3 + 0x20;
  pcVar2 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    (*param_5)();
    _swift_arrayInitWithCopy(pcVar1,pcVar2,uVar6,pcVar4);
  }
  else {
    if (pcVar3 != param_4 || pcVar2 + uVar6 * 8 <= pcVar1) {
      _memmove(pcVar1,pcVar2,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return pcVar3;
}



/* Entry: 103fcbd04; end: 103fcbe0b;  */

undefined * FUN_103fcbd04(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103fcbe0c);
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
    puVar3 = (undefined *)0x112dc2b48;
    func_0x0001000285a8(0x112dc2b48,&UNK_10d97f9e0);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,&UNK_11072d780);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Entry: 103fcbe0c; end: 103fcbe7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fcbe0c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong auStack_50 [6];
  
  uVar1 = param_1;
  func_0x000103fcc338();
  uVar2 = uVar1;
  _objc_allocWithZone();
  puVar3 = auStack_50;
  if ((param_1 & 0xff) != 0) {
    puVar3 = auStack_50 + 2;
    if (((uint)param_1 & 0xff) != 1) {
      puVar3 = auStack_50 + 4;
    }
  }
  *(char *)(uVar2 + _DAT_11303ffe8) = (char)param_1;
  *puVar3 = uVar2;
  puVar3[1] = uVar1;
  _objc_msgSendSuper2(puVar3,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fcbe7c; end: 103fcc317;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103fcbe7c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  
  uVar7 = *(undefined8 *)(param_1 + _DAT_11303ffa0);
  uVar9 = *(ulong *)(param_1 + _DAT_11303ffa8);
  if (uVar9 >> 0x3e == 0) {
    uVar10 = *(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar10 = uVar9 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar9) {
      uVar10 = uVar9;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar10 != 0) {
    func_0x000103fcbbb0(0,uVar10 & ((long)uVar10 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar10 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103fcc194);
      (*pcVar3)();
    }
    uVar8 = 0;
    puVar11 = puVar2;
    do {
      if ((uVar9 & 0xc000000000000001) == 0) {
        if (*(long *)((uVar9 & 0xffffffffffffff8) + 0x10) <= (long)uVar8) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103fcc178);
          (*pcVar3)();
        }
        uVar4 = *(ulong *)(uVar9 + 0x20 + uVar8 * 8);
        _objc_retain();
      }
      else {
        uVar4 = uVar8;
        FUN_103fcb7e0(uVar8,uVar9);
      }
      uVar13 = *(ulong *)(uVar4 + _DAT_11303ffd0);
      if (uVar13 >> 0x3e == 0) {
        uVar14 = *(ulong *)((uVar13 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar14 = uVar13 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar13) {
          uVar14 = uVar13;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg();
      }
      puVar12 = puVar11;
      if (uVar14 != 0) {
        func_0x0001016e79f8(0,uVar14 & ((long)uVar14 >> 0x3f ^ 0xffffffffffffffffU),0);
        if ((long)uVar14 < 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103fcc174);
          (*pcVar3)();
        }
        uVar15 = 0;
        do {
          if ((uVar13 & 0xc000000000000001) == 0) {
            uVar5 = *(ulong *)(uVar13 + uVar15 * 8 + 0x20);
            _objc_retain();
          }
          else {
            uVar5 = uVar15;
            func_0x000103fcb974(uVar15,uVar13);
          }
          uVar6 = *(undefined8 *)(uVar5 + _DAT_11303ffc0);
          uVar1 = ((undefined8 *)(uVar5 + _DAT_11303ffc0))[1];
          uVar16 = *(undefined4 *)(uVar5 + _DAT_11303ffc8);
          _swift_bridgeObjectRetain(uVar1);
          _objc_release(uVar5);
          uVar5 = *(ulong *)(puVar11 + 0x10);
          if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar5) {
            func_0x0001016e79f8(1 < *(ulong *)(puVar11 + 0x18),uVar5 + 1,1);
          }
          uVar15 = uVar15 + 1;
          *(ulong *)(puVar11 + 0x10) = uVar5 + 1;
          *(undefined8 *)(puVar11 + uVar5 * 0x18 + 0x20) = uVar6;
          *(undefined8 *)(puVar11 + uVar5 * 0x18 + 0x28) = uVar1;
          *(undefined4 *)(puVar11 + uVar5 * 0x18 + 0x30) = uVar16;
          puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
        } while (uVar14 != uVar15);
      }
      uVar16 = *(undefined4 *)(uVar4 + _DAT_11303ffd8);
      uVar17 = *(undefined4 *)(uVar4 + _DAT_11303ffe0);
      _objc_release();
      uVar4 = *(ulong *)(puVar2 + 0x10);
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar4) {
        func_0x000103fcbbb0(1 < *(ulong *)(puVar2 + 0x18),uVar4 + 1,1);
      }
      *(ulong *)(puVar2 + 0x10) = uVar4 + 1;
      *(undefined **)(puVar2 + uVar4 * 0x10 + 0x20) = puVar11;
      uVar8 = uVar8 + 1;
      *(undefined4 *)(puVar2 + uVar4 * 0x10 + 0x28) = uVar16;
      *(undefined4 *)(puVar2 + uVar4 * 0x10 + 0x2c) = uVar17;
      puVar11 = puVar12;
    } while (uVar8 != uVar10);
  }
  uVar6 = *(undefined8 *)(param_1 + _DAT_11303ffb8);
  _objc_retain();
  _objc_release(param_1);
  _objc_release(uVar6);
  return uVar7;
}



/* Entry: 103fcc318; end: 103fcc357;  */

void FUN_103fcc318(void)

{
  _objc_opt_self(&PTR_PTR_112976e70);
  return;
}



/* Entry: 103fcc358; end: 103fcc4bf;  */

int FUN_103fcc358(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103fcc3d4;
        goto LAB_103fcc3b8;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103fcc3b8:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_103fcc3d4:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103fcc4c0; end: 103fcc4ff;  */

void FUN_103fcc4c0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113040090 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcb94d8;
  _swift_getWitnessTable(&UNK_10dcb94d8,&UNK_11072e080);
  puRam0000000113040090 = puVar1;
  return;
}



/* Entry: 103fcc500; end: 103fcc503;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fcc500(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11303ffc0);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined4 *)(unaff_x20 + _DAT_11303ffc8) = param_1;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fcc504; end: 103fcc507; -[SCMusicLyricsType description] */

void FUN_103fcc504(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103fcc508; end: 103fcc50b; -[SCMusicLyricsSync description] */

void FUN_103fcc508(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103fcc50c; end: 103fcc50f; -[SCMusicLyricsLine copyWithZone:] */

void FUN_103fcc50c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103fcc510; end: 103fcc513; -[SCMusicLyricsData copyWithZone:] */

void FUN_103fcc510(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103fcc514; end: 103fcc517; -[SCMusicLyricsSync copyWithZone:] */

void FUN_103fcc514(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103fcc518; end: 103fcc527; -[SCMusicLyricsType copyWithZone:] */

void FUN_103fcc518(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103fcc528; end: 103fcc537; -[SCMusicPlaybackEvent eventType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103fcc528(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130400a8);
}



/* Entry: 103fcc538; end: 103fcc547; -[SCMusicPlaybackEvent trackId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103fcc538(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130400b0);
}



/* Entry: 103fcc548; end: 103fcc557; -[SCMusicPlaybackEvent trackOffsetMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103fcc548(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130400b8);
}



/* Entry: 103fcc558; end: 103fcc56f; -[SCMusicPlaybackEvent wallClockTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103fcc558(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130400c0);
}



/* Entry: 103fcc570; end: 103fcc713; -[SCMusicPlaybackEvent initWithEventType:trackId:trackOffsetMs:wallClockTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fcc570(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lStack_50;
  long lStack_48;
  
  lVar1 = param_3;
  _swift_getObjectType();
  *(undefined8 *)(param_3 + _DAT_1130400a8) = param_5;
  *(undefined8 *)(param_3 + _DAT_1130400b0) = param_6;
  *(undefined8 *)(param_3 + _DAT_1130400b8) = param_1;
  *(undefined8 *)(param_3 + _DAT_1130400c0) = param_2;
  lStack_50 = param_3;
  lStack_48 = lVar1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fcc714; end: 103fcc717; -[SCMusicPlaybackEvent copyWithZone:] */

void FUN_103fcc714(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103fcc718; end: 103fcc733; -[SCMusicPlaybackEvent description] */

void FUN_103fcc718(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103fcc734; end: 103fcc7cf; -[SCMusicPlaybackEvent init] */

void FUN_103fcc734(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCMusicServices/MusicPlaybackEventWrapper.swift",0x2f,2,0x2e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fcc77c);
  (*pcVar1)();
}



/* Entry: 103fcc7d0; end: 103fcc7e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fcc7d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130400a8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_1130400b0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_1130400b8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_1130400c0) = param_2;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fcc7e8; end: 103fcc893;  */

void FUN_103fcc7e8(void)

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



/* Entry: 103fcc894; end: 103fcc8bb;  */

void FUN_103fcc894(ulong *param_1,ulong *param_2)

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



/* Entry: 103fcc8bc; end: 103fccab3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103fcc8bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_78 [8];
  undefined1 auStack_68 [24];
  
  _objc_allocWithZone();
  lVar2 = _DAT_113040108;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_113040108,0);
  *(undefined8 *)(unaff_x20 + _DAT_1130400f0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_1130400f8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113040100) = param_3;
  _swift_beginAccess(unaff_x20 + lVar2,auStack_68,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar2,param_4);
  puVar1 = PTR_s_init_1125d9248;
  _swift_unknownObjectRetain(param_1);
  _objc_retain(param_2);
  puVar3 = auStack_78;
  _objc_msgSendSuper2(puVar3,puVar1);
  _swift_unknownObjectRelease(param_1);
  _objc_release(param_2);
  _swift_unknownObjectRelease(param_4);
  return puVar3;
}



/* Entry: 103fccab4; end: 103fccb87; -[_TtC16SoundReportScope16SoundReportScope initWithUiContainer:trackId:source:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fccab4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  lVar3 = param_1;
  _swift_getObjectType();
  lVar2 = _DAT_113040108;
  _swift_unknownObjectWeakInit(param_1 + _DAT_113040108,0);
  *(undefined8 *)(param_1 + _DAT_1130400f0) = param_3;
  *(undefined8 *)(param_1 + _DAT_1130400f8) = param_4;
  *(undefined8 *)(param_1 + _DAT_113040100) = param_5;
  _swift_beginAccess(param_1 + lVar2,auStack_68,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar2,param_6);
  puVar1 = PTR_s_init_1125d9248;
  lStack_78 = param_1;
  lStack_70 = lVar3;
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_78,puVar1);
  return;
}



/* Entry: 103fccb88; end: 103fccbe7; -[_TtC16SoundReportScope16SoundReportScope init] */

void FUN_103fccb88(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SoundReportScope.SoundReportScope",0x21,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fccbb4);
  (*pcVar1)();
}



/* Entry: 103fccbe8; end: 103fccc53; -[_TtC16SoundReportScope16SoundReportScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103fccbe8(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_1130400f0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130400f8));
  param_1 = param_1 + _DAT_113040108;
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 103fccc54; end: 103fccc57;  */

void FUN_103fccc54(void)

{
  undefined *puVar1;
  
  if (puRam0000000113040110 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcb95b0;
  _swift_getWitnessTable(&UNK_10dcb95b0,&UNK_11072e178);
  puRam0000000113040110 = puVar1;
  return;
}



/* Entry: 103fccc58; end: 103fccc97;  */

void FUN_103fccc58(void)

{
  undefined *puVar1;
  
  if (puRam0000000113040110 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcb95b0;
  _swift_getWitnessTable(&UNK_10dcb95b0,&UNK_11072e178);
  puRam0000000113040110 = puVar1;
  return;
}



/* Entry: 103fccc98; end: 103fccca7;  */

undefined1  [16] FUN_103fccc98(void)

{
  return ZEXT816(0x11072e178);
}



/* Entry: 103fccca8; end: 103fcccc7;  */

void FUN_103fccca8(void)

{
  _objc_opt_self(&PTR_PTR_112977298);
  return;
}



/* Entry: 103fcccc8; end: 103fcd29b;  */

long FUN_103fcccc8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103fcd29c; end: 103fcd2af;  */

bool FUN_103fcd29c(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103fcd2b0; end: 103fcd387;  */

void FUN_103fcd2b0(void)

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



/* Entry: 103fcd388; end: 103fcd3a7;  */

void FUN_103fcd388(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 103fcd3a8; end: 103fcd3e7;  */

void FUN_103fcd3a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113040140 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcb96d0;
  _swift_getWitnessTable(&UNK_10dcb96d0,&UNK_11072e3b0);
  puRam0000000113040140 = puVar1;
  return;
}



/* Entry: 103fcd3e8; end: 103fcd40f;  */

undefined1  [16] FUN_103fcd3e8(void)

{
  return ZEXT816(0x11072e3b0);
}



/* Entry: 103fcd410; end: 103fcd44f;  */

void FUN_103fcd410(void)

{
  undefined *puVar1;
  
  if (puRam0000000113040148 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcb9790;
  _swift_getWitnessTable(&UNK_10dcb9790,&UNK_11072e428);
  puRam0000000113040148 = puVar1;
  return;
}



/* Entry: 103fcd450; end: 103fcd4fb;  */

void FUN_103fcd450(void)

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



/* Entry: 103fcd4fc; end: 103fcd547;  */

void FUN_103fcd4fc(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 103fcd548; end: 103fcd61f;  */

void FUN_103fcd548(void)

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



/* Entry: 103fcd620; end: 103fcd63f;  */

void FUN_103fcd620(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 103fcd640; end: 103fcd67f;  */

void FUN_103fcd640(void)

{
  undefined *puVar1;
  
  if (puRam0000000113040150 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcb9850;
  _swift_getWitnessTable(&UNK_10dcb9850,&UNK_11072e4a0);
  puRam0000000113040150 = puVar1;
  return;
}



/* Entry: 103fcd680; end: 103fcd6a3;  */

undefined1  [16] FUN_103fcd680(void)

{
  return ZEXT816(0x11072e4a0);
}



/* Entry: 103fcd6a4; end: 103fcd77b;  */

void FUN_103fcd6a4(void)

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



/* Entry: 103fcd77c; end: 103fcd79b;  */

void FUN_103fcd77c(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 103fcd79c; end: 103fcd7db;  */

void FUN_103fcd79c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113040158 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcb9920;
  _swift_getWitnessTable(&UNK_10dcb9920,&UNK_11072e518);
  puRam0000000113040158 = puVar1;
  return;
}



/* Entry: 103fcd7dc; end: 103fcd7eb;  */

undefined1  [16] FUN_103fcd7dc(void)

{
  return ZEXT816(0x11072e518);
}



/* Entry: 103fcd7ec; end: 103fcd897;  */

void FUN_103fcd7ec(void)

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



/* Entry: 103fcd898; end: 103fcd8cf;  */

void FUN_103fcd898(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 103fcd8d0; end: 103fcd917; -[SCSnapEditorSendActionContext description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fcd8d0(long param_1)

{
  code *pcVar1;
  
  if ((1 < *(byte *)(param_1 + _DAT_113040160)) && (*(char *)(param_1 + _DAT_113040168) == '\x02'))
  {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103fcd918);
    (*pcVar1)();
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103fcd918; end: 103fcd95f; -[SCSnapEditorSendActionContext init] */

void FUN_103fcd918(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCSnapEditorAPI/SnapEditorSendActionContextWrapper.swift",0x38,2,0x41,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fcd960);
  (*pcVar1)();
}



/* Entry: 103fcd960; end: 103fcd963; -[SCSnapEditorSendActionContext copyWithZone:] */

void FUN_103fcd960(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103fcd964; end: 103fcd96b; +[SCSnapEditorSendActionContext sendTo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fcd964(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113040160) = 0;
  *(undefined1 *)(lVar1 + _DAT_113040168) = 2;
  *(undefined8 *)(lVar1 + _DAT_113040170) = 0;
  *(undefined8 *)(lVar1 + _DAT_113040178) = 0;
  *(undefined8 *)(lVar1 + _DAT_113040180) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103fcd96c; end: 103fcd973; +[SCSnapEditorSendActionContext quickSend] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fcd96c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113040160) = 1;
  *(undefined1 *)(lVar1 + _DAT_113040168) = 2;
  *(undefined8 *)(lVar1 + _DAT_113040170) = 0;
  *(undefined8 *)(lVar1 + _DAT_113040178) = 0;
  *(undefined8 *)(lVar1 + _DAT_113040180) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103fcd974; end: 103fcd9f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fcd974(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113040160) = param_3;
  *(undefined1 *)(lVar1 + _DAT_113040168) = 2;
  *(undefined8 *)(lVar1 + _DAT_113040170) = 0;
  *(undefined8 *)(lVar1 + _DAT_113040178) = 0;
  *(undefined8 *)(lVar1 + _DAT_113040180) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103fcd9f8; end: 103fcdae3; +[SCSnapEditorSendActionContext postToStoryWithAddToMyStory:businessProfiles:customStories:ourStory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fcd9f8(long param_1,undefined8 param_2,undefined1 param_3,long param_4,long param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lStack_50;
  long lStack_48;
  
  if (param_4 != 0) {
    uVar2 = 0;
    FUN_103fcdecc(0);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_4,uVar2);
  }
  if (param_5 != 0) {
    uVar2 = 0;
    func_0x0001043f7068(0);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_5,uVar2);
  }
  _swift_getObjCClassMetadata();
  lVar3 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar3 + _DAT_113040160) = 2;
  *(undefined1 *)(lVar3 + _DAT_113040168) = param_3;
  *(long *)(lVar3 + _DAT_113040170) = param_4;
  *(long *)(lVar3 + _DAT_113040178) = param_5;
  *(undefined8 *)(lVar3 + _DAT_113040180) = param_6;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = lVar3;
  lStack_48 = param_1;
  _objc_retain(param_6);
  _objc_msgSendSuper2(&lStack_50,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103fcdae4; end: 103fcdb73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fcdae4(code *param_1,undefined8 param_2,code *param_3,undefined8 param_4,code *param_5)

{
  code *pcVar1;
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + _DAT_113040160) == '\0') {
    (*param_1)();
  }
  else if (*(char *)(unaff_x20 + _DAT_113040160) == '\x01') {
    (*param_3)();
  }
  else {
    if (*(byte *)(unaff_x20 + _DAT_113040168) == 2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103fcdb74);
      (*pcVar1)();
    }
    (*param_5)(*(byte *)(unaff_x20 + _DAT_113040168) & 1,*(undefined8 *)(unaff_x20 + _DAT_113040170)
               ,*(undefined8 *)(unaff_x20 + _DAT_113040178),
               *(undefined8 *)(unaff_x20 + _DAT_113040180));
  }
  return;
}


