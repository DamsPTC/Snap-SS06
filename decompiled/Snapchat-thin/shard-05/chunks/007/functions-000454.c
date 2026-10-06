/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104012c18; end: 104012c23; -[SCTinselMediaEncryptionInfo key] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104012c18(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_113046d48);
  uVar2 = ((undefined8 *)(param_1 + _DAT_113046d48))[1];
  func_0x00010006c00c(uVar1,uVar2);
  uVar3 = uVar1;
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar1,uVar2);
  func_0x00010006c090(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104012c24; end: 104012c2f; -[SCTinselMediaEncryptionInfo iv] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104012c24(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_113046d50);
  uVar2 = ((undefined8 *)(param_1 + _DAT_113046d50))[1];
  func_0x00010006c00c(uVar1,uVar2);
  uVar3 = uVar1;
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar1,uVar2);
  func_0x00010006c090(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104012c30; end: 104012c87;  */

void FUN_104012c30(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + *param_3);
  uVar2 = ((undefined8 *)(param_1 + *param_3))[1];
  func_0x00010006c00c(uVar1,uVar2);
  uVar3 = uVar1;
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar1,uVar2);
  func_0x00010006c090(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104012c88; end: 104012d7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104012c88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113046d48);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113046d50);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104012d80; end: 104012e47; -[SCTinselMediaEncryptionInfo initWithKey:iv:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104012d80(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_1;
  _swift_getObjectType();
  uVar3 = param_3;
  _objc_retain(param_3);
  _objc_retain();
  __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
  uVar4 = param_2;
  _objc_release(uVar3);
  uVar3 = param_4;
  __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
  _objc_release(param_4);
  puVar1 = (undefined8 *)(param_1 + _DAT_113046d48);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_1 + _DAT_113046d50);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  lStack_60 = param_1;
  lStack_58 = lVar2;
  _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104012e48; end: 104012e73; -[SCTinselMediaEncryptionInfo init] */

void FUN_104012e48(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("Tinsel.TinselMediaEncryptionInfo",0x20,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104012e74);
  (*pcVar1)();
}



/* Entry: 104012e74; end: 104012eb3; -[SCTinselMediaEncryptionInfo .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000104012e94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104012e98) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104012e74(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = ((undefined8 *)(param_1 + _DAT_113046d48))[1];
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_113046d48));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 104012eb4; end: 104012eff; -[SCTinselExternalContentMetadata tinselMedia] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104012eb4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113046d58);
  FUN_10401523c();
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104012f00; end: 104012f57; -[SCTinselExternalContentMetadata mediaEncryptionInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104012f00(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_113046d60);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000104015488();
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 104012f58; end: 10401301f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104012f58(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113046d58) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113046d60) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104013020; end: 1040130b7; -[SCTinselExternalContentMetadata initWithTinselMedia:mediaEncryptionInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104013020(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  _swift_getObjectType();
  lVar2 = lVar1;
  FUN_10401523c();
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_3,lVar2);
  if (param_4 == 0) {
    param_4 = 0;
  }
  else {
    uVar3 = param_3;
    func_0x000104015488();
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_4,uVar3);
  }
  *(undefined8 *)(param_1 + _DAT_113046d58) = param_3;
  *(long *)(param_1 + _DAT_113046d60) = param_4;
  lStack_40 = param_1;
  lStack_38 = lVar1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1040130b8; end: 1040131cb;  */

/* WARNING: Removing unreachable block (ram,0x000104013190) */

undefined1  [16] FUN_1040130b8(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined *puVar5;
  long extraout_x8;
  undefined8 unaff_x20;
  undefined1 auVar6 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [8];
  ulong uStack_48;
  
  lVar1 = 0;
  __s10Foundation11JSONEncoderC16OutputFormattingVMa();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar1 = 0;
  __s10Foundation11JSONEncoderCMa();
  uVar4 = (ulong)*(uint *)(lVar1 + 0x30);
  _swift_allocObject();
  __s10Foundation11JSONEncoderCACycfc();
  __s10Foundation11JSONEncoderC16OutputFormattingV10sortedKeysAEvgZ
            (auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  __s10Foundation11JSONEncoderC16outputFormattingAC06OutputD0VvsTj
            (auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  _objc_retain();
  FUN_104014bf8();
  uVar2 = unaff_x20;
  uStack_48 = uVar4;
  FUN_104015124();
  puVar5 = &UNK_1107354a0;
  puVar3 = auStack_50;
  __s10Foundation11JSONEncoderC6encodeyAA4DataVxKSERzlFTj(puVar3,&UNK_1107354a0,uVar2);
  _swift_release(lVar1);
  _swift_bridgeObjectRelease(unaff_x20);
  _swift_bridgeObjectRelease(uVar4);
  auVar6._8_8_ = puVar5;
  auVar6._0_8_ = puVar3;
  return auVar6;
}



/* Entry: 1040131cc; end: 1040131d7; -[SCTinselExternalContentMetadata serialize] */

void FUN_1040131cc(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1040130b8();
  _objc_release(param_1);
  if (param_2 >> 0x3c < 0xf) {
    uVar2 = uVar1;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar1,param_2);
    func_0x0001000b44c0(uVar1,param_2);
  }
  else {
    uVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1040131d8; end: 104013313;  */

void FUN_1040131d8(undefined8 param_1,ulong param_2,code *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  uVar1 = param_1;
  (*param_3)();
  _objc_release(param_1);
  if (param_2 >> 0x3c < 0xf) {
    uVar2 = uVar1;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar1,param_2);
    func_0x0001000b44c0(uVar1,param_2);
  }
  else {
    uVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104013314; end: 104013867;  */

/* WARNING: Removing unreachable block (ram,0x00010401337c) */
/* WARNING: Removing unreachable block (ram,0x0001040135e0) */
/* WARNING: Removing unreachable block (ram,0x00010401360c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104013314(undefined *param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  undefined8 *puVar18;
  ulong uVar19;
  long lVar20;
  undefined *puStack_130;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar15 = *(ulong *)(param_1 + 0x10);
  puVar9 = param_1;
  puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar15 != 0) {
    uVar19 = 0;
    do {
      lVar20 = uVar15 - uVar19;
      lVar17 = 0;
      if (uVar19 <= uVar15) {
        lVar17 = lVar20;
      }
      puVar18 = (undefined8 *)(param_1 + uVar19 * 0x10 + 0x28);
      while( true ) {
        uVar19 = uVar19 + 1;
        if (lVar17 == 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x104013864);
          (*pcVar7)();
        }
        puVar13 = (undefined *)puVar18[-1];
        uVar2 = *puVar18;
        __s10Foundation11JSONDecoderCMa();
        _swift_allocObject();
        puVar9 = puVar13;
        func_0x00010006c00c(puVar13,uVar2);
        __s10Foundation11JSONDecoderCACycfc();
        puVar12 = puVar9;
        FUN_10401470c();
        puVar8 = &UNK_110735520;
        __s10Foundation11JSONDecoderC6decode_4fromxxm_AA4DataVtKSeRzlFTj
                  (&uStack_f8,&UNK_110735520,puVar13,uVar2,&UNK_110735520,puVar12);
        uStack_88 = uStack_d0;
        uStack_90 = uStack_d8;
        uStack_78 = uStack_c0;
        uStack_80 = uStack_c8;
        uStack_70 = uStack_b8;
        uStack_a8 = uStack_f0;
        uStack_b0 = uStack_f8;
        uStack_98 = uStack_e0;
        uStack_a0 = uStack_e8;
        FUN_104011f20();
        func_0x00010006c090(puVar13,uVar2);
        FUN_1040146e0(&uStack_b0);
        _swift_release();
        if (puVar8 != (undefined *)0x0) break;
        lVar17 = lVar17 + -1;
        puVar18 = puVar18 + 2;
        lVar20 = lVar20 + -1;
        if (lVar20 == 0) goto joined_r0x000104013548;
      }
      puVar9 = puVar14;
      _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
      if ((((int)puVar9 == 0) || ((long)puVar14 < 0)) || (((ulong)puVar14 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar14 >> 0x3e == 0) {
          puVar13 = *(undefined **)(((ulong)puVar14 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar13 = (undefined *)((ulong)puVar14 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar14) {
            puVar13 = puVar14;
          }
          __ss18_CocoaArrayWrapperV8endIndexSivg(puVar13);
        }
        puVar9 = (undefined *)0x0;
        FUN_1040140f0(0,puVar13 + 1,1,puVar14,FUN_10401523c,0x112df4198,&UNK_10d9c2988);
        puVar14 = puVar9;
      }
      uVar16 = (ulong)puVar14 & 0xffffffffffffff8;
      uVar1 = *(ulong *)(uVar16 + 0x10);
      if (*(ulong *)(uVar16 + 0x18) >> 1 <= uVar1) {
        puVar9 = (undefined *)(ulong)(1 < *(ulong *)(uVar16 + 0x18));
        FUN_1040140f0(puVar9,uVar1 + 1,1,puVar14,FUN_10401523c,0x112df4198,&UNK_10d9c2988);
        uVar16 = (ulong)puVar9 & 0xffffffffffffff8;
        puVar14 = puVar9;
      }
      *(ulong *)(uVar16 + 0x10) = uVar1 + 1;
      *(undefined **)(uVar16 + uVar1 * 8 + 0x20) = puVar8;
    } while (lVar20 != 1);
  }
joined_r0x000104013548:
  if (param_2 == 0) {
    puStack_130 = (undefined *)0x0;
  }
  else {
    puVar9 = (undefined *)0x0;
    __s10Foundation11JSONDecoderCMa();
    _swift_allocObject();
    __s10Foundation11JSONDecoderCACycfc();
    uVar15 = *(ulong *)(param_2 + 0x10);
    if (uVar15 == 0) {
      puStack_130 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      uVar19 = 0;
      puStack_130 = PTR___swiftEmptyArrayStorage_11034f1c8;
      do {
        lVar20 = uVar15 - uVar19;
        lVar17 = 0;
        if (uVar19 <= uVar15) {
          lVar17 = lVar20;
        }
        puVar18 = (undefined8 *)(param_2 + 0x28 + uVar19 * 0x10);
        uVar19 = uVar19 + 1;
        if (lVar17 == 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x104013868);
          (*pcVar7)();
        }
        uVar2 = puVar18[-1];
        uVar3 = *puVar18;
        uVar10 = uVar2;
        func_0x00010006c00c(uVar2,uVar3);
        FUN_104015cfc();
        puVar13 = &UNK_1107355b0;
        __s10Foundation11JSONDecoderC6decode_4fromxxm_AA4DataVtKSeRzlFTj
                  (&uStack_f8,&UNK_1107355b0,uVar2,uVar3,&UNK_1107355b0,uVar10);
        uVar6 = uStack_e0;
        uVar5 = uStack_e8;
        uVar4 = uStack_f0;
        uVar10 = uStack_f8;
        func_0x000104015488();
        puVar12 = puVar13;
        _objc_allocWithZone();
        puVar18 = (undefined8 *)(puVar12 + _DAT_113046d48);
        *puVar18 = uVar10;
        puVar18[1] = uVar4;
        puVar18 = (undefined8 *)(puVar12 + _DAT_113046d50);
        *puVar18 = uVar5;
        puVar18[1] = uVar6;
        func_0x00010006c00c(uVar10);
        func_0x00010006c00c(uVar5,uVar6);
        func_0x00010006c00c(uVar10,uVar4);
        func_0x00010006c00c(uVar5,uVar6);
        ppuVar11 = &puStack_120;
        puStack_120 = puVar12;
        puStack_118 = puVar13;
        _objc_msgSendSuper2(ppuVar11,PTR_s_init_1125d9248);
        func_0x00010006c090(uVar2,uVar3);
        func_0x00010006c090(uVar10,uVar4);
        func_0x00010006c090(uVar5,uVar6);
        func_0x00010006c090(uVar5,uVar6);
        func_0x00010006c090(uVar10,uVar4);
        puVar13 = puStack_130;
        _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
        if ((((int)puVar13 == 0) || ((long)puStack_130 < 0)) ||
           (((ulong)puStack_130 >> 0x3e & 1) != 0)) {
          if ((ulong)puStack_130 >> 0x3e == 0) {
            puVar13 = *(undefined **)(((ulong)puStack_130 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar13 = (undefined *)((ulong)puStack_130 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puStack_130) {
              puVar13 = puStack_130;
            }
            __ss18_CocoaArrayWrapperV8endIndexSivg(puVar13);
          }
          puVar12 = (undefined *)0x0;
          FUN_1040140f0(0,puVar13 + 1,1,puStack_130,0x104015488,0x112df41d0,&UNK_10d9c29a8);
          puStack_130 = puVar12;
        }
        uVar16 = (ulong)puStack_130 & 0xffffffffffffff8;
        uVar1 = *(ulong *)(uVar16 + 0x10);
        if (*(ulong *)(uVar16 + 0x18) >> 1 <= uVar1) {
          puVar13 = (undefined *)(ulong)(1 < *(ulong *)(uVar16 + 0x18));
          FUN_1040140f0(puVar13,uVar1 + 1,1,puStack_130,0x104015488,0x112df41d0,&UNK_10d9c29a8);
          uVar16 = (ulong)puVar13 & 0xffffffffffffff8;
          puStack_130 = puVar13;
        }
        *(ulong *)(uVar16 + 0x10) = uVar1 + 1;
        *(undefined ***)(uVar16 + uVar1 * 8 + 0x20) = ppuVar11;
      } while (lVar20 != 1);
    }
    _swift_release();
  }
  func_0x0001040154a8();
  puVar13 = puVar9;
  _objc_allocWithZone();
  *(undefined **)(puVar13 + _DAT_113046d58) = puVar14;
  *(undefined **)(puVar13 + _DAT_113046d60) = puStack_130;
  puStack_110 = puVar13;
  puStack_108 = puVar9;
  _objc_msgSendSuper2(&puStack_110,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104013868; end: 10401396b; +[SCTinselExternalContentMetadata deserializeFrom:] */

/* WARNING: Removing unreachable block (ram,0x0001040138f4) */

void FUN_104013868(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ(param_3);
  _objc_release(uVar1);
  uVar2 = 0;
  __s10Foundation11JSONDecoderCMa();
  _swift_allocObject();
  __s10Foundation11JSONDecoderCACycfc();
  uVar1 = uVar2;
  func_0x000104015164();
  __s10Foundation11JSONDecoderC6decode_4fromxxm_AA4DataVtKSeRzlFTj
            (&uStack_50,&UNK_1107354a0,param_3,param_2,&UNK_1107354a0,uVar1);
  uVar1 = uStack_50;
  FUN_104013314(uStack_50,uStack_48);
  func_0x00010006c090(param_3,param_2);
  _swift_release(uVar2);
  _swift_bridgeObjectRelease(uStack_50);
  _swift_bridgeObjectRelease(uStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10401396c; end: 1040139cb; -[SCTinselExternalContentMetadata init] */

void FUN_10401396c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("Tinsel.TinselExternalContentMetadata",0x24,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104013998);
  (*pcVar1)();
}



/* Entry: 1040139cc; end: 104013a03; -[SCTinselExternalContentMetadata .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040139cc(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113046d58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113046d60));
  return;
}



/* Entry: 104013a04; end: 104013b8b;  */

void FUN_104013a04(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long extraout_x8;
  long unaff_x21;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_70 [15];
  undefined1 uStack_61;
  undefined8 uStack_58;
  
  lVar1 = 0x113046e68;
  func_0x0001000285a8(0x113046e68,&UNK_10dcc2c60);
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_70 + -extraout_x8;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar2);
  FUN_104015a88();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (puVar4,&UNK_110735648,&UNK_110735648,param_1,uVar2,uVar3);
  uStack_61 = 0;
  uVar2 = 0x112dc6598;
  uStack_58 = param_2;
  func_0x0001000285a8(0x112dc6598,&UNK_10d9bc300);
  uVar3 = 0x113046e78;
  FUN_104015c8c(0x113046e78,&SUB_101480d6c,PTR___sSayxGSEsSERzlMc_11034dce0);
  __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
            (&uStack_58,&uStack_61,lVar1,uVar2,uVar3);
  if (unaff_x21 == 0) {
    uStack_61 = 1;
    uStack_58 = param_3;
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyyqd__Sg_xtKSERd__lF
              (&uStack_58,&uStack_61,lVar1,uVar2,uVar3);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
  else {
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
  return;
}



/* Entry: 104013b8c; end: 104013cff;  */

void FUN_104013b8c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  long unaff_x21;
  long lVar4;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_51;
  
  lVar3 = 0x113046ee0;
  uStack_80 = param_4;
  uStack_78 = param_5;
  func_0x0001000285a8(0x113046ee0,&UNK_10dcc2f18);
  lVar4 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar1);
  FUN_104016474();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            ((long)&uStack_80 - extraout_x8,&UNK_110735768,&UNK_110735768,param_1,uVar1,uVar2);
  uStack_51 = 0;
  uStack_70 = param_2;
  uStack_68 = param_3;
  func_0x00010006c00c(param_2,param_3);
  func_0x000101480d6c();
  __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
            (&uStack_70,&uStack_51,lVar3,PTR___s10Foundation4DataVN_110350ae0,param_2);
  func_0x00010006c090(uStack_70,uStack_68);
  if (unaff_x21 == 0) {
    uStack_70 = uStack_80;
    uStack_68 = uStack_78;
    uStack_51 = 1;
    func_0x00010006c00c();
    __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
              (&uStack_70,&uStack_51,lVar3,PTR___s10Foundation4DataVN_110350ae0,param_2);
    func_0x00010006c090(uStack_70,uStack_68);
  }
  (**(code **)(lVar4 + 8))((long)&uStack_80 - extraout_x8,lVar3);
  return;
}



/* Entry: 104013d00; end: 104013d4b;  */

undefined1  [16] FUN_104013d00(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  undefined1 auVar3 [16];
  
  uVar1 = 0xd000000000000017;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x654d6c65736e6974;
  }
  uVar2 = 0x800000010f1ddac0;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xef61746144616964;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 104013d4c; end: 104013e33;  */

void FUN_104013d4c(undefined1 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined1 uVar2;
  
  uVar1 = 0;
  if ((param_2 == 0x654d6c65736e6974 && param_3 == -0x109e8b9ebb9e969c) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x654d6c65736e6974,0xef61746144616964,param_2,param_3,0), (uVar1 & 1) != 0)) {
    _swift_bridgeObjectRelease(param_3);
    uVar2 = 0;
  }
  else if ((param_2 == -0x2fffffffffffffe9) && (param_3 == -0x7ffffffef0e22540)) {
    _swift_bridgeObjectRelease(0x800000010f1ddac0);
    uVar2 = 1;
  }
  else {
    uVar1 = 0xd000000000000017;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0xd000000000000017,0x800000010f1ddac0,param_2,param_3,0);
    _swift_bridgeObjectRelease(param_3);
    uVar2 = 1;
    if ((uVar1 & 1) == 0) {
      uVar2 = 2;
    }
  }
  *param_1 = uVar2;
  return;
}



/* Entry: 104013e34; end: 104013e3f;  */

undefined1  [16] FUN_104013e34(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 104013e40; end: 104013e8f;  */

void FUN_104013e40(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_104015a88();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 104013e90; end: 104013eb7;  */

void FUN_104013e90(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x21;
  
  FUN_104015ac8();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
  }
  return;
}



/* Entry: 104013eb8; end: 104013ecf;  */

void FUN_104013eb8(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_104013a04(param_1,*unaff_x20,unaff_x20[1]);
  return;
}



/* Entry: 104013ed0; end: 104013f53;  */

void FUN_104013ed0(void)

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



/* Entry: 104013f54; end: 104013f7b;  */

undefined1  [16] FUN_104013f54(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  undefined1 auVar3 [16];
  
  uVar1 = 0x7669;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x79656b;
  }
  uVar2 = 0xe200000000000000;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xe300000000000000;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 104013f7c; end: 10401404b;  */

void FUN_104013f7c(undefined1 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined1 uVar2;
  
  if (param_2 != 0x79656b || param_3 != -0x1d00000000000000) {
    uVar1 = 0x79656b;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0x79656b,0xe300000000000000,param_2,param_3,0);
    if ((uVar1 & 1) == 0) {
      if ((param_2 == 0x7669) && (param_3 == -0x1e00000000000000)) {
        _swift_bridgeObjectRelease(0xe200000000000000);
        uVar2 = 1;
      }
      else {
        uVar1 = 0x7669;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x7669,0xe200000000000000,param_2,param_3,0);
        _swift_bridgeObjectRelease(param_3);
        uVar2 = 1;
        if ((uVar1 & 1) == 0) {
          uVar2 = 2;
        }
      }
      goto LAB_104013fdc;
    }
  }
  _swift_bridgeObjectRelease(param_3);
  uVar2 = 0;
LAB_104013fdc:
  *param_1 = uVar2;
  return;
}



/* Entry: 10401404c; end: 104014057;  */

undefined1  [16] FUN_10401404c(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 104014058; end: 1040140a7;  */

void FUN_104014058(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_104016474();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 1040140a8; end: 1040140d3;  */

void FUN_1040140a8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x21;
  
  FUN_10401629c();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[2] = param_4;
    param_1[3] = param_5;
  }
  return;
}



/* Entry: 1040140d4; end: 1040140ef;  */

void FUN_1040140d4(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_104013b8c(param_1,*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3]);
  return;
}



/* Entry: 1040140f0; end: 10401423b;  */

ulong FUN_1040140f0(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7)

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
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10401423c);
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
    __ss18_CocoaArrayWrapperV8endIndexSivg(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_10401423c(uVar2,uVar4,param_5,param_6,param_7);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104014238);
      (*pcVar1)();
    }
    FUN_1040142c8(0,uVar2,uVar3 + 0x20,param_4,param_5);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      _memmove(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    _swift_bridgeObjectRelease(param_4);
  }
  return uVar3;
}



/* Entry: 10401423c; end: 1040142c7;  */

undefined *
FUN_10401423c(long param_1,long param_2,undefined *param_3,undefined8 param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    FUN_1040143c8(param_3,param_4,param_5);
    _swift_allocObject();
    puVar1 = param_3;
    _malloc_size();
    puVar2 = puVar1 + -0x19;
    if (0x1f < (long)puVar1) {
      puVar2 = puVar1 + -0x20;
    }
    *(long *)(param_3 + 0x10) = param_1;
    *(ulong *)(param_3 + 0x18) = ((long)puVar2 >> 3) << 1 | 1;
    puVar2 = param_3;
  }
  return puVar2;
}



/* Entry: 1040142c8; end: 1040143c7;  */

long FUN_1040142c8(long param_1,long param_2,long param_3,ulong param_4,code *param_5)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = param_1;
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1040143c4);
      (*pcVar2)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1040143c8);
        (*pcVar2)();
      }
      lVar3 = param_1;
      (*param_5)();
      lVar4 = param_1;
      do {
        lVar5 = lVar4 + 1;
        __ss12_ArrayBufferV18_typeCheckSlowPathyySiF(lVar4,param_4,lVar3);
        lVar4 = lVar5;
      } while (param_2 != lVar5);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      (*param_5)();
      _swift_arrayInitWithCopy
                (param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,param_2 - param_1,lVar5)
      ;
      _swift_bridgeObjectRelease(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1040143c0);
    (*pcVar2)();
  }
  uVar1 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar1 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar1);
  return param_1;
}



/* Entry: 1040143c8; end: 10401442f;  */

void FUN_1040143c8(code *param_1,ulong *param_2,long *param_3)

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



/* Entry: 104014430; end: 10401443f;  */

undefined1  [16] FUN_104014430(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 7) {
    uVar1 = param_1;
  }
  auVar2[8] = 6 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 104014440; end: 10401469f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104014440(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = *(undefined8 *)(param_2 + _DAT_113046cf0);
  uVar11 = *(undefined8 *)(param_2 + _DAT_113046cf8);
  uVar1 = *(undefined8 *)(param_2 + _DAT_113046ce8);
  uVar2 = ((undefined8 *)(param_2 + _DAT_113046ce8))[1];
  lVar7 = *(long *)(param_2 + _DAT_113046d00);
  if (lVar7 == 0) {
    _swift_bridgeObjectRetain(uVar2);
    uVar3 = param_3;
  }
  else {
    puVar8 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
    _objc_opt_self();
    _swift_bridgeObjectRetain(uVar2);
    _objc_retain(lVar7);
    func_0x00010bf09780();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = 0;
    _objc_retain(0);
    if (puVar8 != (undefined *)0x0) {
      puVar9 = puVar8;
      __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
      uVar3 = param_3;
      _objc_release(puVar8);
      _objc_release(lVar7);
      goto LAB_10401456c;
    }
    uVar5 = uVar3;
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
    _objc_release(uVar3);
    _swift_willThrow();
    _objc_release(lVar7);
    _swift_errorRelease(uVar5);
    uVar3 = param_3;
  }
  puVar9 = (undefined *)0x0;
  param_3 = 0xf000000000000000;
LAB_10401456c:
  lVar7 = *(long *)(param_2 + _DAT_113046d08);
  if (lVar7 == 0) {
    _objc_release(param_2);
    uVar3 = 0xf000000000000000;
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
    _objc_opt_self();
    _objc_retain(lVar7);
    func_0x00010bf09780();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = 0;
    _objc_retain(0);
    if (puVar4 == (undefined *)0x0) {
      uVar3 = uVar5;
      __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
      _objc_release(uVar5);
      _swift_willThrow();
      _objc_release(param_2);
      _objc_release(lVar7);
      _swift_errorRelease(uVar3);
      puVar8 = (undefined *)0x0;
      uVar3 = 0xf000000000000000;
    }
    else {
      puVar8 = puVar4;
      __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
      _objc_release(puVar4);
      _objc_release(param_2);
      _objc_release(lVar7);
    }
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar10;
  param_1[3] = uVar11;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[5] = puVar9;
  param_1[6] = param_3;
  param_1[7] = puVar8;
  param_1[8] = uVar3;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
    if (puRam0000000113046d10 == (undefined *)0x0) {
      puVar8 = &UNK_10dcc2c1c;
      _swift_getWitnessTable(&UNK_10dcc2c1c,&UNK_110735520);
      puRam0000000113046d10 = puVar8;
      return;
    }
    return;
  }
  return;
}



/* Entry: 1040146a0; end: 1040146df;  */

void FUN_1040146a0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113046d10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc2c1c;
  _swift_getWitnessTable(&UNK_10dcc2c1c,&UNK_110735520);
  puRam0000000113046d10 = puVar1;
  return;
}



/* Entry: 1040146e0; end: 10401470b;  */

undefined8 FUN_1040146e0(undefined8 param_1)

{
  FUN_104015650(param_1,&UNK_110735520);
  return param_1;
}



/* Entry: 10401470c; end: 10401474b;  */

void FUN_10401470c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113046d18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc2bf4;
  _swift_getWitnessTable(&UNK_10dcc2bf4,&UNK_110735520);
  puRam0000000113046d18 = puVar1;
  return;
}



/* Entry: 10401474c; end: 104014763;  */

void FUN_10401474c(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_retain_11034d2d8)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
  return;
}



/* Entry: 104014764; end: 10401491f;  */

undefined4 FUN_104014764(long param_1,long param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = 0x6449616964656d;
  if ((param_1 == 0x6449616964656d && param_2 == -0x1900000000000000) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x6449616964656d,0xe700000000000000,param_1,param_2,0), (uVar1 & 1) != 0)) {
    _swift_bridgeObjectRelease(param_2);
    uVar2 = 0;
  }
  else {
    uVar1 = 0x656372756f73;
    if (((param_1 == 0x656372756f73) && (param_2 == -0x1a00000000000000)) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x656372756f73,0xe600000000000000,param_1,param_2,0), (uVar1 & 1) != 0)) {
      _swift_bridgeObjectRelease(param_2);
      uVar2 = 1;
    }
    else {
      uVar1 = 0x707954616964656d;
      if (((param_1 == 0x707954616964656d) && (param_2 == -0x16ffffffffffff9b)) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x707954616964656d,0xe900000000000065,param_1,param_2,0), (uVar1 & 1) != 0)) {
        _swift_bridgeObjectRelease(param_2);
        uVar2 = 2;
      }
      else {
        uVar1 = 0;
        if (((param_1 == -0x2fffffffffffffee) && (param_2 == -0x7ffffffef0e22580)) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0xd000000000000012,0x800000010f1dda80,param_1,param_2,0), (uVar1 & 1) != 0))
        {
          _swift_bridgeObjectRelease(param_2);
          uVar2 = 3;
        }
        else if ((param_1 == -0x2fffffffffffffef) && (param_2 == -0x7ffffffef0e22560)) {
          _swift_bridgeObjectRelease(0x800000010f1ddaa0);
          uVar2 = 4;
        }
        else {
          uVar1 = 0xd000000000000011;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0xd000000000000011,0x800000010f1ddaa0,param_1,param_2,0);
          _swift_bridgeObjectRelease(param_2);
          uVar2 = 4;
          if ((uVar1 & 1) == 0) {
            uVar2 = 5;
          }
        }
      }
    }
  }
  return uVar2;
}



/* Entry: 104014920; end: 104014bf7;  */

/* WARNING: Removing unreachable block (ram,0x000104014a58) */
/* WARNING: Removing unreachable block (ram,0x000104014a88) */
/* WARNING: Removing unreachable block (ram,0x000104014b58) */
/* WARNING: Removing unreachable block (ram,0x000104014a9c) */
/* WARNING: Removing unreachable block (ram,0x000104014ab0) */
/* WARNING: Removing unreachable block (ram,0x0001040149f0) */

void FUN_104014920(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 ****ppppuVar5;
  undefined8 ****ppppuVar6;
  long extraout_x8;
  long unaff_x21;
  long lVar7;
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [72];
  undefined8 ***pppuStack_120;
  long lStack_118;
  undefined8 ***pppuStack_110;
  undefined8 ***pppuStack_108;
  undefined8 uStack_100;
  undefined8 **ppuStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d1;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 ***pppuStack_b8;
  long lStack_b0;
  undefined8 ***pppuStack_a8;
  undefined8 ***pppuStack_a0;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined8 **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar3 = 0x113046e60;
  func_0x0001000285a8(0x113046e60,&UNK_10dcc2c58);
  lVar7 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  func_0x0001000a8868(param_2,uVar1);
  FUN_104015a14();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (auStack_170 + -extraout_x8,&UNK_1107356d8,&UNK_1107356d8,lVar4,uVar1,uVar2);
  if (unaff_x21 == 0) {
    pppuStack_120 = (undefined8 ***)((ulong)pppuStack_120 & 0xffffffffffffff00);
    ppppuVar5 = &pppuStack_120;
    lVar4 = lVar3;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    pppuStack_120._0_1_ = 1;
    ppppuVar6 = &pppuStack_120;
    pppuStack_b8 = ppppuVar5;
    lStack_b0 = lVar4;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2im_xtKF(ppppuVar6,lVar3);
    pppuStack_120 = (undefined8 ***)CONCAT71(pppuStack_120._1_7_,2);
    ppppuVar5 = &pppuStack_120;
    lVar4 = lVar3;
    pppuStack_a8 = ppppuVar6;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySiSgSim_xtKF();
    uStack_98 = (undefined1)lVar4;
    auStack_168[0] = 3;
    pppuStack_a0 = ppppuVar5;
    func_0x0001006e2f9c();
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
              (&pppuStack_120,PTR___s10Foundation4DataVN_110350ae0,auStack_168,lVar3,
               PTR___s10Foundation4DataVN_110350ae0,ppppuVar5);
    ppuStack_90 = pppuStack_120;
    uStack_88 = lStack_118;
    uStack_d1 = 4;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
              (&uStack_d0,PTR___s10Foundation4DataVN_110350ae0,&uStack_d1,lVar3,
               PTR___s10Foundation4DataVN_110350ae0,ppppuVar5);
    (**(code **)(lVar7 + 8))(auStack_170 + -extraout_x8,lVar3);
    uStack_78 = uStack_c8;
    uStack_80 = uStack_d0;
    lStack_118 = lStack_b0;
    pppuStack_120 = pppuStack_b8;
    uStack_100 = CONCAT71(uStack_97,uStack_98);
    pppuStack_108 = pppuStack_a0;
    pppuStack_110 = pppuStack_a8;
    ppuStack_f8 = ppuStack_90;
    uStack_e8 = uStack_d0;
    uStack_f0 = uStack_88;
    uStack_e0 = uStack_c8;
    FUN_104015a54(&pppuStack_120,auStack_168);
    func_0x0001000834e4(param_2);
    FUN_1040146e0(&pppuStack_b8);
    param_1[5] = ppuStack_f8;
    param_1[4] = uStack_100;
    param_1[7] = uStack_e8;
    param_1[6] = uStack_f0;
    param_1[8] = uStack_e0;
    param_1[1] = lStack_118;
    *param_1 = pppuStack_120;
    param_1[3] = pppuStack_108;
    param_1[2] = pppuStack_110;
  }
  else {
    func_0x0001000834e4(param_2);
  }
  return;
}



/* Entry: 104014bf8; end: 104015123;  */

/* WARNING: Removing unreachable block (ram,0x000104014d48) */
/* WARNING: Removing unreachable block (ram,0x000104014d78) */
/* WARNING: Removing unreachable block (ram,0x000104014f9c) */
/* WARNING: Removing unreachable block (ram,0x000104014fdc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_104014bf8(long param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long extraout_x8;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined1 auVar19 [16];
  undefined1 auStack_140 [8];
  undefined8 uStack_138;
  undefined *puStack_130;
  long lStack_128;
  undefined *puStack_120;
  ulong uStack_118;
  undefined1 *puStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar5 = 0;
  __s10Foundation11JSONEncoderC16OutputFormattingVMa();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  puStack_110 = auStack_140 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar17 = *(ulong *)(param_1 + _DAT_113046d58);
  uVar15 = uVar17 & 0xffffffffffffff8;
  lStack_128 = param_1;
  if (uVar17 >> 0x3e == 0) {
    uVar18 = *(ulong *)(uVar15 + 0x10);
  }
  else {
    uVar18 = uVar15;
    if (0x7fffffffffffffff < uVar17) {
      uVar18 = uVar17;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  puStack_120 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar18 != 0) {
    uVar16 = 0;
    do {
      if ((uVar17 & 0xc000000000000001) == 0) {
        if (*(ulong *)(uVar15 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x104014e64);
          (*pcVar3)();
        }
        uVar6 = *(ulong *)(uVar17 + uVar16 * 8 + 0x20);
        _objc_retain(uVar6);
      }
      else {
        uVar6 = uVar16;
        func_0x000101a91cb4(uVar16,uVar17);
      }
      bVar4 = SCARRY8(uVar16,1);
      uVar16 = uVar16 + 1;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x104014e60);
        (*pcVar3)();
      }
      uVar7 = 0;
      __s10Foundation11JSONEncoderCMa();
      _swift_allocObject();
      __s10Foundation11JSONEncoderCACycfc();
      puVar2 = puStack_110;
      __s10Foundation11JSONEncoderC16OutputFormattingV10sortedKeysAEvgZ(puStack_110);
      __s10Foundation11JSONEncoderC16outputFormattingAC06OutputD0VvsTj(puVar2);
      _objc_retain(uVar6);
      uVar8 = uVar6;
      FUN_104014440(&uStack_b0);
      uStack_d8 = uStack_88;
      uStack_e0 = uStack_90;
      uStack_c8 = uStack_78;
      uStack_d0 = uStack_80;
      uStack_c0 = uStack_70;
      uStack_f8 = uStack_a8;
      uStack_100 = uStack_b0;
      uStack_e8 = uStack_98;
      uStack_f0 = uStack_a0;
      FUN_1040146a0();
      puVar9 = &uStack_100;
      puVar14 = &UNK_110735520;
      __s10Foundation11JSONEncoderC6encodeyAA4DataVxKSERzlFTj(puVar9,&UNK_110735520,uVar8);
      _objc_release(uVar6);
      _swift_release(uVar7);
      FUN_1040146e0(&uStack_100);
      puVar10 = puStack_120;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((ulong)puVar10 & 1) == 0) {
        puVar10 = (undefined *)0x0;
        func_0x000100f23260(0,*(long *)(puStack_120 + 0x10) + 1,1);
        puStack_120 = puVar10;
      }
      uVar6 = *(ulong *)(puStack_120 + 0x10);
      if (*(ulong *)(puStack_120 + 0x18) >> 1 <= uVar6) {
        puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puStack_120 + 0x18));
        func_0x000100f23260(puVar10,uVar6 + 1,1,puStack_120);
        puStack_120 = puVar10;
      }
      *(ulong *)(puStack_120 + 0x10) = uVar6 + 1;
      *(undefined8 **)(puStack_120 + uVar6 * 0x10 + 0x20) = puVar9;
      *(undefined **)(puStack_120 + uVar6 * 0x10 + 0x28) = puVar14;
    } while (uVar16 != uVar18);
  }
  uVar15 = *(ulong *)(lStack_128 + _DAT_113046d60);
  if (uVar15 == 0) {
    _objc_release();
    puVar14 = (undefined *)0x0;
  }
  else {
    uVar17 = uVar15 & 0xffffffffffffff8;
    if (uVar15 >> 0x3e == 0) {
      uVar18 = *(ulong *)(uVar17 + 0x10);
    }
    else {
      uVar18 = uVar15;
      if (-1 < (long)uVar15) {
        uVar18 = uVar17;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    _swift_bridgeObjectRetain(uVar15);
    puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar18 != 0) {
      uVar16 = 0;
      uStack_118 = uVar15 & 0xc000000000000001;
      do {
        puStack_130 = puVar14;
        if (uStack_118 == 0) {
          if (*(ulong *)(uVar17 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x104015110);
            (*pcVar3)();
          }
          uVar6 = *(ulong *)(uVar15 + uVar16 * 8 + 0x20);
          _objc_retain();
        }
        else {
          uVar6 = uVar16;
          func_0x000102fc05c0(uVar16,uVar15);
        }
        bVar4 = SCARRY8(uVar16,1);
        uVar16 = uVar16 + 1;
        if (bVar4) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10401510c);
          (*pcVar3)();
        }
        uVar11 = 0;
        __s10Foundation11JSONEncoderCMa();
        _swift_allocObject();
        __s10Foundation11JSONEncoderCACycfc();
        puVar2 = puStack_110;
        __s10Foundation11JSONEncoderC16OutputFormattingV10sortedKeysAEvgZ(puStack_110);
        __s10Foundation11JSONEncoderC16outputFormattingAC06OutputD0VvsTj(puVar2);
        uStack_100 = *(undefined8 *)(uVar6 + _DAT_113046d48);
        uStack_f8 = ((undefined8 *)(uVar6 + _DAT_113046d48))[1];
        uVar7 = *(undefined8 *)(uVar6 + _DAT_113046d50);
        uVar1 = ((undefined8 *)(uVar6 + _DAT_113046d50))[1];
        uStack_f0 = uVar7;
        uStack_e8 = uVar1;
        func_0x00010006c00c();
        func_0x00010006c00c(uVar7,uVar1);
        func_0x000104015d3c();
        puVar9 = &uStack_100;
        puVar10 = &UNK_1107355b0;
        __s10Foundation11JSONEncoderC6encodeyAA4DataVxKSERzlFTj(puVar9,&UNK_1107355b0,uVar7);
        uVar7 = uStack_f0;
        uStack_138 = uStack_e8;
        func_0x00010006c090(uStack_100,uStack_f8);
        func_0x00010006c090(uVar7,uStack_138);
        _objc_release(uVar6);
        _swift_release(uVar11);
        puVar14 = puStack_130;
        puVar12 = puStack_130;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar13 = puVar14;
        if (((ulong)puVar12 & 1) == 0) {
          puVar13 = (undefined *)0x0;
          func_0x000100f23260(0,*(long *)(puVar14 + 0x10) + 1,1,puVar14);
        }
        uVar6 = *(ulong *)(puVar13 + 0x10);
        puVar14 = puVar13;
        if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar6) {
          puVar14 = (undefined *)(ulong)(1 < *(ulong *)(puVar13 + 0x18));
          func_0x000100f23260(puVar14,uVar6 + 1,1,puVar13);
        }
        *(ulong *)(puVar14 + 0x10) = uVar6 + 1;
        *(undefined8 **)(puVar14 + uVar6 * 0x10 + 0x20) = puVar9;
        *(undefined **)(puVar14 + uVar6 * 0x10 + 0x28) = puVar10;
      } while (uVar16 != uVar18);
    }
    _objc_release(lStack_128);
    _swift_bridgeObjectRelease(uVar15);
  }
  auVar19._8_8_ = puVar14;
  auVar19._0_8_ = puStack_120;
  return auVar19;
}



/* Entry: 104015124; end: 1040151a3;  */

void FUN_104015124(void)

{
  undefined *puVar1;
  
  if (puRam0000000113046d68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc2bcc;
  _swift_getWitnessTable(&UNK_10dcc2bcc,&UNK_1107354a0);
  puRam0000000113046d68 = puVar1;
  return;
}



/* Entry: 1040151a4; end: 1040151a7;  */

void FUN_1040151a4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113046d78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc2970;
  _swift_getWitnessTable(&UNK_10dcc2970,&UNK_110735378);
  puRam0000000113046d78 = puVar1;
  return;
}



/* Entry: 1040151a8; end: 1040151e7;  */

void FUN_1040151a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113046d78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc2970;
  _swift_getWitnessTable(&UNK_10dcc2970,&UNK_110735378);
  puRam0000000113046d78 = puVar1;
  return;
}



/* Entry: 1040151e8; end: 1040151eb;  */

void FUN_1040151e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113046d80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc2a10;
  _swift_getWitnessTable(&UNK_10dcc2a10,&UNK_110735428);
  puRam0000000113046d80 = puVar1;
  return;
}



/* Entry: 1040151ec; end: 10401522b;  */

void FUN_1040151ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000113046d80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc2a10;
  _swift_getWitnessTable(&UNK_10dcc2a10,&UNK_110735428);
  puRam0000000113046d80 = puVar1;
  return;
}



/* Entry: 10401522c; end: 10401523b;  */

undefined1  [16] FUN_10401522c(void)

{
  return ZEXT816(0x110735378);
}



/* Entry: 10401523c; end: 10401527b;  */

void FUN_10401523c(void)

{
  _objc_opt_self(&PTR_PTR_11297d4d0);
  return;
}



/* Entry: 10401527c; end: 10401528f;  */

void FUN_10401527c(undefined8 *param_1)

{
  if (*(char *)(param_1 + 3) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(*param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1[1],param_1[1],param_1[2]);
  return;
}



/* Entry: 104015290; end: 104015357;  */

undefined8 * FUN_104015290(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar4 = param_2[2];
  uVar3 = *(undefined1 *)(param_2 + 3);
  FUN_10401474c(uVar1,uVar2,uVar4,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar4;
  *(undefined1 *)(param_1 + 3) = uVar3;
  return param_1;
}



/* Entry: 104015358; end: 1040153a3;  */

undefined8 * FUN_104015358(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar6 = param_2[2];
  uVar3 = *(undefined1 *)(param_2 + 3);
  uVar5 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar7 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[2] = uVar6;
  uVar4 = *(undefined1 *)(param_1 + 3);
  *(undefined1 *)(param_1 + 3) = uVar3;
  func_0x000101a9295c(uVar5,uVar1,uVar2,uVar4);
  return param_1;
}



/* Entry: 1040153a4; end: 104015467;  */

int FUN_1040153a4(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 0x19) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = *(byte *)(param_1 + 6) ^ 0xff;
  if (*(byte *)(param_1 + 6) < 2) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 104015468; end: 1040154c7;  */

void FUN_104015468(void)

{
  _objc_opt_self(&PTR_PTR_11297d670);
  return;
}



/* Entry: 1040154c8; end: 104015523;  */

void FUN_1040154c8(undefined8 *param_1)

{
  _swift_bridgeObjectRelease(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1[1]);
  return;
}



/* Entry: 104015524; end: 10401557f;  */

undefined8 * FUN_104015524(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 104015580; end: 1040155bb;  */

undefined8 * FUN_104015580(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _swift_bridgeObjectRelease(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 1040155bc; end: 10401564f;  */

int FUN_1040155bc(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 104015650; end: 1040156ab;  */

/* WARNING: Possible PIC construction at 0x00010401567c: Changing call to branch */

void FUN_104015650(long param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint uVar4;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  uVar3 = *(ulong *)(param_1 + 0x30);
  if (uVar3 >> 0x3c < 0xf) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    unaff_x30 = 0x104015680;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    unaff_x19 = param_1;
    unaff_x29 = puVar1;
  }
  else {
    uVar3 = *(ulong *)(param_1 + 0x40);
    if (0xe < uVar3 >> 0x3c) {
      return;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x38);
  }
  uVar4 = (uint)(uVar3 >> 0x3e);
  if (uVar4 != 1) {
    if (uVar4 != 2) {
      return;
    }
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    func_0x000107c61574(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar3 & 0x3fffffffffffffff);
  return;
}



/* Entry: 1040156ac; end: 10401589f;  */

undefined8 * FUN_1040156ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar2 = param_2[6];
  _swift_bridgeObjectRetain();
  if (uVar2 >> 0x3c < 0xf) {
    uVar1 = param_2[5];
    func_0x00010006c00c(uVar1,uVar2);
    param_1[5] = uVar1;
    param_1[6] = uVar2;
  }
  else {
    uVar1 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar1;
  }
  uVar2 = param_2[8];
  if (uVar2 >> 0x3c < 0xf) {
    uVar1 = param_2[7];
    func_0x00010006c00c(uVar1,uVar2);
    param_1[7] = uVar1;
    param_1[8] = uVar2;
  }
  else {
    uVar1 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = uVar1;
  }
  return param_1;
}



/* Entry: 1040158a0; end: 10401596b;  */

undefined8 * FUN_1040158a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  if ((ulong)param_1[6] >> 0x3c < 0xf) {
    uVar3 = param_2[6];
    if (uVar3 >> 0x3c < 0xf) {
      uVar2 = param_1[5];
      param_1[5] = param_2[5];
      param_1[6] = uVar3;
      func_0x00010006c090(uVar2);
      goto LAB_104015918;
    }
    func_0x0001006e5814(param_1 + 5);
  }
  uVar2 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar2;
LAB_104015918:
  if ((ulong)param_1[8] >> 0x3c < 0xf) {
    uVar3 = param_2[8];
    if (uVar3 >> 0x3c < 0xf) {
      uVar2 = param_1[7];
      param_1[7] = param_2[7];
      param_1[8] = uVar3;
      func_0x00010006c090(uVar2);
      return param_1;
    }
    func_0x0001006e5814(param_1 + 7);
  }
  uVar2 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar2;
  return param_1;
}



/* Entry: 10401596c; end: 104015a13;  */

int FUN_10401596c(int *param_1,int param_2)

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



/* Entry: 104015a14; end: 104015a53;  */

void FUN_104015a14(void)

{
  undefined *puVar1;
  
  if (puRam0000000113046e58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc2ebc;
  _swift_getWitnessTable(&UNK_10dcc2ebc,&UNK_1107356d8);
  puRam0000000113046e58 = puVar1;
  return;
}



/* Entry: 104015a54; end: 104015a87;  */

undefined8 FUN_104015a54(undefined8 param_1,undefined8 param_2)

{
  FUN_1040156ac(param_2,param_1,&UNK_110735520);
  return param_2;
}



/* Entry: 104015a88; end: 104015ac7;  */

void FUN_104015a88(void)

{
  undefined *puVar1;
  
  if (puRam0000000113046e70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc2e6c;
  _swift_getWitnessTable(&UNK_10dcc2e6c,&UNK_110735648);
  puRam0000000113046e70 = puVar1;
  return;
}



/* Entry: 104015ac8; end: 104015c8b;  */

/* WARNING: Removing unreachable block (ram,0x000104015c68) */
/* WARNING: Removing unreachable block (ram,0x000104015bdc) */

undefined1  [16] FUN_104015ac8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long extraout_x8;
  long unaff_x21;
  long lVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined1 auStack_70 [15];
  undefined1 uStack_61;
  long lStack_58;
  
  lVar1 = 0x113046e80;
  func_0x0001000285a8(0x113046e80,&UNK_10dcc2c70);
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = *(long *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  lVar2 = param_1;
  func_0x0001000a8868(param_1,lVar6);
  lVar3 = lVar2;
  FUN_104015a88();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (auStack_70 + -extraout_x8,&UNK_110735648,&UNK_110735648,lVar3,lVar6,uVar4);
  if (unaff_x21 == 0) {
    uVar4 = 0x112dc6598;
    func_0x0001000285a8(0x112dc6598,&UNK_10d9bc300);
    uStack_61 = 0;
    uVar5 = 0x113046e88;
    FUN_104015c8c(0x113046e88,&SUB_1006e2f9c,PTR___sSayxGSesSeRzlMc_11034dd10);
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&lStack_58,uVar4,&uStack_61,lVar1,uVar4,uVar5);
    lVar6 = lStack_58;
    uStack_61 = 1;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
              (&lStack_58,uVar4,&uStack_61,lVar1,uVar4,uVar5);
    (**(code **)(lVar7 + 8))(auStack_70 + -extraout_x8,lVar1);
    func_0x0001000834e4(param_1);
  }
  else {
    func_0x0001000834e4(param_1);
    lStack_58 = lVar2;
  }
  auVar8._8_8_ = lStack_58;
  auVar8._0_8_ = lVar6;
  return auVar8;
}



/* Entry: 104015c8c; end: 104015cfb;  */

void FUN_104015c8c(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  if (*param_1 == 0) {
    uVar1 = 0x112dc6598;
    func_0x00010002969c(0x112dc6598,&UNK_10d9bc300);
    uVar2 = uVar1;
    (*param_2)();
    uStack_38 = uVar2;
    _swift_getWitnessTable(param_3,uVar1,&uStack_38);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 104015cfc; end: 104015d7b;  */

void FUN_104015cfc(void)

{
  undefined *puVar1;
  
  if (puRam0000000113046e90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc2e44;
  _swift_getWitnessTable(&UNK_10dcc2e44,&UNK_1107355b0);
  puRam0000000113046e90 = puVar1;
  return;
}



/* Entry: 104015d7c; end: 104015de7;  */

void FUN_104015d7c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 104015de8; end: 104015e9f;  */

undefined8 * FUN_104015de8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x00010006c00c(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  func_0x00010006c00c(uVar1,uVar2);
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  return param_1;
}



/* Entry: 104015ea0; end: 104015ee7;  */

undefined8 * FUN_104015ea0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  uVar3 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 104015ee8; end: 104016107;  */

int FUN_104015ee8(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[8] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 104016108; end: 104016147;  */

void FUN_104016108(void)

{
  undefined *puVar1;
  
  if (puRam0000000113046ea0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc2d3c;
  _swift_getWitnessTable(&UNK_10dcc2d3c,&UNK_1107356d8);
  puRam0000000113046ea0 = puVar1;
  return;
}



/* Entry: 104016148; end: 10401614b;  */

void FUN_104016148(void)

{
  undefined *puVar1;
  
  if (puRam0000000113046ea8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc2df4;
  _swift_getWitnessTable(&UNK_10dcc2df4,&UNK_110735648);
  puRam0000000113046ea8 = puVar1;
  return;
}



/* Entry: 10401614c; end: 10401618b;  */

void FUN_10401614c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113046ea8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc2df4;
  _swift_getWitnessTable(&UNK_10dcc2df4,&UNK_110735648);
  puRam0000000113046ea8 = puVar1;
  return;
}



/* Entry: 10401618c; end: 10401618f;  */

void FUN_10401618c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113046eb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc2d8c;
  _swift_getWitnessTable(&UNK_10dcc2d8c,&UNK_110735648);
  puRam0000000113046eb0 = puVar1;
  return;
}



/* Entry: 104016190; end: 1040161cf;  */

void FUN_104016190(void)

{
  undefined *puVar1;
  
  if (puRam0000000113046eb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc2d8c;
  _swift_getWitnessTable(&UNK_10dcc2d8c,&UNK_110735648);
  puRam0000000113046eb0 = puVar1;
  return;
}



/* Entry: 1040161d0; end: 1040161d3;  */

void FUN_1040161d0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113046eb8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc2d64;
  _swift_getWitnessTable(&UNK_10dcc2d64,&UNK_110735648);
  puRam0000000113046eb8 = puVar1;
  return;
}



/* Entry: 1040161d4; end: 104016213;  */

void FUN_1040161d4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113046eb8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc2d64;
  _swift_getWitnessTable(&UNK_10dcc2d64,&UNK_110735648);
  puRam0000000113046eb8 = puVar1;
  return;
}



/* Entry: 104016214; end: 104016217;  */

void FUN_104016214(void)

{
  undefined *puVar1;
  
  if (puRam0000000113046ec0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc2cd4;
  _swift_getWitnessTable(&UNK_10dcc2cd4,&UNK_1107356d8);
  puRam0000000113046ec0 = puVar1;
  return;
}



/* Entry: 104016218; end: 104016257;  */

void FUN_104016218(void)

{
  undefined *puVar1;
  
  if (puRam0000000113046ec0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc2cd4;
  _swift_getWitnessTable(&UNK_10dcc2cd4,&UNK_1107356d8);
  puRam0000000113046ec0 = puVar1;
  return;
}



/* Entry: 104016258; end: 10401625b;  */

void FUN_104016258(void)

{
  undefined *puVar1;
  
  if (puRam0000000113046ec8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc2cac;
  _swift_getWitnessTable(&UNK_10dcc2cac,&UNK_1107356d8);
  puRam0000000113046ec8 = puVar1;
  return;
}



/* Entry: 10401625c; end: 10401629b;  */

void FUN_10401625c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113046ec8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc2cac;
  _swift_getWitnessTable(&UNK_10dcc2cac,&UNK_1107356d8);
  puRam0000000113046ec8 = puVar1;
  return;
}



/* Entry: 10401629c; end: 104016473;  */

/* WARNING: Removing unreachable block (ram,0x00010401641c) */
/* WARNING: Removing unreachable block (ram,0x000104016384) */

undefined8 FUN_10401629c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long extraout_x8;
  long unaff_x21;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_51;
  
  lVar2 = 0x113046ed0;
  func_0x0001000285a8(0x113046ed0,&UNK_10dcc2f10);
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar3 = param_1;
  func_0x0001000a8868(param_1,uVar5);
  FUN_104016474();
  puVar4 = &UNK_110735768;
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            ((long)&uStack_70 - extraout_x8,&UNK_110735768,&UNK_110735768,lVar3,uVar5,uVar1);
  if (unaff_x21 == 0) {
    uStack_51 = 0;
    func_0x0001006e2f9c();
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&uStack_70,PTR___s10Foundation4DataVN_110350ae0,&uStack_51,lVar2,
               PTR___s10Foundation4DataVN_110350ae0,puVar4);
    uVar1 = uStack_68;
    uVar5 = uStack_70;
    uStack_51 = 1;
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&uStack_70,PTR___s10Foundation4DataVN_110350ae0,&uStack_51,lVar2,
               PTR___s10Foundation4DataVN_110350ae0,puVar4);
    (**(code **)(lVar6 + 8))((long)&uStack_70 - extraout_x8,lVar2);
    func_0x00010006c00c(uVar5,uVar1);
    func_0x00010006c00c(uStack_70,uStack_68);
    func_0x0001000834e4(param_1);
    func_0x00010006c090(uVar5,uVar1);
    func_0x00010006c090(uStack_70,uStack_68);
  }
  else {
    func_0x0001000834e4(param_1);
  }
  return uVar5;
}



/* Entry: 104016474; end: 1040164b3;  */

void FUN_104016474(void)

{
  undefined *puVar1;
  
  if (puRam0000000113046ed8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc2fd8;
  _swift_getWitnessTable(&UNK_10dcc2fd8,&UNK_110735768);
  puRam0000000113046ed8 = puVar1;
  return;
}



/* Entry: 1040164b4; end: 10401660b;  */

int FUN_1040164b4(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_104016530;
        goto LAB_104016514;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_104016514:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_104016530:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10401660c; end: 10401664b;  */

void FUN_10401660c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113046ee8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc2fb0;
  _swift_getWitnessTable(&UNK_10dcc2fb0,&UNK_110735768);
  puRam0000000113046ee8 = puVar1;
  return;
}



/* Entry: 10401664c; end: 10401664f;  */

void FUN_10401664c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113046ef0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc2f48;
  _swift_getWitnessTable(&UNK_10dcc2f48,&UNK_110735768);
  puRam0000000113046ef0 = puVar1;
  return;
}



/* Entry: 104016650; end: 10401668f;  */

void FUN_104016650(void)

{
  undefined *puVar1;
  
  if (puRam0000000113046ef0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc2f48;
  _swift_getWitnessTable(&UNK_10dcc2f48,&UNK_110735768);
  puRam0000000113046ef0 = puVar1;
  return;
}



/* Entry: 104016690; end: 104016693;  */

void FUN_104016690(void)

{
  undefined *puVar1;
  
  if (puRam0000000113046ef8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc2f20;
  _swift_getWitnessTable(&UNK_10dcc2f20,&UNK_110735768);
  puRam0000000113046ef8 = puVar1;
  return;
}



/* Entry: 104016694; end: 1040166d3;  */

void FUN_104016694(void)

{
  undefined *puVar1;
  
  if (puRam0000000113046ef8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc2f20;
  _swift_getWitnessTable(&UNK_10dcc2f20,&UNK_110735768);
  puRam0000000113046ef8 = puVar1;
  return;
}



/* Entry: 1040166d4; end: 10401677f;  */

undefined1 FUN_1040166d4(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 104016780; end: 104016807;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104016780(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  _objc_allocWithZone();
  lVar2 = unaff_x20;
  func_0x000100a7aac0();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_113046f00) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_113046f08) = param_2;
    _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
    _objc_release(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104016808);
  (*pcVar1)();
}



/* Entry: 104016808; end: 104016867; -[_TtC34SharingUserSessionScopeGraphBridge49SharingUserSessionScopeGraphBridgeSaberEntryPoint init] */

void FUN_104016808(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SharingUserSessionScopeGraphBridge.SharingUserSessionScopeGraphBridgeSaberEntryPoint",
             0x54,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104016834);
  (*pcVar1)();
}



/* Entry: 104016868; end: 10401689f; -[_TtC34SharingUserSessionScopeGraphBridge49SharingUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104016868(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113046f00));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113046f08));
  return;
}



/* Entry: 1040168a0; end: 1040168c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040168a0(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_113046f08),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_113046f00));
  return;
}


