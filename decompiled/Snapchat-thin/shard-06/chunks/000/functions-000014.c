/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1043ad200; end: 1043ad2e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ad200(undefined1 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_1130748a8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_1130748b0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_1130748b8) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043ad2e8; end: 1043ad36f; -[SCStoriesTopicMusicInfo initWithIsOriginalSoundTopic:trackMetadata:relatedTrackInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ad2e8(long param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined1 *)(param_1 + _DAT_1130748a8) = param_3;
  *(undefined8 *)(param_1 + _DAT_1130748b0) = param_4;
  *(undefined8 *)(param_1 + _DAT_1130748b8) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 1043ad370; end: 1043ad39f;  */

void FUN_1043ad370(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1043ad3a0(param_1);
  return;
}



/* Entry: 1043ad3a0; end: 1043ad77b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1043ad3a0(undefined1 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  long extraout_x8;
  undefined8 *puVar13;
  long extraout_x8_00;
  long unaff_x20;
  long *plVar14;
  undefined8 *apuStack_d0 [2];
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_90;
  long lStack_88;
  undefined1 auStack_80 [8];
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar9 = unaff_x20;
  _swift_getObjectType();
  lVar8 = 0;
  lStack_a8 = lVar9;
  FUN_1043aa0ac();
  lStack_b0 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b0 + 0x40));
  puVar13 = (undefined8 *)((long)apuStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lVar9 = 0x112f8ae50;
  apuStack_d0[1] = puVar13;
  func_0x0001000285a8(0x112f8ae50,&UNK_10dc00160);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lStack_c0 = (long)puVar13 - extraout_x8_00;
  *(undefined1 *)(unaff_x20 + _DAT_1130748a8) = *param_1;
  lVar9 = 0;
  FUN_1043a86b0();
  puVar13 = (undefined8 *)(param_1 + *(int *)(lVar9 + 0x14));
  lVar10 = 0;
  lStack_b8 = lVar9;
  FUN_1043b1a4c();
  lVar11 = lVar10;
  _objc_allocWithZone();
  *(undefined8 *)(lVar11 + _DAT_1130749c0) = *puVar13;
  uVar4 = puVar13[2];
  puVar1 = (undefined8 *)(lVar11 + _DAT_1130749c8);
  *puVar1 = puVar13[1];
  puVar1[1] = uVar4;
  uVar5 = puVar13[4];
  puVar1 = (undefined8 *)(lVar11 + _DAT_1130749d0);
  *puVar1 = puVar13[3];
  puVar1[1] = uVar5;
  func_0x0001043addd0((undefined1 *)((long)puVar13 + (long)*(int *)(lVar8 + 0x1c)),
                      lVar11 + _DAT_113813568,0x112d36580,&UNK_10d9016d0);
  puVar1 = (undefined8 *)((long)puVar13 + (long)*(int *)(lVar8 + 0x20));
  uVar2 = *puVar1;
  uVar6 = puVar1[1];
  puVar1 = (undefined8 *)(lVar11 + _DAT_113813570);
  *puVar1 = uVar2;
  puVar1[1] = uVar6;
  puVar1 = (undefined8 *)((long)puVar13 + (long)*(int *)(lVar8 + 0x24));
  uVar3 = *puVar1;
  uVar7 = puVar1[1];
  puVar1 = (undefined8 *)(lVar11 + _DAT_113813578);
  *puVar1 = uVar3;
  puVar1[1] = uVar7;
  *(undefined4 *)(lVar11 + _DAT_113813580) =
       *(undefined4 *)((long)puVar13 + (long)*(int *)(lVar8 + 0x28));
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar5);
  lVar9 = lStack_c0;
  func_0x000100de78a0(uVar2,uVar6);
  func_0x000100de78a0(uVar3,uVar7);
  plVar14 = &lStack_70;
  lStack_70 = lVar11;
  lStack_68 = lVar10;
  _objc_msgSendSuper2(plVar14,PTR_s_init_1125d9248);
  *(long **)(unaff_x20 + _DAT_1130748b0) = plVar14;
  func_0x0001043addd0(param_1 + *(int *)(lStack_b8 + 0x18),lVar9,0x112f8ae50,&UNK_10dc00160);
  lVar11 = lVar9;
  (**(code **)(lStack_b0 + 0x30))(lVar9,1,lVar8);
  puVar13 = apuStack_d0[1];
  plVar14 = (long *)0x0;
  if ((int)lVar11 != 1) {
    func_0x000103714ae4(lVar9,apuStack_d0[1]);
    lVar9 = lVar10;
    _objc_allocWithZone();
    *(undefined8 *)(lVar9 + _DAT_1130749c0) = *puVar13;
    uVar4 = puVar13[2];
    puVar1 = (undefined8 *)(lVar9 + _DAT_1130749c8);
    *puVar1 = puVar13[1];
    puVar1[1] = uVar4;
    uVar5 = puVar13[4];
    puVar1 = (undefined8 *)(lVar9 + _DAT_1130749d0);
    *puVar1 = puVar13[3];
    puVar1[1] = uVar5;
    func_0x0001043addd0((long)puVar13 + (long)*(int *)(lVar8 + 0x1c),lVar9 + _DAT_113813568,
                        0x112d36580,&UNK_10d9016d0);
    puVar1 = (undefined8 *)((long)puVar13 + (long)*(int *)(lVar8 + 0x20));
    uVar2 = *puVar1;
    uVar6 = puVar1[1];
    puVar1 = (undefined8 *)(lVar9 + _DAT_113813570);
    *puVar1 = uVar2;
    puVar1[1] = uVar6;
    puVar1 = (undefined8 *)((long)puVar13 + (long)*(int *)(lVar8 + 0x24));
    uVar3 = *puVar1;
    uVar7 = puVar1[1];
    puVar1 = (undefined8 *)(lVar9 + _DAT_113813578);
    *puVar1 = uVar3;
    puVar1[1] = uVar7;
    *(undefined4 *)(lVar9 + _DAT_113813580) =
         *(undefined4 *)((long)puVar13 + (long)*(int *)(lVar8 + 0x28));
    _swift_bridgeObjectRetain(uVar4);
    _swift_bridgeObjectRetain(uVar5);
    func_0x000100de78a0(uVar2,uVar6);
    func_0x000100de78a0(uVar3,uVar7);
    plVar14 = &lStack_90;
    lStack_90 = lVar9;
    lStack_88 = lVar10;
    _objc_msgSendSuper2(plVar14,PTR_s_init_1125d9248);
    func_0x0001043add94(puVar13,FUN_1043aa0ac);
  }
  *(long **)(unaff_x20 + _DAT_1130748b8) = plVar14;
  lStack_78 = lStack_a8;
  puVar12 = auStack_80;
  _objc_msgSendSuper2(puVar12,PTR_s_init_1125d9248);
  func_0x0001043add94(param_1,FUN_1043a86b0);
  return puVar12;
}



/* Entry: 1043ad77c; end: 1043ad84f; -[SCStoriesTopicMusicInfo hash] */

undefined8 FUN_1043ad77c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x0001043ad7b0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1043ad850; end: 1043ad9d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1043ad850(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  long unaff_x20;
  long lVar8;
  long lStack_68;
  long alStack_60 [4];
  
  lVar7 = unaff_x20;
  _swift_getObjectType();
  func_0x0001043addd0(param_1,alStack_60,0x112d387f8,&UNK_10d902650);
  if (alStack_60[3] == 0) {
    func_0x00010006e7f4(alStack_60);
  }
  else {
    plVar3 = &lStack_68;
    _swift_dynamicCast(plVar3,alStack_60,PTR___sypN_11034f1a8 + 8,lVar7,6);
    if (((ulong)plVar3 & 1) != 0) {
      bVar1 = *(byte *)(unaff_x20 + _DAT_1130748a8);
      bVar2 = *(byte *)(lStack_68 + _DAT_1130748a8);
      lVar7 = *(long *)(lStack_68 + _DAT_1130748b0);
      uVar4 = 0;
      FUN_1043b1a4c();
      alStack_60[0] = lVar7;
      alStack_60[3] = uVar4;
      _objc_retain(lVar7);
      plVar3 = alStack_60;
      FUN_1043b06fc(plVar3);
      func_0x00010006e7f4(alStack_60);
      if (*(long *)(unaff_x20 + _DAT_1130748b8) == 0) {
        lVar8 = *(long *)(lStack_68 + _DAT_1130748b8);
        lVar7 = lVar8;
        _objc_retain(lVar8);
        _objc_release(lStack_68);
        if (lVar8 != 0) {
          _objc_release(lVar7);
        }
        uVar6 = (uint)(lVar8 == 0);
      }
      else {
        alStack_60[0] = *(long *)(lStack_68 + _DAT_1130748b8);
        if (alStack_60[0] == 0) {
          uVar4 = 0;
          alStack_60[1] = 0;
          alStack_60[2] = 0;
        }
        alStack_60[3] = uVar4;
        _objc_retain();
        plVar5 = alStack_60;
        FUN_1043b06fc(plVar5);
        uVar6 = (uint)plVar5;
        _objc_release(lStack_68);
        func_0x00010006e7f4(alStack_60);
      }
      if (((bVar1 ^ bVar2) & 1) == 0) {
        uVar6 = (uint)plVar3 & uVar6;
        goto LAB_1043ad9a8;
      }
    }
  }
  uVar6 = 0;
LAB_1043ad9a8:
  return uVar6 & 1;
}



/* Entry: 1043ad9d4; end: 1043ada53; -[SCStoriesTopicMusicInfo isEqual:] */

uint FUN_1043ad9d4(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1043ad850(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1043ada54; end: 1043ada57; -[SCStoriesTopicMusicInfo copyWithZone:] */

void FUN_1043ada54(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1043ada58; end: 1043ada9f; -[SCStoriesTopicMusicInfo description] */

void FUN_1043ada58(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  FUN_1043adaa0();
  _objc_release(param_1);
  uVar1 = 0;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
  _swift_bridgeObjectRelease(0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1043adaa0; end: 1043adcdf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1043adaa0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long extraout_x8;
  undefined1 *puVar10;
  long unaff_x20;
  long lVar11;
  long lVar12;
  undefined8 auStack_70 [2];
  
  lVar8 = 0;
  FUN_1043a86b0();
  lVar9 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  lVar11 = _DAT_113813568;
  puVar10 = (undefined1 *)((long)auStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  *puVar10 = *(undefined1 *)(unaff_x20 + _DAT_1130748a8);
  lVar12 = *(long *)(unaff_x20 + _DAT_1130748b0);
  puVar1 = (undefined8 *)(puVar10 + *(int *)(lVar9 + 0x14));
  *puVar1 = *(undefined8 *)(lVar12 + _DAT_1130749c0);
  uVar4 = ((undefined8 *)(lVar12 + _DAT_1130749c8))[1];
  puVar1[1] = *(undefined8 *)(lVar12 + _DAT_1130749c8);
  puVar1[2] = uVar4;
  auStack_70[0] = ((undefined8 *)(lVar12 + _DAT_1130749d0))[1];
  puVar1[3] = *(undefined8 *)(lVar12 + _DAT_1130749d0);
  puVar1[4] = auStack_70[0];
  lVar9 = 0;
  auStack_70[1] = uVar4;
  FUN_1043aa0ac();
  func_0x0001043addd0(lVar12 + lVar11,(undefined1 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x1c)),
                      0x112d36580,&UNK_10d9016d0);
  uVar4 = *(undefined8 *)(lVar12 + _DAT_113813570);
  uVar5 = ((undefined8 *)(lVar12 + _DAT_113813570))[1];
  puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x20));
  *puVar2 = uVar4;
  puVar2[1] = uVar5;
  uVar3 = *(undefined8 *)(lVar12 + _DAT_113813578);
  uVar6 = ((undefined8 *)(lVar12 + _DAT_113813578))[1];
  puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x24));
  *puVar2 = uVar3;
  puVar2[1] = uVar6;
  *(undefined4 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x28)) =
       *(undefined4 *)(lVar12 + _DAT_113813580);
  iVar7 = *(int *)(lVar8 + 0x18);
  lVar11 = *(long *)(unaff_x20 + _DAT_1130748b8);
  if (lVar11 == 0) {
    (**(code **)(*(long *)(lVar9 + -8) + 0x38))(puVar10 + iVar7,1,1,lVar9);
    _swift_bridgeObjectRetain(auStack_70[1]);
    _swift_bridgeObjectRetain(auStack_70[0]);
    func_0x000100de78a0(uVar4,uVar5);
    func_0x000100de78a0(uVar3,uVar6);
  }
  else {
    _swift_bridgeObjectRetain(auStack_70[1]);
    _swift_bridgeObjectRetain(auStack_70[0]);
    func_0x000100de78a0(uVar4,uVar5);
    func_0x000100de78a0(uVar3,uVar6);
    _objc_retain(lVar11);
    func_0x0001043b0d5c(puVar10 + iVar7);
    (**(code **)(*(long *)(lVar9 + -8) + 0x38))(puVar10 + iVar7,0,1,lVar9);
  }
  func_0x0001043add94(puVar10,FUN_1043a86b0);
  return ZEXT816(0xe000000000000000) << 0x40;
}



/* Entry: 1043adce0; end: 1043add5b; -[SCStoriesTopicMusicInfo init] */

void FUN_1043adce0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCTopicViewerScope/SCStoriesTopicMusicInfoWrapper.swift",0x37,2,0x3c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043add28);
  (*pcVar1)();
}



/* Entry: 1043add5c; end: 1043ade17; -[SCStoriesTopicMusicInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043add5c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130748b0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130748b8));
  return;
}



/* Entry: 1043ade18; end: 1043ade37;  */

void FUN_1043ade18(void)

{
  _objc_opt_self(&PTR_PTR_1129a9888);
  return;
}



/* Entry: 1043ade38; end: 1043ade43; -[SCStoriesTopicLensInfo lensId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ade38(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1130748e8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_1130748e8))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043ade44; end: 1043ade4f; -[SCStoriesTopicLensInfo lensName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ade44(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1130748f0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_1130748f0))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043ade50; end: 1043adee7; -[SCStoriesTopicLensInfo iconURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ade50(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar2 = puVar3;
  (**(code **)(lVar4 + 0x10))(puVar3,param_1 + _DAT_113813518,lVar1);
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1043adee8; end: 1043adef3; -[SCStoriesTopicLensInfo creatorId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043adee8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113813520);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113813520))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043adef4; end: 1043adeff; -[SCStoriesTopicLensInfo creatorName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043adef4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113813528);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113813528))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043adf00; end: 1043adf47;  */

void FUN_1043adf00(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1043adf48; end: 1043adf53; -[SCStoriesTopicLensInfo creatorProId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043adf48(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113813530))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113813530);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043adf54; end: 1043adf63; -[SCStoriesTopicLensInfo isOfficialCreator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1043adf54(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113813538);
}



/* Entry: 1043adf64; end: 1043adf73; -[SCStoriesTopicLensInfo isBusinessCategoryType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1043adf64(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113813540);
}



/* Entry: 1043adf74; end: 1043adf7f; -[SCStoriesTopicLensInfo rankingRequestId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043adf74(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113813548))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113813548);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043adf80; end: 1043adf8b; -[SCStoriesTopicLensInfo rankingRequestInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043adf80(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113813550))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113813550);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043adf8c; end: 1043adf97; -[SCStoriesTopicLensInfo adId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043adf8c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113813558))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113813558);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043adf98; end: 1043adfa3; -[SCStoriesTopicLensInfo adServeItemId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043adf98(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113813560))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113813560);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043adfa4; end: 1043adffb;  */

void FUN_1043adfa4(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043adffc; end: 1043ae3c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1043adffc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined4 param_12,
             undefined4 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_78 [24];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130748e8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130748f0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  lVar2 = _DAT_113813518;
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar3 + -8);
  (**(code **)(lVar5 + 0x10))(unaff_x20 + lVar2,param_5,lVar3);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113813520);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113813528);
  *puVar1 = param_8;
  puVar1[1] = param_9;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113813530);
  *puVar1 = param_10;
  puVar1[1] = param_11;
  *(undefined1 *)(unaff_x20 + _DAT_113813538) = (undefined1)param_12;
  *(undefined1 *)(unaff_x20 + _DAT_113813540) = param_12._1_1_;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113813548);
  *puVar1 = param_14;
  puVar1[1] = param_15;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113813550);
  *puVar1 = param_16;
  puVar1[1] = param_17;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113813558);
  *puVar1 = param_18;
  puVar1[1] = param_19;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113813560);
  *puVar1 = param_20;
  puVar1[1] = param_21;
  puVar4 = auStack_78;
  _objc_msgSendSuper2(puVar4,PTR_s_init_1125d9248);
  (**(code **)(lVar5 + 8))(param_5,lVar3);
  return puVar4;
}



/* Entry: 1043ae3c4; end: 1043ae5bb; -[SCStoriesTopicLensInfo initWithLensId:lensName:iconURL:creatorId:creatorName:creatorProId:isOfficialCreator:isBusinessCategoryType:rankingRequestId:rankingRequestInfo:adId:adServeItemId:] */

void FUN_1043ae3c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  undefined4 param_9,undefined4 param_10,long param_11,long param_12,long param_13,
                  long param_14)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long alStack_130 [3];
  undefined1 auStack_118 [8];
  long alStack_110 [8];
  undefined1 auStack_d0 [8];
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = 0;
  uStack_68 = param_1;
  __s10Foundation3URLVMa();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uStack_78 = param_2;
  uStack_70 = param_3;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uStack_88 = param_2;
  uStack_80 = param_4;
  __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ
            (auStack_d0 + lVar1,param_5);
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uStack_98 = param_2;
  uStack_90 = param_6;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uStack_a8 = param_2;
  uStack_a0 = param_7;
  if (param_8 == 0) {
    uStack_b8 = 0;
    lStack_b0 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_b8 = param_2;
    lStack_b0 = param_8;
  }
  if (param_11 == 0) {
    uStack_c8 = 0;
    lStack_c0 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_c8 = param_2;
    lStack_c0 = param_11;
  }
  if (param_12 == 0) {
    param_12 = 0;
    uVar5 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uVar5 = param_2;
  }
  lVar2 = param_13;
  _objc_retain();
  lVar3 = param_14;
  _objc_retain();
  if (lVar2 == 0) {
    param_13 = 0;
    uVar6 = 0;
    uVar4 = param_2;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uVar4 = param_2;
    _objc_release(lVar2);
    uVar6 = param_2;
  }
  if (lVar3 == 0) {
    param_14 = 0;
    uVar4 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(lVar3);
  }
  *(long *)((long)alStack_110 + lVar1 + 0x30) = param_14;
  *(undefined8 *)((long)alStack_110 + lVar1 + 0x38) = uVar4;
  *(long *)((long)alStack_110 + lVar1 + 0x20) = param_13;
  *(undefined8 *)((long)alStack_110 + lVar1 + 0x28) = uVar6;
  *(long *)((long)alStack_110 + lVar1 + 0x10) = param_12;
  *(undefined8 *)((long)alStack_110 + lVar1 + 0x18) = uVar5;
  *(undefined8 *)((long)alStack_110 + lVar1 + 8) = uStack_c8;
  *(long *)((long)alStack_110 + lVar1) = lStack_c0;
  auStack_118[lVar1 + 1] = param_9._1_1_;
  auStack_118[lVar1] = (undefined1)param_9;
  *(undefined8 *)((long)alStack_130 + lVar1 + 0x10) = uStack_b8;
  *(long *)((long)alStack_130 + lVar1 + 8) = lStack_b0;
  *(undefined8 *)((long)alStack_130 + lVar1) = uStack_a8;
  func_0x0001043ae1e0(uStack_70,uStack_78,uStack_80,uStack_88,auStack_d0 + lVar1,uStack_90,uStack_98
                      ,uStack_a0);
  return;
}



/* Entry: 1043ae5bc; end: 1043ae5eb;  */

void FUN_1043ae5bc(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1043ae5ec(param_1);
  return;
}



/* Entry: 1043ae5ec; end: 1043ae7f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1043ae5ec(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  long unaff_x20;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  _swift_getObjectType();
  uVar3 = param_1[1];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130748e8);
  *puVar1 = *param_1;
  puVar1[1] = uVar3;
  uVar4 = param_1[3];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130748f0);
  *puVar1 = param_1[2];
  puVar1[1] = uVar4;
  lVar10 = 0;
  FUN_1043a7bd4();
  lVar9 = _DAT_113813518;
  iVar7 = *(int *)(lVar10 + 0x18);
  lVar11 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar11 + -8) + 0x10))(unaff_x20 + lVar9,(long)param_1 + (long)iVar7,lVar11)
  ;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x1c));
  uVar5 = puVar1[1];
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_113813520);
  *puVar2 = *puVar1;
  puVar2[1] = uVar5;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x20));
  uVar6 = puVar1[1];
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_113813528);
  *puVar2 = *puVar1;
  puVar2[1] = uVar6;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x24));
  uVar13 = *puVar1;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_113813530);
  puVar2[1] = puVar1[1];
  *puVar2 = uVar13;
  uVar16 = puVar1[1];
  *(undefined1 *)(unaff_x20 + _DAT_113813538) =
       *(undefined1 *)((long)param_1 + (long)*(int *)(lVar10 + 0x28));
  *(undefined1 *)(unaff_x20 + _DAT_113813540) =
       *(undefined1 *)((long)param_1 + (long)*(int *)(lVar10 + 0x2c));
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x30));
  uVar17 = puVar1[1];
  uVar13 = *puVar1;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_113813548);
  puVar2[1] = puVar1[1];
  *puVar2 = uVar13;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x34));
  uVar14 = puVar1[1];
  uVar13 = *puVar1;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_113813550);
  puVar2[1] = puVar1[1];
  *puVar2 = uVar13;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x38));
  uVar13 = puVar1[1];
  uVar15 = *puVar1;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_113813558);
  puVar2[1] = puVar1[1];
  *puVar2 = uVar15;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x3c));
  uVar15 = puVar1[1];
  uVar18 = *puVar1;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_113813560);
  puVar2[1] = puVar1[1];
  *puVar2 = uVar18;
  puVar8 = PTR_s_init_1125d9248;
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar16);
  _swift_bridgeObjectRetain(uVar17);
  _swift_bridgeObjectRetain(uVar14);
  _swift_bridgeObjectRetain(uVar13);
  _swift_bridgeObjectRetain(uVar15);
  puVar12 = &stack0xffffffffffffff90;
  _objc_msgSendSuper2(puVar12,puVar8);
  FUN_1043ae7f8(param_1);
  return puVar12;
}



/* Entry: 1043ae7f8; end: 1043ae833;  */

undefined8 FUN_1043ae7f8(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1043a7bd4();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1043ae834; end: 1043ae867; -[SCStoriesTopicLensInfo hash] */

undefined8 FUN_1043ae834(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1043ae868();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1043ae868; end: 1043aeb1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ae868(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_1130748e8);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_1130748e8))[1]);
  uVar1 = uVar2;
  func_0x00010bfde980();
  _objc_release(uVar2);
  __ss6HasherV8_combineyySuF(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_1130748f0);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_1130748f0))[1]);
  uVar1 = uVar2;
  func_0x00010bfde980();
  _objc_release(uVar2);
  __ss6HasherV8_combineyySuF(uVar1);
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF(_DAT_113813518);
  uVar2 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113813520);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_113813520))[1]);
  uVar1 = uVar2;
  func_0x00010bfde980();
  _objc_release(uVar2);
  __ss6HasherV8_combineyySuF(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113813528);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_113813528))[1]);
  uVar1 = uVar2;
  func_0x00010bfde980();
  _objc_release(uVar2);
  __ss6HasherV8_combineyySuF(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_113813530))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113813530);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_113813538));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_113813540));
  if (((undefined8 *)(unaff_x20 + _DAT_113813548))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113813548);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_113813550))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113813550);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_113813558))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113813558);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_113813560))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113813560);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1043aeb20; end: 1043aef23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1043aeb20(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  long unaff_x20;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_90;
  uint uStack_8c;
  long lStack_88;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar5 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_80);
  if (lStack_68 == 0) {
    func_0x00010006e7f4(auStack_80);
  }
  else {
    plVar6 = &lStack_88;
    _swift_dynamicCast(plVar6,auStack_80,PTR___sypN_11034f1a8 + 8,lVar5,6);
    if (((ulong)plVar6 & 1) != 0) {
      lVar5 = *(long *)(unaff_x20 + _DAT_1130748e8);
      if (lVar5 == *(long *)(lStack_88 + _DAT_1130748e8) &&
          ((long *)(unaff_x20 + _DAT_1130748e8))[1] == ((long *)(lStack_88 + _DAT_1130748e8))[1]) {
        uStack_8c = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uStack_8c = (uint)lVar5;
      }
      lVar5 = *(long *)(unaff_x20 + _DAT_1130748f0);
      if (lVar5 == *(long *)(lStack_88 + _DAT_1130748f0) &&
          ((long *)(unaff_x20 + _DAT_1130748f0))[1] == ((long *)(lStack_88 + _DAT_1130748f0))[1]) {
        uStack_90 = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uStack_90 = (uint)lVar5;
      }
      lVar5 = unaff_x20 + _DAT_113813518;
      __s10Foundation3URLV2eeoiySbAC_ACtFZ(lVar5,lStack_88 + _DAT_113813518);
      lVar8 = *(long *)(unaff_x20 + _DAT_113813520);
      if (lVar8 == *(long *)(lStack_88 + _DAT_113813520) &&
          ((long *)(unaff_x20 + _DAT_113813520))[1] == ((long *)(lStack_88 + _DAT_113813520))[1]) {
        uStack_98 = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uStack_98 = (uint)lVar8;
      }
      lVar8 = *(long *)(unaff_x20 + _DAT_113813528);
      if ((lVar8 == *(long *)(lStack_88 + _DAT_113813528)) &&
         (((long *)(unaff_x20 + _DAT_113813528))[1] == ((long *)(lStack_88 + _DAT_113813528))[1])) {
        uStack_9c = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uStack_9c = (uint)lVar8;
      }
      lVar8 = ((long *)(unaff_x20 + _DAT_113813530))[1];
      lVar9 = ((long *)(lStack_88 + _DAT_113813530))[1];
      uVar13 = (uint)(lVar8 == 0 && lVar9 == 0);
      if ((lVar8 != 0) && (lVar9 != 0)) {
        lVar7 = *(long *)(unaff_x20 + _DAT_113813530);
        if ((lVar7 == *(long *)(lStack_88 + _DAT_113813530)) && (lVar8 == lVar9)) {
          uVar13 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar13 = (uint)lVar7;
        }
      }
      bVar1 = *(byte *)(unaff_x20 + _DAT_113813538);
      bVar2 = *(byte *)(lStack_88 + _DAT_113813538);
      bVar3 = *(byte *)(unaff_x20 + _DAT_113813540);
      bVar4 = *(byte *)(lStack_88 + _DAT_113813540);
      lVar8 = ((long *)(unaff_x20 + _DAT_113813548))[1];
      lVar9 = ((long *)(lStack_88 + _DAT_113813548))[1];
      uVar14 = (uint)(lVar8 == 0 && lVar9 == 0);
      if ((lVar8 != 0) && (lVar9 != 0)) {
        lVar7 = *(long *)(unaff_x20 + _DAT_113813548);
        if ((lVar7 == *(long *)(lStack_88 + _DAT_113813548)) && (lVar8 == lVar9)) {
          uVar14 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar14 = (uint)lVar7;
        }
      }
      lVar8 = ((long *)(unaff_x20 + _DAT_113813550))[1];
      lVar9 = ((long *)(lStack_88 + _DAT_113813550))[1];
      uVar15 = (uint)(lVar8 == 0 && lVar9 == 0);
      if ((lVar8 != 0) && (lVar9 != 0)) {
        lVar7 = *(long *)(unaff_x20 + _DAT_113813550);
        if ((lVar7 == *(long *)(lStack_88 + _DAT_113813550)) && (lVar8 == lVar9)) {
          uVar15 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar15 = (uint)lVar7;
        }
      }
      lVar8 = ((long *)(unaff_x20 + _DAT_113813558))[1];
      lVar9 = ((long *)(lStack_88 + _DAT_113813558))[1];
      uVar11 = (uint)(lVar8 == 0 && lVar9 == 0);
      if ((lVar8 != 0) && (lVar9 != 0)) {
        lVar7 = *(long *)(unaff_x20 + _DAT_113813558);
        if ((lVar7 == *(long *)(lStack_88 + _DAT_113813558)) && (lVar8 == lVar9)) {
          uVar11 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar11 = (uint)lVar7;
        }
      }
      lVar8 = ((long *)(unaff_x20 + _DAT_113813560))[1];
      lVar9 = ((long *)(lStack_88 + _DAT_113813560))[1];
      if (lVar8 == 0) {
        _swift_bridgeObjectRetain(lVar9);
        _objc_release(lStack_88);
        if (lVar9 == 0) {
LAB_1043aeeb4:
          uVar12 = 1;
        }
        else {
          _swift_bridgeObjectRelease(lVar9);
          uVar12 = 0;
        }
      }
      else {
        uVar12 = 0;
        if (lVar9 != 0) {
          lVar7 = *(long *)(unaff_x20 + _DAT_113813560);
          if ((lVar7 == *(long *)(lStack_88 + _DAT_113813560)) && (lVar8 == lVar9)) {
            _objc_release(lStack_88);
            goto LAB_1043aeeb4;
          }
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar12 = (uint)lVar7;
        }
        _objc_release(lStack_88);
      }
      uVar10 = 0;
      if (((((uStack_8c & uStack_90 & uStack_98 & uStack_9c & (uint)lVar5 & uVar13 & 1) != 0) &&
           (((bVar1 ^ bVar2) & 1) == 0)) && (((bVar3 ^ bVar4) & 1) == 0)) &&
         ((((uVar14 ^ 1) & 1) == 0 && (((uVar15 ^ 1) & 1) == 0)))) {
        uVar10 = uVar11 & uVar12;
      }
      goto LAB_1043aebd0;
    }
  }
  uVar10 = 0;
LAB_1043aebd0:
  return uVar10 & 1;
}



/* Entry: 1043aef24; end: 1043aefa3; -[SCStoriesTopicLensInfo isEqual:] */

uint FUN_1043aef24(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1043aeb20(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1043aefa4; end: 1043aefa7; -[SCStoriesTopicLensInfo copyWithZone:] */

void FUN_1043aefa4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1043aefa8; end: 1043af01f; -[SCStoriesTopicLensInfo description] */

void FUN_1043aefa8(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = 0;
  FUN_1043a7bd4();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  _objc_retain(param_1);
  FUN_1043af020(&stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  FUN_1043ae7f8(&stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043af020; end: 1043af20f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043af020(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  uVar2 = ((undefined8 *)(param_2 + _DAT_1130748e8))[1];
  *param_1 = *(undefined8 *)(param_2 + _DAT_1130748e8);
  param_1[1] = uVar2;
  uVar3 = ((undefined8 *)(param_2 + _DAT_1130748f0))[1];
  param_1[2] = *(undefined8 *)(param_2 + _DAT_1130748f0);
  param_1[3] = uVar3;
  lVar9 = _DAT_113813518;
  lVar10 = 0;
  FUN_1043a7bd4();
  iVar7 = *(int *)(lVar10 + 0x18);
  lVar11 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar11 + -8) + 0x10))((long)param_1 + (long)iVar7,param_2 + lVar9,lVar11);
  uVar4 = ((undefined8 *)(param_2 + _DAT_113813520))[1];
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x1c));
  *puVar1 = *(undefined8 *)(param_2 + _DAT_113813520);
  puVar1[1] = uVar4;
  uVar5 = ((undefined8 *)(param_2 + _DAT_113813528))[1];
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x20));
  *puVar1 = *(undefined8 *)(param_2 + _DAT_113813528);
  puVar1[1] = uVar5;
  puVar1 = (undefined8 *)(param_2 + _DAT_113813530);
  uVar16 = *puVar1;
  puVar8 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x24));
  puVar8[1] = puVar1[1];
  *puVar8 = uVar16;
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar10 + 0x28)) =
       *(undefined1 *)(param_2 + _DAT_113813538);
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar10 + 0x2c)) =
       *(undefined1 *)(param_2 + _DAT_113813540);
  uVar12 = puVar1[1];
  puVar1 = (undefined8 *)(param_2 + _DAT_113813548);
  uVar14 = puVar1[1];
  uVar16 = *puVar1;
  puVar8 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x30));
  puVar8[1] = puVar1[1];
  *puVar8 = uVar16;
  puVar1 = (undefined8 *)(param_2 + _DAT_113813550);
  uVar15 = puVar1[1];
  uVar16 = *puVar1;
  puVar8 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x34));
  puVar8[1] = puVar1[1];
  *puVar8 = uVar16;
  puVar1 = (undefined8 *)(param_2 + _DAT_113813558);
  uVar16 = *puVar1;
  puVar8 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x38));
  puVar8[1] = puVar1[1];
  *puVar8 = uVar16;
  uVar13 = puVar1[1];
  uVar16 = *(undefined8 *)(param_2 + _DAT_113813560);
  uVar6 = ((undefined8 *)(param_2 + _DAT_113813560))[1];
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRetain(uVar12);
  _swift_bridgeObjectRetain(uVar14);
  _swift_bridgeObjectRetain(uVar15);
  _swift_bridgeObjectRetain(uVar13);
  _objc_release(param_2);
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x3c));
  *param_1 = uVar16;
  param_1[1] = uVar6;
  return;
}



/* Entry: 1043af210; end: 1043af28b; -[SCStoriesTopicLensInfo init] */

void FUN_1043af210(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCTopicViewerScope/SCStoriesTopicLensInfoWrapper.swift",0x36,2,0x7e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043af258);
  (*pcVar1)();
}



/* Entry: 1043af28c; end: 1043af37b; -[SCStoriesTopicLensInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043af28c(long param_1)

{
  long lVar1;
  long lVar2;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130748e8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130748f0 + 8));
  lVar1 = _DAT_113813518;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + lVar1,lVar2);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113813520 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113813528 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113813530 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113813548 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113813550 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113813558 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113813560 + 8))
  ;
  return;
}



/* Entry: 1043af37c; end: 1043af383;  */

void FUN_1043af37c(void)

{
  if (lRam0000000113074920 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_10e801d18);
  return;
}



/* Entry: 1043af384; end: 1043af3bb;  */

void FUN_1043af384(undefined8 param_1)

{
  if (lRam0000000113074920 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e801d18);
  return;
}



/* Entry: 1043af3bc; end: 1043af453;  */

void FUN_1043af3bc(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_80 = &UNK_10dcf4b90;
  puStack_78 = &UNK_10dcf4b90;
  lVar1 = 0x13f;
  __s10Foundation3URLVMa();
  if (param_2 < 0x40) {
    lStack_70 = *(long *)(lVar1 + -8) + 0x40;
    puStack_68 = &UNK_10dcf4b90;
    puStack_60 = &UNK_10dcf4b90;
    puStack_58 = &UNK_10dcf4ba8;
    puStack_50 = &UNK_10dcf4bc0;
    puStack_48 = &UNK_10dcf4bc0;
    puStack_40 = &UNK_10dcf4ba8;
    puStack_38 = &UNK_10dcf4ba8;
    puStack_30 = &UNK_10dcf4ba8;
    puStack_28 = &UNK_10dcf4ba8;
    _swift_updateClassMetadata2(param_1,0x100,0xc,&puStack_80,param_1 + 0x50);
  }
  return;
}



/* Entry: 1043af454; end: 1043af45f; -[SCStoriesTopicThirdPartyAppInfo appId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043af454(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113074930);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113074930))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043af460; end: 1043af46b; -[SCStoriesTopicThirdPartyAppInfo oAuthClientId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043af460(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113074938);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113074938))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043af46c; end: 1043af477; -[SCStoriesTopicThirdPartyAppInfo appName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043af46c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113074940);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113074940))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043af478; end: 1043af483; -[SCStoriesTopicThirdPartyAppInfo appDeveloper] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043af478(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113074948))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113074948);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043af484; end: 1043af48f; -[SCStoriesTopicThirdPartyAppInfo iTunesAppId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043af484(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113074950);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113074950))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043af490; end: 1043af4d7;  */

void FUN_1043af490(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1043af4d8; end: 1043af4e3; -[SCStoriesTopicThirdPartyAppInfo appIconImageURLString] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043af4d8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113074958))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113074958);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043af4e4; end: 1043af53b;  */

void FUN_1043af4e4(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043af53c; end: 1043af633;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043af53c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113074930);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113074938);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113074940);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113074948);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113074950);
  *puVar1 = param_9;
  puVar1[1] = param_10;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113074958);
  *puVar1 = param_11;
  puVar1[1] = param_12;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043af634; end: 1043af783; -[SCStoriesTopicThirdPartyAppInfo initWithAppId:oAuthClientId:appName:appDeveloper:iTunesAppId:appIconImageURLString:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043af634(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,long param_8)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lStack_70;
  long lStack_68;
  
  lVar3 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  lVar4 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  lVar5 = lVar4;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  if (param_6 == 0) {
    param_6 = 0;
    lVar6 = 0;
    lVar7 = lVar5;
  }
  else {
    lVar6 = lVar5;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lVar7 = lVar6;
  }
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  if (param_8 == 0) {
    param_8 = 0;
    lVar8 = 0;
  }
  else {
    lVar8 = lVar7;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_113074930);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_1 + _DAT_113074938);
  *puVar1 = param_4;
  puVar1[1] = lVar4;
  puVar1 = (undefined8 *)(param_1 + _DAT_113074940);
  *puVar1 = param_5;
  puVar1[1] = lVar5;
  plVar2 = (long *)(param_1 + _DAT_113074948);
  *plVar2 = param_6;
  plVar2[1] = lVar6;
  puVar1 = (undefined8 *)(param_1 + _DAT_113074950);
  *puVar1 = param_7;
  puVar1[1] = lVar7;
  plVar2 = (long *)(param_1 + _DAT_113074958);
  *plVar2 = param_8;
  plVar2[1] = lVar8;
  lStack_70 = param_1;
  lStack_68 = lVar3;
  _objc_msgSendSuper2(&lStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043af784; end: 1043af7b3;  */

void FUN_1043af784(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1043af7b4(param_1);
  return;
}



/* Entry: 1043af7b4; end: 1043af8df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043af7b4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_b0 [16];
  undefined8 uStack_a0;
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
  
  _swift_getObjectType();
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113074930);
  puVar1[1] = uStack_48;
  *puVar1 = uStack_50;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113074938);
  puVar1[1] = uStack_58;
  *puVar1 = uStack_60;
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113074940);
  puVar1[1] = uStack_68;
  *puVar1 = uStack_70;
  uVar2 = param_1[6];
  uStack_88 = param_1[9];
  uStack_90 = param_1[8];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113074948);
  puVar1[1] = param_1[7];
  *puVar1 = uVar2;
  uVar2 = param_1[8];
  uStack_98 = param_1[0xb];
  uStack_a0 = param_1[10];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113074950);
  puVar1[1] = param_1[9];
  *puVar1 = uVar2;
  uVar2 = param_1[10];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113074958);
  puVar1[1] = param_1[0xb];
  *puVar1 = uVar2;
  func_0x000100402194(&uStack_50,auStack_b0);
  func_0x000100402194(&uStack_60,auStack_b0);
  func_0x000100402194(&uStack_70,auStack_b0);
  FUN_1043afd64(&uStack_80,auStack_b0,0x112d35ff8,&UNK_10d900cd0);
  func_0x000100402194(&uStack_90,auStack_b0);
  FUN_1043afd64(&uStack_a0,auStack_b0,0x112d35ff8,&UNK_10d900cd0);
  FUN_1043af8e0(param_1);
  _objc_msgSendSuper2(&stack0xffffffffffffff40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043af8e0; end: 1043af913;  */

undefined8 FUN_1043af8e0(undefined8 param_1)

{
  (*(code *)(undefined *)0x1043ab290)();
  return param_1;
}



/* Entry: 1043af914; end: 1043af947; -[SCStoriesTopicThirdPartyAppInfo hash] */

undefined8 FUN_1043af914(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1043af948();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1043af948; end: 1043afadb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043af948(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113074930);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_113074930))[1]);
  uVar1 = uVar2;
  func_0x00010bfde980();
  _objc_release(uVar2);
  __ss6HasherV8_combineyySuF(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113074938);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_113074938))[1]);
  uVar1 = uVar2;
  func_0x00010bfde980();
  _objc_release(uVar2);
  __ss6HasherV8_combineyySuF(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113074940);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_113074940))[1]);
  uVar1 = uVar2;
  func_0x00010bfde980();
  _objc_release(uVar2);
  __ss6HasherV8_combineyySuF(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_113074948))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113074948);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113074950);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_113074950))[1]);
  uVar1 = uVar2;
  func_0x00010bfde980();
  _objc_release(uVar2);
  __ss6HasherV8_combineyySuF(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_113074958))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113074958);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1043afadc; end: 1043afd63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1043afadc(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  long unaff_x20;
  uint uVar9;
  uint uVar10;
  long lStack_78;
  undefined1 auStack_70 [24];
  long lStack_58;
  
  lVar6 = unaff_x20;
  _swift_getObjectType();
  FUN_1043afd64(param_1,auStack_70,0x112d387f8,&UNK_10d902650);
  if (lStack_58 == 0) {
    func_0x00010006e7f4(auStack_70);
  }
  else {
    plVar4 = &lStack_78;
    _swift_dynamicCast(plVar4,auStack_70,PTR___sypN_11034f1a8 + 8,lVar6,6);
    if (((ulong)plVar4 & 1) != 0) {
      lVar6 = *(long *)(unaff_x20 + _DAT_113074930);
      if (lVar6 == *(long *)(lStack_78 + _DAT_113074930) &&
          ((long *)(unaff_x20 + _DAT_113074930))[1] == ((long *)(lStack_78 + _DAT_113074930))[1]) {
        uVar1 = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uVar1 = (uint)lVar6;
      }
      lVar6 = *(long *)(unaff_x20 + _DAT_113074938);
      if (lVar6 == *(long *)(lStack_78 + _DAT_113074938) &&
          ((long *)(unaff_x20 + _DAT_113074938))[1] == ((long *)(lStack_78 + _DAT_113074938))[1]) {
        uVar2 = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uVar2 = (uint)lVar6;
      }
      lVar6 = *(long *)(unaff_x20 + _DAT_113074940);
      if (lVar6 == *(long *)(lStack_78 + _DAT_113074940) &&
          ((long *)(unaff_x20 + _DAT_113074940))[1] == ((long *)(lStack_78 + _DAT_113074940))[1]) {
        uVar3 = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uVar3 = (uint)lVar6;
      }
      lVar6 = ((long *)(unaff_x20 + _DAT_113074948))[1];
      lVar7 = ((long *)(lStack_78 + _DAT_113074948))[1];
      uVar10 = (uint)(lVar6 == 0 && lVar7 == 0);
      if ((lVar6 != 0) && (lVar7 != 0)) {
        lVar5 = *(long *)(unaff_x20 + _DAT_113074948);
        if ((lVar5 == *(long *)(lStack_78 + _DAT_113074948)) && (lVar6 == lVar7)) {
          uVar10 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar10 = (uint)lVar5;
        }
      }
      lVar6 = *(long *)(unaff_x20 + _DAT_113074950);
      if ((lVar6 == *(long *)(lStack_78 + _DAT_113074950)) &&
         (((long *)(unaff_x20 + _DAT_113074950))[1] == ((long *)(lStack_78 + _DAT_113074950))[1])) {
        uVar8 = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uVar8 = (uint)lVar6;
      }
      lVar6 = ((long *)(unaff_x20 + _DAT_113074958))[1];
      lVar7 = ((long *)(lStack_78 + _DAT_113074958))[1];
      if (lVar6 == 0) {
        _swift_bridgeObjectRetain(lVar7);
        _objc_release(lStack_78);
        if (lVar7 == 0) {
LAB_1043afd08:
          uVar9 = 1;
        }
        else {
          _swift_bridgeObjectRelease(lVar7);
          uVar9 = 0;
        }
      }
      else {
        uVar9 = 0;
        if (lVar7 != 0) {
          lVar5 = *(long *)(unaff_x20 + _DAT_113074958);
          if ((lVar5 == *(long *)(lStack_78 + _DAT_113074958)) && (lVar6 == lVar7)) {
            _objc_release(lStack_78);
            goto LAB_1043afd08;
          }
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar9 = (uint)lVar5;
        }
        _objc_release(lStack_78);
      }
      if ((uVar1 & uVar2 & uVar3 & uVar10 & 1) != 0) {
        uVar8 = uVar8 & uVar9;
        goto LAB_1043afd44;
      }
    }
  }
  uVar8 = 0;
LAB_1043afd44:
  return uVar8 & 1;
}



/* Entry: 1043afd64; end: 1043afdab;  */

undefined8 FUN_1043afd64(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1043afdac; end: 1043afe2b; -[SCStoriesTopicThirdPartyAppInfo isEqual:] */

uint FUN_1043afdac(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1043afadc(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1043afe2c; end: 1043afe2f; -[SCStoriesTopicThirdPartyAppInfo copyWithZone:] */

void FUN_1043afe2c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1043afe30; end: 1043afe63; -[SCStoriesTopicThirdPartyAppInfo description] */

void FUN_1043afe30(void)

{
  undefined1 auStack_70 [96];
  
  FUN_1043aff70(auStack_70);
  FUN_1043af8e0(auStack_70);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043afe64; end: 1043afedf; -[SCStoriesTopicThirdPartyAppInfo init] */

void FUN_1043afe64(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCTopicViewerScope/SCStoriesTopicThirdPartyAppInfoWrapper.swift",0x3f,2,0x4e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043afeac);
  (*pcVar1)();
}



/* Entry: 1043afee0; end: 1043aff6f; -[SCStoriesTopicThirdPartyAppInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043afee0(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113074930 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113074938 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113074940 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113074948 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113074950 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113074958 + 8))
  ;
  return;
}



/* Entry: 1043aff70; end: 1043b0043;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043aff70(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar3 = ((undefined8 *)(param_2 + _DAT_113074930))[1];
  uVar7 = *(undefined8 *)(param_2 + _DAT_113074938);
  uVar4 = ((undefined8 *)(param_2 + _DAT_113074938))[1];
  uVar8 = *(undefined8 *)(param_2 + _DAT_113074940);
  uVar5 = ((undefined8 *)(param_2 + _DAT_113074940))[1];
  puVar1 = (undefined8 *)(param_2 + _DAT_113074948);
  uVar9 = *(undefined8 *)(param_2 + _DAT_113074950);
  uVar6 = ((undefined8 *)(param_2 + _DAT_113074950))[1];
  puVar2 = (undefined8 *)(param_2 + _DAT_113074958);
  *param_1 = *(undefined8 *)(param_2 + _DAT_113074930);
  param_1[1] = uVar3;
  param_1[2] = uVar7;
  param_1[3] = uVar4;
  param_1[4] = uVar8;
  param_1[5] = uVar5;
  uVar7 = puVar1[1];
  uVar8 = *puVar1;
  param_1[7] = puVar1[1];
  param_1[6] = uVar8;
  param_1[8] = uVar9;
  param_1[9] = uVar6;
  uVar8 = puVar2[1];
  uVar9 = *puVar2;
  param_1[0xb] = puVar2[1];
  param_1[10] = uVar9;
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRetain(uVar7);
  _swift_bridgeObjectRetain(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar8);
  return;
}



/* Entry: 1043b0044; end: 1043b0063;  */

void FUN_1043b0044(void)

{
  _objc_opt_self(&PTR_PTR_1129a9a88);
  return;
}



/* Entry: 1043b0064; end: 1043b00af; -[SCStoriesTopicRemixesInfo snapId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b0064(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113074988);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113074988))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043b00b0; end: 1043b00c3; -[SCStoriesTopicRemixesInfo numberOfRemixes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1043b00b0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113074990);
}



/* Entry: 1043b00c4; end: 1043b01a3; -[SCStoriesTopicRemixesInfo initWithSnapId:numberOfRemixes:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b00c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)(param_1 + _DAT_113074988);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_113074990) = param_4;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043b01a4; end: 1043b032b; -[SCStoriesTopicRemixesInfo hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1043b01a4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  uVar2 = *(undefined8 *)(param_1 + _DAT_113074988);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113074988))[1];
  _objc_retain();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  uVar1 = uVar2;
  func_0x00010bfde980();
  _objc_release(uVar2);
  __ss6HasherV8_combineyySuF(uVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_113074990);
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8finalizeSiyF();
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 1043b032c; end: 1043b03ab; -[SCStoriesTopicRemixesInfo isEqual:] */

uint FUN_1043b032c(undefined8 param_1,undefined8 param_2,long param_3)

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
  func_0x0001043b024c(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1043b03ac; end: 1043b03af; -[SCStoriesTopicRemixesInfo copyWithZone:] */

void FUN_1043b03ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1043b03b0; end: 1043b03cb; -[SCStoriesTopicRemixesInfo description] */

void FUN_1043b03b0(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043b03cc; end: 1043b0447; -[SCStoriesTopicRemixesInfo init] */

void FUN_1043b03cc(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCTopicViewerScope/SCStoriesTopicRemixesInfoWrapper.swift",0x39,2,0x38,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043b0414);
  (*pcVar1)();
}



/* Entry: 1043b0448; end: 1043b045b; -[SCStoriesTopicRemixesInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b0448(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113074988 + 8))
  ;
  return;
}



/* Entry: 1043b045c; end: 1043b047b;  */

void FUN_1043b045c(void)

{
  _objc_opt_self(&PTR_PTR_1129a9b78);
  return;
}



/* Entry: 1043b047c; end: 1043b047f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b047c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113074988);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113074990) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043b0480; end: 1043b04af;  */

void FUN_1043b0480(undefined8 param_1)

{
  _objc_allocWithZone();
  func_0x0001043b14fc(param_1);
  return;
}



/* Entry: 1043b04b0; end: 1043b06fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b04b0(void)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long extraout_x8;
  long unaff_x20;
  long lVar6;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [72];
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = auStack_90 + -extraout_x8;
  __ss6HasherVABycfC(auStack_88);
  __ss6HasherV8_combineyys6UInt64VF(*(undefined8 *)(unaff_x20 + _DAT_1130749c0));
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_1130749c8);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar4,((undefined8 *)(unaff_x20 + _DAT_1130749c8))[1]);
  uVar5 = uVar4;
  func_0x00010bfde980();
  _objc_release(uVar4);
  __ss6HasherV8_combineyySuF(uVar5);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_1130749d0);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar4,((undefined8 *)(unaff_x20 + _DAT_1130749d0))[1]);
  uVar5 = uVar4;
  func_0x00010bfde980();
  _objc_release(uVar4);
  __ss6HasherV8_combineyySuF(uVar5);
  FUN_1043b1650(unaff_x20 + _DAT_113813568,puVar3,0x112d36580,&UNK_10d9016d0);
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar6 = *(long *)(lVar1 + -8);
  puVar2 = puVar3;
  (**(code **)(lVar6 + 0x30))(puVar3,1,lVar1);
  if ((int)puVar2 == 1) {
    func_0x0001043b1698(puVar3,0x112d36580,&UNK_10d9016d0);
    puVar3 = (undefined1 *)0x0;
  }
  else {
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
    (**(code **)(lVar6 + 8))(puVar3,lVar1);
    puVar3 = puVar2;
    func_0x00010bfde980(puVar2);
    _objc_release(puVar2);
  }
  __ss6HasherV8_combineyySuF(puVar3);
  if ((ulong)((undefined8 *)(unaff_x20 + _DAT_113813570))[1] >> 0x3c < 0xf) {
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_113813570);
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar5);
    uVar4 = uVar5;
    func_0x00010bfde980();
    _objc_release(uVar5);
  }
  else {
    uVar4 = 0;
  }
  __ss6HasherV8_combineyySuF(uVar4);
  if ((ulong)((undefined8 *)(unaff_x20 + _DAT_113813578))[1] >> 0x3c < 0xf) {
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_113813578);
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar5);
    uVar4 = uVar5;
    func_0x00010bfde980();
    _objc_release(uVar5);
  }
  else {
    uVar4 = 0;
  }
  __ss6HasherV8_combineyySuF(uVar4);
  __ss6HasherV8_combineyys6UInt32VF(*(undefined4 *)(unaff_x20 + _DAT_113813580));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1043b06fc; end: 1043b0e83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1043b06fc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  uint uVar12;
  long lVar13;
  long unaff_x20;
  long lVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  long lVar18;
  uint uVar19;
  long lVar20;
  code *pcVar21;
  uint uStack_b0;
  uint uStack_ac;
  long lStack_a8;
  long lStack_a0;
  long lStack_88;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar8 = unaff_x20;
  _swift_getObjectType();
  lVar9 = 0;
  __s10Foundation3URLVMa();
  lVar13 = *(long *)(lVar9 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar15 = (long)&uStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar20 = 0x112d7e680;
  func_0x0001000285a8(0x112d7e680,&UNK_10d95e350);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar20 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = lVar15 - extraout_x8_00;
  lVar16 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar16 + -8) + 0x40));
  lVar16 = lVar14 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar18 = lVar16 - extraout_x12;
  FUN_1043b1650(param_1,auStack_80,0x112d387f8,&UNK_10d902650);
  if (lStack_68 == 0) {
    func_0x0001043b1698(auStack_80,0x112d387f8,&UNK_10d902650);
    return 0;
  }
  plVar10 = &lStack_88;
  _swift_dynamicCast(plVar10,auStack_80,PTR___sypN_11034f1a8 + 8,lVar8,6);
  if (((ulong)plVar10 & 1) == 0) {
    return 0;
  }
  lStack_a0 = *(long *)(unaff_x20 + _DAT_1130749c0);
  lStack_a8 = *(long *)(lStack_88 + _DAT_1130749c0);
  lVar8 = *(long *)(unaff_x20 + _DAT_1130749c8);
  if ((lVar8 == *(long *)(lStack_88 + _DAT_1130749c8)) &&
     (((long *)(unaff_x20 + _DAT_1130749c8))[1] == ((long *)(lStack_88 + _DAT_1130749c8))[1])) {
    uStack_ac = 0;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
    uStack_ac = (uint)lVar8 ^ 1;
  }
  lVar8 = *(long *)(unaff_x20 + _DAT_1130749d0);
  if ((lVar8 == *(long *)(lStack_88 + _DAT_1130749d0)) &&
     (((long *)(unaff_x20 + _DAT_1130749d0))[1] == ((long *)(lStack_88 + _DAT_1130749d0))[1])) {
    uStack_b0 = 0;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
    uStack_b0 = (uint)lVar8 ^ 1;
  }
  lVar8 = _DAT_113813568;
  FUN_1043b1650(lStack_88 + _DAT_113813568,lVar18,0x112d36580,&UNK_10d9016d0);
  lVar20 = (long)*(int *)(lVar20 + 0x30);
  FUN_1043b1650(unaff_x20 + lVar8,lVar14,0x112d36580,&UNK_10d9016d0);
  FUN_1043b1650(lVar18,lVar14 + lVar20,0x112d36580,&UNK_10d9016d0);
  pcVar21 = *(code **)(lVar13 + 0x30);
  lVar8 = lVar14;
  (*pcVar21)(lVar14,1,lVar9);
  if ((int)lVar8 == 1) {
    func_0x0001043b1698(lVar18,0x112d36580,&UNK_10d9016d0);
    lVar20 = lVar14 + lVar20;
    (*pcVar21)(lVar20,1,lVar9);
    if ((int)lVar20 == 1) {
      func_0x0001043b1698(lVar14,0x112d36580,&UNK_10d9016d0);
      uVar12 = 0;
    }
    else {
LAB_1043b0a3c:
      func_0x0001043b1698(lVar14,0x112d7e680,&UNK_10d95e350);
      uVar12 = 1;
    }
  }
  else {
    FUN_1043b1650(lVar14,lVar16,0x112d36580,&UNK_10d9016d0);
    lVar8 = lVar14 + lVar20;
    (*pcVar21)(lVar8,1,lVar9);
    if ((int)lVar8 == 1) {
      func_0x0001043b1698(lVar18,0x112d36580,&UNK_10d9016d0);
      (**(code **)(lVar13 + 8))(lVar16,lVar9);
      goto LAB_1043b0a3c;
    }
    lVar8 = lVar15;
    (**(code **)(lVar13 + 0x20))(lVar15,lVar14 + lVar20,lVar9);
    func_0x000101553b98();
    lVar20 = lVar16;
    __sSQ2eeoiySbx_xtFZTj(lVar16,lVar15,lVar9,lVar8);
    pcVar21 = *(code **)(lVar13 + 8);
    (*pcVar21)(lVar15,lVar9);
    func_0x0001043b1698(lVar18,0x112d36580,&UNK_10d9016d0);
    (*pcVar21)(lVar16,lVar9);
    func_0x0001043b1698(lVar14,0x112d36580,&UNK_10d9016d0);
    uVar12 = (uint)lVar20 ^ 1;
  }
  uVar1 = *(undefined8 *)(lStack_88 + _DAT_113813570);
  uVar3 = ((undefined8 *)(lStack_88 + _DAT_113813570))[1];
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113813570);
  uVar4 = ((undefined8 *)(unaff_x20 + _DAT_113813570))[1];
  if (uVar4 >> 0x3c < 0xf) {
    if (0xe < uVar3 >> 0x3c) goto LAB_1043b0b4c;
    func_0x000100de78a0(uVar1,uVar3);
    func_0x000100de78a0(uVar1,uVar3);
    func_0x000100de78a0(uVar2,uVar4);
    uVar11 = uVar2;
    func_0x000100e25fcc(uVar2,uVar4,uVar1,uVar3);
    func_0x0001000b44c0(uVar1,uVar3);
    func_0x0001000b44c0(uVar1,uVar3);
    func_0x0001000b44c0(uVar2,uVar4);
    uVar19 = (uint)uVar11 ^ 1;
  }
  else if (uVar3 >> 0x3c < 0xf) {
LAB_1043b0b4c:
    func_0x000100de78a0(uVar1,uVar3);
    func_0x000100de78a0(uVar2,uVar4);
    func_0x0001000b44c0(uVar2,uVar4);
    func_0x0001000b44c0(uVar1,uVar3);
    uVar19 = 1;
  }
  else {
    func_0x000100de78a0(uVar1,uVar3);
    func_0x000100de78a0(uVar2,uVar4);
    func_0x0001000b44c0(uVar2,uVar4);
    uVar19 = 0;
  }
  uVar1 = *(undefined8 *)(lStack_88 + _DAT_113813578);
  uVar3 = ((undefined8 *)(lStack_88 + _DAT_113813578))[1];
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113813578);
  uVar4 = ((undefined8 *)(unaff_x20 + _DAT_113813578))[1];
  if (uVar4 >> 0x3c < 0xf) {
    if (uVar3 >> 0x3c < 0xf) {
      func_0x000100de78a0(uVar1,uVar3);
      func_0x000100de78a0(uVar1,uVar3);
      func_0x000100de78a0(uVar2,uVar4);
      uVar11 = uVar2;
      func_0x000100e25fcc(uVar2,uVar4,uVar1,uVar3);
      uVar17 = (uint)uVar11;
      func_0x0001000b44c0(uVar1,uVar3);
      func_0x0001000b44c0(uVar1,uVar3);
      func_0x0001000b44c0(uVar2,uVar4);
      goto LAB_1043b0cec;
    }
  }
  else if (0xe < uVar3 >> 0x3c) {
    func_0x000100de78a0(uVar1,uVar3);
    func_0x000100de78a0(uVar2,uVar4);
    func_0x0001000b44c0(uVar2,uVar4);
    uVar17 = 1;
    goto LAB_1043b0cec;
  }
  func_0x000100de78a0(uVar1,uVar3);
  func_0x000100de78a0(uVar2,uVar4);
  func_0x0001000b44c0(uVar2,uVar4);
  func_0x0001000b44c0(uVar1,uVar3);
  uVar17 = 0;
LAB_1043b0cec:
  bVar7 = lStack_a0 != lStack_a8;
  iVar5 = *(int *)(unaff_x20 + _DAT_113813580);
  iVar6 = *(int *)(lStack_88 + _DAT_113813580);
  _objc_release();
  if ((((uint)bVar7 | uStack_ac | uStack_b0 | uVar19 | uVar12) & 1) != 0) {
    return 0;
  }
  return uVar17 & iVar5 == iVar6;
}



/* Entry: 1043b0e84; end: 1043b0e93; -[SCStoriesTopicMusicTrackMetadata trackId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1043b0e84(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130749c0);
}



/* Entry: 1043b0e94; end: 1043b0e9f; -[SCStoriesTopicMusicTrackMetadata title] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b0e94(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1130749c8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_1130749c8))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043b0ea0; end: 1043b0eab; -[SCStoriesTopicMusicTrackMetadata artistName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b0ea0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1130749d0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_1130749d0))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043b0eac; end: 1043b0ef3;  */

void FUN_1043b0eac(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1043b0ef4; end: 1043b0fcb; -[SCStoriesTopicMusicTrackMetadata albumArtURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b0ef4(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffd0 + -extraout_x8;
  FUN_1043b1650(param_1 + _DAT_113813568,puVar4,0x112d36580,&UNK_10d9016d0);
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1043b0fcc; end: 1043b0fd7; -[SCStoriesTopicMusicTrackMetadata albumArtEncryptionKey] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b0fcc(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = ((undefined8 *)(param_1 + _DAT_113813570))[1];
  if (uVar2 >> 0x3c < 0xf) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_113813570);
    func_0x00010006c00c(uVar3,uVar2);
    uVar1 = uVar3;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar3,uVar2);
    func_0x0001000b44c0(uVar3,uVar2);
  }
  else {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1043b0fd8; end: 1043b0fe3; -[SCStoriesTopicMusicTrackMetadata albumArtEncryptionIv] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043b0fd8(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = ((undefined8 *)(param_1 + _DAT_113813578))[1];
  if (uVar2 >> 0x3c < 0xf) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_113813578);
    func_0x00010006c00c(uVar3,uVar2);
    uVar1 = uVar3;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar3,uVar2);
    func_0x0001000b44c0(uVar3,uVar2);
  }
  else {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1043b0fe4; end: 1043b1053;  */

void FUN_1043b0fe4(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = ((undefined8 *)(param_1 + *param_3))[1];
  if (uVar2 >> 0x3c < 0xf) {
    uVar3 = *(undefined8 *)(param_1 + *param_3);
    func_0x00010006c00c(uVar3,uVar2);
    uVar1 = uVar3;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar3,uVar2);
    func_0x0001000b44c0(uVar3,uVar2);
  }
  else {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1043b1054; end: 1043b1063; -[SCStoriesTopicMusicTrackMetadata startOffsetMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1043b1054(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_113813580);
}



/* Entry: 1043b1064; end: 1043b12cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1043b1064(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined4 param_11)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130749c0) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130749c8);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130749d0);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  FUN_1043b1650(param_6,unaff_x20 + _DAT_113813568,0x112d36580,&UNK_10d9016d0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113813570);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113813578);
  *puVar1 = param_9;
  puVar1[1] = param_10;
  *(undefined4 *)(unaff_x20 + _DAT_113813580) = param_11;
  puVar2 = auStack_70;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  func_0x0001043b1698(param_6,0x112d36580,&UNK_10d9016d0);
  return puVar2;
}



/* Entry: 1043b12cc; end: 1043b164f; -[SCStoriesTopicMusicTrackMetadata initWithTrackId:title:artistName:albumArtURL:albumArtEncryptionKey:albumArtEncryptionIv:startOffsetMs:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1043b12cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,long param_6,long param_7,long param_8,undefined4 param_9)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined *puVar6;
  ulong uVar7;
  long extraout_x8;
  ulong uVar8;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar4 = param_1;
  uStack_80 = param_3;
  _swift_getObjectType();
  lVar3 = 0x112d36580;
  puVar6 = &UNK_10d9016d0;
  lStack_78 = lVar4;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = (long)&puStack_90 - extraout_x8;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puStack_90 = puVar6;
  uStack_88 = param_4;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  if (param_6 == 0) {
    lVar4 = 0;
    __s10Foundation3URLVMa();
  }
  else {
    __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(lVar3,param_6);
    lVar4 = 0;
    __s10Foundation3URLVMa();
  }
  uVar7 = (ulong)(param_6 == 0);
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(lVar3,uVar7,1);
  if (param_7 == 0) {
    _objc_retain(param_8);
    uVar2 = 0xf000000000000000;
    uVar8 = uVar7;
  }
  else {
    lVar4 = param_7;
    _objc_retain(param_7);
    _objc_retain(param_8);
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    uVar8 = uVar7;
    _objc_release(lVar4);
    uVar2 = uVar7;
  }
  if (param_8 == 0) {
    lVar4 = 0;
    uVar8 = 0xf000000000000000;
  }
  else {
    lVar4 = param_8;
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    _objc_release(param_8);
  }
  *(undefined8 *)(param_1 + _DAT_1130749c0) = uStack_80;
  puVar1 = (undefined8 *)(param_1 + _DAT_1130749c8);
  *puVar1 = uStack_88;
  puVar1[1] = puStack_90;
  puVar1 = (undefined8 *)(param_1 + _DAT_1130749d0);
  *puVar1 = param_5;
  puVar1[1] = puVar6;
  FUN_1043b1650(lVar3,param_1 + _DAT_113813568,0x112d36580,&UNK_10d9016d0);
  plVar5 = (long *)(param_1 + _DAT_113813570);
  *plVar5 = param_7;
  plVar5[1] = uVar2;
  plVar5 = (long *)(param_1 + _DAT_113813578);
  *plVar5 = lVar4;
  plVar5[1] = uVar8;
  *(undefined4 *)(param_1 + _DAT_113813580) = param_9;
  lStack_68 = lStack_78;
  plVar5 = &lStack_70;
  lStack_70 = param_1;
  _objc_msgSendSuper2(plVar5,PTR_s_init_1125d9248);
  func_0x0001043b1698(lVar3,0x112d36580,&UNK_10d9016d0);
  return plVar5;
}



/* Entry: 1043b1650; end: 1043b16d7;  */

undefined8 FUN_1043b1650(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1043b16d8; end: 1043b170b; -[SCStoriesTopicMusicTrackMetadata hash] */

undefined8 FUN_1043b16d8(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1043b04b0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1043b170c; end: 1043b179b; -[SCStoriesTopicMusicTrackMetadata isEqual:] */

uint FUN_1043b170c(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1043b06fc(&uStack_40);
  _objc_release(param_1);
  func_0x0001043b1698(&uStack_40,0x112d387f8,&UNK_10d902650);
  return uVar1 & 1;
}



/* Entry: 1043b179c; end: 1043b179f; -[SCStoriesTopicMusicTrackMetadata copyWithZone:] */

void FUN_1043b179c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1043b17a0; end: 1043b17e7; -[SCStoriesTopicMusicTrackMetadata description] */

void FUN_1043b17a0(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  FUN_1043b17e8();
  _objc_release(param_1);
  uVar1 = 0;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
  _swift_bridgeObjectRelease(0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1043b17e8; end: 1043b193f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1043b17e8(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long extraout_x8;
  undefined8 *puVar11;
  long unaff_x20;
  
  lVar9 = 0;
  FUN_1043aa0ac();
  lVar10 = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
  lVar8 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar11 = (undefined8 *)(&stack0xffffffffffffffa0 + lVar8);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_1130749c8);
  uVar4 = ((undefined8 *)(unaff_x20 + _DAT_1130749c8))[1];
  *puVar11 = *(undefined8 *)(unaff_x20 + _DAT_1130749c0);
  *(undefined8 *)(&stack0xffffffffffffffa8 + lVar8) = uVar2;
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_1130749d0);
  uVar5 = ((undefined8 *)(unaff_x20 + _DAT_1130749d0))[1];
  *(undefined8 *)(&stack0xffffffffffffffb0 + lVar8) = uVar4;
  *(undefined8 *)(&stack0xffffffffffffffb8 + lVar8) = uVar2;
  *(undefined8 *)(&stack0xffffffffffffffc0 + lVar8) = uVar5;
  FUN_1043b1650(unaff_x20 + _DAT_113813568,
                (undefined1 *)((long)puVar11 + (long)*(int *)(lVar10 + 0x1c)),0x112d36580,
                &UNK_10d9016d0);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113813570);
  uVar6 = ((undefined8 *)(unaff_x20 + _DAT_113813570))[1];
  puVar1 = (undefined8 *)((long)puVar11 + (long)*(int *)(lVar9 + 0x20));
  *puVar1 = uVar2;
  puVar1[1] = uVar6;
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_113813578);
  uVar7 = ((undefined8 *)(unaff_x20 + _DAT_113813578))[1];
  puVar1 = (undefined8 *)((long)puVar11 + (long)*(int *)(lVar9 + 0x24));
  *puVar1 = uVar3;
  puVar1[1] = uVar7;
  *(undefined4 *)((long)puVar11 + (long)*(int *)(lVar9 + 0x28)) =
       *(undefined4 *)(unaff_x20 + _DAT_113813580);
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar5);
  func_0x000100de78a0(uVar2,uVar6);
  func_0x000100de78a0(uVar3,uVar7);
  FUN_1043a9808(puVar11);
  return ZEXT816(0xe000000000000000) << 0x40;
}



/* Entry: 1043b1940; end: 1043b19bb; -[SCStoriesTopicMusicTrackMetadata init] */

void FUN_1043b1940(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCTopicViewerScope/SCStoriesTopicMusicTrackMetadataWrapper.swift",0x40,2,0x54,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043b1988);
  (*pcVar1)();
}


